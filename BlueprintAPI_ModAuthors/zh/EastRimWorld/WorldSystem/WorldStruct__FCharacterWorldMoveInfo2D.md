# `struct` `FCharacterWorldMoveInfo2D`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 角色2d世界地图移动信息

## 蓝图暴露变量

### 属性 `WorldForceGUID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid WorldForceGUID;` |

**说明:**

> 移动所属势力guid

---

### 属性 `ParameterGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid ParameterGuid;` |

**说明:**

> 携带的参数 根据不同的类型提供不同的参数类型

---

### 属性 `CharacterList`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> CharacterList;` |

**说明:**

> 移动的角色信息

---

### 属性 `StartCityName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName StartCityName;` |

**说明:**

> 首发城市

---

### 属性 `TargetCityName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName TargetCityName;` |

**说明:**

> 目标城市

---

### 属性 `NeedTotalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float NeedTotalTime = 0.f;` |

**说明:**

> 需要总时间

---

### 属性 `CurrentUseTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CurrentUseTime = 0.f;` |

**说明:**

> 当前进行时间

---

### 属性 `MoveType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldMapMoveType](WorldStruct__EWorldMapMoveType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldMapMoveType MoveType = EWorldMapMoveType::None;` |

**说明:**

> 当前移动类型

---

### 属性 `MovePointMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName, [FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FName, FWorldPointSave2d> MovePointMap;` |

**说明:**

> 移动点位

---

### 属性 `IsComplete`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool IsComplete = false;` |

**说明:**

> 是否完成

---

### 属性 `bStaying`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) bool bStaying = false;` |

**说明:**

> ── 弟子历练逗留/返程字段 (MoveType==Apprenticeship 时使用; 末尾追加保存档兼容) ──
> 是否已抵达目标城正在逗留历练 (到达后置 true, 不进入普通 Move 落地)

---

### 属性 `StayDaysAccrued`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) int32 StayDaysAccrued = 0;` |

**说明:**

> 已累计的逗留天数 (由 OnGameDayChanged 每天累加)

---

### 属性 `bShowOnWorldMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bShowOnWorldMap = true;` |

**说明:**

> 是否在大地图中显示(false=2D 图标不绘制; 涌现论剑大会参赛弟子用)

---

### 属性 `bReturning`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) bool bReturning = false;` |

**说明:**

> 是否处于返程途中 (回程时置 true, 抵达起点城后结算归来)

---

### 属性 `CarryingResources`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName, [FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) TMap<FName, FItemSimpleData> CarryingResources;` |

**说明:**

> 携带的物资 (MoveType==DeliveryWagon 送货马车时使用; 抵达目标城调 AcceptOutPutResource 入账; 末尾追加保存档兼容)

---

### 属性 `TransportationType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) ETransportationType TransportationType = ETransportationType::Walking;` |

**说明:**

> 出征所选交通工具类型 (行军速度 = 基础速度 + DT_TransportationInfo[Type].Speed, 步行=0 不影响; 末尾追加保存档兼容 2026-07-01)

---

### 属性 `PursuitLegCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) int32 PursuitLegCount = 0;` |

**说明:**

> [流浪会合] 追赶本势力流浪队伍已走的腿数 (MoveType==Wander 时使用, 超限直接会合兜底防无限追逐; 末尾追加保存档兼容)

---
