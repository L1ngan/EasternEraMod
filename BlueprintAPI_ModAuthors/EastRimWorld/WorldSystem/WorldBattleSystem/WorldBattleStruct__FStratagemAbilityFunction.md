# `struct` `FStratagemAbilityFunction`

**源码头文件：** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## 功能说明（来自头文件注释）

> 战略技能

## 蓝图暴露变量

### 属性 `AbilityFunctionType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EAbilityFunctionType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) EAbilityFunctionType AbilityFunctionType = EAbilityFunctionType::None;` |

**源码注释：**

> 战略技能功能

---

### 属性 `Parameter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float Parameter = 0.f;` |

**源码注释：**

> 参数 根据不同功能类型填不同值

---
