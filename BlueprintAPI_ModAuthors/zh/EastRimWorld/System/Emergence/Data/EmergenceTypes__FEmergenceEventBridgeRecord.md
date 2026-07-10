# `struct` `FEmergenceEventBridgeRecord`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## 功能说明（来自头文件注释）

> 事件桥统一存档记录。Director 持 TArray 入档; 读档时按 BridgeType 动态重建对应派生桥。
> 各事件的状态结构体经 FInstancedStruct 多态存储(Savior 支持), 按 BridgeType 决定其内实际类型。

## 蓝图暴露变量

### 属性 `BridgeType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEmergentBridgeType](EmergenceTypes__EEmergentBridgeType.md) |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Bridge" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Bridge") EEmergentBridgeType BridgeType = EEmergentBridgeType::None;` |

**说明:**

> Bridge Type 字段。

---

### 属性 `InstanceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Bridge" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Bridge") FGuid InstanceGuid;` |

**说明:**

> 桥实例稳定标识(UI / 存档据此定位; 跨存档不变)

---

### 属性 `SourceEventID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Bridge" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Bridge") FName SourceEventID;` |

**说明:**

> 来源事件行 ID(回查事件表)

---

### 属性 `State`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FInstancedStruct` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Bridge" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Bridge") FInstancedStruct State;` |

**说明:**

> 派生桥自己的状态结构体(FEmergencePlaceQuestState/IronVein/RivalRaid/SwordMeet 之一)

---
