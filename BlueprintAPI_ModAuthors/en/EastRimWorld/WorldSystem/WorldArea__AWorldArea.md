# `class` `AWorldArea`

**Source header:** `EastRimWorld/WorldSystem/WorldArea.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `SceneComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USceneComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<USceneComponent> SceneComponent;` |

---

### Property `WorldAreaInfo`

| Field | Details |
|------|------|
| C++ type | [FWorldAreaInfo](WorldStruct__FWorldAreaInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere) FWorldAreaInfo WorldAreaInfo;` |

**Source comments:**

> 区域信息

---

### Property `WorldPlaces`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame, VisibleAnywhere) TArray<FGuid> WorldPlaces;` |

**Source comments:**

> 所在区域的地点

---

### Property `bRevealFog`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame, VisibleAnywhere) bool bRevealFog = false;` |

**Source comments:**

> 是否已经消除迷雾

---

### Property `AreaID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame) FName AreaID;` |

**Source comments:**

> 区域ID

---

### Property `VaFogAgentCharWorld`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UVaFogAgentComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UVaFogAgentComponent> VaFogAgentCharWorld;` |

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

**Source comments:**

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

**Source comments:**

> 消除区域迷雾

---
