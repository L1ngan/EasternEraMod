# `struct` `FPostStationGenerateInfo`

**Source header:** `EastRimWorld/PostStation/PostStationStruct.h`

---

## Functional description (from header comments)

> Generation info of one slot in a generate line: config, weight, available spawn pool and active instances.

## Blueprint-exposed variables

### Property `GenerateConfig`

| Field | Details |
|------|------|
| C++ type | [FPostStationGenerateConfig](PostStationStruct__FPostStationGenerateConfig.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FPostStationGenerateConfig GenerateConfig;` |

**Notes:**

> 驿站生成配置

---

### Property `Weight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Weight;` |

**Notes:**

> 权重

---

### Property `AllMonsterGenerateConfig`

| Field | Details |
|------|------|
| C++ type | TArray<[FMonsterGenerationConfig](../WorldSystem/WorldStruct__FMonsterGenerationConfig.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FMonsterGenerationConfig> AllMonsterGenerateConfig;` |

**Notes:**

> 配置的所有生成(初始化之后不可再变动)

---

### Property `CanUseMonsterGenerateIndex`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<int32> CanUseMonsterGenerateIndex;` |

**Notes:**

> 当前可用的生成序号(当配置的条件满足之后就加入到这里面,此后不再检测条件)

---

### Property `ComponentGenerateInfos`

| Field | Details |
|------|------|
| C++ type | TArray<[FPostStationGenerateInstanceInfo](PostStationStruct__FPostStationGenerateInstanceInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FPostStationGenerateInstanceInfo> ComponentGenerateInfos;` |

**Notes:**

> List of currently active generation instance infos.

---

### Property `bRetiredFromLineConfig`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) bool bRetiredFromLineConfig;` |

**Notes:**

> 本槽已从当前线路配置中移除，仅等旧配置遗留 NPC 离场；为 true 时不再随 RandGenerate/条件解锁参与生成，人走光后从 GenerateInfos 剔除

---
