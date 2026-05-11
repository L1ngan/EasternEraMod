"""Scan UE headers for Blueprint-visible API and emit detailed Markdown for mod authors."""
from __future__ import annotations

import os
import re
import shutil
import sys
from collections import defaultdict
from pathlib import Path

# UE 反射类型名（与生成文档中的 UCLASS/USTRUCT 名称对应），用于交叉链接
UE_DOC_TYPE_RE = re.compile(r"\b(F[A-Z]\w*|U[A-Z]\w*|A[A-Z]\w*|E[A-Z]\w*)\b")

LOCALES: dict[str, dict[str, str]] = {
    "zh": {
        "spec_fallback": "（仅蓝图可见相关标记）",
        "hints_fn_pure": "在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。",
        "hints_fn_callable": "在蓝图中为**可调用函数节点**（含执行引脚）。",
        "hints_fn_impl": "事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。",
        "hints_fn_native": "**BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。",
        "hints_fn_display": "节点显示名可能为「{display}」。",
        "hints_fn_default": "详见蓝图编辑器中该节点的引脚与分类。",
        "hints_prop_delegate": "**多播委托**：可在蓝图中 **Bind / Add** 绑定事件。",
        "hints_prop_rw": "蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。",
        "hints_prop_ro": "蓝图 **只读**，不可直接赋值。",
        "hints_prop_save": "参与 **SaveGame** 序列化的字段。",
        "hints_prop_default": "变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。",
        "typ_see_source": "（见源码）",
        "ret_complex": "（复杂返回类型）",
        "sig_see_source": "（见源码签名）",
        "parse_fail": "（无法解析）",
        "tbl_item": "项目",
        "tbl_content": "内容",
        "cpp_type": "C++ 类型",
        "reflect_spec": "反射说明符",
        "bp_meaning": "蓝图侧含义",
        "orig_decl": "原始声明（单行节选）",
        "ret_type": "返回类型",
        "params": "参数",
        "params_see_tbl": "见下表",
        "param_name": "参数名",
        "param_typ": "类型",
        "params_none": "（无）",
        "anon": "（匿名/仅类型）",
        "usage": "用法说明",
        "prop_word": "属性",
        "func_word": "函数",
        "emit_src_header": "源码头文件",
        "emit_section_desc": "功能说明（来自头文件注释）",
        "emit_no_comment": "*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*",
        "emit_section_props": "蓝图暴露变量",
        "emit_section_funcs": "蓝图暴露函数",
        "emit_src_notes": "源码注释",
        "idx_title": "# 蓝图 API 类型索引（模组作者）",
        "idx_intro": "以下为 **每个 UCLASS / USTRUCT** 的独立文档入口（仅含蓝图暴露的成员）。",
        "idx_types": "**类型数量：**",
        "idx_headers": "**头文件数量：**",
        "idx_desc_block": "**功能说明：** 每条索引下的 **功能说明** 摘自该类型在头文件中 **`UCLASS` / `USTRUCT` 声明紧上方** 的 `//` 或块注释（概括该类/结构体**做什么、负责哪块逻辑**；自动压成一行并截断）。若工程未写类型级注释，则显示占位提示；更完整的说明仍以对应 `.h` 与单页 `.md` 为准。",
        "idx_usage_h2": "## 使用说明",
        "idx_coverage": "- **覆盖范围**：`Source/EastRimWorld`、`Plugins/CreateModPlugin`、`CreateModPluginEditor`。",
        "idx_paths": "- **路径**：文档路径与源码模块目录对应，文件名 `{头文件名}__{类型名}.md`。",
        "idx_cross": "- **关联跳转**：属性「C++ 类型」与函数「返回类型 / 参数类型」中出现的 `F*` / `U*` / `A*` / `E*` 名称若在本文档集中有对应页面，会自动变为 **Markdown 相对链接**（可点击跳转至该类型文档）。",
        "idx_params": "- **参数拆分**：复杂模板可能被简化；**最权威签名以对应 `.h` 为准**。",
        "idx_update": "- **更新**：`python Tools/extract_blueprint_api.py`（会清空并重建 `BlueprintAPI_ModAuthors/zh/` 与 `BlueprintAPI_ModAuthors/en/`）",
        "idx_summary_label": "**功能说明：**",
        "summarize_empty": "（头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）",
    },
    "en": {
        "spec_fallback": "(Blueprint visibility-related specifiers only)",
        "hints_fn_pure": "Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.",
        "hints_fn_callable": "Appears as a **callable** Blueprint function node (with exec pins).",
        "hints_fn_impl": "Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.",
        "hints_fn_native": "**BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.",
        "hints_fn_display": 'Node display title may be "{display}".',
        "hints_fn_default": "See pins and category for this node in the Blueprint editor.",
        "hints_prop_delegate": "**Multicast delegate**: bind in Blueprint with **Bind / Add**.",
        "hints_prop_rw": "Readable and writable in Blueprint (still subject to Edit* specifiers in the editor).",
        "hints_prop_ro": "**Read-only** in Blueprint; cannot assign directly.",
        "hints_prop_save": "Field participates in **SaveGame** serialization.",
        "hints_prop_default": "Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers.",
        "typ_see_source": "(see source)",
        "ret_complex": "(complex return type)",
        "sig_see_source": "(see source signature)",
        "parse_fail": "(parse failed)",
        "tbl_item": "Field",
        "tbl_content": "Details",
        "cpp_type": "C++ type",
        "reflect_spec": "Reflection specifiers",
        "bp_meaning": "Blueprint semantics",
        "orig_decl": "Original declaration (excerpt)",
        "ret_type": "Return type",
        "params": "Parameters",
        "params_see_tbl": "see table below",
        "param_name": "Name",
        "param_typ": "Type",
        "params_none": "(none)",
        "anon": "(unnamed / type only)",
        "usage": "Usage",
        "prop_word": "Property",
        "func_word": "Function",
        "emit_src_header": "Source header",
        "emit_section_desc": "Functional description (from header comments)",
        "emit_no_comment": "*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*",
        "emit_section_props": "Blueprint-exposed variables",
        "emit_section_funcs": "Blueprint-exposed functions",
        "emit_src_notes": "Source comments",
        "idx_title": "# Blueprint API Type Index (Mod Authors)",
        "idx_intro": "One page per **UCLASS / USTRUCT** with Blueprint-exposed members only.",
        "idx_types": "**Types:**",
        "idx_headers": "**Headers:**",
        "idx_desc_block": "**Description:** Each entry summarizes comments **immediately above** the type’s **`UCLASS` / `USTRUCT`** (`//` or block; what it does and which area it covers; flattened to one line and truncated). If there is no comment, a placeholder is shown; authoritative detail is still in the `.h` and per-type `.md`.",
        "idx_usage_h2": "## Usage",
        "idx_coverage": "- **Scope:** `Source/EastRimWorld`, `Plugins/CreateModPlugin`, `CreateModPluginEditor`.",
        "idx_paths": "- **Layout:** Paths mirror module folders; files are `{HeaderStem}__{TypeName}.md`.",
        "idx_cross": "- **Cross-links:** `F*` / `U*` / `A*` / `E*` tokens in property types and function signatures become **Markdown relative links** when a matching page exists in this bundle.",
        "idx_params": "- **Signatures:** Template-heavy parameters may be simplified; **trust the `.h`** as source of truth.",
        "idx_update": "- **Regenerate:** `python Tools/extract_blueprint_api.py` (rebuilds `BlueprintAPI_ModAuthors/zh/` and `BlueprintAPI_ModAuthors/en/`).",
        "idx_summary_label": "**Description:**",
        "summarize_empty": "(No type-level comment above `UCLASS`/`USTRUCT`; open the type page or source.)",
    },
}


