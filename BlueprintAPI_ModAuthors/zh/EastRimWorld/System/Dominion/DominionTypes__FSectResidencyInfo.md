# `struct` `FSectResidencyInfo`

**源码头文件:** `EastRimWorld/System/Dominion/DominionTypes.h`

---

## 功能说明（来自头文件注释）

> 一个附属门派在某城的进驻信息(随城市记录)

## 蓝图暴露变量

### 属性 `ForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) FGuid ForceGuid;` |

**说明:**

> 附属门派的势力Guid(AWorldForce::SGUID)

---

### 属性 `Loyalty`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) float Loyalty = 50.f;` |

**说明:**

> 对当前城主的忠诚度(0-100;过低会反水/迁出)

---

### 属性 `Belonging`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) float Belonging = 50.f;` |

**说明:**

> 归属感(0-100;新迁入较低,随时间增长;影响守备贡献与反水概率)

---

### 属性 `Morale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) float Morale = 50.f;` |

**说明:**

> 士气(0-100;玩家攻打失败时提升)

---

### 属性 `TributeRatio`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) float TributeRatio = 0.2f;` |

**说明:**

> 当前缴税比例(城主可加税迫使其迁出)

---

### 属性 `JoinGameDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) int32 JoinGameDay = 0;` |

**说明:**

> 迁入时的游戏天数

---

### 属性 `bAssistPledged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) bool bAssistPledged = false;` |

**说明:**

> 是否已向玩家承诺攻城时协助(交流-请求协助)

---
