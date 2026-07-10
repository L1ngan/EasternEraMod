# `class` `UEastRimWorldHealthSet`

**Source header:** `EastRimWorld/AbilitySystem/Attributes/EastRimWorldHealthSet.h`

---

## Functional description (from header comments)

> Health attribute set: overall health, per-body-part health, damage types, survival attributes (nutrition/tiredness/happiness/mood) and death resolution logic

## Blueprint-exposed variables

### Property `Health`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData Health;` |

**Notes:**

> Current health value

---

### Property `CurMaxHealth`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurMaxHealth;` |

**Notes:**

> Current max health; changes when body parts are injured

---

### Property `MaxHealth`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData MaxHealth;` |

**Notes:**

> Max health computed from body parts

---

### Property `MoveSpeed`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData MoveSpeed;` |

**Notes:**

> Move speed

---

### Property `RunSpeed`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RunSpeed;` |

**Notes:**

> Run speed

---

### Property `SanitationInfluence`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData SanitationInfluence;` |

**Notes:**

> 卫生影响

---

### Property `FreeWeight`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData FreeWeight;` |

**Notes:**

> 携带能力

---

### Property `ToxicResistance`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData ToxicResistance;` |

**Notes:**

> 毒抗

---

### Property `MinPreferenceTemperature`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData MinPreferenceTemperature;` |

**Notes:**

> 适宜的温度

---

### Property `MaxPreferenceTemperature`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData MaxPreferenceTemperature;` |

**Notes:**

> 适宜的温度

---

### Property `Immunity`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData Immunity;` |

**Notes:**

> 免疫力

---

### Property `BreakdownThresholdChangeValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData BreakdownThresholdChangeValue;` |

**Notes:**

> 崩溃阈值变化值

---

### Property `PainThreshold`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData PainThreshold;` |

**Notes:**

> 疼痛阈值

---

### Property `ForagingAmount`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData ForagingAmount;` |

**Notes:**

> 觅食量

---

### Property `FeedingSpeed`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData FeedingSpeed;` |

**Notes:**

> 进食速度

---

### Property `ReproductiveCapacity`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData ReproductiveCapacity;` |

**Notes:**

> 繁育能力

---

### Property `CrawlSpeed`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CrawlSpeed;` |

**Notes:**

> 爬行速度

---

### Property `NutritionValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData NutritionValue;` |

**Notes:**

> 营养值

---

### Property `MaxNutritionValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData MaxNutritionValue;` |

**Notes:**

> 营养值上限

---

### Property `NutritionValueReduceSpeed`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData NutritionValueReduceSpeed;` |

**Notes:**

> 营养值减小速度

---

### Property `NutritionValueReduceSpeedPercent`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData NutritionValueReduceSpeedPercent;` |

**Notes:**

> 营养值减小速度百分比

---

### Property `NutritionValueIncreaseSpeed`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData NutritionValueIncreaseSpeed;` |

**Notes:**

> 营养值增加速度

---

### Property `NutritionValueIncreaseSpeedPercent`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData NutritionValueIncreaseSpeedPercent;` |

**Notes:**

> 营养值增加速度百分比

---

### Property `TiredValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData TiredValue;` |

**Notes:**

> 疲劳值

---

### Property `MaxTiredValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData MaxTiredValue;` |

**Notes:**

> 疲劳值上限

---

### Property `TiredValueReduceSpeed`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData TiredValueReduceSpeed;` |

**Notes:**

> 疲劳值减小速度

---

### Property `TiredValueReduceSpeedPercent`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData TiredValueReduceSpeedPercent;` |

**Notes:**

> 疲劳值减小速度百分比

---

### Property `TiredValueIncreaseSpeed`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData TiredValueIncreaseSpeed;` |

**Notes:**

> 疲劳值增加速度

---

### Property `TiredValueIncreaseSpeedPercent`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData TiredValueIncreaseSpeedPercent;` |

**Notes:**

> 疲劳值增加速度百分比

---

### Property `HappyValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData HappyValue;` |

**Notes:**

> 娱乐值

---

### Property `MaxHappyValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData MaxHappyValue;` |

**Notes:**

> 娱乐上限

---

### Property `HappyValueReduceSpeed`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData HappyValueReduceSpeed;` |

**Notes:**

> 娱乐值减小速度

---

### Property `HappyValueReduceSpeedPercent`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData HappyValueReduceSpeedPercent;` |

**Notes:**

> 娱乐值减小速度百分比

---

### Property `HappyValueIncreaseSpeed`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData HappyValueIncreaseSpeed;` |

**Notes:**

