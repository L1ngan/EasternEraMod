# `struct` `FCommonLogData`

**Source header:** `EastRimWorld/Struct/CommonLogStruct.h`

---

## Functional description (from header comments)

> Common Log Data data structure.

## Blueprint-exposed variables

### Property `LogGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid LogGuid;` |

**Notes:**

> Log Guid field.

---

### Property `LogContent`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString LogContent;` |

**Notes:**

> 日志内容

---

### Property `Time`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float Time = 0.f;` |

**Notes:**

> 生成的游戏时间

---

### Property `LogGroup`

| Field | Details |
|------|------|
| C++ type | [ECommonLogGroup](CommonLogStruct__ECommonLogGroup.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECommonLogGroup LogGroup = ECommonLogGroup::None;` |

**Notes:**

> Log Group field.

---

### Property `FilterString`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString FilterString;` |

**Notes:**

> 用来查询此条目的字符串

---
