# `struct` `FCharacterTemperatureInfluence`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 角色温度影响

## 蓝图暴露变量

### 属性 `CharacterTemperatureStateType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ECharacterTemperatureStateType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) ECharacterTemperatureStateType CharacterTemperatureStateType = ECharacterTemperatureStateType::Normal;` |

**源码注释:**

> 温度区间分类

---

### 属性 `MinTimeOfDuration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinTimeOfDuration = 0.f;` |

**源码注释:**

> 最小持续时间

---

### 属性 `MaxTimeOfDuration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTimeOfDuration = 0.f;` |

**源码注释:**

> 最大持续时间

---

### 属性 `TemperatureBuff`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> TemperatureBuff;` |

**源码注释:**

> 触发的buff

---

### 属性 `TemperatureExamined`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,EBodyOrganType>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName,EBodyOrganType> TemperatureExamined;` |

**源码注释:**

> 触发的伤势 伤势ID， 伤势类型

---
