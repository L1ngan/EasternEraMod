# `struct` `FGOAPActionSaveData`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ActionComponent.h`

---

## 功能说明（来自头文件注释）

> GOAP Action存档数据

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

### 属性 `Users`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FGOAP_Users](GOAP_ActionComponent__FGOAP_Users.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FName , FGOAP_Users> Users;` |

**源码注释:**

> GOAP的用户
> TMap<GOAP Action的ID , 用户的数组>

---

### 属性 `ActionForbiddenStates`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , bool>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FName , bool> ActionForbiddenStates;` |

**源码注释:**

> GOAP Action的禁用状态
> TMap<GOAP Action的ID , 是否禁用>

---

### 属性 `ReservedUsers`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid , [FUserReserveData](GOAP_ActionComponent__FUserReserveData.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FGuid , FUserReserveData> ReservedUsers;` |

**源码注释:**

> 用户预留物品数据
> TMap<角色的Guid , 预留的物品数据>

---

### 属性 `ReservedList`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , int32>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FName , int32> ReservedList;` |

**源码注释:**

> 预留物品列表
> TMap<物品ID , 数量>

---
