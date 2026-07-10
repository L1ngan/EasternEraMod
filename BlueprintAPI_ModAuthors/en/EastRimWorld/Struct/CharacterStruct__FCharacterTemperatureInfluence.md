# `struct` `FCharacterTemperatureInfluence`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 角色温度影响

## Blueprint-exposed variables

### Property `CharacterTemperatureStateType`

| Field | Details |
|------|------|
| C++ type | [ECharacterTemperatureStateType](CharacterStruct__ECharacterTemperatureStateType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) ECharacterTemperatureStateType CharacterTemperatureStateType = ECharacterTemperatureStateType::Normal;` |

**Notes:**

> 温度区间分类

---

### Property `MinTimeOfDuration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinTimeOfDuration = 0.f;` |

**Notes:**

> 最小持续时间

---

### Property `MaxTimeOfDuration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTimeOfDuration = 0.f;` |

**Notes:**

> 最大持续时间

---

### Property `TemperatureBuff`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> TemperatureBuff;` |

**Notes:**

> 触发的buff

---

### Property `TemperatureExamined`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[EBodyOrganType](../ERW_CommonTypes__EBodyOrganType.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName,EBodyOrganType> TemperatureExamined;` |

**Notes:**

> 触发的伤势 伤势ID， 伤势类型

---
