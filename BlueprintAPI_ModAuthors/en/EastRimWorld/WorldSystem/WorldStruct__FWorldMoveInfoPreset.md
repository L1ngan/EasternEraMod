# `struct` `FWorldMoveInfoPreset`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 角色世界地图移动信息预设

## Blueprint-exposed variables

### Property `WorldMapMoveType`

| Field | Details |
|------|------|
| C++ type | [EWorldMapMoveType](WorldStruct__EWorldMapMoveType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EWorldMapMoveType WorldMapMoveType = EWorldMapMoveType::None;` |

**Notes:**

> 移动类型

---

### Property `StayTotalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float StayTotalTime = 0.f;` |

**Notes:**

> 停留的时间

---

### Property `MoveSpeed`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MoveSpeed = 100.f;` |

**Notes:**

> 基础移动速度

---

### Property `bBackPlace`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bBackPlace = false;` |

**Notes:**

> 是否返回

---

### Property `bEnterPlace`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bEnterPlace = false;` |

**Notes:**

> 是否进入地点

---

### Property `bFixedEnterPosition`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bFixedEnterPosition = false;` |

**Notes:**

> 是否固定位置进入

---

### Property `EnterPlacePosition`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides,EditCondition="bFixedEnterPosition")) FVector EnterPlacePosition = FVector::ZeroVector;` |

**Notes:**

> 进入地点的坐标

---

### Property `MoveActorStaticMesh`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta = (AllowedClasses = "/Script/Engine.StaticMesh")) FSoftObjectPath MoveActorStaticMesh;` |

**Notes:**

> 模型

---

### Property `TransportationMoveActorClass`

| Field | Details |
|------|------|
| C++ type | TMap<[ETransportationType](../ERW_Enumerations__ETransportationType.md),FSoftClassPath> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere, meta = (AllowedClasses = "/Script/EastRimWorld.WorldMapMoveActor")) TMap<ETransportationType,FSoftClassPath> TransportationMoveActorClass;` |

**Notes:**

> 不同的交通工具在地图中显示的actor

---

### Property `WorldMapMoveActorWidget`

| Field | Details |
|------|------|
| C++ type | `FSoftClassPath` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FSoftClassPath WorldMapMoveActorWidget;` |

**Notes:**

> Actor使用的Tip

---

### Property `WidgetID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName WidgetID;` |

**Notes:**

> 点击展开的UI  ID

---

### Property `WorldMapMovePath`

| Field | Details |
|------|------|
| C++ type | `FSoftClassPath` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FSoftClassPath WorldMapMovePath;` |

**Notes:**

> 移动路径样条线蓝图

---

### Property `PlayerTeamPathColor`

| Field | Details |
|------|------|
| C++ type | `FLinearColor` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FLinearColor PlayerTeamPathColor = FLinearColor::White;` |

**Notes:**

> 玩家队伍样条线颜色

---

### Property `OtherTeamPathColor`

| Field | Details |
|------|------|
| C++ type | `FLinearColor` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FLinearColor OtherTeamPathColor = FLinearColor::White;` |

**Notes:**

> 其他队伍样条线颜色

---

### Property `MoveActorScale`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FVector MoveActorScale = FVector::OneVector;` |

**Notes:**

> 世界中移动的actor缩放

---

### Property `MaxCostTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxCostTime = 0.f;` |

**Notes:**

> 耗时的最大时间

---
