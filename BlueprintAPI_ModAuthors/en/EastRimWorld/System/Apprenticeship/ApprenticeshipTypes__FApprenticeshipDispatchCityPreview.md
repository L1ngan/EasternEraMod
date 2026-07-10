# `struct` `FApprenticeshipDispatchCityPreview`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## Functional description (from header comments)

> 派遣面板 — 单座目的城的显示快照(好感 + 可获奖励类型概览)

## Blueprint-exposed variables

### Property `OwningForceName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|CityPreview" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|CityPreview") FText OwningForceName;` |

**Notes:**

> 隶属势力显示名

---

### Property `Favorability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|CityPreview" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|CityPreview") float Favorability = 0.f;` |

**Notes:**

> 与玩家势力的好感度数值

---

### Property `FavorabilityType`

| Field | Details |
|------|------|
| C++ type | [EForceFavorabilityType](../../WorldSystem/WorldStruct__EForceFavorabilityType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|CityPreview" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|CityPreview") EForceFavorabilityType FavorabilityType = EForceFavorabilityType::Neutrality;` |

**Notes:**

> 好感度档位

---

### Property `CityDisplayName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|CityPreview" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|CityPreview") FText CityDisplayName;` |

**Notes:**

> 前往地点(目标城市显示名)

---

### Property `RewardTypes`

| Field | Details |
|------|------|
| C++ type | TArray<[EApprenticeshipRewardType](ApprenticeshipRewardTypes__EApprenticeshipRewardType.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|CityPreview" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|CityPreview") TArray<EApprenticeshipRewardType> RewardTypes;` |

**Notes:**

> 该城所有事件去重后的奖励类型列表(供 UI 显示特产图标)

---
