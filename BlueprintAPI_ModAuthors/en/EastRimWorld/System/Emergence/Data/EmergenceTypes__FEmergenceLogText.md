# `struct` `FEmergenceLogText`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## Functional description (from header comments)

> 涌现日志文案 — 文本 + 本条日志中哪些实体类型渲染为可点击超链接(未勾选的以纯文本渲染)。
> 尾随动作链接(对话/报名, 由 Actions 的 Label 生成)不受此开关控制——那是事件的功能入口。

## Blueprint-exposed variables

### Property `Text`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Log" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category = "Log") FText Text;` |

**Notes:**

> 文案(占位符见各事件配置说明)

---

### Property `LinkFlags`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Log" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category = "Log", meta = (Bitmask, BitmaskEnum = "/Script/EastRimWorld.EEmergenceLogLinkFlag")) int32 LinkFlags = 15;` |

**Notes:**

> 超链接类型开关(默认全开; 去勾某类则该类占位以纯文本渲染)

---