def _L(lang: str) -> dict[str, str]:
    return LOCALES[lang]


def strip_line_comment(line: str) -> str:
    if "//" in line:
        return line.split("//", 1)[0].rstrip()
    return line.rstrip()


def _is_decorative_block_comment(block_first_line: str) -> bool:
    """Skip `/***** Section *****/` style separators (not API documentation)."""
    s = block_first_line.strip()
    if not s.startswith("/*"):
        return False
    # Real Doxygen: `/**` then space/text — NOT another run of stars like `/******** Team ****/`
    if s.startswith("/**") and not re.match(r"/\*\*\*+", s):
        return False
    # `/******** foo ********/` — mostly asterisks
    inner = s.lstrip("/").rstrip("*/").strip("*").strip()
    if len(inner) < 3:
        return True
    if set(inner) <= {"*", "/", " "}:
        return True
    star_ratio = sum(1 for c in s if c == "*") / max(len(s), 1)
    return star_ratio > 0.35 and len(inner) < 48


def extract_doc_above(lines: list[str], idx: int) -> str:
    """Comment lines immediately above member at idx (// or /** */ block)."""
    i = idx - 1
    while i >= 0 and lines[i].strip() == "":
        i -= 1
    if i < 0:
        return ""

    raw_top = lines[i].strip()

    # Block comment ending on line i (avoid treating `/***** Team *****/` as docs)
    if "*/" in raw_top:
        block: list[str] = []
        j = i
        while j >= 0:
            raw = lines[j]
            block.insert(0, raw)
            if "/*" in raw:
                break
            j -= 1
        if _is_decorative_block_comment(block[0]):
            return ""
        text = "\n".join(block)
        text = re.sub(r"/\*+\s*", "", text, count=1)
        text = re.sub(r"\s*\*/", "", text)
        text = re.sub(r"^\s*\*\s?", "", text, flags=re.MULTILINE)
        return text.strip()

    doc_lines: list[str] = []
    while i >= 0:
        s = lines[i].strip()
        if s.startswith("//"):
            frag = s[2:].strip().rstrip("/").strip()
            doc_lines.insert(0, frag)
            i -= 1
            continue
        if s == "":
            break
        break
    return "\n".join(doc_lines).strip()


