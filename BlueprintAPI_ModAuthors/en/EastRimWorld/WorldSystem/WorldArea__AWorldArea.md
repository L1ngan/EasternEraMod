# `class` `AWorldArea`

**Source header:** `EastRimWorld/WorldSystem/WorldArea.h`

---

## Functional description (from header comments)

> World Area actor type.

## Blueprint-exposed variables

### Property `SceneComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USceneComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<USceneComponent> SceneComponent;` |

**Notes:**

> Scene Component field.

---

### Property `WorldAreaInfo`

| Field | Details |
|------|------|
| C++ type | [FWorldAreaInfo](WorldStruct__FWorldAreaInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere) FWorldAreaInfo WorldAreaInfo;` |

**Notes:**

> 区域信息

---

### Property `WorldPlaces`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame, VisibleAnywhere) TArray<FGuid> WorldPlaces;` |

**Notes:**

> 所在区域的地点

---

### Property `bRevealFog`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame, VisibleAnywhere) bool bRevealFog = false;` |

**Notes:**

> 是否已经消除迷雾

---

### Property `AreaID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame) FName AreaID;` |

**Notes:**

> 区域ID

---

## Blueprint-exposed functions

### Function `UnlockAreaFog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnlockAreaFog();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Unlock Area Fog field.

---

### Function `AddWorldAreaExplorationDegree`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AddExplorationDegree` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddWorldAreaExplorationDegree(float AddExplorationDegree);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 增加区域探索度

---

### Function `RevealAreaFog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RevealAreaFog();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 消除区域迷雾

---
