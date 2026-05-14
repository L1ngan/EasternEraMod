# `struct` `FBeginnerGuideSaveData`

**源码头文件:** `EastRimWorld/System/Task/BeginnerGuideComponent.h`

---

## 功能说明（来自头文件注释）

> 新手引导存档数据

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

### 属性 `IsCompleteGuide`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool IsCompleteGuide = false;` |

**源码注释:**

> 是否已经完成了新手引导

---

### 属性 `NoviceTaskInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TArray<FCommonTaskInstance> NoviceTaskInfo;` |

**源码注释:**

> 新手任务

---

### 属性 `CurNoviceTaskInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FCommonTaskInstance CurNoviceTaskInfo;` |

**源码注释:**

> 当前的新手引导任务

---

### 属性 `CountNoviceTaskNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 CountNoviceTaskNumber = 0;` |

**源码注释:**

> 新手引导任务数量

---

### 属性 `SelectActorGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid SelectActorGuid;` |

**源码注释:**

> 物品替身actor的Guid

---

### 属性 `CoverTipsState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , bool>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FName , bool> CoverTipsState;` |

**源码注释:**

> 遮罩Tips显示状态
> TMap<条件ID , 是否显示过>

---

### 属性 `UnlockIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , EBeginnerGuideUnlockType>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FName , EBeginnerGuideUnlockType> UnlockIDs;` |

**源码注释:**

> 已解锁的ID
> TMap<ID , 解锁类型>

---
