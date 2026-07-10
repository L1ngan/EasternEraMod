# `class` `UWorldPlaceSpecialEffectSubsystem`

**Source header:** `EastRimWorld/WorldSystem/WorldPlaceSpecialEffectSubsystem.h`

---

## Functional description (from header comments)

> 管理各地点的特殊效果（全局效果）：每个 AWorldPlace 独立数值，配置在 FWorldPlaceInfo，拥有效果存档、数值读档后重算。

## Blueprint-exposed functions

### Function `GetInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldPlaceSpecialEffect" |
| Return type | [UWorldPlaceSpecialEffectSubsystem](WorldPlaceSpecialEffectSubsystem__UWorldPlaceSpecialEffectSubsystem.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldPlaceSpecialEffect") static UWorldPlaceSpecialEffectSubsystem* GetInstance(UObject* WorldContextObject);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get Instance.

---

### Function `RecalculatePlaceEffects`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldPlaceSpecialEffect" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlace` | [AWorldPlace](WorldPlace__AWorldPlace.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldPlaceSpecialEffect") void RecalculatePlaceEffects(AWorldPlace* WorldPlace);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 进入地点时调用（AWorldPlace::EnterWorldPlace），将当前拥有效果全部应用到缓存并施加 Buff

---

### Function `ClearPlaceEffectCache`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldPlaceSpecialEffect" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlace` | [AWorldPlace](WorldPlace__AWorldPlace.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldPlaceSpecialEffect") void ClearPlaceEffectCache(AWorldPlace* WorldPlace);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 退出地点时调用（AWorldPlace::ExitWorldPlace），清空该地点的效果数值缓存

---

### Function `ApplyEffect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldPlaceSpecialEffect" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlace` | [AWorldPlace](WorldPlace__AWorldPlace.md)* |
| `EffectId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldPlaceSpecialEffect") void ApplyEffect(AWorldPlace* WorldPlace, FName EffectId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 应用单个效果：将该效果的贡献加入缓存；在给地点增加效果时调用。若效果已在列表中则只更新缓存。

---

### Function `RemoveEffect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldPlaceSpecialEffect" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlace` | [AWorldPlace](WorldPlace__AWorldPlace.md)* |
| `EffectId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldPlaceSpecialEffect") void RemoveEffect(AWorldPlace* WorldPlace, FName EffectId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除单个效果：从缓存减去该效果贡献，并从拥有效果列表中移除

---

### Function `GetEffectValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldPlaceSpecialEffect" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlace` | [AWorldPlace](WorldPlace__AWorldPlace.md)* |
| `EffectType` | [EWorldPlaceSpecialEffectType](WorldStruct__EWorldPlaceSpecialEffectType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldPlaceSpecialEffect") float GetEffectValue(AWorldPlace* WorldPlace, EWorldPlaceSpecialEffectType EffectType) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取指定地点、指定效果类型的当前汇总数值

---

### Function `GetFactionGlobalBuffIds`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldPlaceSpecialEffect" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlace` | [AWorldPlace](WorldPlace__AWorldPlace.md)* |
| `OutBuffIds` | `TArray<FName>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldPlaceSpecialEffect") void GetFactionGlobalBuffIds(AWorldPlace* WorldPlace, TArray<FName>& OutBuffIds) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取该地点「添加阵营全局 Buff」类型效果配置的 Buff ID 列表（用于实际施加 Buff）

---
