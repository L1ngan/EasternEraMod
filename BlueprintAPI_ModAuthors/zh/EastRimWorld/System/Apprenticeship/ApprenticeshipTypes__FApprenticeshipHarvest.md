# `struct` `FApprenticeshipHarvest`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## 功能说明（来自头文件注释）

> 历练成果累积 — 归来时结算
> 来源: DiscipleApprenticeship_System.md §3

## 蓝图暴露变量

### 属性 `AccumulatedExp`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EMartialArtsAttributeClassification](../../Struct/CommonEnum__EMartialArtsAttributeClassification.md), float> |
| 反射说明符 | BlueprintReadOnly, Category="Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TMap<EMartialArtsAttributeClassification, float> AccumulatedExp;` |

**说明:**

> 各武学属性分类的经验累积

---

### 属性 `CollectedItems`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FItemSimpleData](../../Struct/CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TArray<FItemSimpleData> CollectedItems;` |

**说明:**

> 收集到的物品(普通物品/装备/书籍, 带类型/数量/随机属性), 归来时入驿站

---

### 属性 `RelationshipChanges`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGuid, float>` |
| 反射说明符 | BlueprintReadOnly, Category="Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TMap<FGuid, float> RelationshipChanges;` |

**说明:**

> 与其他门派/角色的关系变化: Guid → Delta

---

### 属性 `JianghuRumorIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TArray<FName> JianghuRumorIDs;` |

**说明:**

> 听到的江湖见闻 — 事件日志条目 ID

---

### 属性 `FamiliarityGained`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") int32 FamiliarityGained = 0;` |

**说明:**

> 城市熟悉度增量

---

### 属性 `EncounteredNPCs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly, Category="Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TArray<FGuid> EncounteredNPCs;` |

**说明:**

> 路上遇到的 NPC 弟子 Guid

---

### 属性 `TrainingPointsGained`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") int32 TrainingPointsGained = 0;` |

**说明:**

> 累计历练点数(归来汇入全局 ASaveGameDataActor.TrainingPoints)

---

### 属性 `RetracePointsGained`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") int32 RetracePointsGained = 0;` |

**说明:**

> 累计回溯点数(归来汇入全局 ASaveGameDataActor.RetracePoints)

---

### 属性 `MartialFragmentsGained`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EItemQuality, int32>` |
| 反射说明符 | BlueprintReadOnly, Category="Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TMap<EItemQuality, int32> MartialFragmentsGained;` |

**说明:**

> 累计武学残卷(品质→数量, 归来汇入全局 ASaveGameDataActor.MartialFragments)

---

### 属性 `GrantedBuffIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TArray<FName> GrantedBuffIDs;` |

**说明:**

> 历练中获得的增益 buff ID(归来挂到弟子 BuffArray, spawn 生效)

---

### 属性 `GrantedInjuries`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FApprenticeshipGrantedInjury](ApprenticeshipTypes__FApprenticeshipGrantedInjury.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TArray<FApprenticeshipGrantedInjury> GrantedInjuries;` |

**说明:**

> 历练中受的伤势(归来挂到弟子 CurInjuryEffectArr)

---

### 属性 `NPCScoreGained`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") int32 NPCScoreGained = 0;` |

**说明:**

> NPC 弟子历练累积的成长积分(玩家弟子不用;归来 SettleNPCReturn 加到门派 GrowScore)

---

### 属性 `GrantedRewardIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") TArray<FName> GrantedRewardIDs;` |

**说明:**

> 本次历练命中的奖励行 ID 列表(玩家/NPC 通用;每命中一条奖励记其 RewardID,供 UI 展示)

---
