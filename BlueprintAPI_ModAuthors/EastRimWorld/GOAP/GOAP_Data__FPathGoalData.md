# `struct` `FPathGoalData`

**源码头文件：** `EastRimWorld/GOAP/GOAP_Data.h`

---

## 功能说明（来自头文件注释）

> 路径目标数据

## 蓝图暴露变量

### 属性 `IDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) TArray<FName> IDs;` |

**源码注释：**

> 指定的物品ID

---

### 属性 `ItemType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EItemType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) EItemType ItemType = EItemType::None;` |

**源码注释：**

> 指定的物品类型

---

### 属性 `SpecifiedGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) FGuid SpecifiedGuid;` |

---
