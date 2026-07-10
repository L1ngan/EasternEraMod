# `class` `UERW_AreaSubsystem`

**Source header:** `EastRimWorld/System/AreaControl/ERW_AreaSubsystem.h`

---

## Functional description (from header comments)

> RW Area Subsystem UObject type.

## Blueprint-exposed variables

### Property `OnAreaRegistryChanged`

| Field | Details |
|------|------|
| C++ type | `FOnAreaRegistryChanged` |
| Reflection specifiers | BlueprintAssignable, Category="ERW|Area" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "ERW|Area") FOnAreaRegistryChanged OnAreaRegistryChanged;` |

**Notes:**

> UI 刷新广播

---

## Blueprint-exposed functions

### Function `Get`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="ERW|Area" |
| Return type | [UERW_AreaSubsystem](ERW_AreaSubsystem__UERW_AreaSubsystem.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "ERW|Area", meta = (WorldContext = "WorldContextObject")) static UERW_AreaSubsystem* Get(const UObject* WorldContextObject);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> WorldContext 版访问器（仿 ControlBehaviorSubsystem，避免 GWorld 单例不安全）

---

### Function `GetFlagBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="ERW|Area" |
| Return type | [ABuildingActorBase](../../Building/BuildingActorBase__ABuildingActorBase.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AreaId` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "ERW|Area") ABuildingActorBase* GetFlagBuilding(const FGuid& AreaId) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get Flag Building.

---

### Function `IsAwaitingRepair`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="ERW|Area" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AreaId` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "ERW|Area") bool IsAwaitingRepair(const FGuid& AreaId) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 待修复：派生自旗 BuildingRunState == Breakdown（不另存标记）

---

### Function `GetUnassignedCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="ERW|Area" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "ERW|Area") int32 GetUnassignedCount() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 未分配弟子数（HUD 红点）

---

### Function `GetAllAreasForUI`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|Area" |
| Return type | TArray<[FAreaBuildingData](AreaControlTypes__FAreaBuildingData.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") TArray<FAreaBuildingData> GetAllAreasForUI() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> —— D1：UI 数据接口（读写旗的 FAreaBuildingData，改名/改色随建筑存档持久化）——

---

### Function `GetAreaData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|Area" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AreaId` | `const FGuid&` |
| `OutData` | [FAreaBuildingData](AreaControlTypes__FAreaBuildingData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") bool GetAreaData(const FGuid& AreaId, FAreaBuildingData& OutData) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets or queries Get Area Data.

---

### Function `SetAreaName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|Area" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AreaId` | `const FGuid&` |
| `NewName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") bool SetAreaName(const FGuid& AreaId, FName NewName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Set Area Name operation.

---

### Function `SetAreaColor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|Area" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AreaId` | `const FGuid&` |
| `NewColor` | `FLinearColor` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") bool SetAreaColor(const FGuid& AreaId, FLinearColor NewColor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Set Area Color operation.

---

### Function `GetAreaIdByFlag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|Area" |
| Return type | `FGuid` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Flag` | const [ABuildingActorBase](../../Building/BuildingActorBase__ABuildingActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") FGuid GetAreaIdByFlag(const ABuildingActorBase* Flag) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> —— 补齐：管理面板接口 ——
> 点击世界里的旗 → 反查其 AreaId（再走上面的取数/改名接口）

---

### Function `GetAreaMembers`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|Area" |
| Return type | `TArray<AActor*>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AreaId` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") TArray<AActor*> GetAreaMembers(const FGuid& AreaId) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 已分配弟子（管理面板列表）

---

### Function `GetUnassignedPawns`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|Area" |
| Return type | `TArray<AActor*>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") TArray<AActor*> GetUnassignedPawns() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 未分配池（快速分配 UI）

---

### Function `SetAreaSize`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|Area" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AreaId` | `const FGuid&` |
| `SizeX` | `int32` |
| `SizeY` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") bool SetAreaSize(const FGuid& AreaId, int32 SizeX, int32 SizeY);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 改尺寸（实时应用到 Box + 存档）

---

### Function `SetAreaGroundHeight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|Area" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AreaId` | `const FGuid&` |
| `Level` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") bool SetAreaGroundHeight(const FGuid& AreaId, int32 Level);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 改地砖高度档（-2~+2）

---

### Function `SetAreaOrientation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|Area" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AreaId` | `const FGuid&` |
| `Orientation` | `uint8` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") bool SetAreaOrientation(const FGuid& AreaId, uint8 Orientation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 改朝向（0/1/2/3 = 0/90/180/270，实时应用到 Box）

---
