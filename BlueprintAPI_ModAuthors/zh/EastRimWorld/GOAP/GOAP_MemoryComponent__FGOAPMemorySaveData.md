# `struct` `FGOAPMemorySaveData`

**源码头文件:** `EastRimWorld/GOAP/GOAP_MemoryComponent.h`

---

## 功能说明（来自头文件注释）

> GOAP记忆存档数据

## 蓝图暴露变量

### 属性 `Guid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid Guid;` |

**源码注释:**

> 组件的Guid

---

### 属性 `Memories`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<EGOAP_ConditionType , [FMemoryData](GOAP_MemoryComponent__FMemoryData.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<EGOAP_ConditionType , FMemoryData> Memories;` |

**源码注释:**

> GOAP前置条件类型对应的记忆值
> TMap<GOAP前置条件类型 , 记忆数据>

---
