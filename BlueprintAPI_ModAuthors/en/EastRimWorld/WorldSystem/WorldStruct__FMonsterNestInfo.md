# `struct` `FMonsterNestInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> Monster Nest Info data structure.

## Blueprint-exposed variables

### Property `TeamID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TeamID = 255;` |

**Notes:**

> 阵营ID

---

### Property `NestLocation`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FTransform NestLocation;` |

**Notes:**

> 巢穴的位置

---

### Property `NestName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText NestName;` |

**Notes:**

> 巢穴的名字

---

### Property `MonsterGeneration`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> MonsterGeneration;` |

**Notes:**

> 此巢穴的所有生成怪物设置 读取MonsterGenerationConfig 配置表

---

### Property `BuildingPreset`

| Field | Details |
|------|------|
| C++ type | TArray<[FPresetBuilding](../ERW_ConfigTypes__FPresetBuilding.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FPresetBuilding> BuildingPreset;` |

**Notes:**

> 此巢穴拥有的建筑物

---

### Property `MonsterAttackSetting`

| Field | Details |
|------|------|
| C++ type | TArray<[FMonsterAttackSetting](WorldStruct__FMonsterAttackSetting.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FMonsterAttackSetting> MonsterAttackSetting;` |

**Notes:**

> 怪物的攻击设置

---

### Property `MonsterNestActorClass`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[AMonsterNestActor](../System/MonsterNest/MonsterNestActor__AMonsterNestActor.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftClassPtr<AMonsterNestActor> MonsterNestActorClass;` |

**Notes:**

> 怪物巢穴管理Actor

---

### Property `MovingRange`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float MovingRange = 0.f;` |

**Notes:**

> 移动范围

---
