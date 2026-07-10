# `struct` `FApprenticeshipHarvest`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## Functional description (from header comments)

> 历练成果累积 — 归来时结算
> 来源: DiscipleApprenticeship_System.md §3

## Blueprint-exposed variables

### Property `AccumulatedExp`

| Field | Details |
|------|------|
| C++ type | TMap<[EMartialArtsAttributeClassification](../../Struct/CommonEnum__EMartialArtsAttributeClassification.md), float> |
| Reflection specifiers | BlueprintReadOnly, Category="Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TMap<EMartialArtsAttributeClassification, float> AccumulatedExp;` |

**Notes:**

> 各武学属性分类的经验累积

---

### Property `CollectedItems`

| Field | Details |
|------|------|
| C++ type | TArray<[FItemSimpleData](../../Struct/CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TArray<FItemSimpleData> CollectedItems;` |

**Notes:**

> 收集到的物品(普通物品/装备/书籍, 带类型/数量/随机属性), 归来时入驿站

---

### Property `RelationshipChanges`

| Field | Details |
|------|------|
| C++ type | `TMap<FGuid, float>` |
| Reflection specifiers | BlueprintReadOnly, Category="Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TMap<FGuid, float> RelationshipChanges;` |

**Notes:**

> 与其他门派/角色的关系变化: Guid → Delta

---

### Property `JianghuRumorIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TArray<FName> JianghuRumorIDs;` |

**Notes:**

> 听到的江湖见闻 — 事件日志条目 ID

---

### Property `FamiliarityGained`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") int32 FamiliarityGained = 0;` |

**Notes:**

> 城市熟悉度增量

---

### Property `EncounteredNPCs`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly, Category="Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TArray<FGuid> EncounteredNPCs;` |

**Notes:**

> 路上遇到的 NPC 弟子 Guid

---

### Property `TrainingPointsGained`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") int32 TrainingPointsGained = 0;` |

**Notes:**

> 累计历练点数(归来汇入全局 ASaveGameDataActor.TrainingPoints)

---

### Property `RetracePointsGained`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") int32 RetracePointsGained = 0;` |

**Notes:**

> 累计回溯点数(归来汇入全局 ASaveGameDataActor.RetracePoints)

---

### Property `MartialFragmentsGained`

| Field | Details |
|------|------|
| C++ type | `TMap<EItemQuality, int32>` |
| Reflection specifiers | BlueprintReadOnly, Category="Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TMap<EItemQuality, int32> MartialFragmentsGained;` |

**Notes:**

> 累计武学残卷(品质→数量, 归来汇入全局 ASaveGameDataActor.MartialFragments)

---

### Property `GrantedBuffIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TArray<FName> GrantedBuffIDs;` |

**Notes:**

> 历练中获得的增益 buff ID(归来挂到弟子 BuffArray, spawn 生效)

---

### Property `GrantedInjuries`

| Field | Details |
|------|------|
| C++ type | TArray<[FApprenticeshipGrantedInjury](ApprenticeshipTypes__FApprenticeshipGrantedInjury.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TArray<FApprenticeshipGrantedInjury> GrantedInjuries;` |

**Notes:**

> 历练中受的伤势(归来挂到弟子 CurInjuryEffectArr)

---

### Property `NPCScoreGained`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") int32 NPCScoreGained = 0;` |

**Notes:**

> NPC 弟子历练累积的成长积分(玩家弟子不用;归来 SettleNPCReturn 加到门派 GrowScore)

---

### Property `GrantedRewardIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TArray<FName> GrantedRewardIDs;` |

**Notes:**

> 本次历练命中的奖励行 ID 列表(玩家/NPC 通用;每命中一条奖励记其 RewardID,供 UI 展示)

---
