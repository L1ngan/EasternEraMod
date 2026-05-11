# `struct` `FAnimalCultivationConfig`

**源码头文件：** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 动物修炼配置数据
> 每个怪物类型对应的修炼配置

## 蓝图暴露变量

### 属性 `MaxCultivationLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cultivation") int32 MaxCultivationLevel = 10;` |

**源码注释：**

> 最大修炼等级

---

### 属性 `ExperienceTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32, float>` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cultivation") TMap<int32, float> ExperienceTable;` |

**源码注释：**

> 经验值表（等级 -> 所需经验）
> 如果LevelUpgradeConfigs中对应等级的RequiredExperience为0，则使用此表中的经验值

---

### 属性 `LevelUpgradeConfigs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32, FAnimalCultivationLevelUpgrade>` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cultivation") TMap<int32, FAnimalCultivationLevelUpgrade> LevelUpgradeConfigs;` |

**源码注释：**

> 等级升级功能配置表（等级 -> 升级功能配置）
> 用于配置到达每个等级时增加的功能（经验值、行为树、Goals、能力、Buff、属性、掉落组、模型等）

---
