# `struct` `FApprenticeshipDispatchCityPreview`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## 功能说明（来自头文件注释）

> 派遣面板 — 单座目的城的显示快照(好感 + 可获奖励类型概览)

## 蓝图暴露变量

### 属性 `OwningForceName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|CityPreview" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|CityPreview") FText OwningForceName;` |

**说明:**

> 隶属势力显示名

---

### 属性 `Favorability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|CityPreview" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|CityPreview") float Favorability = 0.f;` |

**说明:**

> 与玩家势力的好感度数值

---

### 属性 `FavorabilityType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EForceFavorabilityType](../../WorldSystem/WorldStruct__EForceFavorabilityType.md) |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|CityPreview" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|CityPreview") EForceFavorabilityType FavorabilityType = EForceFavorabilityType::Neutrality;` |

**说明:**

> 好感度档位

---

### 属性 `CityDisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|CityPreview" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|CityPreview") FText CityDisplayName;` |

**说明:**

> 前往地点(目标城市显示名)

---

### 属性 `RewardTypes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[EApprenticeshipRewardType](ApprenticeshipRewardTypes__EApprenticeshipRewardType.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|CityPreview" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|CityPreview") TArray<EApprenticeshipRewardType> RewardTypes;` |

**说明:**

> 该城所有事件去重后的奖励类型列表(供 UI 显示特产图标)

---
