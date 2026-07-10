# `struct` `FFabricateSaveData`

**源码头文件:** `EastRimWorld/Components/FabricateActorComponent.h`

---

## 功能说明（来自头文件注释）

> 制造存档数据

## 蓝图暴露变量

### 属性 `Guid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid Guid;` |

**说明:**

> 制造组件的Guid

---

### 属性 `FabricateTaskQueue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FFabricateTaskData](../Struct/CommonStruct__FFabricateTaskData.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TArray<FFabricateTaskData> FabricateTaskQueue;` |

**说明:**

> 制造队列数据

---

### 属性 `CurFabricateTaskGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid CurFabricateTaskGuid;` |

**说明:**

> 当前制造任务的Guid

---

### 属性 `ResourceActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FName , FGOAP_Action> ResourceActions;` |

**说明:**

> 制造资源对应的GOAPAction
> TMap<资源ID , GOAPAction>

---

### 属性 `SelectableResourceAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGameplayTag , [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FGameplayTag , FGOAP_Action> SelectableResourceAction;` |

**说明:**

> 可选资源对应的GOAPAction
> TMap<Tag , GOAPAction>

---

### 属性 `FabricateAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGOAP_Action FabricateAction;` |

**说明:**

> 制造GOAPAction

---

### 属性 `WaitingGenerateItem`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool WaitingGenerateItem { false };` |

**说明:**

> 是否在等待生成制造物品

---
