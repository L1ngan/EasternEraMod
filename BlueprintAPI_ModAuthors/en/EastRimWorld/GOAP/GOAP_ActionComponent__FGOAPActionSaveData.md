# `struct` `FGOAPActionSaveData`

**Source header:** `EastRimWorld/GOAP/GOAP_ActionComponent.h`

---

## Functional description (from header comments)

> GOAP Action存档数据

## Blueprint-exposed variables

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid Guid;` |

**Notes:**

> 组件的Guid

---

### Property `Users`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FGOAP_Users](GOAP_ActionComponent__FGOAP_Users.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FName , FGOAP_Users> Users;` |

**Notes:**

> GOAP的用户
> TMap<GOAP Action的ID , 用户的数组>

---

### Property `ActionForbiddenStates`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , bool>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FName , bool> ActionForbiddenStates;` |

**Notes:**

> GOAP Action的禁用状态
> TMap<GOAP Action的ID , 是否禁用>

---

### Property `ReservedUsers`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid , [FUserReserveData](GOAP_ActionComponent__FUserReserveData.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FGuid , FUserReserveData> ReservedUsers;` |

**Notes:**

> 用户预留物品数据
> TMap<角色的Guid , 预留的物品数据>

---

### Property `ReservedList`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , int32>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FName , int32> ReservedList;` |

**Notes:**

> 预留物品列表
> TMap<物品ID , 数量>

---
