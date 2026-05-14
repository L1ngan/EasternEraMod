# `struct` `FOverlappingItemData`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ActorBase.h`

---

## 功能说明（来自头文件注释）

> 建筑覆盖采集物相关数据

## 蓝图暴露变量

### 属性 `ActionData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGuid , FName>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FGuid , FName> ActionData;` |

**源码注释:**

> TMap<采集物替身的Guid , 对应Action的ID>

---

### 属性 `InstanceGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TArray<FGuid> InstanceGuids;` |

**源码注释:**

> 覆盖采集物Instance的Guid

---
