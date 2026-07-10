# `struct` `FPlaceLevelDistinguishInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> Place Level Distinguish Info 数据结构。

## 蓝图暴露变量

### 属性 `LevelOutPut`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName,FItemSimpleData> LevelOutPut;` |

**说明:**

> 增加产出(逐级累加)

---

### 属性 `CanBuildBuildings`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> CanBuildBuildings;` |

**说明:**

> 增加可建造建筑(逐级累加)

---
