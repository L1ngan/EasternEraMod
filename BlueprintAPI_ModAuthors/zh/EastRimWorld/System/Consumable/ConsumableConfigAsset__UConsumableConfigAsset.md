# `class` `UConsumableConfigAsset`

**源码头文件:** `EastRimWorld/System/Consumable/ConsumableConfigAsset.h`

---

## 功能说明（来自头文件注释）

> 耗材配置资产 — 仿 UApprenticeshipConfigAsset。
> 获取:AERW_GameModeBase::GetConsumableConfigAsset()
>      (GameConfigComponent 按 EGameDataAssetType::ConsumableConfiguration 索引;
>       需在 GameConfigComponent.GameDataAsset 里配 DA_ConsumableConfig 软引用)。

## 蓝图暴露变量

### 属性 `TriggerCheckOnActionStart`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="耗材" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "耗材") TArray<FName> TriggerCheckOnActionStart;` |

**说明:**

> 行为开始时需要检测耗材触发的行为ID(GOAP_Action_Data表行名) 只有登记在此的行为开始时才会尝试使用耗材

---

### 属性 `TriggerCheckOnActionEnd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="耗材" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "耗材") TArray<FName> TriggerCheckOnActionEnd;` |

**说明:**

> 行为结束时需要检测耗材触发的行为ID(GOAP_Action_Data表行名) 只有登记在此的行为结束时才会尝试使用耗材

---

### 属性 `ConsumableCommonCD`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="耗材" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "耗材") float ConsumableCommonCD = 30.f;` |

**说明:**

> 耗材使用公共CD（秒）使用任意耗材后该角色在此时间内不能再使用任何耗材

---

### 属性 `ExperienceGameplayEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UGameplayEffect>` |
| 反射说明符 | BlueprintReadOnly, Category="耗材" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "耗材") TSoftClassPtr<UGameplayEffect> ExperienceGameplayEffect;` |

**说明:**

> 武学经验效果使用的GE（Instant SetByCaller 经验GE 仿工作经验/丹药做法 由GrowUpSet拦截转为武学经验）

---

### 属性 `PermanentAttributeGameplayEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UGameplayEffect>` |
| 反射说明符 | BlueprintReadOnly, Category="耗材" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "耗材") TSoftClassPtr<UGameplayEffect> PermanentAttributeGameplayEffect;` |

**说明:**

> 永久属性效果使用的GE（Infinite SetByCaller 属性GE 未配置时回退复用丹药属性GE ElixirAttributeGameplayEffect）

---
