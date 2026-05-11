# `struct` `FPlaceBuildAction`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `ActionType`

| Field | Details |
|------|------|
| C++ type | `EPlaceBuildActionType` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EPlaceBuildActionType ActionType = EPlaceBuildActionType::None;` |

**Source comments:**

> 操作类型

---

### Property `TargetBuildID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FName TargetBuildID;` |

**Source comments:**

> 目标建筑id

---

### Property `Priority`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 Priority = 0;` |

**Source comments:**

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

---
