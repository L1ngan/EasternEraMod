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


def blueprint_spec_summary(macro_args: str) -> str:
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
    return ", ".join(parts) if parts else "（仅蓝图可见相关标记）"


def usage_hints_function(macro_args: str) -> str:
    hints: list[str] = []
    if "BlueprintPure" in macro_args:
        hints.append("在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。")
    elif "BlueprintCallable" in macro_args:
        hints.append("在蓝图中为**可调用函数节点**（含执行引脚）。")
    if "BlueprintImplementableEvent" in macro_args:
        hints.append("事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。")
    if "BlueprintNativeEvent" in macro_args:
        hints.append("**BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。")
    if "meta" in macro_args and "DisplayName" in macro_args:
        dn = re.search(r'DisplayName\s*=\s*\"([^\"]+)\"', macro_args)
        if dn:
            hints.append(f"节点显示名可能为「{dn.group(1)}」。")
    if not hints:
        hints.append("详见蓝图编辑器中该节点的引脚与分类。")
    return " ".join(hints)


def usage_hints_property(macro_args: str) -> str:
    hints: list[str] = []
    if "BlueprintAssignable" in macro_args:
        hints.append("**多播委托**：可在蓝图中 **Bind / Add** 绑定事件。")
    elif "BlueprintReadWrite" in macro_args:
        hints.append("蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。")
    elif "BlueprintReadOnly" in macro_args:
        hints.append("蓝图 **只读**，不可直接赋值。")
    if "SaveGame" in macro_args:
        hints.append("参与 **SaveGame** 序列化的字段。")
    if not hints:
        hints.append("变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。")
    return " ".join(hints)


def parse_property_decl(decl_after_macro: str) -> tuple[str, str]:
    """Return (cpp_type_guess, var_name)."""
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
    return typ or "（见源码）", name


def parse_function_decl(decl_after_macro: str) -> tuple[str, str, str]:
    """Return (return_type, func_name, params_inner)."""
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
        return "（复杂返回类型）", "（见源码签名）", decl_after_macro.strip()[:200]

    ret, fname, params = m.group(1).strip(), m.group(2).strip(), m.group(3).strip()
    return ret or "void", fname, params


def trunc_one_line(s: str, max_len: int = 520) -> str:
    s = re.sub(r"\s+", " ", s).strip()
    return s if len(s) <= max_len else s[: max_len - 3] + "..."


def escape_md_inline_light(s: str) -> str:
    """Reduce risk of breaking Markdown list items when pasting header comments."""
    return s.replace("`", "'").replace("|", "｜").strip()


def summarize_type_doc_for_index(doc: str, max_len: int = 360) -> str:
    """Single-line 功能说明 for INDEX.md (from comment above UCLASS/USTRUCT)."""
    if not doc or not doc.strip():
        return (
            "（头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）"
        )
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
    heading_level: str = "####",
    type_index: dict[str, str] | None = None,
    from_md_file: Path | None = None,
    api_root: Path | None = None,
) -> list[str]:
    sp = split_macro_args(full, "UPROPERTY")
    if not sp:
        return [f"- （无法解析）`{full[:180]}…`" if len(full) > 180 else f"- `{full}`"]
    args, rest = sp
    typ, name = parse_property_decl(rest)
    spec = blueprint_spec_summary(args)
    if type_index is not None and from_md_file is not None and api_root is not None:
        typ_cell = format_type_cell_markdown(typ, type_index, from_md_file, api_root)
    else:
        typ_cell = f"`{typ}`"
    out = [
        f"{heading_level} 属性 `{name}`",
        "",
        "| 项目 | 内容 |",
        "|------|------|",
        f"| C++ 类型 | {typ_cell} |",
        f"| 反射说明符 | {spec} |",
        f"| 蓝图侧含义 | {usage_hints_property(args)} |",
        f"| 原始声明（单行节选） | `{trunc_one_line(full)}` |",
    ]
    return out


