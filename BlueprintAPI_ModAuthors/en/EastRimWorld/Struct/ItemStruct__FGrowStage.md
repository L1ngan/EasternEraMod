# `struct` `FGrowStage`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> 生长阶段

## Blueprint-exposed variables

### Property `CurGrowStage`

| Field | Details |
|------|------|
| C++ type | [EGrowStageType](ItemStruct__EGrowStageType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Stage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") EGrowStageType CurGrowStage = EGrowStageType::None;` |

**Notes:**

> 当前阶段

---

### Property `StageName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Stage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") FText StageName;` |

**Notes:**

> 阶段名称

---

### Property `StageDescription`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Stage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") FText StageDescription;` |

**Notes:**

> 阶段描述

---

### Property `GrowStageTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Stage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") float GrowStageTime = 0.f;` |

**Notes:**

> 阶段持续时间 -1时 不会随时间结束此阶段 也不会发生变化

---

### Property `MinScale`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Stage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") float MinScale = 0.f;` |

**Notes:**

> 此阶段的最小缩放(如果是种植物的第一阶段,MinScale不能被其他阶段缩放范围包含)

---

### Property `MaxScale`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Stage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") float MaxScale = 0.f;` |

**Notes:**

> 此阶段的最大缩放

---

### Property `AutoNextGrowStage`

| Field | Details |
|------|------|
| C++ type | [EGrowStageType](ItemStruct__EGrowStageType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Stage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") EGrowStageType AutoNextGrowStage = EGrowStageType::None;` |

**Notes:**

> 此阶段过后的下一个阶段

---

### Property `AfterActionStage`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[EGrowStageType](ItemStruct__EGrowStageType.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Stage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") TMap<FName,EGrowStageType> AfterActionStage;` |

**Notes:**

> 此阶段行为之后的阶段

---

### Property `CuttingFractureHeightPercentage`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Stage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") float CuttingFractureHeightPercentage = 0.2;` |

**Notes:**

> 砍伐的断裂高度百分比

---

### Property `StageStaticMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="Stage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") TSoftObjectPtr<UStaticMesh> StageStaticMesh;` |

**Notes:**

> 当前阶段的模型

---

### Property `CommonButtons`

| Field | Details |
|------|------|
| C++ type | TArray<[ECommonButtonType](../UI/Struct/UIStruct__ECommonButtonType.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Stage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") TArray<ECommonButtonType> CommonButtons;` |

**Notes:**

> 此阶段可以操作的按钮

---
