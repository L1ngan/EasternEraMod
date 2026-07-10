# `struct` `FForceAttackTypeConfig`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 势力攻击行为配置

## 蓝图暴露变量

### 属性 `ForceAttackType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EForceAttackType](WorldStruct__EForceAttackType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EForceAttackType ForceAttackType = EForceAttackType::None;` |

**说明:**

> 攻击类型

---

### 属性 `SectFavorabilityChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SectFavorabilityChange = 0.f;` |

**说明:**

> 好感度变化 增加为正值 减少为负值

---