> 娱乐值增加速度

---

### Property `HappyValueIncreaseSpeedPercent`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData HappyValueIncreaseSpeedPercent;` |

**Notes:**

> 娱乐值增加速度百分比

---

### Property `MoodValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData MoodValue;` |

**Notes:**

> 心情值

---

### Property `Inspiration`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData Inspiration;` |

**Notes:**

> 感悟值

---

### Property `AnimalMaxGrowthValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData AnimalMaxGrowthValue;` |

**Notes:**

> 动物最大成长值

---

### Property `AnimalCurGrowthValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData AnimalCurGrowthValue;` |

**Notes:**

> 动物当前成长值

---

### Property `AnimalAddGrowthValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData AnimalAddGrowthValue;` |

**Notes:**

> 动物增长速度

---

### Property `MaxInspiration`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData MaxInspiration;` |

**Notes:**

> 最大感悟值

---

### Property `MoodTargetValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData MoodTargetValue;` |

**Notes:**

> 心情目标值

---

### Property `Healing`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="EastRimWorld|Health", Meta=(AllowPrivateAccess=true)) FGameplayAttributeData Healing;` |

**Notes:**

> Healing meta attribute used to resolve health recovery

---

### Property `BaseHeal`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="EastRimWorld|Health", Meta=(HideFromModifiers,AllowPrivateAccess=true)) FGameplayAttributeData BaseHeal;` |

**Notes:**

> Base heal meta attribute (hidden from modifiers)

---

### Property `Damage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="EastRimWorld|Health", Meta=(AllowPrivateAccess=true)) FGameplayAttributeData Damage;` |

**Notes:**

> 给予的普通伤害

---

### Property `OperationalStatus`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData OperationalStatus;` |

**Notes:**

> 操作相关状况

---

### Property `VisualStatus`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData VisualStatus;` |

**Notes:**

> 视觉相关状况

---

### Property `HearingStatus`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData HearingStatus;` |

**Notes:**

> 视觉相关状况

---

### Property `EatingStatus`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData EatingStatus;` |

**Notes:**

> 进食相关状况

---

### Property `LanguageStatus`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LanguageStatus;` |

**Notes:**

> 语言相关状况

---

### Property `BreathingStatus`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData BreathingStatus;` |

**Notes:**

> 呼吸相关状况

---

### Property `MovingStatus`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData MovingStatus;` |

**Notes:**

> 移动相关状况

---

### Property `ReproductiveStatus`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData ReproductiveStatus;` |

**Notes:**

> 生育相关状况

---

### Property `BloodFiltrationStatus`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData BloodFiltrationStatus;` |

**Notes:**

> 血液过滤相关状况

---

### Property `DigestiveStatus`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData DigestiveStatus;` |

**Notes:**

> 消耗相关状况

---

### Property `PierceDamage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData PierceDamage;` |

**Notes:**

> 穿刺伤害 不可直接配置

---

### Property `SlashDamage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData SlashDamage;` |

**Notes:**

> 切割伤害 不可直接配置

---

### Property `BluntDamage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData BluntDamage;` |

**Notes:**

> 钝器伤害 不可直接配置

---

### Property `PoisonDamage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData PoisonDamage;` |

**Notes:**

> 毒气伤害 不可直接配置

---

### Property `TrueQiDamage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData TrueQiDamage;` |

**Notes:**

> 真气伤害 不可直接配置

---

### Property `PierceCriticalDamage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (HideFromModifiers,AllowPrivateAccess = true)) FGameplayAttributeData PierceCriticalDamage;` |

**Notes:**

> 穿刺暴击伤害 不可直接配置

---

### Property `SlashCriticalDamage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (HideFromModifiers,AllowPrivateAccess = true)) FGameplayAttributeData SlashCriticalDamage;` |

**Notes:**

> 切割暴击伤害 不可直接配置

---

### Property `BluntCriticalDamage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (HideFromModifiers,AllowPrivateAccess = true)) FGameplayAttributeData BluntCriticalDamage;` |

**Notes:**

> 钝器暴击伤害 不可直接配置

---

### Property `PoisonCriticalDamage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (HideFromModifiers,AllowPrivateAccess = true)) FGameplayAttributeData PoisonCriticalDamage;` |

**Notes:**

> 毒素暴击伤害 不可直接配置

---

### Property `TrueQiCriticalDamage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (HideFromModifiers,AllowPrivateAccess = true)) FGameplayAttributeData TrueQiCriticalDamage;` |

**Notes:**

> 真气暴击伤害 不可直接配置

---

### Property `RemoteDamage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RemoteDamage;` |

