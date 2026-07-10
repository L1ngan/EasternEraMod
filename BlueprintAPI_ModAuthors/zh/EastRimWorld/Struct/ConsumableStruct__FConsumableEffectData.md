# `struct` `FConsumableEffectData`

**源码头文件:** `EastRimWorld/Struct/ConsumableStruct.h`

---

## 功能说明（来自头文件注释）

> 耗材效果

## 蓝图暴露变量

### 属性 `EffectType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EConsumableEffectType](ConsumableStruct__EConsumableEffectType.md) |
| 反射说明符 | BlueprintReadWrite, Category="ConsumableEffect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableEffect") EConsumableEffectType EffectType = EConsumableEffectType::None;` |

**说明:**

> 效果类型

---

### 属性 `ExperienceAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadWrite, Category="ConsumableEffect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableEffect", meta=(EditConditionHides,EditCondition="EffectType == EConsumableEffectType::MartialArtsExperience")) TMap<FGameplayAttribute,float> ExperienceAttributes;` |

**说明:**

> 武学经验（属性->数值 构建动态GE施加给自身 仿丹药做法）

---

### 属性 `PermanentAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadWrite, Category="ConsumableEffect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableEffect", meta=(EditConditionHides,EditCondition="EffectType == EConsumableEffectType::PermanentAttribute")) TMap<FGameplayAttribute,float> PermanentAttributes;` |

**说明:**

> 永久属性（属性集->值 记录到FCharacterSaveData 每次获得时重新构建GE施加给自身）

---

### 属性 `PermanentMaxCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="ConsumableEffect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableEffect", meta=(EditConditionHides,EditCondition="EffectType == EConsumableEffectType::PermanentAttribute")) int32 PermanentMaxCount = 1;` |

**说明:**

> 相同ID永久属性效果的获取上限次数

---

### 属性 `BuffID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="ConsumableEffect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableEffect", meta=(EditConditionHides,EditCondition="EffectType == EConsumableEffectType::Buff")) FName BuffID;` |

**说明:**

> 临时buff的ID（CommonBuff表 生效时直接添加给自身）

---

### 属性 `CharacteristicID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="ConsumableEffect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableEffect", meta=(EditConditionHides,EditCondition="EffectType == EConsumableEffectType::Characteristic")) FName CharacteristicID;` |

**说明:**

> 新增特性的ID（CharacteristicInfo表 直接添加给自身）

---

### 属性 `Conditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="ConsumableEffect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableEffect") TArray<FName> Conditions;` |

**说明:**

> 效果生效条件（耗材条件表ID 需全部满足 主效果不满足则跳过 附加效果不满足则不参与权重随机）

---
