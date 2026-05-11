# `struct` `FPostStationGenerateInfo`

**Source header:** `EastRimWorld/PostStation/PostStationStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `GenerateConfig`

| Field | Details |
|------|------|
| C++ type | [FPostStationGenerateConfig](PostStationStruct__FPostStationGenerateConfig.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FPostStationGenerateConfig GenerateConfig;` |

**Source comments:**

> 驿站生成配置

---

### Property `Weight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Weight;` |

**Source comments:**

> 权重

---

### Property `AllMonsterGenerateConfig`

| Field | Details |
|------|------|
| C++ type | TArray<[FMonsterGenerationConfig](../WorldSystem/WorldStruct__FMonsterGenerationConfig.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FMonsterGenerationConfig> AllMonsterGenerateConfig;` |

**Source comments:**

> 配置的所有生成(初始化之后不可再变动)

---

### Property `CanUseMonsterGenerateIndex`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<int32> CanUseMonsterGenerateIndex;` |

**Source comments:**

> 当前可用的生成序号(当配置的条件满足之后就加入到这里面,此后不再检测条件)

---

### Property `ComponentGenerateInfos`

| Field | Details |
|------|------|
| C++ type | TArray<[FPostStationGenerateInstanceInfo](PostStationStruct__FPostStationGenerateInstanceInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FPostStationGenerateInstanceInfo> ComponentGenerateInfos;` |

---

### Property `bRetiredFromLineConfig`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) bool bRetiredFromLineConfig;` |

**Source comments:**

> 本槽已从当前线路配置中移除，仅等旧配置遗留 NPC 离场；为 true 时不再随 RandGenerate/条件解锁参与生成，人走光后从 GenerateInfos 剔除

---
