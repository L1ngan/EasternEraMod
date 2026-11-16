# `class` `UModStorageLibrary`

**Source header:** `EastRimWorld/Mod/ModStorageLibrary.h`

---

## Functional description (from header comments)

> Mod storage API: safe item transfer between containers and item home buildings.

## Blueprint-exposed functions

### Function `GetAcceptableItemCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Storage" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Container` | `AActor*` |
| `ItemId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Storage") static int32 GetAcceptableItemCount(AActor* Container, FName ItemId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> How many of the item a warehouse can take right now, excluding space reserved by disciples hauling there. 0 when the filter rejects the item or the warehouse is keep-clear, prohibited or relocating. Uses the same calculation as TransferItems.

---

### Function `TransferItems`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Storage" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `From` | `AActor*` |
| `To` | `AActor*` |
| `ItemId` | `FName` |
| `Count` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Storage") static int32 TransferItems(AActor* From, AActor* To, FName ItemId, int32 Count);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Move items from a warehouse or ground item pile to a warehouse and return the number actually moved. Only unused items are taken; the source is reduced only after the target has taken them, so nothing is lost.

---

### Function `SetItemHomeBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Storage" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Warehouse` | `AActor*` |
| `ItemId` | `FName` |
| `bExclusive` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Storage") static bool SetItemHomeBuilding(AActor* Warehouse, FName ItemId, bool bExclusive);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Make a warehouse a home for an item. Exclusive: other warehouses never take it. Preferred: other warehouses do not take it while a home warehouse can. Saved with the game; ignored while the writing mod is disabled.

---

### Function `ClearItemHomeBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Storage" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Warehouse` | `AActor*` |
| `ItemId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Storage") static bool ClearItemHomeBuilding(AActor* Warehouse, FName ItemId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Remove the home rule of an item from a warehouse.

---

### Function `GetItemHomeBuildings`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Storage" |
| Return type | `TArray<AActor*>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContext` | `const UObject*` |
| `ItemId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Storage") static TArray<AActor*> GetItemHomeBuildings(const UObject* WorldContext, FName ItemId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Home warehouses of an item (active rules only).

---

### Function `GetBuildingHomeItems`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Storage" |
| Return type | `TArray<FName>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Warehouse` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Storage") static TArray<FName> GetBuildingHomeItems(AActor* Warehouse);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Item IDs a warehouse is home for (active rules only).

---
