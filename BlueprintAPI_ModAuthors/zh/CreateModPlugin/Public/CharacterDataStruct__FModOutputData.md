# `struct` `FModOutputData`

**源码头文件:** `CreateModPlugin/Public/CharacterDataStruct.h`

---

## 功能说明（来自头文件注释）

> 资源产出数据

## 蓝图暴露变量

### 属性 `ID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FName ID;` |

**说明:**

> 产出物品ID(对应DT_InventoryItem表行名)

---

### 属性 `ItemType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EModGroundInventoryType](BaseDataStruct__EModGroundInventoryType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) EModGroundInventoryType ItemType = EModGroundInventoryType::None;` |

**说明:**

> 产出物品类型

---

### 属性 `Num`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 Num { 0 };` |

**说明:**

> 产出数量

---

### 属性 `Actions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TArray<FName> Actions;` |

**说明:**

> 对应角色行为,只有这些行为能产出此项物品(对应GOAP_Action_Data表行名)

---

### 属性 `WeightValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 WeightValue = 0;` |

**说明:**

> 权重值

---

### 属性 `ExpendCredits`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 ExpendCredits = 0;` |

**说明:**

> 获取一次消耗的积分

---

### 属性 `MaxValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 MaxValue = 0;` |

**说明:**

> 最大可采集的次数

---
