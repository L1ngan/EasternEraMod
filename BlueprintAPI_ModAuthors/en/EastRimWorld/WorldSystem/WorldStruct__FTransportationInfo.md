# `struct` `FTransportationInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 交通工具信息

## Blueprint-exposed variables

### Property `TransportationType`

| Field | Details |
|------|------|
| C++ type | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETransportationType TransportationType = ETransportationType::Walking;` |

**Notes:**

> 交通工具类型

---

### Property `TransportationBuildingGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides)) FGuid TransportationBuildingGuid;` |

**Notes:**

> 交通工具建筑GUID

---

### Property `TimeVehicleCosts`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FTransportationResourceInfo](WorldStruct__FTransportationResourceInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<FName,FTransportationResourceInfo> TimeVehicleCosts;` |

**Notes:**

> 交通工具单位时间消耗

---

### Property `VehicleNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 VehicleNumber = -1;` |

**Notes:**

> 交通工具数量 -1 为无限制

---

### Property `Speed`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 Speed = 200;` |

**Notes:**

> 交通工具移动

---

### Property `TransportationActorClass`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<class ATransportationActor>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftClassPtr<class ATransportationActor> TransportationActorClass;` |

**Notes:**

> 交通工具Actor类

---

### Property `AttachTransforms`

| Field | Details |
|------|------|
| C++ type | `TMap<int32,FTransform>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<int32,FTransform> AttachTransforms;` |

**Notes:**

> 停靠在建筑物的相对位置

---

### Property `UnSelectIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftObjectPtr<UTexture2D> UnSelectIcon;` |

**Notes:**

> 未选中时图标

---

### Property `SelectedIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftObjectPtr<UTexture2D> SelectedIcon;` |

**Notes:**

> 未选中时图标

---

### Property `PeopleCostCurve`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UCurveFloat>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TObjectPtr<UCurveFloat> PeopleCostCurve = nullptr;` |

**Notes:**

> 人数消耗倍率曲线(X=出征人数, Y=整份消耗的倍率)。实际人数超过曲线最大X时取最大X处的值;留空则按人数线性

---
