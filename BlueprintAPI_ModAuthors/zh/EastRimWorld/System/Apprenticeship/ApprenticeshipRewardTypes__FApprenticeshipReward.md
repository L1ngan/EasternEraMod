# `struct` `FApprenticeshipReward`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes.h`

---

## 功能说明（来自头文件注释）

> ─────────────────────────────────────────────────────────────
> 单个奖励(DT_ApprenticeshipReward 行, 继承 FDataBase; RowName/ID = RewardID)
> 被集合的 FixedRewardIDs / RandomRewards 通过 RewardID 引用, 可跨集合复用
> ─────────────────────────────────────────────────────────────

## 蓝图暴露变量

### 属性 `Type`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EApprenticeshipRewardType](ApprenticeshipRewardTypes__EApprenticeshipRewardType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Reward" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward") EApprenticeshipRewardType Type = EApprenticeshipRewardType::None;` |

**说明:**

> Type 字段。

---

### 属性 `MartialClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EMartialArtsAttributeClassification](../../Struct/CommonEnum__EMartialArtsAttributeClassification.md) |
| 反射说明符 | BlueprintReadWrite, Category="Reward" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward", meta = (EditConditionHides, EditCondition = "Type == EApprenticeshipRewardType::Experience")) EMartialArtsAttributeClassification MartialClass = EMartialArtsAttributeClassification::None;` |

**说明:**

> Type=Experience 时的武学经验子类(轻功/内劲/刀剑…); 其余类型忽略

---

### 属性 `TargetID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Reward" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward") FName TargetID;` |

**说明:**

> 目标 ID, 按 Type 解释:普通物品=DT_InventoryItem ID / 装备=装备ID / 武学=完本书ID / 门派关系=门派ForceID; 经验(用MartialClass)/盘缠/点数 留空

---

### 属性 `bRandomAttribute`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Reward" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward", meta = (EditConditionHides, EditCondition = "Type == EApprenticeshipRewardType::Equipment")) bool bRandomAttribute = false;` |

**说明:**

> Type=Equipment 且 true 时随机属性(读 DT_EquipmentQualityRange); 其余类型忽略

---

### 属性 `ItemQuality`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EItemQuality` |
| 反射说明符 | BlueprintReadWrite, Category="Reward" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward", meta = (EditConditionHides, EditCondition = "Type == EApprenticeshipRewardType::MartialFragment")) EItemQuality ItemQuality = EItemQuality::None;` |

**说明:**

> Type=MartialFragment 时的残卷品质(发对应品质的残卷); 其余类型忽略

---

### 属性 `OrganType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Reward" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward", meta = (EditConditionHides, EditCondition = "Type == EApprenticeshipRewardType::Injury")) EBodyOrganType OrganType = EBodyOrganType::None;` |

**说明:**

> Type=Injury 时的伤势部位; 其余类型忽略

---

### 属性 `MinValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Reward" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward") int32 MinValue = 0;` |

**说明:**

> 数值随机区间下限(经验/物品数量/装备数量/好感/盘缠/点数; 武学不用)。固定值则 Min==Max

---

### 属性 `MaxValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Reward" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward") int32 MaxValue = 0;` |

**说明:**

> 数值随机区间上限

---

### 属性 `NPCScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Reward" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward") int32 NPCScore = 0;` |

**说明:**

> NPC 弟子命中此奖励折算的门派成长积分(玩家弟子忽略,走实物;NPC 累积此值,归来加门派 GrowScore)

---
