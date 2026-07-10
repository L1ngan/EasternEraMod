# `struct` `FBuildData`

**源码头文件:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## 功能说明（来自头文件注释）

> 地图中某配置ID建筑的数据(建筑配置ID及未完成/已完成建筑的Guid数组)

## 蓝图暴露变量

### 属性 `BuildConfigId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame , BlueprintReadWrite) FName BuildConfigId;` |

**说明:**

> 建筑配置ID

---

### 属性 `BuildingIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame , BlueprintReadWrite) TArray<FGuid> BuildingIds;` |

**说明:**

> 未完成的建筑id数组

---

### 属性 `BuildIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame , BlueprintReadWrite) TArray<FGuid> BuildIds;` |

**说明:**

> 已完成的建筑id数组

---
