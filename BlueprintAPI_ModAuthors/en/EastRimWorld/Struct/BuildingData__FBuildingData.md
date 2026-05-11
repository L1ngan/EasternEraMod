# `struct` `FBuildingData`

**Source header:** `EastRimWorld/Struct/BuildingData.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `BuildingType`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 BuildingType = 0;` |

**Source comments:**

> 类别

---

### Property `MeshPath`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowedClasses = "StaticMesh")) FSoftObjectPath MeshPath;` |

**Source comments:**

> 模型

---

### Property `BpClass`

| Field | Details |
|------|------|
| C++ type | `FSoftClassPath` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (MetaClass = "BuildingBase")) FSoftClassPath BpClass;` |

**Source comments:**

> 蓝图

---

### Property `SeatNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 SeatNum = 0;` |

**Source comments:**

> 座位数

---

### Property `ServiceTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float ServiceTime = 0.f;` |

**Source comments:**

> 服务时长

---

### Property `AnimPaths`

| Field | Details |
|------|------|
| C++ type | `TArray<FSoftObjectPath>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowedClasses = "AnimationAsset")) TArray<FSoftObjectPath> AnimPaths;` |

**Source comments:**

> 服务动画

---

### Property `AnimTans`

| Field | Details |
|------|------|
| C++ type | `TArray<FTransform>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowedClasses = "AnimationAsset")) TArray<FTransform> AnimTans;` |

**Source comments:**

> 动画坐标

---

### Property `Actions`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FName> Actions;` |

**Source comments:**

> goap动作

---

### Property `GoapWorldStates`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, FLUniValue>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TMap<FName, FLUniValue> GoapWorldStates;` |

**Source comments:**

> goap世界状态

---
