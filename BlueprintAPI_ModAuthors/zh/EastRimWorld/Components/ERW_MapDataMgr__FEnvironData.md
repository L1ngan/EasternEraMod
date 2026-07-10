# `struct` `FEnvironData`

**源码头文件:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## 功能说明（来自头文件注释）

> 环境数据

## 蓝图暴露变量

### 属性 `EnvironData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EEnvironType](../ERW_Enumerations__EEnvironType.md) , [FActorData](ERW_MapDataMgr__FActorData.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<EEnvironType , FActorData> EnvironData;` |

**说明:**

> TMap<环境类型 , 每个朝向对应的Actor数据>

---

### 属性 `TopHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) float TopHeight { 0.f };` |

**说明:**

> 顶部高度

---
