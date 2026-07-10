# `struct` `FCeremonyData`

**Source header:** `EastRimWorld/GOAP/GOAP_ActorBase.h`

---

## Functional description (from header comments)

> 仪式相关数据

## Blueprint-exposed variables

### Property `CeremonyState`

| Field | Details |
|------|------|
| C++ type | [ECeremonyStateType](../ERW_Enumerations__ECeremonyStateType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) ECeremonyStateType CeremonyState = ECeremonyStateType::Normal;` |

**Notes:**

> 仪式状态

---

### Property `CeremonyMember`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FGuid> CeremonyMember;` |

**Notes:**

> 参与仪式人员

---

### Property `SpectatorCeremonyMember`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FGuid> SpectatorCeremonyMember;` |

**Notes:**

> List of GUIDs of ceremony spectators

---

### Property `ArrivedCeremonyMember`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FGuid> ArrivedCeremonyMember;` |

**Notes:**

> 已签到人员

---

### Property `CompleteCeremonyMember`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FGuid> CompleteCeremonyMember;` |

**Notes:**

> 已签退人员

---

### Property `CeremonyMemberNumCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 CeremonyMemberNumCount { 0 };` |

**Notes:**

> 还差多少个参加人员没到&&有多少个完成了仪式

---

### Property `MainCeremonyNumCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 MainCeremonyNumCount { 0 };` |

**Notes:**

> Count of main ceremony participants

---

### Property `CeremonyRelationShipID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FName CeremonyRelationShipID;` |

**Notes:**

> 仪式相关的关系ID

---

### Property `CeremonyStartTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float CeremonyStartTime { 0 };` |

**Notes:**

> 当前仪式的开始时间

---

### Property `CeremonyStartTimerID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 CeremonyStartTimerID { INDEX_NONE };` |

**Notes:**

> Timer ID for the ceremony start

---

### Property `CeremonyWaitTimerID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 CeremonyWaitTimerID { INDEX_NONE };` |

**Notes:**

> Timer ID for the ceremony waiting phase

---
