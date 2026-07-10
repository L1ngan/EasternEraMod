# `struct` `FCommonLogInfo`

**Source header:** `EastRimWorld/Struct/CommonLogStruct.h`

---

## Functional description (from header comments)

> Common Log Info data structure.

## Blueprint-exposed variables

### Property `TipsText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(MultiLine)) FText TipsText;` |

**Notes:**

> 提示文字 文本中包含对应的参数 参数中用占位符替换 例如 七杀门堂主孟星魂进入战场。 配置为 [1][3][2]进入战场。 数字代表ECommonLogParameterType的枚举值

---

### Property `CoolingTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CoolingTime;` |

**Notes:**

> 同id的日志内置CD

---

### Property `CommonLogType`

| Field | Details |
|------|------|
| C++ type | [ECommonLogType](CommonLogStruct__ECommonLogType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECommonLogType CommonLogType = ECommonLogType::None;` |

**Notes:**

> 日志的类型(相同类型可以有多个,生成时通过条件判断取一个,如果没有条件限制则随机取一个)

---

### Property `GenerateCondition`

| Field | Details |
|------|------|
| C++ type | TMap<[ECommonLogGenerateCondition](CommonLogStruct__ECommonLogGenerateCondition.md),float> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<ECommonLogGenerateCondition,float> GenerateCondition;` |

**Notes:**

> 生成日志的条件 key为条件类型 value 为条件值

---

### Property `LogGroup`

| Field | Details |
|------|------|
| C++ type | [ECommonLogGroup](CommonLogStruct__ECommonLogGroup.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECommonLogGroup LogGroup = ECommonLogGroup::None;` |

**Notes:**

> 日志的分组

---
