# `struct` `FEnergyData`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ActorBase.h`

---

## 功能说明（来自头文件注释）

> 能量相关数据

## 蓝图暴露变量

### 属性 `CurEnergyStorageValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) float CurEnergyStorageValue = 0.f;` |

**源码注释:**

> 当前的能源储量

---

### 属性 `ConnectBuildings`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) TArray<FGuid> ConnectBuildings;` |

**源码注释:**

> 连接的建筑物

---

### 属性 `TemporaryConnectBuildings`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) TArray<FGuid> TemporaryConnectBuildings;` |

**源码注释:**

> 即将连接的建筑物（放置后未建造完成）

---

### 属性 `CurPipelineGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 CurPipelineGroup = -1;` |

**源码注释:**

> 当前建筑物管道分组

---

### 属性 `UpcomingChangePipelineGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 UpcomingChangePipelineGroup = INDEX_NONE;` |

**源码注释:**

> 即将变更管道分组

---

### 属性 `EnableWhenClosedPipelineGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 EnableWhenClosedPipelineGroup = INDEX_NONE;` |

**源码注释:**

> 当建筑物是控制建筑物时 关闭状态启用的管道

---

### 属性 `EnableWhenOnPipelineGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 EnableWhenOnPipelineGroup = INDEX_NONE;` |

**源码注释:**

> 当建筑物是控制建筑物时 开启状态启用的管道

---

### 属性 `UpcomingChangeEnableWhenClosedPipelineGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 UpcomingChangeEnableWhenClosedPipelineGroup = INDEX_NONE;` |

**源码注释:**

> 当建筑物是控制建筑物时 关闭状态启用即将变更的管道

---

### 属性 `UpcomingChangeEnableWhenOnPipelineGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 UpcomingChangeEnableWhenOnPipelineGroup = INDEX_NONE;` |

**源码注释:**

> 当建筑物是控制建筑物时 开启状态启用即将变更的管道

---

### 属性 `EnergyGridGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid EnergyGridGuid;` |

**源码注释:**

> 所属的能量网Guid

---

### 属性 `bIsChangingPipelineGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) bool bIsChangingPipelineGroup = false;` |

**源码注释:**

> 是否正在更改管道

---

### 属性 `UpdateEnergyGenerateTimerID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 UpdateEnergyGenerateTimerID = INDEX_NONE;` |

**源码注释:**

> 生产能源计算定时器

---

### 属性 `UpdateEnergyExpendTimerID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 UpdateEnergyExpendTimerID = INDEX_NONE;` |

**源码注释:**

> 消耗能源计算定时器

---

### 属性 `CurrentLowerLimitTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 CurrentLowerLimitTime = 1;` |

**源码注释:**

> 当前下限时间

---

### 属性 `CurrentUpperLimitTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 CurrentUpperLimitTime = 1;` |

**源码注释:**

> 当前上限时间

---

### 属性 `CurrentLowerLimitTemperature`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 CurrentLowerLimitTemperature = 0;` |

**源码注释:**

> 当前下限温度

---

### 属性 `CurrentUpperLimitTemperature`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) int32 CurrentUpperLimitTemperature = 0;` |

**源码注释:**

> 当前上限温度

---

### 属性 `CurrentLowerLimitEnergy`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) float CurrentLowerLimitEnergy = 0.f;` |

**源码注释:**

> 当前下限能量

---

### 属性 `CurrentUpperLimitEnergy`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) float CurrentUpperLimitEnergy = 0.f;` |

**源码注释:**

> 当前上限能量

---

### 属性 `GenerateTwentyFourHourEnergyArray`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<float>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) TArray<float> GenerateTwentyFourHourEnergyArray;` |

**源码注释:**

> 计算的24小时产能数组

---

### 属性 `GenerateTwentyFourHourEnergy`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) float GenerateTwentyFourHourEnergy { 0.f };` |

**源码注释:**

> 计算的24小时产能总和

---

### 属性 `ExpendTwentyFourHourEnergyArray`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<float>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) TArray<float> ExpendTwentyFourHourEnergyArray;` |

**源码注释:**

> 计算的24小时耗能数组

---

### 属性 `ExpendTwentyFourHourEnergy`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) float ExpendTwentyFourHourEnergy { 0.f };` |

**源码注释:**

> 计算的24小时耗能总和

---

### 属性 `PracticeBuildingOverlockingState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EOverlockingType` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,EditAnywhere,BlueprintReadOnly) EOverlockingType PracticeBuildingOverlockingState = EOverlockingType::Normal;` |

**源码注释:**

> 修炼建筑状态

---

### 属性 `OverlockingDurationID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 OverlockingDurationID = INDEX_NONE;` |

**源码注释:**

> 超频持续时间定时器

---

### 属性 `CurOverlockingTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 CurOverlockingTime = 0;` |

**源码注释:**

> 当前超频状态持续时间

---

### 属性 `OverlockingCoolingTimerID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 OverlockingCoolingTimerID = INDEX_NONE;` |

**源码注释:**

> 超频冷却时间定时器

---