**Notes:**

> 远程伤害 不可直接配置

---

### Property `RemoteCriticalDamage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (HideFromModifiers,AllowPrivateAccess = true)) FGameplayAttributeData RemoteCriticalDamage;` |

**Notes:**

> 远程暴击伤害 不可直接配置

---

### Property `TrueDamage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData TrueDamage;` |

**Notes:**

> 真实伤害 不可直接配置（无视抗性/不吃增幅，独立输出不借用穿刺；真实伤害不可暴击）

---

### Property `PerceptionTemperature`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData PerceptionTemperature;` |

**Notes:**

> 体感温度

---

### Property `DamageShield`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData DamageShield;` |

**Notes:**

> 罡气护盾

---

### Property `DamageShieldMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData DamageShieldMaxLife;` |

**Notes:**

> 罡气护盾 最大血量

---

### Property `DamageShieldRecoverSpeed`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData DamageShieldRecoverSpeed;` |

**Notes:**

> 罡气护盾 恢复速度

---

### Property `DamageShieldRecoverSpeedPercent`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData DamageShieldRecoverSpeedPercent;` |

**Notes:**

> 罡气护盾 恢复速度百分比

---

### Property `Head`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData Head;` |

**Notes:**

> 头

---

### Property `CurHeadMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurHeadMaxLife;` |

**Notes:**

> 头当前最大血量

---

### Property `HeadMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData HeadMaxLife;` |

**Notes:**

> 头 最大血量

---

### Property `LeftEye`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LeftEye;` |

**Notes:**

> 左眼睛

---

### Property `CurLeftEyeMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurLeftEyeMaxLife;` |

**Notes:**

> 左眼睛

---

### Property `LeftEyeMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LeftEyeMaxLife;` |

**Notes:**

> 左眼睛 最大血量

---

### Property `RightEye`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RightEye;` |

**Notes:**

> 右眼睛

---

### Property `CurRightEyeMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurRightEyeMaxLife;` |

**Notes:**

> Current max life of the right eye body part

---

### Property `RightEyeMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RightEyeMaxLife;` |

**Notes:**

> 右眼睛 最大血量

---

### Property `LeftEar`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LeftEar;` |

**Notes:**

> 左耳朵

---

### Property `CurLeftEarMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurLeftEarMaxLife;` |

**Notes:**

> Current max life of the left ear body part

---

### Property `LeftEarMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LeftEarMaxLife;` |

**Notes:**

> 左耳朵 最大血量

---

### Property `RightEar`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RightEar;` |

**Notes:**

> 右耳朵

---

### Property `CurRightEarMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurRightEarMaxLife;` |

**Notes:**

> Current max life of the right ear body part

---

### Property `RightEarMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RightEarMaxLife;` |

**Notes:**

> 右耳朵 最大血量

---

### Property `Nose`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData Nose;` |

**Notes:**

> 鼻子

---

### Property `CurNoseMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurNoseMaxLife;` |

**Notes:**

> Current max life of the nose body part

---

### Property `NoseMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData NoseMaxLife;` |

**Notes:**

> 鼻子 最大血量

---

### Property `Mouth`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData Mouth;` |

**Notes:**

> 口

---

### Property `CurMouthMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurMouthMaxLife;` |

**Notes:**

> Current max life of the mouth body part

---

### Property `MouthMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData MouthMaxLife;` |

**Notes:**

> 口 最大血量

---

### Property `Body`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData Body;` |

**Notes:**

> 躯干

---

### Property `CurBodyMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurBodyMaxLife;` |

**Notes:**

> 当前躯干血上限

---

### Property `BodyMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData BodyMaxLife;` |

**Notes:**

> 躯干 最大血量

---

### Property `Viscera`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData Viscera;` |

**Notes:**

> 内脏

---

### Property `CurVisceraMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurVisceraMaxLife;` |

**Notes:**

> Current max life of the viscera body part

---

### Property `VisceraMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData VisceraMaxLife;` |

**Notes:**

> 内脏 最大血量

---

### Property `Dantian`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData Dantian;` |

**Notes:**

> 丹田

---

### Property `CurDantianMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurDantianMaxLife;` |

**Notes:**

> Current max life of the Dantian body part

---

### Property `DantianMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData DantianMaxLife;` |

**Notes:**

> 丹田 最大血量

---

### Property `XiaYin`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData XiaYin;` |

**Notes:**

> 下阴

---

### Property `CurXiaYinMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurXiaYinMaxLife;` |

**Notes:**

> Current max life of the groin (XiaYin) body part

---

### Property `XiaYinMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData XiaYinMaxLife;` |

