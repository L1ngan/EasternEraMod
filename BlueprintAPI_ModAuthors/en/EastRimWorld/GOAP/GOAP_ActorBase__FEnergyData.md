# `struct` `FEnergyData`

**Source header:** `EastRimWorld/GOAP/GOAP_ActorBase.h`

---

## Functional description (from header comments)

> 能量相关数据

## Blueprint-exposed variables

### Property `CurEnergyStorageValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) float CurEnergyStorageValue = 0.f;` |

**Notes:**

> 当前的能源储量

---

### Property `ConnectBuildings`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) TArray<FGuid> ConnectBuildings;` |

**Notes:**

> 连接的建筑物

---

### Property `TemporaryConnectBuildings`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) TArray<FGuid> TemporaryConnectBuildings;` |

**Notes:**

> 即将连接的建筑物（放置后未建造完成）

---

### Property `CurPipelineGroup`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 CurPipelineGroup = -1;` |

**Notes:**

> 当前建筑物管道分组

---

### Property `UpcomingChangePipelineGroup`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 UpcomingChangePipelineGroup = INDEX_NONE;` |

**Notes:**

> 即将变更管道分组

---

### Property `EnableWhenClosedPipelineGroup`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 EnableWhenClosedPipelineGroup = INDEX_NONE;` |

**Notes:**

> 当建筑物是控制建筑物时 关闭状态启用的管道

---

### Property `EnableWhenOnPipelineGroup`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 EnableWhenOnPipelineGroup = INDEX_NONE;` |

**Notes:**

> 当建筑物是控制建筑物时 开启状态启用的管道

---

### Property `UpcomingChangeEnableWhenClosedPipelineGroup`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 UpcomingChangeEnableWhenClosedPipelineGroup = INDEX_NONE;` |

**Notes:**

> 当建筑物是控制建筑物时 关闭状态启用即将变更的管道

---

### Property `UpcomingChangeEnableWhenOnPipelineGroup`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 UpcomingChangeEnableWhenOnPipelineGroup = INDEX_NONE;` |

**Notes:**

> 当建筑物是控制建筑物时 开启状态启用即将变更的管道

---

### Property `EnergyGridGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid EnergyGridGuid;` |

**Notes:**

> 所属的能量网Guid

---

### Property `bIsChangingPipelineGroup`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) bool bIsChangingPipelineGroup = false;` |

**Notes:**

> 是否正在更改管道

---

### Property `UpdateEnergyGenerateTimerID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 UpdateEnergyGenerateTimerID = INDEX_NONE;` |

**Notes:**

> 生产能源计算定时器

---

### Property `UpdateEnergyExpendTimerID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 UpdateEnergyExpendTimerID = INDEX_NONE;` |

**Notes:**

> 消耗能源计算定时器

---

### Property `CurrentLowerLimitTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 CurrentLowerLimitTime = 1;` |

**Notes:**

> 当前下限时间

---

### Property `CurrentUpperLimitTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 CurrentUpperLimitTime = 1;` |

**Notes:**

> 当前上限时间

---

### Property `CurrentLowerLimitTemperature`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 CurrentLowerLimitTemperature = 0;` |

**Notes:**

> 当前下限温度

---

### Property `CurrentUpperLimitTemperature`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 CurrentUpperLimitTemperature = 0;` |

**Notes:**

> 当前上限温度

---

### Property `CurrentLowerLimitEnergy`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) float CurrentLowerLimitEnergy = 0.f;` |

**Notes:**

> 当前下限能量

---

### Property `CurrentUpperLimitEnergy`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) float CurrentUpperLimitEnergy = 0.f;` |

**Notes:**

> 当前上限能量

---

### Property `GenerateTwentyFourHourEnergyArray`

| Field | Details |
|------|------|
| C++ type | `TArray<float>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) TArray<float> GenerateTwentyFourHourEnergyArray;` |

**Notes:**

> 计算的24小时产能数组

---

### Property `GenerateTwentyFourHourEnergy`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) float GenerateTwentyFourHourEnergy { 0.f };` |

**Notes:**

> 计算的24小时产能总和

---

### Property `ExpendTwentyFourHourEnergyArray`

| Field | Details |
|------|------|
| C++ type | `TArray<float>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) TArray<float> ExpendTwentyFourHourEnergyArray;` |

**Notes:**

> 计算的24小时耗能数组

---

### Property `ExpendTwentyFourHourEnergy`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) float ExpendTwentyFourHourEnergy { 0.f };` |

**Notes:**

> 计算的24小时耗能总和

---

### Property `PracticeBuildingOverlockingState`

| Field | Details |
|------|------|
| C++ type | [EOverlockingType](../ERW_Enumerations__EOverlockingType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,EditAnywhere,BlueprintReadOnly) EOverlockingType PracticeBuildingOverlockingState = EOverlockingType::Normal;` |

**Notes:**

> 修炼建筑状态

---

### Property `OverlockingDurationID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 OverlockingDurationID = INDEX_NONE;` |

**Notes:**

> 超频持续时间定时器

---

### Property `CurOverlockingTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 CurOverlockingTime = 0;` |

**Notes:**

> 当前超频状态持续时间

---

### Property `OverlockingCoolingTimerID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 OverlockingCoolingTimerID = INDEX_NONE;` |

**Notes:**

> 超频冷却时间定时器

---
