# `class` `UEnergySystemSetUp`

**Source header:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## Functional description (from header comments)

> Energy system setup asset configuring energy connection cable material, segments, range, calculation interval and related parameters

## Blueprint-exposed variables

### Property `LineMaterial`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UMaterialInterface>` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection") TSoftObjectPtr<UMaterialInterface> LineMaterial;` |

**Notes:**

> Material used for the energy connection line

---

### Property `CableLength`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection") float CableLength = 200.f;` |

**Notes:**

> 缆索静止时的长度

---

### Property `AttachEndSocketName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection") FName AttachEndSocketName = NAME_None;` |

**Notes:**

> 插槽名字

---

### Property `NumSegments`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection",meta=(ClampMin = 1,ClampMax = 20)) int NumSegments = 6;` |

**Notes:**

> 缆索静止时的长度

---

### Property `SolverIterations`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection",meta=(ClampMin = 1,ClampMax = 16)) int SolverIterations = 3;` |

**Notes:**

> Cable solver iteration count (1-16)

---

### Property `CableWidth`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection",meta=(ClampMin = 1,ClampMax = 50)) float CableWidth = 3;` |

**Notes:**

> 宽度

---

### Property `NumSides`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection",meta=(ClampMin = 1,ClampMax = 16)) int NumSides = 3;` |

**Notes:**

> 几何体的面数

---

### Property `TileMaterial`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection",meta=(ClampMin = 1,ClampMax = 8)) float TileMaterial = 1;` |

**Notes:**

> 方向的重复次数

---

### Property `EnergyRange`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Connection") int32 EnergyRange = 1000;` |

**Notes:**

> 能源相关的范围（连接范围，传输范围等）

---

### Property `CalculationInterval`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Connection") int32 CalculationInterval = 40;` |

**Notes:**

> 计算间隔

---

### Property `EnergySplineActor`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[AEnergySplineActor](../System/Energy/EnergySplineActor__AEnergySplineActor.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection") TSoftClassPtr<AEnergySplineActor> EnergySplineActor;` |

**Notes:**

> 连线actor

---

### Property `bShowDebugBox`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Connection") bool bShowDebugBox = false;` |

**Notes:**

> 是否显示范围

---