def extract_type_doc_above(lines: list[str], umarker_idx: int) -> str:
    """Doc above UCLASS/USTRUCT line."""
    return extract_doc_above(lines, umarker_idx)


def split_macro_args(text: str, macro: str) -> tuple[str, str] | None:
    if not text.startswith(macro + "("):
        return None
    depth = 0
    start = len(macro) + 1
    for i in range(start, len(text)):
        c = text[i]
        if c == "(":
            depth += 1
        elif c == ")":
            if depth == 0:
                return text[start:i], text[i + 1 :].strip()
            depth -= 1
    return None


def _consume_declaration_after_macro(
    lines: list[str], start_j: int, *, track_inline_body: bool
) -> tuple[list[str], int]:
    block_lines: list[str] = []
    j = start_j
    n = len(lines)
    brace_depth = 0
    started = False
    while j < n:
        nl = strip_line_comment(lines[j])
        block_lines.append(nl.rstrip())
        if track_inline_body:
            for ch in nl:
                if ch == "{":
                    brace_depth += 1
                    started = True
                elif ch == "}":
                    brace_depth -= 1
            if started and brace_depth <= 0:
                return block_lines, j
        if not started and ";" in nl:
            return block_lines, j
        if track_inline_body and started and brace_depth > 0:
            j += 1
            continue
        j += 1
    return block_lines, j - 1


def blueprint_spec_summary(macro_args: str, lang: str) -> str:
    L = _L(lang)
    parts: list[str] = []
    if re.search(r"\bBlueprintCallable\b", macro_args):
        parts.append("BlueprintCallable")
    if re.search(r"\bBlueprintPure\b", macro_args):
        parts.append("BlueprintPure")
    if re.search(r"\bBlueprintImplementableEvent\b", macro_args):
        parts.append("BlueprintImplementableEvent")
    if re.search(r"\bBlueprintNativeEvent\b", macro_args):
        parts.append("BlueprintNativeEvent")
    if re.search(r"\bBlueprintReadOnly\b", macro_args):
        parts.append("BlueprintReadOnly")
    if re.search(r"\bBlueprintReadWrite\b", macro_args):
        parts.append("BlueprintReadWrite")
    if re.search(r"\bBlueprintAssignable\b", macro_args):
        parts.append("BlueprintAssignable")
    if re.search(r"AllowPrivateAccess", macro_args):
        parts.append("AllowPrivateAccess")
    cat = re.search(r"Category\s*=\s*\"([^\"]+)\"", macro_args)
    if cat:
        parts.append(f'Category="{cat.group(1)}"')
    return ", ".join(parts) if parts else L["spec_fallback"]


