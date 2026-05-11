# `class` `UCollectItemInstance`

**Source header:** `EastRimWorld/Inventory/CollectItemInstance.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `GrowSpeed`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float GrowSpeed = {0.f};` |

**Source comments:**

> 生长速度   生长温度效率X土壤效率 = 生长速度

---

### Property `TotalGrowTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float TotalGrowTime = {0.f};` |

**Source comments:**

> 总生长时间 只会在生长阶段计时

---

### Property `TotalHarvestTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float TotalHarvestTime = {0.f};` |

**Source comments:**

> 总收成时间 如果会结果

---

### Property `CurGrowTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float CurGrowTime = {0.f};` |

**Source comments:**

> 总生长时间 只会在生长阶段计时

---

### Property `CurHarvestTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float CurHarvestTime = {0.f};` |

**Source comments:**

> 总收成时间 如果会结果

---

### Property `CurStageGrowTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float CurStageGrowTime = {0.f};` |

**Source comments:**

> 阶段生长时间

---

### Property `CurGrowStage`

| Field | Details |
|------|------|
| C++ type | [FGrowStage](../Struct/ItemStruct__FGrowStage.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) FGrowStage CurGrowStage;` |

**Source comments:**

> 当前阶段的信息

---

### Property `CurHealth`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float CurHealth = 0.0f;` |

**Source comments:**

> 当前健康值

---

### Property `SoilEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float SoilEfficiency = 1.f;` |

**Source comments:**

> 土壤效率

---

### Property `bSuspendGrow`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) bool bSuspendGrow = false;` |

**Source comments:**

> 暂停生长

---

### Property `CurExplorationTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 CurExplorationTime;` |

**Source comments:**

> 当前被探索的次数

---

## Blueprint-exposed functions

### Function `IsHaveGrowStage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InStage` | `const EGrowStageType&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) bool IsHaveGrowStage(const EGrowStageType& InStage);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 是否有果实成熟阶段

---

### Function `CheckCanGrow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) virtual bool CheckCanGrow();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查是否可以生长

---

### Function `UpdateCollectItemStage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateCollectItemStage();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新采集物的生长阶段 (注意线程安全 此方法会在子线程中运行)

---

### Function `SetGrowStage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewGrowStage` | `EGrowStageType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool SetGrowStage(EGrowStageType NewGrowStage);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置新的阶段

---

### Function `GetCollectInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [FCollectItem](../Struct/ItemStruct__FCollectItem.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) FCollectItem GetCollectInfo();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取采集物信息

---

### Function `GetHealthPercent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) float GetHealthPercent();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取生命值百分比

---

### Function `GetCurGrowPercent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) float GetCurGrowPercent();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取当前生长百分比

---

### Function `GetCurCollectPercent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) float GetCurCollectPercent();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取当前收成进度 如果会结果

---

### Function `GetCurSoilEfficiency`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) virtual float GetCurSoilEfficiency();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取当前的土壤效率

---

### Function `GetCurWeatherEfficiency`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) virtual float GetCurWeatherEfficiency();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取当前的天气效率

---

### Function `GetCurLightEfficiency`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) float GetCurLightEfficiency();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取当前的光照效率

---

### Function `GetAllOutput`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FOutputInformation](../Struct/ItemStruct__FOutputInformation.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FOutputInformation> GetAllOutput();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取此类型的所有的产出

---

### Function `GetCurStageOutput`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FOutputInformation](../Struct/ItemStruct__FOutputInformation.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FOutputInformation> GetCurStageOutput();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取此类型的当前阶段产出

---

### Function `CollectItemRegrow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NextGorGrowStage` | `EGrowStageType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void CollectItemRegrow(EGrowStageType NextGorGrowStage);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 重生

---

### Function `SetSuspendGrow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bSuspend` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetSuspendGrow(bool bSuspend);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 暂停生长

---

### Function `OneTimeExploration`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Outputs` | TMap<FName , [FAllTypeItemDrop](../Struct/ItemStruct__FAllTypeItemDrop.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OneTimeExploration(TMap<FName , FAllTypeItemDrop>& Outputs);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 探索一次产出

---
