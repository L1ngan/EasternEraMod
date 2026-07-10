# `struct` `FModBuildLightSourceData`

**Source header:** `CreateModPlugin/Public/BuildDataStruct.h`

---

## Functional description (from header comments)

> 建筑光源配置数据

## Blueprint-exposed variables

### Property `LightType`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<class UPointLightComponent>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TSubclassOf<class UPointLightComponent> LightType;` |

**Notes:**

> 光源类型

---

### Property `IntensityUnits`

| Field | Details |
|------|------|
| C++ type | `ELightUnits` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) ELightUnits IntensityUnits { ELightUnits::Lumens };` |

**Notes:**

> 强度单位

---

### Property `OffsetPosition`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FVector OffsetPosition = FVector::ZeroVector;` |

**Notes:**

> 光源偏移位置

---

### Property `Rotation`

| Field | Details |
|------|------|
| C++ type | `FRotator` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FRotator Rotation = FRotator::ZeroRotator;` |

**Notes:**

> 光源旋转

---

### Property `Intensity`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) float Intensity { 0.f };` |

**Notes:**

> 光源强度

---

### Property `AttenuationRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) float AttenuationRadius { 0.f };` |

**Notes:**

> 衰减半径

---

### Property `InnerConeAngle`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) float InnerConeAngle { 0.f };` |

**Notes:**

> 内锥体角度

---

### Property `OuterConeAngle`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) float OuterConeAngle { 0.f };` |

**Notes:**

> 外锥体角度

---

### Property `LightColor`

| Field | Details |
|------|------|
| C++ type | `FColor` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FColor LightColor = FColor::White;` |

**Notes:**

> 光源颜色

---

### Property `Radius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) float Radius { 0.f };` |

**Notes:**

> 光照半径

---

### Property `CastShadow`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) bool CastShadow { true };` |

**Notes:**

> 是否投影

---