def usage_hints_function(macro_args: str, lang: str) -> str:
    L = _L(lang)
    hints: list[str] = []
    if "BlueprintPure" in macro_args:
        hints.append(L["hints_fn_pure"])
    elif "BlueprintCallable" in macro_args:
        hints.append(L["hints_fn_callable"])
    if "BlueprintImplementableEvent" in macro_args:
        hints.append(L["hints_fn_impl"])
    if "BlueprintNativeEvent" in macro_args:
        hints.append(L["hints_fn_native"])
    if "meta" in macro_args and "DisplayName" in macro_args:
        dn = re.search(r'DisplayName\s*=\s*\"([^\"]+)\"', macro_args)
        if dn:
            hints.append(L["hints_fn_display"].format(display=dn.group(1)))
    if not hints:
        hints.append(L["hints_fn_default"])
    return " ".join(hints)


def usage_hints_property(macro_args: str, lang: str) -> str:
    L = _L(lang)
    hints: list[str] = []
    if "BlueprintAssignable" in macro_args:
        hints.append(L["hints_prop_delegate"])
    elif "BlueprintReadWrite" in macro_args:
        hints.append(L["hints_prop_rw"])
    elif "BlueprintReadOnly" in macro_args:
        hints.append(L["hints_prop_ro"])
    if "SaveGame" in macro_args:
        hints.append(L["hints_prop_save"])
    if not hints:
        hints.append(L["hints_prop_default"])
    return " ".join(hints)


def parse_property_decl(decl_after_macro: str, lang: str) -> tuple[str, str]:
    """Return (cpp_type_guess, var_name)."""
    L = _L(lang)
    decl = decl_after_macro.strip()
    decl = re.sub(r"\s+", " ", decl)
    # strip trailing initializer and semicolon
    decl = decl.split(";")[0].strip()
    # remove inline brace init
    if "{" in decl:
        decl = decl[: decl.index("{")].strip()
    if "=" in decl:
        decl = decl[: decl.rfind("=")].strip()

    m = re.search(r"\b(\w+)\s*$", decl)
    if not m:
        return decl, "?"
    name = m.group(1)
    typ = decl[: m.start()].strip()
    return typ or L["typ_see_source"], name


def parse_function_decl(decl_after_macro: str, lang: str) -> tuple[str, str, str]:
    """Return (return_type, func_name, params_inner)."""
    L = _L(lang)
    decl = decl_after_macro.strip()
    decl = re.sub(r"\s+", " ", decl)
    # drop inline body
    if "{" in decl:
        decl = decl[: decl.index("{")].strip()
    decl = decl.rstrip(";").strip()

    decl = re.sub(
        r"\b(?:virtual|static|inline|constexpr|explicit|UFUNCTION|UPROPERTY)\b\s*", "", decl
    )
    decl = re.sub(r"\boverride\b\s*", "", decl)
    decl = re.sub(r"\bfinal\b\s*", "", decl)
    decl = re.sub(r"\s+const\s*$", "", decl)

    m = re.match(r"^(.+?)\s+(\w+)\s*\(\s*(.*)\s*\)\s*$", decl)
    if not m:
        return L["ret_complex"], L["sig_see_source"], decl_after_macro.strip()[:200]

    ret, fname, params = m.group(1).strip(), m.group(2).strip(), m.group(3).strip()
    return ret or "void", fname, params


def trunc_one_line(s: str, max_len: int = 520) -> str:
    s = re.sub(r"\s+", " ", s).strip()
    return s if len(s) <= max_len else s[: max_len - 3] + "..."


def escape_md_inline_light(s: str) -> str:
    """Reduce risk of breaking Markdown list items when pasting header comments."""
    return s.replace("`", "'").replace("|", "｜").strip()


def summarize_type_doc_for_index(doc: str, lang: str, max_len: int = 360) -> str:
    """Single-line summary for INDEX.md (from comment above UCLASS/USTRUCT)."""
    L = _L(lang)
    if not doc or not doc.strip():
        return L["summarize_empty"]
    one = " ".join(line.strip() for line in doc.splitlines() if line.strip())
    one = re.sub(r"\s+", " ", one).strip()
    one = escape_md_inline_light(one)
    return trunc_one_line(one, max_len)