**Notes:**

> 下阴 最大血量

---

### Property `LeftArm`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LeftArm;` |

**Notes:**

> 左臂

---

### Property `CurLeftArmMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurLeftArmMaxLife;` |

**Notes:**

> Current max life of the left arm body part

---

### Property `LeftArmMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LeftArmMaxLife;` |

**Notes:**

> 左臂 最大血量

---

### Property `RightArm`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RightArm;` |

**Notes:**

> 右臂

---

### Property `CurRightArmMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurRightArmMaxLife;` |

**Notes:**

> Current max life of the right arm body part

---

### Property `RightArmMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RightArmMaxLife;` |

**Notes:**

> 右臂 最大血量

---

### Property `LeftLeg`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LeftLeg;` |

**Notes:**

> 左腿

---

### Property `CurLeftLegMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurLeftLegMaxLife;` |

**Notes:**

> Current max life of the left leg body part

---

### Property `LeftLegMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LeftLegMaxLife;` |

**Notes:**

> 左腿 最大血量

---

### Property `RightLeg`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RightLeg;` |

**Notes:**

> 右腿

---

### Property `CurRightLegMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurRightLegMaxLife;` |

**Notes:**

> Current max life of the right leg body part

---

### Property `RightLegMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RightLegMaxLife;` |

**Notes:**

> 右腿 最大血量

---

### Property `LeftFoot`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LeftFoot;` |

**Notes:**

> 左脚

---

### Property `CurLeftFootMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurLeftFootMaxLife;` |

**Notes:**

> Current max life of the left foot body part

---

### Property `LeftFootMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LeftFootMaxLife;` |

**Notes:**

> 左脚 最大血量

---

### Property `RightFoot`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RightFoot;` |

**Notes:**

> 右脚

---

### Property `CurRightFootMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CurRightFootMaxLife;` |

**Notes:**

> Current max life of the right foot body part

---

### Property `RightFootMaxLife`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RightFootMaxLife;` |

**Notes:**

> 右脚 最大血量

---

### Property `RobotEnergyMaxValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RobotEnergyMaxValue;` |

**Notes:**

> 机关人最大能源

---

### Property `RobotEnergyCurValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RobotEnergyCurValue;` |

**Notes:**

> 机关人当前能源

---

### Property `RobotEnergyIntervalStanbyRecoveryValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RobotEnergyIntervalStanbyRecoveryValue;` |

**Notes:**

> 机关人单位时间待机恢复的能源

---

### Property `RobotEnergyIntervalStanbyRecoverySpeed`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RobotEnergyIntervalStanbyRecoverySpeed;` |

**Notes:**

> 机关人单位时间待机恢复的能源速度

---

### Property `RobotEnergyIntervalInBuildingRecoveryValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RobotEnergyIntervalInBuildingRecoveryValue;` |

**Notes:**

> 机关人单位时间在维修建筑恢复的能源

---

### Property `RobotEnergyIntervalInBuildingRecoverySpeed`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RobotEnergyIntervalInBuildingRecoverySpeed;` |

**Notes:**

> 机关人单位时间在维修建筑恢复的能源速度

---

### Property `RobotEnergyIntervalExpendValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RobotEnergyIntervalExpendValue;` |

**Notes:**

> 机关人单位时间消耗的能源

---

### Property `RobotEnergyIntervalExpendSpeed`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RobotEnergyIntervalExpendSpeed;` |

**Notes:**

> 机关人单位时间消耗的能源速度

---

### Property `BaseHealingRate`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData BaseHealingRate;` |

**Notes:**

> 基础愈合速度

---

### Property `BleedEffectValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData BleedEffectValue;` |

**Notes:**

> 流血效果数值(部位每个小时失去的健康值)

---

### Property `WeaknessEffectValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData WeaknessEffectValue;` |

**Notes:**

> 虚弱效果数值（角色攻击类属性降低）

---

### Property `SpoilEffectValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData SpoilEffectValue;` |

**Notes:**

> 腐坏效果数值（部位每天降低健康值）

---

### Property `ChangeATKAttribute`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData ChangeATKAttribute;` |

**Notes:**

> 改变攻击力属性

---

### Property `ChangeMAEffect`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData ChangeMAEffect;` |

**Notes:**

> 改变武学值

---

### Property `CanTreatCount`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData CanTreatCount;` |

**Notes:**

> 一次可以医治的伤势数量

---

### Property `AntDrugResistance`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData AntDrugResistance;` |

**Notes:**

> 抗耐药性

---

### Property `InjuryOrgan`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData InjuryOrgan;` |

**Notes:**

> 伤势部位

---

