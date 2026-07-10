# `struct` `FCategoryCostData`

**Source header:** `EastRimWorld/GOAP/GOAP_Data.h`

---

## Functional description (from header comments)

> 类型对应的消耗配置结构

## Blueprint-exposed variables

### Property `GameplayTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FGameplayTag GameplayTag;` |

**Notes:**

> 标签

---

### Property `ManageType`

| Field | Details |
|------|------|
| C++ type | [EManageType](../Struct/CommonEnum__EManageType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) EManageType ManageType = EManageType::None;` |

**Notes:**

> 类型

---

### Property `Cost`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) float Cost { 0 };` |

**Notes:**

> 消耗

---

### Property `Desc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FText Desc;` |

**Notes:**

> 描述

---