def build_type_doc_index(by_file: dict) -> dict[str, str]:
    """Map reflected type name (e.g. FBreakThroughInfo) -> md path posix relative to api_root."""
    buckets: dict[str, list[str]] = defaultdict(list)
    for rel in by_file:
        hp = Path(rel)
        stem = hp.stem
        parent = hp.parent
        for _kind, cls_name, _tdoc, _mems in by_file[rel]:
            fname = f"{stem}__{cls_name}.md"
            md_rel = (parent / fname).as_posix()
            buckets[cls_name].append(md_rel)

    resolved: dict[str, str] = {}
    for name, paths in buckets.items():
        unique = sorted(set(paths))
        resolved[name] = unique[0]
        if len(unique) > 1:
            print(
                f"[extract_blueprint_api] duplicate generated type name '{name}' -> using {unique[0]!r}, also: {unique[1:]!r}",
                file=sys.stderr,
            )
    return resolved


def markdown_rel_link(from_md_file: Path, target_md_rel_posix: str, api_root: Path) -> str:
    """Relative href from one generated .md file to another under api_root."""
    src_dir = from_md_file.parent
    tgt = api_root / target_md_rel_posix
    return Path(os.path.relpath(tgt, src_dir)).as_posix()


def linkify_ue_types(
    text: str,
    type_index: dict[str, str],
    from_md_file: Path,
    api_root: Path,
) -> str:
    """Turn FFoo / UBar substrings into [FFoo](relative.md) when a generated doc exists."""
    if not text or not type_index:
        return text
    out: list[str] = []
    last = 0
    for m in UE_DOC_TYPE_RE.finditer(text):
        out.append(text[last : m.start()])
        tok = m.group(1)
        dest = type_index.get(tok)
        if dest:
            href = markdown_rel_link(from_md_file, dest, api_root)
            out.append(f"[{tok}]({href})")
        else:
            out.append(tok)
        last = m.end()
    out.append(text[last:])
    return "".join(out)


def format_type_cell_markdown(
    text: str,
    type_index: dict[str, str],
    from_md_file: Path,
    api_root: Path,
) -> str:
    """Table cell for C++ type: link known UE types; wrap plain text in backticks."""
    linked = linkify_ue_types(text, type_index, from_md_file, api_root)
    if "[" in linked:
        return linked
    return f"`{linked}`"


def split_params(params_inner: str) -> list[tuple[str, str]]:
    """Rough split on commas (not template-aware). Good enough for docs."""
    if not params_inner.strip():
        return []
    parts: list[str] = []
    depth = 0
    cur = []
    for ch in params_inner:
        if ch == "<":
            depth += 1
        elif ch == ">":
            depth -= 1
        elif ch == "," and depth == 0:
            parts.append("".join(cur).strip())
            cur = []
            continue
        cur.append(ch)
    parts.append("".join(cur).strip())
    result = []
    for p in parts:
        if not p:
            continue
        pm = re.match(r"^(.+?)\s+(\w+)\s*$", p) or re.match(r"^(.+)\s+(\w+)$", p)
        if pm:
            result.append((pm.group(1).strip(), pm.group(2).strip()))
        else:
            result.append((p, ""))
    return result


def extract_blueprint_members(
    lines: list[str], global_base: int
) -> list[tuple[str, str, int, str]]:
    """List of (kind, full_text, global_line_index, doc). kind is PROP or FUNC."""
    members: list[tuple[str, str, int, str]] = []
    i = 0
    n = len(lines)
    while i < n:
        raw_line = lines[i]
        line = strip_line_comment(raw_line)
        s = line.strip()
        if not (s.startswith("UPROPERTY(") or s.startswith("UFUNCTION(")):
            i += 1
            continue
        gidx = global_base + i
        doc = extract_doc_above(lines, i)
        macro_kind = "FUNC" if s.startswith("UFUNCTION(") else "PROP"
        block_lines = [line.rstrip()]
        paren = line.count("(") - line.count(")")
        j = i + 1
        while paren > 0 and j < n:
            nl = strip_line_comment(lines[j])
            block_lines.append(nl.rstrip())
            paren += nl.count("(") - nl.count(")")
            j += 1
        decl_lines, j_end = _consume_declaration_after_macro(
            lines, j, track_inline_body=(macro_kind == "FUNC")
        )
        block_lines.extend(decl_lines)
        full = " ".join(x.strip() for x in block_lines if x.strip())
        if "Blueprint" in full or "AllowPrivateAccess" in full:
            members.append((macro_kind, full, gidx, doc))
        i = j_end + 1
    return members


