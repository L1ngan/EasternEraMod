# `struct` `FAutoUseCharacterRule`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## 功能说明（来自头文件注释）

> 自动释放战略规则

## 蓝图暴露变量

### 属性 `AutoUseCharacterType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EAutoUseCharacterType](../../Struct/CommonEnum__EAutoUseCharacterType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EAutoUseCharacterType AutoUseCharacterType = EAutoUseCharacterType::None;` |

**说明:**

> 自动使用的类型

---

### 属性 `BattleType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EBattleType](../../Struct/CommonEnum__EBattleType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EBattleType BattleType = EBattleType::None;` |

**说明:**

> 战场类型

---

### 属性 `UseIntervalMinTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float UseIntervalMinTime = 10.f;` |

**说明:**

> 使用的最小间隔时间

---

### 属性 `UseIntervalMaxTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float UseIntervalMaxTime = 10.f;` |

**说明:**

> 使用的最大间隔时间

---

### 属性 `NeedResourcePoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "AutoUseCharacterType == EAutoUseCharacterType::ResourcePriority",EditConditionHides)) int32 NeedResourcePoint = 0;` |

**说明:**

> 资源优先时资源需达到的值

---

### 属性 `DetectionIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "AutoUseCharacterType == EAutoUseCharacterType::LevelPriority",EditConditionHides)) float DetectionIntervalTime = 3.f;` |

**说明:**

> 检测间隔时间

---

### 属性 `WaitTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "AutoUseCharacterType == EAutoUseCharacterType::ResourcePriority",EditConditionHides)) float WaitTime = 10.f;` |

**说明:**

> 等待时间

---
