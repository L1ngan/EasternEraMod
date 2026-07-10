# `class` `UConsumableConfigAsset`

**Source header:** `EastRimWorld/System/Consumable/ConsumableConfigAsset.h`

---

## Functional description (from header comments)

> 耗材配置资产 — 仿 UApprenticeshipConfigAsset。
> 获取:AERW_GameModeBase::GetConsumableConfigAsset()
>      (GameConfigComponent 按 EGameDataAssetType::ConsumableConfiguration 索引;
>       需在 GameConfigComponent.GameDataAsset 里配 DA_ConsumableConfig 软引用)。

## Blueprint-exposed variables

### Property `TriggerCheckOnActionStart`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="耗材" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "耗材") TArray<FName> TriggerCheckOnActionStart;` |

**Notes:**

> 行为开始时需要检测耗材触发的行为ID(GOAP_Action_Data表行名) 只有登记在此的行为开始时才会尝试使用耗材

---

### Property `TriggerCheckOnActionEnd`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="耗材" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "耗材") TArray<FName> TriggerCheckOnActionEnd;` |

**Notes:**

> 行为结束时需要检测耗材触发的行为ID(GOAP_Action_Data表行名) 只有登记在此的行为结束时才会尝试使用耗材

---

### Property `ConsumableCommonCD`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="耗材" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "耗材") float ConsumableCommonCD = 30.f;` |

**Notes:**

> 耗材使用公共CD（秒）使用任意耗材后该角色在此时间内不能再使用任何耗材

---

### Property `ExperienceGameplayEffect`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UGameplayEffect>` |
| Reflection specifiers | BlueprintReadOnly, Category="耗材" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "耗材") TSoftClassPtr<UGameplayEffect> ExperienceGameplayEffect;` |

**Notes:**

> 武学经验效果使用的GE（Instant SetByCaller 经验GE 仿工作经验/丹药做法 由GrowUpSet拦截转为武学经验）

---

### Property `PermanentAttributeGameplayEffect`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UGameplayEffect>` |
| Reflection specifiers | BlueprintReadOnly, Category="耗材" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "耗材") TSoftClassPtr<UGameplayEffect> PermanentAttributeGameplayEffect;` |

**Notes:**

> 永久属性效果使用的GE（Infinite SetByCaller 属性GE 未配置时回退复用丹药属性GE ElixirAttributeGameplayEffect）

---
