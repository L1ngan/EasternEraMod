# `struct` `FApprenticeshipReward`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes.h`

---

## Functional description (from header comments)

> ─────────────────────────────────────────────────────────────
> 单个奖励(DT_ApprenticeshipReward 行, 继承 FDataBase; RowName/ID = RewardID)
> 被集合的 FixedRewardIDs / RandomRewards 通过 RewardID 引用, 可跨集合复用
> ─────────────────────────────────────────────────────────────

## Blueprint-exposed variables

### Property `Type`

| Field | Details |
|------|------|
| C++ type | [EApprenticeshipRewardType](ApprenticeshipRewardTypes__EApprenticeshipRewardType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Reward" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward") EApprenticeshipRewardType Type = EApprenticeshipRewardType::None;` |

**Notes:**

> Type field.

---

### Property `MartialClass`

| Field | Details |
|------|------|
| C++ type | [EMartialArtsAttributeClassification](../../Struct/CommonEnum__EMartialArtsAttributeClassification.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Reward" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward", meta = (EditConditionHides, EditCondition = "Type == EApprenticeshipRewardType::Experience")) EMartialArtsAttributeClassification MartialClass = EMartialArtsAttributeClassification::None;` |

**Notes:**

> Type=Experience 时的武学经验子类(轻功/内劲/刀剑…); 其余类型忽略

---

### Property `TargetID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Reward" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward") FName TargetID;` |

**Notes:**

> 目标 ID, 按 Type 解释:普通物品=DT_InventoryItem ID / 装备=装备ID / 武学=完本书ID / 门派关系=门派ForceID; 经验(用MartialClass)/盘缠/点数 留空

---

### Property `bRandomAttribute`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Reward" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward", meta = (EditConditionHides, EditCondition = "Type == EApprenticeshipRewardType::Equipment")) bool bRandomAttribute = false;` |

**Notes:**

> Type=Equipment 且 true 时随机属性(读 DT_EquipmentQualityRange); 其余类型忽略

---

### Property `ItemQuality`

| Field | Details |
|------|------|
| C++ type | `EItemQuality` |
| Reflection specifiers | BlueprintReadWrite, Category="Reward" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward", meta = (EditConditionHides, EditCondition = "Type == EApprenticeshipRewardType::MartialFragment")) EItemQuality ItemQuality = EItemQuality::None;` |

**Notes:**

> Type=MartialFragment 时的残卷品质(发对应品质的残卷); 其余类型忽略

---

### Property `OrganType`

| Field | Details |
|------|------|
| C++ type | [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Reward" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward", meta = (EditConditionHides, EditCondition = "Type == EApprenticeshipRewardType::Injury")) EBodyOrganType OrganType = EBodyOrganType::None;` |

**Notes:**

> Type=Injury 时的伤势部位; 其余类型忽略

---

### Property `MinValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Reward" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward") int32 MinValue = 0;` |

**Notes:**

> 数值随机区间下限(经验/物品数量/装备数量/好感/盘缠/点数; 武学不用)。固定值则 Min==Max

---

### Property `MaxValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Reward" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward") int32 MaxValue = 0;` |

**Notes:**

> 数值随机区间上限

---

### Property `NPCScore`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Reward" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward") int32 NPCScore = 0;` |

**Notes:**

> NPC 弟子命中此奖励折算的门派成长积分(玩家弟子忽略,走实物;NPC 累积此值,归来加门派 GrowScore)

---
