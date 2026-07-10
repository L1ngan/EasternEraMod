# `struct` `FEmergencePressure`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## Functional description (from header comments)

> 单维压力 — 一个压力维度的评估结果。
> Value 归一化到 [0,1]; RankedObjects 是"令该维度压力最高的对象组"(策划案 §2 "指向对象", 按压力降序前若干位),
> 事件落地/结算直接从快照取对象(单对象维取 ObjectA, 成对维取 A+B; 建议在前几位里随机, 避免连续事件总取同一对象)。

## Blueprint-exposed variables

### Property `Dim`

| Field | Details |
|------|------|
| C++ type | [EEmergencePressureDim](EmergenceTypes__EEmergencePressureDim.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Pressure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Pressure") EEmergencePressureDim Dim = EEmergencePressureDim::Dullness;` |

**Notes:**

> 维度

---

### Property `Value`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Pressure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Pressure") float Value = 0.f;` |

**Notes:**

> 归一化压力值 [0,1]

---

### Property `RankedObjects`

| Field | Details |
|------|------|
| C++ type | TArray<[FEmergencePressureObject](EmergenceTypes__FEmergencePressureObject.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Pressure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Pressure") TArray<FEmergencePressureObject> RankedObjects;` |

**Notes:**

> 该维压力指向的对象组(按压力降序, <=5): 单对象维每条只填 ObjectA; 成对维(结仇)每条 A+B 成对。[0]=压力最高者

---

### Property `TopObjectType`

| Field | Details |
|------|------|
| C++ type | [EEmergenceSlotType](EmergenceTypes__EEmergenceSlotType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Pressure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Pressure") EEmergenceSlotType TopObjectType = EEmergenceSlotType::None;` |

**Notes:**

> 对象组的世界对象类型(事件取对象时判断语义: 势力/地点/角色)

---

### Property `Descriptor`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Pressure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Pressure") FName Descriptor;` |

**Notes:**

> 灾种/区域标签等附带信息(灾害维度填灾种 ID, 沉寂维度填区域 ID)

---
