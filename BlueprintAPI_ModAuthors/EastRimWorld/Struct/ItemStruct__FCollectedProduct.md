# `struct` `FCollectedProduct`

**源码头文件：** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> 采集产出

## 蓝图暴露变量

### 属性 `Actions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TArray<FName> Actions;` |

**源码注释：**

> 对应角色行为,只有这些行为能产出此项物品(对应GOAP_Action_Data表行名)

---

### 属性 `Weight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) int32 Weight = 1;` |

**源码注释：**

> 权重

---

### 属性 `ItemSimpleDatas`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FItemSimpleData>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TArray<FItemSimpleData> ItemSimpleDatas;` |

**源码注释：**

> 产出的物品

---
