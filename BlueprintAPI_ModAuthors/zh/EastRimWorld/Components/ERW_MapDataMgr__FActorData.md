# `struct` `FActorData`

**源码头文件:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## 功能说明（来自头文件注释）

> Actor数据

## 蓝图暴露变量

### 属性 `ActorData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<EGridDistributionType , [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)*> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<EGridDistributionType , AGOAP_ActorBase*> ActorData;` |

**源码注释:**

> TMap<格子中的分布类型 , 对应的Actor>

---

### 属性 `RoofData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGuid , ERoofPartType>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FGuid , ERoofPartType> RoofData;` |

**源码注释:**

> TMap<屋顶的Guid , 屋顶部位类型>

---

### 属性 `EntranceData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid , [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)*> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FGuid , AGOAP_ActorBase*> EntranceData;` |

**源码注释:**

> 格子包含的建筑入口数据
> TMap<建筑的Guid , 建筑的Actor>

---
