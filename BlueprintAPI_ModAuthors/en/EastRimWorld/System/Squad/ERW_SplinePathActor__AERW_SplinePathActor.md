# `class` `AERW_SplinePathActor`

**Source header:** `EastRimWorld/System/Squad/ERW_SplinePathActor.h`

---

## Functional description (from header comments)

> 样条路径 Actor：在编辑器中拖动样条线点即可绘制路径。
> - 运行时把样条采样为 TArray<FVector>，喂给 UERW_SquadSubsystem 作默认路径。
> - 样条的"闭合(Closed Loop)"开关对应环形路径。

## Blueprint-exposed variables

### Property `Spline`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USplineComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="SplinePath" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SplinePath") TObjectPtr<USplineComponent> Spline;` |

**Notes:**

> 编辑器中拖动这条样条线的点来绘制路径

---

### Property `SampleInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="SplinePath" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplinePath", meta = (ClampMin = "10.0")) float SampleInterval = 100.f;` |

**Notes:**

> 采样间隔(cm)：越小折线越贴合曲线，点越多

---

## Blueprint-exposed functions

### Function `IsLoop`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="SplinePath" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "SplinePath") bool IsLoop() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 是否环形（直接读样条的 Closed Loop 状态）

---

### Function `BuildPathPoints`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="SplinePath" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutPoints` | `TArray<FVector>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "SplinePath") void BuildPathPoints(TArray<FVector>& OutPoints) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 把样条采样成世界坐标折线

---
