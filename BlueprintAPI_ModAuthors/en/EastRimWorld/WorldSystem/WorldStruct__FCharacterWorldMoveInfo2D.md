# `struct` `FCharacterWorldMoveInfo2D`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 角色2d世界地图移动信息

## Blueprint-exposed variables

### Property `WorldForceGUID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid WorldForceGUID;` |

**Notes:**

> 移动所属势力guid

---

### Property `ParameterGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid ParameterGuid;` |

**Notes:**

> 携带的参数 根据不同的类型提供不同的参数类型

---

### Property `CharacterList`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> CharacterList;` |

**Notes:**

> 移动的角色信息

---

### Property `StartCityName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName StartCityName;` |

**Notes:**

> 首发城市

---

### Property `TargetCityName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName TargetCityName;` |

**Notes:**

> 目标城市

---

### Property `NeedTotalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float NeedTotalTime = 0.f;` |

**Notes:**

> 需要总时间

---

### Property `CurrentUseTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CurrentUseTime = 0.f;` |

**Notes:**

> 当前进行时间

---

### Property `MoveType`

| Field | Details |
|------|------|
| C++ type | [EWorldMapMoveType](WorldStruct__EWorldMapMoveType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldMapMoveType MoveType = EWorldMapMoveType::None;` |

**Notes:**

> 当前移动类型

---

### Property `MovePointMap`

| Field | Details |
|------|------|
| C++ type | TMap<FName, [FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FName, FWorldPointSave2d> MovePointMap;` |

**Notes:**

> 移动点位

---

### Property `IsComplete`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool IsComplete = false;` |

**Notes:**

> 是否完成

---

### Property `bStaying`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) bool bStaying = false;` |

**Notes:**

> ── 弟子历练逗留/返程字段 (MoveType==Apprenticeship 时使用; 末尾追加保存档兼容) ──
> 是否已抵达目标城正在逗留历练 (到达后置 true, 不进入普通 Move 落地)

---

### Property `StayDaysAccrued`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) int32 StayDaysAccrued = 0;` |

**Notes:**

> 已累计的逗留天数 (由 OnGameDayChanged 每天累加)

---

### Property `bShowOnWorldMap`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bShowOnWorldMap = true;` |

**Notes:**

> 是否在大地图中显示(false=2D 图标不绘制; 涌现论剑大会参赛弟子用)

---

### Property `bReturning`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) bool bReturning = false;` |

**Notes:**

> 是否处于返程途中 (回程时置 true, 抵达起点城后结算归来)

---

### Property `CarryingResources`

| Field | Details |
|------|------|
| C++ type | TMap<FName, [FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) TMap<FName, FItemSimpleData> CarryingResources;` |

**Notes:**

> 携带的物资 (MoveType==DeliveryWagon 送货马车时使用; 抵达目标城调 AcceptOutPutResource 入账; 末尾追加保存档兼容)

---

### Property `TransportationType`

| Field | Details |
|------|------|
| C++ type | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) ETransportationType TransportationType = ETransportationType::Walking;` |

**Notes:**

> 出征所选交通工具类型 (行军速度 = 基础速度 + DT_TransportationInfo[Type].Speed, 步行=0 不影响; 末尾追加保存档兼容 2026-07-01)

---

### Property `PursuitLegCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) int32 PursuitLegCount = 0;` |

**Notes:**

> [流浪会合] 追赶本势力流浪队伍已走的腿数 (MoveType==Wander 时使用, 超限直接会合兜底防无限追逐; 末尾追加保存档兼容)

---
