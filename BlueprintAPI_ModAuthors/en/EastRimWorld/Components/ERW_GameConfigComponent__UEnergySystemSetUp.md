# `class` `UEnergySystemSetUp`

**Source header:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `LineMaterial`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UMaterialInterface>` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection") TSoftObjectPtr<UMaterialInterface> LineMaterial;` |

---

### Property `CableLength`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection") float CableLength = 200.f;` |

**Source comments:**

> 缆索静止时的长度

---

### Property `AttachEndSocketName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection") FName AttachEndSocketName = NAME_None;` |

**Source comments:**

> 插槽名字

---

### Property `NumSegments`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection",meta=(ClampMin = 1,ClampMax = 20)) int NumSegments = 6;` |

**Source comments:**

> 缆索静止时的长度

---

### Property `SolverIterations`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection",meta=(ClampMin = 1,ClampMax = 16)) int SolverIterations = 3;` |

---

### Property `CableWidth`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection",meta=(ClampMin = 1,ClampMax = 50)) float CableWidth = 3;` |

**Source comments:**

> 宽度

---

### Property `NumSides`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection",meta=(ClampMin = 1,ClampMax = 16)) int NumSides = 3;` |

**Source comments:**

> 几何体的面数

---

### Property `TileMaterial`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection",meta=(ClampMin = 1,ClampMax = 8)) float TileMaterial = 1;` |

**Source comments:**

> 方向的重复次数

---

### Property `EnergyRange`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Connection") int32 EnergyRange = 1000;` |

**Source comments:**

> 能源相关的范围（连接范围，传输范围等）

---

### Property `CalculationInterval`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Connection") int32 CalculationInterval = 40;` |

**Source comments:**

> 计算间隔

---

### Property `EnergySplineActor`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[AEnergySplineActor](../System/Energy/EnergySplineActor__AEnergySplineActor.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection") TSoftClassPtr<AEnergySplineActor> EnergySplineActor;` |

**Source comments:**

> 连线actor

---

### Property `bShowDebugBox`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Connection" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Connection") bool bShowDebugBox = false;` |

**Source comments:**

> 是否显示范围

---
