# `class` `UEastRimWorldCombatSet`

**Source header:** `EastRimWorld/AbilitySystem/Attributes/EastRimWorldCombatSet.h`

---

## Functional description (from header comments)

> UEastRimWorldCombatSet
>  Class that defines attributes that are necessary for applying damage or healing.
> Attribute examples include: damage, healing, attack power, and shield penetrations.

## Blueprint-exposed variables

### Property `MinAttack`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData MinAttack;` |

**Source comments:**

> 最小攻击

---

### Property `MaxAttack`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData MaxAttack;` |

**Source comments:**

> 最大攻击

---

### Property `CharacterAttackFrequency`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CharacterAttackFrequency;` |

**Source comments:**

> 角色攻击频率

---

### Property `WeaponAttackFrequency`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData WeaponAttackFrequency;` |

**Source comments:**

> 武器攻击频率

---

### Property `AttackRange`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData AttackRange;` |

**Source comments:**

> 攻击射程

---

### Property `AttackAccuracy`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData AttackAccuracy;` |

**Source comments:**

> 角色攻击命中

---

### Property `PierceIncrease`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData PierceIncrease;` |

**Source comments:**

> 穿刺增幅

---

### Property `SlashIncrease`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData SlashIncrease;` |

**Source comments:**

> 切割增幅

---

### Property `BluntIncrease`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData BluntIncrease;` |

**Source comments:**

> 钝器增幅

---

### Property `PoisonIncrease`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData PoisonIncrease;` |

**Source comments:**

> 毒气增幅

---

### Property `TrueQiIncrease`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData TrueQiIncrease;` |

**Source comments:**

> 真气增幅

---

### Property `PierceCritical`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData PierceCritical;` |

**Source comments:**

> 穿刺暴击

---

### Property `SlashCritical`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData SlashCritical;` |

**Source comments:**

> 切割暴击

---

### Property `BluntCritical`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData BluntCritical;` |

**Source comments:**

> 钝器暴击

---

### Property `SubjoinPoisonAttack`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData SubjoinPoisonAttack;` |

**Source comments:**

> 附加毒气攻击力

---

### Property `SubjoinTrueQiAttack`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData SubjoinTrueQiAttack;` |

**Source comments:**

> 附加真气攻击力

---

### Property `DamageShieldEnhanceDamage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData DamageShieldEnhanceDamage;` |

**Source comments:**

> 罡气增伤 对方有罡气 我方伤害增强

---

### Property `PierceResistance`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData PierceResistance;` |

**Source comments:**

> 穿刺抗性

---

### Property `SlashResistance`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData SlashResistance;` |

**Source comments:**

> 切割抗性

---

### Property `BluntResistance`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData BluntResistance;` |

**Source comments:**

> 钝器抗性

---

### Property `PoisonResistance`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData PoisonResistance;` |

**Source comments:**

> 毒气抗性

---

### Property `TrueQiResistance`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData TrueQiResistance;` |

**Source comments:**

> 真气抗性

---

### Property `Recharging`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData Recharging;` |

**Source comments:**

> 回气

---

### Property `InternalStrength`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData InternalStrength;` |

**Source comments:**

> 内力

---

### Property `KnockBack`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData KnockBack;` |

**Source comments:**

> 硬直点数
> UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
> FGameplayAttributeData Stiffness;
> 击退点数

---

### Property `KnockDown`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData KnockDown;` |

**Source comments:**

> 倒地点数

---

### Property `KnockUp`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData KnockUp;` |

**Source comments:**

> 击飞点数

---

### Property `Dodge`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData Dodge;` |

**Source comments:**

> 闪避

---

### Property `KnockBackResistance`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData KnockBackResistance;` |

**Source comments:**

> 硬直抗性
> UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true))
> FGameplayAttributeData StiffnessResistance;
> 击退抗性

---

### Property `KnockDownResistance`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData KnockDownResistance;` |

**Source comments:**

> 倒地抗性

---

### Property `KnockUpResistance`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData KnockUpResistance;` |

**Source comments:**

> 击飞抗性

---

### Property `CriticalStrikeMinValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CriticalStrikeMinValue;` |

**Source comments:**

> 暴击影响数值最小值

---

### Property `CriticalStrikeMaxValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CriticalStrikeMaxValue;` |

**Source comments:**

> 暴击影响数值最大值

---

### Property `DamageType`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData DamageType;` |

**Source comments:**

> 伤害类型

---

### Property `ResistanceSupplement`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData ResistanceSupplement;` |

**Source comments:**

> 伤害计算时抗性补正

---

### Property `AttackIntensity`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData AttackIntensity;` |

**Source comments:**

> 攻击强度点数

---

### Property `NeiGongEffect`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData NeiGongEffect;` |

**Source comments:**

> 内功效果

---

### Property `QingGongEffect`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData QingGongEffect;` |

**Source comments:**

> 轻功效果

---

### Property `YingGongEffect`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData YingGongEffect;` |

**Source comments:**

> 硬功效果

---

### Property `NeiJinEffect`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData NeiJinEffect;` |

**Source comments:**

> 内劲效果

---

### Property `YuanChenEffect`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData YuanChenEffect;` |

**Source comments:**

> 远程效果

---

### Property `JinZhanEffect`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData JinZhanEffect;` |

**Source comments:**

> 近战效果

---

### Property `BuildingDamage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData BuildingDamage;` |

**Source comments:**

> 建筑物伤害

---

### Property `PierceFixedAttack`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData PierceFixedAttack;` |

**Source comments:**

> 穿刺增加的固定攻击力

---

### Property `SlashFixedAttack`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData SlashFixedAttack;` |

**Source comments:**

> 切割增加的固定攻击力

---

### Property `BluntFixedAttack`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData BluntFixedAttack;` |

**Source comments:**

> 钝器增加的固定攻击力

---

### Property `PoisonFixedAttack`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData PoisonFixedAttack;` |

**Source comments:**

> 毒气增加的固定攻击力

---

### Property `TrueQiFixedAttack`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData TrueQiFixedAttack;` |

**Source comments:**

> 真气增加的固定攻击力

---

### Property `CriticalIncreasedInjury`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CriticalIncreasedInjury;` |

**Source comments:**

> 增加的暴击伤害百分比

---

### Property `FinalDamageIncrease`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData FinalDamageIncrease;` |

**Source comments:**

> 最终伤害增幅

---

### Property `Defense`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData Defense;` |

**Source comments:**

> 防御

---

### Property `DefenseSupplement`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData DefenseSupplement;` |

**Source comments:**

> 防御修正

---

### Property `BaseCritical`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData BaseCritical;` |

**Source comments:**

> 基础暴击

---

### Property `BaseCriticalResistance`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Combat" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Combat", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData BaseCriticalResistance;` |

**Source comments:**

> 基础暴击抵抗

---