def extract_uclasses_with_docs(
    lines: list[str],
) -> list[tuple[str, str, str, list[tuple[str, str, int, str]]]]:
    """(kind, type_name, type_doc, members)."""
    results: list[tuple[str, str, str, list[tuple[str, str, int, str]]]] = []
    i = 0
    n = len(lines)
    while i < n:
        s = strip_line_comment(lines[i]).strip()
        if not (s.startswith("UCLASS(") or s.startswith("USTRUCT(")):
            i += 1
            continue
        u_idx = i
        kind = "struct" if s.startswith("USTRUCT(") else "class"
        type_doc = extract_type_doc_above(lines, u_idx)

        paren = s.count("(") - s.count(")")
        j = i + 1
        while paren > 0 and j < n:
            ss = strip_line_comment(lines[j]).strip()
            paren += ss.count("(") - ss.count(")")
            j += 1

        cls_name = None
        decl_j = None
        while j < n:
            ss = strip_line_comment(lines[j]).strip()
            if ss.startswith("class ") or ss.startswith("struct "):
                m = re.match(r"(class|struct)\s+(?:\w+_API\s+)?(\w+)", ss)
                if m:
                    cls_name = m.group(2)
                    decl_j = j
                    break
            if ss.startswith("enum ") or ss.startswith("enum class"):
                break
            j += 1
        if not cls_name or decl_j is None:
            i += 1
            continue

        open_brace = None
        for k in range(decl_j, min(decl_j + 80, n)):
            if "{" in strip_line_comment(lines[k]):
                open_brace = k
                break
        if open_brace is None:
            i = j + 1
            continue

        depth = 0
        k = open_brace
        while k < n:
            seg = strip_line_comment(lines[k])
            for ch in seg:
                if ch == "{":
                    depth += 1
                elif ch == "}":
                    depth -= 1
                    if depth == 0:
                        body_lines = lines[open_brace + 1 : k]
                        base = open_brace + 1
                        mems = extract_blueprint_members(body_lines, base)
                        if mems:
                            results.append((kind, cls_name, type_doc, mems))
                        i = k + 1
                        break
            else:
                k += 1
                continue
            break
        else:
            i = j + 1
    return results


def format_property_md(
    full: str,
    *,
    lang: str,
    heading_level: str = "####",
    type_index: dict[str, str] | None = None,
    from_md_file: Path | None = None,
    api_root: Path | None = None,
) -> list[str]:
    L = _L(lang)
    sp = split_macro_args(full, "UPROPERTY")
    if not sp:
        pf = L["parse_fail"]
        return [f"- {pf} `{full[:180]}…`" if len(full) > 180 else f"- `{full}`"]
    args, rest = sp
    typ, name = parse_property_decl(rest, lang)
    spec = blueprint_spec_summary(args, lang)
    if type_index is not None and from_md_file is not None and api_root is not None:
        typ_cell = format_type_cell_markdown(typ, type_index, from_md_file, api_root)
    else:
        typ_cell = f"`{typ}`"
    out = [
        f"{heading_level} {L['prop_word']} `{name}`",
        "",
        f"| {L['tbl_item']} | {L['tbl_content']} |",
        "|------|------|",
        f"| {L['cpp_type']} | {typ_cell} |",
        f"| {L['reflect_spec']} | {spec} |",
        f"| {L['bp_meaning']} | {usage_hints_property(args, lang)} |",
        f"| {L['orig_decl']} | `{trunc_one_line(full)}` |",
    ]
    return out


