# `struct` `FGameplayTeamGoals`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 阵营的goals

## Blueprint-exposed variables

### Property `WorldPlaceType`

| Field | Details |
|------|------|
| C++ type | `EWorldPlaceType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") EWorldPlaceType WorldPlaceType = EWorldPlaceType::Station;` |

**Source comments:**

> 关卡类型

---

### Property `BattleType`

| Field | Details |
|------|------|
| C++ type | `EBattleType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") EBattleType BattleType = EBattleType::None;` |

**Source comments:**

> 战斗类型

---

### Property `GOAPGoals`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") TArray<FName> GOAPGoals;` |

**Source comments:**

> 初始GOAP目标

---

### Property `InnerSectGOAPGoals`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") TArray<FName> InnerSectGOAPGoals;` |

**Source comments:**

> 内门初始GOAP目标

---

### Property `SummonInitGoal`

| Field | Details |
|------|------|
| C++ type | TMap<ERobotType , [FGoals](CharacterStruct__FGoals.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") TMap<ERobotType , FGoals> SummonInitGoal;` |

**Source comments:**

> 召唤物根据类型初始GOAP目标

---

### Property `AnimalInitGoal`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") TArray<FName> AnimalInitGoal;` |

**Source comments:**

> 动物初始GOAP目标

---
