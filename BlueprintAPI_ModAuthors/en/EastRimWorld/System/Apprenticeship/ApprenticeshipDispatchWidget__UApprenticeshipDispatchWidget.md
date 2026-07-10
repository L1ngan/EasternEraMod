# `class` `UApprenticeshipDispatchWidget`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipDispatchWidget.h`

---

## Functional description (from header comments)

> 派遣弹框控件基类 — 负责从 AApprenticeshipManager 查询城市奖励类型概览,
> 并按策划配置的优先级过滤后暴露给蓝图显示"特产"图标。
> 使用方式:
>   1. 在编辑器蓝图子类里填 SpecialOutputPriority(高→低排列期望展示的 Type)
>   2. 填 SpecialOutputDisplayText(可选;无配置则回退枚举 DisplayName)
>   3. 调 GetCitySpecialOutputs(CityGuid, MaxCount) 取文本列表绑定到 UI 控件

## Blueprint-exposed variables

### Property `SpecialOutputPriority`

| Field | Details |
|------|------|
| C++ type | TArray<[EApprenticeshipRewardType](ApprenticeshipRewardTypes__EApprenticeshipRewardType.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Apprenticeship|SpecialOutput" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apprenticeship|SpecialOutput") TArray<EApprenticeshipRewardType> SpecialOutputPriority;` |

**Notes:**

> 特产奖励类型优先级列表(高→低)。
> GetCitySpecialOutputs 按此顺序从城市奖励类型集合中过滤，
> 不在此列表的类型会被丢弃。

---

### Property `SpecialOutputDisplayText`

| Field | Details |
|------|------|
| C++ type | TMap<[EApprenticeshipRewardType](ApprenticeshipRewardTypes__EApprenticeshipRewardType.md), FText> |
| Reflection specifiers | BlueprintReadWrite, Category="Apprenticeship|SpecialOutput" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apprenticeship|SpecialOutput") TMap<EApprenticeshipRewardType, FText> SpecialOutputDisplayText;` |

**Notes:**

> 奖励类型 → 显示文本(可留空)。
> 有配置则用配置文本；否则 fallback 到枚举的 UMETA(DisplayName)。

---

### Property `FavorabilityTypeText`

| Field | Details |
|------|------|
| C++ type | TMap<[EForceFavorabilityType](../../WorldSystem/WorldStruct__EForceFavorabilityType.md), FText> |
| Reflection specifiers | BlueprintReadWrite, Category="Apprenticeship|Favorability" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apprenticeship|Favorability") TMap<EForceFavorabilityType, FText> FavorabilityTypeText;` |

**Notes:**

> 好感度档位 → 显示文本(中文映射,在蓝图 Class Defaults 里填)。
> GetCityFavorabilityText 用它把档位拼成 "数值(文本)";某档位没填则只显示数值。

---

## Blueprint-exposed functions

### Function `GetCitySpecialOutputs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship|SpecialOutput" |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |
| `2` | `int32 MaxCount =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|SpecialOutput") FText GetCitySpecialOutputs(FGuid CityGuid, int32 MaxCount = 2) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 返回给定城市按优先级过滤后、最多 MaxCount 条的"特产"显示文本。
> 逻辑:
>   1. 调 AApprenticeshipManager::GetCityRewardTypes(CityGuid) 取该城去重 RewardType 集合
>   2. 遍历 SpecialOutputPriority；当前 Type 在集合中则纳入结果
>   3. 结果达到 MaxCount 后停止
>   4. 文本优先用 SpecialOutputDisplayText；无配置则用枚举 DisplayName
> @param CityGuid  目标城市 Guid
> @param MaxCount  最多取几条(默认 2)

---

### Function `GetCityFavorabilityText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship|Favorability" |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Favorability") FText GetCityFavorabilityText(FGuid CityGuid) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 返回某城好感度展示文本,形如 "200(友好)"。
> 数值取自 GetDispatchCityPreview().Favorability;档位中文取自 FavorabilityTypeText 映射(蓝图配)。

---

### Function `GetDiscipleName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship|Disciple" |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DiscipleGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Disciple") FText GetDiscipleName(FGuid DiscipleGuid) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按弟子 Guid 取其显示名(选完角色后填 Txt_RoleName 用)

---

### Function `GetDiscipleAvatar`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship|Disciple" |
| Return type | `UTexture2D*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DiscipleGuid` | `FGuid` |
| `AvatarType` | [EDiscipleAvatarType](../../Struct/CharacterStruct__EDiscipleAvatarType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Disciple") UTexture2D* GetDiscipleAvatar(FGuid DiscipleGuid, EDiscipleAvatarType AvatarType) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按弟子 Guid + 立绘类型取头像贴图(选完角色后填 Img_AvatarPortrait 用;同步加载软引用)

---