def format_function_md(
    full: str,
    *,
    heading_level: str = "####",
    type_index: dict[str, str] | None = None,
    from_md_file: Path | None = None,
    api_root: Path | None = None,
) -> list[str]:
    sp = split_macro_args(full, "UFUNCTION")
    if not sp:
        return [f"- （无法解析）`{full[:180]}…`" if len(full) > 180 else f"- `{full}`"]
    args, rest = sp
    ret, fname, params_inner = parse_function_decl(rest)
    params = split_params(params_inner)
    spec = blueprint_spec_summary(args)
    if type_index is not None and from_md_file is not None and api_root is not None:
        ret_cell = format_type_cell_markdown(ret, type_index, from_md_file, api_root)
    else:
        ret_cell = f"`{ret}`"
    out = [
        f"{heading_level} 函数 `{fname}`",
        "",
        "| 项目 | 内容 |",
        "|------|------|",
        f"| 反射说明符 | {spec} |",
        f"| 返回类型 | {ret_cell} |",
    ]
    if params:
        out.append("| 参数 | 见下表 |")
        out.append("")
        out.append("| 参数名 | 类型 |")
        out.append("|--------|------|")
        for t, pn in params:
            pname = pn or "（匿名/仅类型）"
            if type_index is not None and from_md_file is not None and api_root is not None:
                t_cell = format_type_cell_markdown(t, type_index, from_md_file, api_root)
            else:
                t_cell = f"`{t}`"
            out.append(f"| `{pname}` | {t_cell} |")
    else:
        out.append("| 参数 | （无） |")
    out.append("")
    out.append(f"**原始声明（单行节选）：** `{trunc_one_line(full)}`")
    out.append("")
    out.append(f"**用法说明：** {usage_hints_function(args)}")
    return out


