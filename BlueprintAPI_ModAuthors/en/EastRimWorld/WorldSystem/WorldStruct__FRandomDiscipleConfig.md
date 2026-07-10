# `struct` `FRandomDiscipleConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 随机弟子生成配置（DT_RandomDiscipleConfig 表行，EGameConfigType::RandomDiscipleConfig）
> 使用方通过 AERW_GameModeBase::GetRandomDiscipleConfig(ID) 获取：
> 1) EGenerationActorType::SpawnRandomDisciple 生成配置（FGenerationData.RandomDiscipleConfigID）
> 2) NPC势力招募培养（FWorldNPCForceConfig.RecruitRandomDiscipleConfigID）

## Blueprint-exposed variables

### Property `TemplateCharacterID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TemplateCharacterID;` |

**Notes:**

> 【必填】人形角色模板 ID，指向 DT_HumanData。
> 提供 CharacterClass（蓝图类）、DefaultWeapon/DefaultArmor、AnimGroup、InitGameplayEffect 等。
> 生成的 FCharacterSaveData.CharacterID 将被设为此值，保证读档和进入地点时能正常查表。

---

### Property `ForcePool`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> ForcePool;` |

**Notes:**

> 门派 ID 池兜底（填 ForceID/SectID）。正常优先用上下文 ForceGuid 解析所属势力；
> 仅当 ForceGuid 反查不到势力时，才从此池随机取一个。通常留空。

---

### Property `RealmOverrideMin`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RealmOverrideMin = 0;` |

**Notes:**

> 境界范围覆盖（0 = 使用 FWorldForceInfo 配置的 DiscipleRealmMin/Max；势力也未配置则按 ForceLevel 估算）

---

### Property `RealmOverrideMax`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RealmOverrideMax = 0;` |

**Notes:**

> Realm Override Max field.

---

### Property `CharacteristicMin`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CharacteristicMin = 1;` |

**Notes:**

> 随机特性数量范围

---

### Property `CharacteristicMax`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CharacteristicMax = 2;` |

**Notes:**

> Characteristic Max field.

---

### Property `CharacteristicPool`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> CharacteristicPool;` |

**Notes:**

> 特性池（空 = 从 DT_CharacteristicInfo 全池随机）

---

### Property `MovesSlotCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MovesSlotCount = 1;` |

**Notes:**

> 招式槽数量（1~3）

---

### Property `PassiveSlotCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PassiveSlotCount = 0;` |

**Notes:**

> 被动槽数量（0~2）

---
