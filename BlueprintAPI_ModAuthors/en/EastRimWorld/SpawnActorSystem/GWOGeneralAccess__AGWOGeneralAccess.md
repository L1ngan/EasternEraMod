# `class` `AGWOGeneralAccess`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOGeneralAccess.h`

---

## Functional description (from header comments)

> GWO general access actor: central registry for players, GWO components and spawners, and maintains the GWO world time.

## Blueprint-exposed variables

### Property `sectorsDirector`

| Field | Details |
|------|------|
| C++ type | class [AGWOSectorsDirector](GWOSectorsDirector__AGWOSectorsDirector.md) * |
| Reflection specifiers | BlueprintReadOnly, Category="Sectors" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, Category = "Sectors") class AGWOSectorsDirector *sectorsDirector = nullptr;` |

**Notes:**

> Reference to the sectors director (AGWOSectorsDirector).

---

### Property `playersArr`

| Field | Details |
|------|------|
| C++ type | `TArray<AActor*>` |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Variables" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Global World Optimization | Variables") TArray<AActor*> playersArr;` |

**Notes:**

> 检测的对象

---

### Property `actorsCompArr`

| Field | Details |
|------|------|
| C++ type | TArray<class [UGWOActorComponent](GWOActorComponent__UGWOActorComponent.md)*> |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Variables" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Global World Optimization | Variables") TArray<class UGWOActorComponent*> actorsCompArr;` |

**Notes:**

> Array of registered GWO actor components.

---

### Property `spawnersArr`

| Field | Details |
|------|------|
| C++ type | TArray<class [AGWOSpawner](GWOSpawner__AGWOSpawner.md)*> |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Variables" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Global World Optimization | Variables") TArray<class AGWOSpawner*> spawnersArr;` |

**Notes:**

> 生成器

---

## Blueprint-exposed functions

### Function `UpdateTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Spawner Parameters" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `setHours` | `int` |
| `setMinutes` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Spawner Parameters") void UpdateTime(int setHours, int setMinutes);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Sets the GWO world time (hours and minutes).

---