def emit_standalone_class_md(
    kind: str,
    name: str,
    type_doc: str,
    members: list[tuple[str, str, int, str]],
    source_header_rel: str,
    *,
    type_index: dict[str, str],
    out_md_file: Path,
    api_root: Path,
) -> list[str]:
    """Single markdown document for one UCLASS/USTRUCT (mod author per-type page)."""
    sec: list[str] = [
        f"# `{kind}` `{name}`",
        "",
        f"**源码头文件：** `{source_header_rel}`",
        "",
        "---",
        "",
    ]
    if type_doc:
        sec.append("## 功能说明（来自头文件注释）")
        sec.append("")
        for para in type_doc.split("\n"):
            sec.append(f"> {para}")
        sec.append("")
    else:
        sec.append(
            "*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*"
        )
        sec.append("")

    props = [m for m in members if m[0] == "PROP"]
    funcs = [m for m in members if m[0] == "FUNC"]

    if props:
        sec.append("## 蓝图暴露变量")
        sec.append("")
        for _, full, _, doc in props:
            sec.extend(
                format_property_md(
                    full,
                    heading_level="###",
                    type_index=type_index,
                    from_md_file=out_md_file,
                    api_root=api_root,
                )
            )
            if doc:
                sec.append("")
                sec.append("**源码注释：**")
                sec.append("")
                for line in doc.split("\n"):
                    sec.append(f"> {line}")
            sec.append("")
            sec.append("---")
            sec.append("")

    if funcs:
        sec.append("## 蓝图暴露函数")
        sec.append("")
        for _, full, _, doc in funcs:
            sec.extend(
                format_function_md(
                    full,
                    heading_level="###",
                    type_index=type_index,
                    from_md_file=out_md_file,
                    api_root=api_root,
                )
            )
            if doc:
                sec.append("")
                sec.append("**源码注释：**")
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

    api_root = project / "BlueprintAPI_ModAuthors"

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

    if api_root.is_dir():
        shutil.rmtree(api_root)
    api_root.mkdir(parents=True)

    index_rows: list[tuple[str, str, str, str, str]] = []
    type_count = 0

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
                type_index=type_index,
                out_md_file=out_file,
                api_root=api_root,
            )
            out_file.write_text("\n".join(body), encoding="utf-8")
            type_count += 1
            md_link = (parent / fname).as_posix()
            index_rows.append((rel, kind, cls_name, md_link, type_doc))

    by_header: dict[str, list[tuple[str, str, str, str]]] = defaultdict(list)
    for hrel, kind, cname, mlink, type_doc in index_rows:
        by_header[hrel].append((kind, cname, mlink, type_doc))

    index_lines: list[str] = [
        "# 蓝图 API 类型索引（模组作者）",
        "",
        "以下为 **每个 UCLASS / USTRUCT** 的独立文档入口（仅含蓝图暴露的成员）。",
        "",
        f"- **类型数量：** {type_count}",
        f"- **头文件数量：** {header_count}",
        "",
        "**功能说明：** 每条索引下的 **功能说明** 摘自该类型在头文件中 **`UCLASS` / `USTRUCT` 声明紧上方** 的 `//` 或块注释（概括该类/结构体**做什么、负责哪块逻辑**；自动压成一行并截断）。若工程未写类型级注释，则显示占位提示；更完整的说明仍以对应 `.h` 与单页 `.md` 为准。",
        "",
        "## 使用说明",
        "",
        "- **覆盖范围**：`Source/EastRimWorld`、`Plugins/CreateModPlugin`、`CreateModPluginEditor`。",
        "- **路径**：文档路径与源码模块目录对应，文件名 `{头文件名}__{类型名}.md`。",
        "- **关联跳转**：属性「C++ 类型」与函数「返回类型 / 参数类型」中出现的 `F*` / `U*` / `A*` / `E*` 名称若在本文档集中有对应页面，会自动变为 **Markdown 相对链接**（可点击跳转至该类型文档）。",
        "- **参数拆分**：复杂模板可能被简化；**最权威签名以对应 `.h` 为准**。",
        "- **更新**：`python Tools/extract_blueprint_api.py`（会清空并重建 `BlueprintAPI_ModAuthors/`）",
        "",
        "叙事索引见仓库根目录 `MOD_AUTHOR_BLUEPRINT_API.md`。",
        "",
        "---",
        "",
    ]

    for hrel in sorted(by_header.keys()):
        index_lines.append(f"## `{hrel}`")
        index_lines.append("")
        for kind, cname, mlink, type_doc in sorted(by_header[hrel], key=lambda x: x[1]):
            label = Path(mlink).stem
            summary = summarize_type_doc_for_index(type_doc)
            index_lines.append(f"- `{kind}` **`{cname}`** — [{label}]({mlink})")
            index_lines.append(f"  - **功能说明：** {summary}")
        index_lines.append("")

    (api_root / "INDEX.md").write_text("\n".join(index_lines), encoding="utf-8")

    root_stub = "\n".join(
        [
            "# 蓝图 API 详细参考（模组作者）",
            "",
            "完整 API 已按 **类 / 结构体** 拆分为多篇 Markdown，统一放在目录 **`BlueprintAPI_ModAuthors/`**。",
            "",
            "- **[类型索引（按头文件分组）](BlueprintAPI_ModAuthors/INDEX.md)**",
            "",
            "维护：修改 C++ 反射后执行 `python Tools/extract_blueprint_api.py`，将重建 `BlueprintAPI_ModAuthors/` 与本说明文件。",
            "",
            "模组/Wwise/Steam 等叙事索引见 **`MOD_AUTHOR_BLUEPRINT_API.md`**。",
            "",
        ]
    )
    (project / "BlueprintAPI_Reference_ModAuthors.md").write_text(root_stub, encoding="utf-8")

    print(
        f"Wrote {type_count} type docs under {api_root}, INDEX.md, "
        f"and root BlueprintAPI_Reference_ModAuthors.md ({header_count} headers)"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
