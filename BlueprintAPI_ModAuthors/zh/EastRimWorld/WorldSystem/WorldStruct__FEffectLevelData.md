# `struct` `FEffectLevelData`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> GE等级信息

## 蓝图暴露变量

### 属性 `EffectLevelType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEffectLevelType](WorldStruct__EEffectLevelType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EEffectLevelType EffectLevelType = EEffectLevelType::FixedLevel;` |

**说明:**

> 等级来源类型

---

### 属性 `ExtraLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 ExtraLevel = 0;` |

**说明:**

> 额外等级 固定等级时直接使用该值 掌门/势力等级时在来源等级基础上加上该值

---