### Property `DamagePercentage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData DamagePercentage;` |

**Notes:**

> 伤势百分比（目前用于伤害部位时的伤害百分比）

---

### Property `LossMaxHeadPercentage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LossMaxHeadPercentage;` |

**Notes:**

> 损失头部血量百分比

---

### Property `LossMaxLeftEyePercentage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LossMaxLeftEyePercentage;` |

**Notes:**

> 损失左眼睛血量百分比

---

### Property `LossMaxRightEyePercentage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LossMaxRightEyePercentage;` |

**Notes:**

> 损失右眼睛血量百分比

---

### Property `LossMaxLeftEarPercentage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LossMaxLeftEarPercentage;` |

**Notes:**

> 损失左耳朵血量百分比

---

### Property `LossMaxRightEarPercentage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LossMaxRightEarPercentage;` |

**Notes:**

> 损失右耳朵血量百分比

---

### Property `LossMaxNosePercentage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LossMaxNosePercentage;` |

**Notes:**

> 损失鼻子血量百分比

---

### Property `LossMaxMouthPercentage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LossMaxMouthPercentage;` |

**Notes:**

> 损失口血量百分比

---

### Property `LossMaxBodyPercentage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LossMaxBodyPercentage;` |

**Notes:**

> 损失躯干血量百分比

---

### Property `LossMaxVisceraPercentage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LossMaxVisceraPercentage;` |

**Notes:**

> 损失内脏血量百分比

---

### Property `LossMaxDantianPercentage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LossMaxDantianPercentage;` |

**Notes:**

> 损失丹田血量百分比

---

### Property `LossMaxXiaYinPercentage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LossMaxXiaYinPercentage;` |

**Notes:**

> 损失下阴血量百分比

---

### Property `LossMaxLeftArmPercentage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LossMaxLeftArmPercentage;` |

**Notes:**

> 损失左臂血量百分比

---

### Property `LossMaxRightArmPercentage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LossMaxRightArmPercentage;` |

**Notes:**

> 损失右臂血量百分比

---

### Property `LossMaxLeftLegPercentage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LossMaxLeftLegPercentage;` |

**Notes:**

> 损失左腿血量百分比

---

### Property `LossMaxRightLegPercentage`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData LossMaxRightLegPercentage;` |

**Notes:**

> 损失右腿血量百分比

---

### Property `RotValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData RotValue;` |

**Notes:**

> 腐烂值

---

### Property `MaxRotValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData MaxRotValue;` |

**Notes:**

> 最大腐烂值

---

### Property `Species`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData Species;` |

**Notes:**

> 物种

---

### Property `KnockDownValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData KnockDownValue;` |

**Notes:**

> 晕倒值

---

### Property `MaxKnockDownValue`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttributeData` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Health" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EastRimWorld|Health", Meta = (AllowPrivateAccess = true)) FGameplayAttributeData MaxKnockDownValue;` |

**Notes:**

> Maximum knock-down value

---

## Blueprint-exposed functions

### Function `CalAttackedOrgan`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FCharacterOrganConfig](../../Struct/CharacterStruct__FCharacterOrganConfig.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayAbilityInfo` | `const FGameAbilityStruct &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FCharacterOrganConfig CalAttackedOrgan(const FGameAbilityStruct & GameplayAbilityInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算被当前攻击技能攻击的命中器官(根据器官权重计算)

---

### Function `CalAttackedShared`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AttackedMainOrgan` | const [FCharacterOrganConfig](../../Struct/CharacterStruct__FCharacterOrganConfig.md) & |
| `SharedOrgan` | [FCharacterOrganConfig](../../Struct/CharacterStruct__FCharacterOrganConfig.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float CalAttackedShared(const FCharacterOrganConfig & AttackedMainOrgan, FCharacterOrganConfig & SharedOrgan);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算伤害分摊的器官和分摊比例(根据分摊权重计算)

---

### Function `CalInjuryFrom`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FName` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OrganConfig` | const [FCharacterOrganConfig](../../Struct/CharacterStruct__FCharacterOrganConfig.md) & |
| `DamageType` | `EDamageType` |
| `HurtLevel` | [EHurtLevel](../../Struct/CharacterStruct__EHurtLevel.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FName CalInjuryFrom(const FCharacterOrganConfig & OrganConfig, EDamageType DamageType, EHurtLevel HurtLevel) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算伤势来源

---

### Function `CalHurtLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [EHurtLevel](../../Struct/CharacterStruct__EHurtLevel.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DamageDone` | `float` |
| `MaxLife` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) EHurtLevel CalHurtLevel(float DamageDone, float MaxLife);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算伤害程度

---
