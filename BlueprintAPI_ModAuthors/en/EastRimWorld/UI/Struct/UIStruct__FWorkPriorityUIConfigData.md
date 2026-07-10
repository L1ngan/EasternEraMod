# `struct` `FWorkPriorityUIConfigData`

**Source header:** `EastRimWorld/UI/Struct/UIStruct.h`

---

## Functional description (from header comments)

> 工作优先级UI配置结构

## Blueprint-exposed variables

### Property `Name`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText Name;` |

**Notes:**

> 显示名称
> !!!Warning!!! 该表的配置顺序决定了UI的显示顺序

---

### Property `Goals`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FName> Goals;` |

**Notes:**

> 对应的GOAP目标

---

### Property `Actions`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FName> Actions;` |

**Notes:**

> 包含的GOAP Action

---

### Property `CanSort`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) bool CanSort { false };` |

**Notes:**

> 能否排序

---

### Property `RelativeRowName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FName RelativeRowName;` |

**Notes:**

> 对应DT_CharacterMainSkillUIConfig表的行名

---

### Property `Tips`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText Tips;` |

**Notes:**

> 显示的Tips

---

### Property `SubClassType`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 SubClassType = 2;` |

**Notes:**

> 内门0，外门1，内外门通用2

---
