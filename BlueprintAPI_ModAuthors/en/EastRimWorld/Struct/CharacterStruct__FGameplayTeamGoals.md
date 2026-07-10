# `struct` `FGameplayTeamGoals`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 阵营的goals

## Blueprint-exposed variables

### Property `WorldPlaceType`

| Field | Details |
|------|------|
| C++ type | [EWorldPlaceType](CommonEnum__EWorldPlaceType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") EWorldPlaceType WorldPlaceType = EWorldPlaceType::Station;` |

**Notes:**

> 关卡类型

---

### Property `BattleType`

| Field | Details |
|------|------|
| C++ type | [EBattleType](CommonEnum__EBattleType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") EBattleType BattleType = EBattleType::None;` |

**Notes:**

> 战斗类型

---

### Property `GOAPGoals`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") TArray<FName> GOAPGoals;` |

**Notes:**

> 初始GOAP目标

---

### Property `InnerSectGOAPGoals`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") TArray<FName> InnerSectGOAPGoals;` |

**Notes:**

> 内门初始GOAP目标

---

### Property `SummonInitGoal`

| Field | Details |
|------|------|
| C++ type | TMap<[ERobotType](../ERW_Enumerations__ERobotType.md) , [FGoals](CharacterStruct__FGoals.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") TMap<ERobotType , FGoals> SummonInitGoal;` |

**Notes:**

> 召唤物根据类型初始GOAP目标

---

### Property `AnimalInitGoal`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") TArray<FName> AnimalInitGoal;` |

**Notes:**

> 动物初始GOAP目标

---
