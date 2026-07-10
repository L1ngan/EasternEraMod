# `class` `UApprenticeshipDispatchWidget`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipDispatchWidget.h`

---

## 功能说明（来自头文件注释）

> 派遣弹框控件基类 — 负责从 AApprenticeshipManager 查询城市奖励类型概览,
> 并按策划配置的优先级过滤后暴露给蓝图显示"特产"图标。
> 使用方式:
>   1. 在编辑器蓝图子类里填 SpecialOutputPriority(高→低排列期望展示的 Type)
>   2. 填 SpecialOutputDisplayText(可选;无配置则回退枚举 DisplayName)
>   3. 调 GetCitySpecialOutputs(CityGuid, MaxCount) 取文本列表绑定到 UI 控件

## 蓝图暴露变量

### 属性 `SpecialOutputPriority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[EApprenticeshipRewardType](ApprenticeshipRewardTypes__EApprenticeshipRewardType.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Apprenticeship|SpecialOutput" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apprenticeship|SpecialOutput") TArray<EApprenticeshipRewardType> SpecialOutputPriority;` |

**说明:**

> 特产奖励类型优先级列表(高→低)。
> GetCitySpecialOutputs 按此顺序从城市奖励类型集合中过滤，
> 不在此列表的类型会被丢弃。

---

### 属性 `SpecialOutputDisplayText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EApprenticeshipRewardType](ApprenticeshipRewardTypes__EApprenticeshipRewardType.md), FText> |
| 反射说明符 | BlueprintReadWrite, Category="Apprenticeship|SpecialOutput" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apprenticeship|SpecialOutput") TMap<EApprenticeshipRewardType, FText> SpecialOutputDisplayText;` |

**说明:**

> 奖励类型 → 显示文本(可留空)。
> 有配置则用配置文本；否则 fallback 到枚举的 UMETA(DisplayName)。

---

### 属性 `FavorabilityTypeText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EForceFavorabilityType](../../WorldSystem/WorldStruct__EForceFavorabilityType.md), FText> |
| 反射说明符 | BlueprintReadWrite, Category="Apprenticeship|Favorability" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apprenticeship|Favorability") TMap<EForceFavorabilityType, FText> FavorabilityTypeText;` |

**说明:**

> 好感度档位 → 显示文本(中文映射,在蓝图 Class Defaults 里填)。
> GetCityFavorabilityText 用它把档位拼成 "数值(文本)";某档位没填则只显示数值。

---

## 蓝图暴露函数

### 函数 `GetCitySpecialOutputs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship|SpecialOutput" |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |
| `2` | `int32 MaxCount =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|SpecialOutput") FText GetCitySpecialOutputs(FGuid CityGuid, int32 MaxCount = 2) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 返回给定城市按优先级过滤后、最多 MaxCount 条的"特产"显示文本。
> 逻辑:
>   1. 调 AApprenticeshipManager::GetCityRewardTypes(CityGuid) 取该城去重 RewardType 集合
>   2. 遍历 SpecialOutputPriority；当前 Type 在集合中则纳入结果
>   3. 结果达到 MaxCount 后停止
>   4. 文本优先用 SpecialOutputDisplayText；无配置则用枚举 DisplayName
> @param CityGuid  目标城市 Guid
> @param MaxCount  最多取几条(默认 2)

---

### 函数 `GetCityFavorabilityText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship|Favorability" |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Favorability") FText GetCityFavorabilityText(FGuid CityGuid) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 返回某城好感度展示文本,形如 "200(友好)"。
> 数值取自 GetDispatchCityPreview().Favorability;档位中文取自 FavorabilityTypeText 映射(蓝图配)。

---

### 函数 `GetDiscipleName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship|Disciple" |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DiscipleGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Disciple") FText GetDiscipleName(FGuid DiscipleGuid) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按弟子 Guid 取其显示名(选完角色后填 Txt_RoleName 用)

---

### 函数 `GetDiscipleAvatar`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship|Disciple" |
| 返回类型 | `UTexture2D*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DiscipleGuid` | `FGuid` |
| `AvatarType` | [EDiscipleAvatarType](../../Struct/CharacterStruct__EDiscipleAvatarType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Disciple") UTexture2D* GetDiscipleAvatar(FGuid DiscipleGuid, EDiscipleAvatarType AvatarType) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按弟子 Guid + 立绘类型取头像贴图(选完角色后填 Img_AvatarPortrait 用;同步加载软引用)

---
