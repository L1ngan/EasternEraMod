# `struct` `FPlaceBuildAction`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> Place Build Action data structure.

## Blueprint-exposed variables

### Property `ActionType`

| Field | Details |
|------|------|
| C++ type | [EPlaceBuildActionType](WorldStruct__EPlaceBuildActionType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EPlaceBuildActionType ActionType = EPlaceBuildActionType::None;` |

**Notes:**

> 操作类型

---

### Property `TargetBuildID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FName TargetBuildID;` |

**Notes:**

> 目标建筑id

---

### Property `Priority`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 Priority = 0;` |

**Notes:**

> 目标等级
> UPROPERTY(BlueprintReadOnly,EditAnywhere)
> int32 TargetLevel;
> 优先级

---

### Property `TargetPlace`

| Field | Details |
|------|------|
| C++ type | [AWorldPlace](WorldPlace__AWorldPlace.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) AWorldPlace* TargetPlace = nullptr;` |

**Notes:**

> Target Place field.

---
