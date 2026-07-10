# `class` `AERW_SceneManager`

**Source header:** `EastRimWorld/ERW_SceneManager.h`

---

## Functional description (from header comments)

> 场景管理器类

## Blueprint-exposed variables

### Property `RecastNavMesh`

| Field | Details |
|------|------|
| C++ type | `ARecastNavMesh*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) ARecastNavMesh* RecastNavMesh { nullptr };` |

**Notes:**

> Reference to the Recast navigation mesh

---

### Property `NavigationSystem`

| Field | Details |
|------|------|
| C++ type | `UNavigationSystemV1*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) UNavigationSystemV1* NavigationSystem { nullptr };` |

**Notes:**

> Reference to the navigation system instance

---

## Blueprint-exposed functions

### Function `CreateInstancedStaticMeshComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `UInstancedStaticMeshComponent*` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) UInstancedStaticMeshComponent* CreateInstancedStaticMeshComponent();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 创建ISM组件

---

### Function `AddBuildingEffectRangeActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBuilding` | [ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)* |
| `InShowRangeActor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddBuildingEffectRangeActor(ABuildingActorBase* InBuilding,AActor* InShowRangeActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Registers the actor that displays the effect range for the given building

---

### Function `RemoveBUildingEffectRangeAtor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBuilding` | [ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveBUildingEffectRangeAtor(ABuildingActorBase* InBuilding);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Removes the effect range display actor entry for the given building

---

### Function `FindBuildingEffectRangeActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `AActor*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBuilding` | [ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AActor* FindBuildingEffectRangeActor(ABuildingActorBase* InBuilding);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Finds the effect range display actor for the given building

---

### Function `ShowAllBuildingEffectRangeActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bIsShow` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ShowAllBuildingEffectRangeActor(bool bIsShow);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Shows or hides the effect range actors of all buildings

---

### Function `ShowOneBuildingEffectRangeActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBuilding` | [ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)* |
| `bIsShow` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ShowOneBuildingEffectRangeActor(ABuildingActorBase* InBuilding,bool bIsShow);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Shows or hides the effect range actor of a single building

---

### Function `K2_InitSceneManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="InitSceneManager") void K2_InitSceneManager();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Initializes the scene manager (Blueprint implementable event)

---

### Function `K2_ClearSceneManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="ClearSceneManager") void K2_ClearSceneManager();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Clears the scene manager (Blueprint implementable event)

---

### Function `UpdateRecastNavMesh`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TileSize` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateRecastNavMesh(float TileSize);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新寻路网格

---

### Function `InNavigationBounds`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Location` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool InNavigationBounds(const FVector& Location) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 位置是否在寻路范围内

---

### Function `GetAgentMaxStepHeight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float GetAgentMaxStepHeight() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得垂直跨越高度

---

### Function `CreateBeginnerGuideBillboard`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemInstance` | [UInventoryItemInstance](Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void CreateBeginnerGuideBillboard(UInventoryItemInstance* ItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 创建新手引导箭头

---

### Function `DestroyBeginnerGuideBillboard`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ChangeActor` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void DestroyBeginnerGuideBillboard(bool ChangeActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 销毁新手引导指引箭头

---
