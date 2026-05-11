# `class` `UTotalWorldMap`

**Source header:** `EastRimWorld/UI/TotalWorld/TotalWorldMap.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `ScaleOnceValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ScaleOnceValue;` |

**Source comments:**

> 单次缩放比例

---

### Property `CurrentScale`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) float CurrentScale;` |

**Source comments:**

> 当前缩放比例

---

### Property `MaxExpansionValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxExpansionValue;` |

**Source comments:**

> 最大扩大为：

---

### Property `MinShrinkValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MinShrinkValue;` |

**Source comments:**

> 最小缩放为：

---

### Property `MapSizeBox`

| Field | Details |
|------|------|
| C++ type | `USizeBox *` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(meta=(BindWidget),BlueprintReadWrite) USizeBox * MapSizeBox = nullptr;` |

---

### Property `MapImage`

| Field | Details |
|------|------|
| C++ type | `UImage*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(meta=(BindWidget),BlueprintReadWrite) UImage* MapImage;` |

**Source comments:**

> 内部滚动框

---

### Property `MapScaleBox`

| Field | Details |
|------|------|
| C++ type | `UScaleBox *` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(meta=(BindWidget),BlueprintReadWrite) UScaleBox * MapScaleBox = nullptr;` |

**Source comments:**

> 缩放框

---

### Property `MapImageInitX`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) float MapImageInitX;` |

**Source comments:**

> 地图初始大小X

---

### Property `MapImageInitY`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) float MapImageInitY;` |

**Source comments:**

> 地图初始大小Y

---

### Property `SpeedAnim`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SpeedAnim = 1.0f;` |

---

### Property `MinimumRollAfterCalculationX`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float MinimumRollAfterCalculationX;` |

**Source comments:**

> private:
> 计算后的最小滚动X

---

### Property `MaximumRollAfterCalculationX`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float MaximumRollAfterCalculationX;` |

**Source comments:**

> 计算后的最大滚动X

---

### Property `MinimumRollAfterCalculationY`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float MinimumRollAfterCalculationY;` |

**Source comments:**

> 计算后的最小滚动Y

---

### Property `MaximumRollAfterCalculationY`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float MaximumRollAfterCalculationY;` |

**Source comments:**

> 计算后的最大滚动Y

---

### Property `BeyondBorderLocalX`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float BeyondBorderLocalX;` |

**Source comments:**

> 超出的临时X

---

### Property `BeyondBorderLocalY`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float BeyondBorderLocalY;` |

**Source comments:**

> 超出的临时Y

---

### Property `TimerHandle`

| Field | Details |
|------|------|
| C++ type | `FTimerHandle` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FTimerHandle TimerHandle;` |

**Source comments:**

> 创建一个定时器用于实现播放回弹动画效果

---

### Property `bMouseLeftButtonMove`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bMouseLeftButtonMove = false;` |

---

### Property `MoveMultiplying`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MoveMultiplying = -10.0f;` |

---

## Blueprint-exposed functions

### Function `SkipToAppointMapLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Location` | `const FVector2D&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SkipToAppointMapLocation(const FVector2D& Location);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `UpdateMapPosition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateMapPosition();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `UpdateMapScale`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InScale` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateMapScale(float InScale);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `SkipToPlayerCapitalCity`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SkipToPlayerCapitalCity();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `OnMouseMoveWithDelta`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DeltaVec` | `FVector2D` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnMouseMoveWithDelta(FVector2D DeltaVec);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---