def format_function_md(
    full: str,
    *,
    lang: str,
    heading_level: str = "####",
    type_index: dict[str, str] | None = None,
    from_md_file: Path | None = None,
    api_root: Path | None = None,
) -> list[str]:
    L = _L(lang)
    sp = split_macro_args(full, "UFUNCTION")
    if not sp:
        pf = L["parse_fail"]
        return [f"- {pf} `{full[:180]}…`" if len(full) > 180 else f"- `{full}`"]
    args, rest = sp
    ret, fname, params_inner = parse_function_decl(rest, lang)
    params = split_params(params_inner)
    spec = blueprint_spec_summary(args, lang)
    if type_index is not None and from_md_file is not None and api_root is not None:
        ret_cell = format_type_cell_markdown(ret, type_index, from_md_file, api_root)
    else:
        ret_cell = f"`{ret}`"
    out = [
        f"{heading_level} {L['func_word']} `{fname}`",
        "",
        f"| {L['tbl_item']} | {L['tbl_content']} |",
        "|------|------|",
        f"| {L['reflect_spec']} | {spec} |",
        f"| {L['ret_type']} | {ret_cell} |",
    ]
    if params:
        out.append(f"| {L['params']} | {L['params_see_tbl']} |")
        out.append("")
        out.append(f"| {L['param_name']} | {L['param_typ']} |")
        out.append("|--------|------|")
        for t, pn in params:
            pname = pn or L["anon"]
            if type_index is not None and from_md_file is not None and api_root is not None:
                t_cell = format_type_cell_markdown(t, type_index, from_md_file, api_root)
            else:
                t_cell = f"`{t}`"
            out.append(f"| `{pname}` | {t_cell} |")
    else:
        out.append(f"| {L['params']} | {L['params_none']} |")
    out.append("")
    out.append(f"**{L['orig_decl']}:** `{trunc_one_line(full)}`")
    out.append("")
    out.append(f"**{L['usage']}:** {usage_hints_function(args, lang)}")
    return out


def emit_standalone_class_md(
    kind: str,
    name: str,
    type_doc: str,
    members: list[tuple[str, str, int, str]],
    source_header_rel: str,
    *,
    lang: str,
    type_index: dict[str, str],
    out_md_file: Path,
    api_root: Path,
) -> list[str]:
    """Single markdown document for one UCLASS/USTRUCT (mod author per-type page)."""
    L = _L(lang)
    sec: list[str] = [
        f"# `{kind}` `{name}`",
        "",
        f"**{L['emit_src_header']}:** `{source_header_rel}`",
        "",
        "---",
        "",
    ]
    if type_doc:
        sec.append(f"## {L['emit_section_desc']}")
        sec.append("")
        for para in type_doc.split("\n"):
            sec.append(f"> {para}")
        sec.append("")
    else:
        sec.append(L["emit_no_comment"])
        sec.append("")

    props = [m for m in members if m[0] == "PROP"]
    funcs = [m for m in members if m[0] == "FUNC"]

    if props:
        sec.append(f"## {L['emit_section_props']}")
        sec.append("")
        for _, full, _, doc in props:
            sec.extend(
                format_property_md(
                    full,
                    lang=lang,
                    heading_level="###",
                    type_index=type_index,
                    from_md_file=out_md_file,
                    api_root=api_root,
                )
            )
            if doc:
                sec.append("")
                sec.append(f"**{L['emit_src_notes']}:**")
                sec.append("")
                for line in doc.split("\n"):
                    sec.append(f"> {line}")
            sec.append("")
            sec.append("---")
            sec.append("")

    if funcs:
        sec.append(f"## {L['emit_section_funcs']}")
        sec.append("")
        for _, full, _, doc in funcs:
            sec.extend(
                format_function_md(
                    full,
                    lang=lang,
                    heading_level="###",
                    type_index=type_index,
                    from_md_file=out_md_file,
                    api_root=api_root,
                )
            )
            if doc:
                sec.append("")
                sec.append(f"**{L['emit_src_notes']}:**")
                sec.append("")
                for line in doc.split("\n"):
                    sec.append(f"> {line}")
            sec.append("")
            sec.append("---")
            sec.append("")

    return sec


def main() -> int:
    project = Path(__file__).resolve().parents[1]
    scan_targets: list[tuple[str, Path]] = [
        ("EastRimWorld", project / "Source" / "EastRimWorld"),
        ("CreateModPlugin", project / "Plugins" / "CreateModPlugin" / "Source" / "CreateModPlugin"),
        (
            "CreateModPluginEditor",
            project / "Plugins" / "CreateModPlugin" / "Source" / "CreateModPluginEditor",
        ),
    ]

    docs_base = project / "BlueprintAPI_ModAuthors"

    by_file: dict[str, list[tuple[str, str, str, list[tuple[str, str, int, str]]]]] = {}
    header_count = 0
    for label, root in scan_targets:
        if not root.is_dir():
            continue
        for fp in sorted(root.rglob("*.h")):
            try:
                lines = fp.read_text(encoding="utf-8", errors="replace").splitlines()
            except OSError:
                continue
            rows = extract_uclasses_with_docs(lines)
            if not rows:
                continue
            rel = f"{label}/" + fp.relative_to(root).as_posix()
            by_file[rel] = rows
            header_count += 1

    type_index = build_type_doc_index(by_file)
    types_per_lang = sum(len(v) for v in by_file.values())

    if docs_base.is_dir():
        shutil.rmtree(docs_base)
    docs_base.mkdir(parents=True)

    (docs_base / "README.md").write_text(
        "\n".join(
            [
                "# Blueprint API documentation (mod authors)",
                "",
                "- **中文 Chinese:** [zh/INDEX.md](zh/INDEX.md)",
                "- **English:** [en/INDEX.md](en/INDEX.md)",
                "",
                "Regenerate both locales: `python Tools/extract_blueprint_api.py`",
                "",
            ]
        ),
        encoding="utf-8",
    )

    total_md_files = 0
    for lang in ("zh", "en"):
        L = _L(lang)
        api_root = docs_base / lang
        api_root.mkdir(parents=True)

        index_rows: list[tuple[str, str, str, str, str]] = []

        for rel in sorted(by_file.keys()):
            hp = Path(rel)
            stem = hp.stem
            parent = hp.parent
            for kind, cls_name, type_doc, mems in by_file[rel]:
                subdir = api_root / parent
                subdir.mkdir(parents=True, exist_ok=True)
                fname = f"{stem}__{cls_name}.md"
                out_file = subdir / fname
                body = emit_standalone_class_md(
                    kind,
                    cls_name,
                    type_doc,
                    mems,
                    rel,
                    lang=lang,
                    type_index=type_index,
                    out_md_file=out_file,
                    api_root=api_root,
                )
                out_file.write_text("\n".join(body), encoding="utf-8")
                total_md_files += 1
                md_link = (parent / fname).as_posix()
                index_rows.append((rel, kind, cls_name, md_link, type_doc))

        by_header: dict[str, list[tuple[str, str, str, str]]] = defaultdict(list)
        for hrel, kind, cname, mlink, type_doc in index_rows:
            by_header[hrel].append((kind, cname, mlink, type_doc))

        index_lines: list[str] = [
            L["idx_title"],
            "",
            L["idx_intro"],
            "",
            f"{L['idx_types']} {types_per_lang}",
            f"{L['idx_headers']} {header_count}",
            "",
            L["idx_desc_block"],
            "",
            L["idx_usage_h2"],
            "",
            L["idx_coverage"],
            L["idx_paths"],
            L["idx_cross"],
            L["idx_params"],
            L["idx_update"],
            "",
            "---",
            "",
        ]

        for hrel in sorted(by_header.keys()):
            index_lines.append(f"## `{hrel}`")
            index_lines.append("")
            for kind, cname, mlink, type_doc in sorted(by_header[hrel], key=lambda x: x[1]):
                label = Path(mlink).stem
                summary = summarize_type_doc_for_index(type_doc, lang)
                index_lines.append(f"- `{kind}` **`{cname}`** — [{label}]({mlink})")
                index_lines.append(f"  - {L['idx_summary_label']} {summary}")
            index_lines.append("")

        (api_root / "INDEX.md").write_text("\n".join(index_lines), encoding="utf-8")

    print(
        f"Wrote {total_md_files} markdown files ({types_per_lang} types x zh/en) under "
        f"{docs_base / 'zh'}, {docs_base / 'en'}, plus README.md ({header_count} headers)"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
