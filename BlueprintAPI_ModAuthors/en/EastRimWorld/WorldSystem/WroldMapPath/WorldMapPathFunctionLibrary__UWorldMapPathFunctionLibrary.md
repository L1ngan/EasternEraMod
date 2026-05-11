# `class` `UWorldMapPathFunctionLibrary`

**Source header:** `EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathFunctionLibrary.h`

---

## Functional description (from header comments)

> 世界地图路径查找蓝图函数库
> 提供易于使用的路径查找接口

## Blueprint-exposed functions

### Function `GetWorldMapPathSubsystem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Pathfinding" |
| Return type | [UWorldMapPathSubsystem](WorldMapPathSubsystem__UWorldMapPathSubsystem.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static UWorldMapPathSubsystem* GetWorldMapPathSubsystem(const UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取路径查找子系统

---

### Function `FindPath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Pathfinding" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `StartPosition` | `const FVector&` |
| `EndPosition` | `const FVector&` |
| `OutPath` | `TArray<FVector>&` |
| `OutPathLength` | `float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static bool FindPath(UObject* WorldContextObject, const FVector& StartPosition, const FVector& EndPosition, TArray<FVector>& OutPath, float& OutPathLength);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 简单的路径查找（使用优化的A*算法）

---

### Function `FindPathAdvanced`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Pathfinding" |
| Return type | [FPathfindingResult](WorldMapPathSubsystem__FPathfindingResult.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `StartPosition` | `const FVector&` |
| `EndPosition` | `const FVector&` |
| `(unnamed / type only)` | `EFindPathType Algorithm = EFindPathType::AStar` |
| `2` | `int32 SmoothingLevel =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static FPathfindingResult FindPathAdvanced(UObject* WorldContextObject, const FVector& StartPosition, const FVector& EndPosition, EFindPathType Algorithm = EFindPathType::AStar, int32 SmoothingLevel = 2);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 高级路径查找（可选择算法）

---

### Function `FindNearestWaypoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Pathfinding" |
| Return type | [AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `Location` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static AWorldMapWayPoint* FindNearestWaypoint(UObject* WorldContextObject, const FVector& Location);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查找最近的路径点

---

### Function `GetRandomWaypoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Pathfinding" |
| Return type | `FVector` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `Center` | `const FVector&` |
| `Radius` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static FVector GetRandomWaypoint(UObject* WorldContextObject, const FVector& Center, float Radius);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取随机路径点

---

### Function `FindMultiplePaths`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Pathfinding" |
| Return type | TArray<[FPathfindingResult](WorldMapPathSubsystem__FPathfindingResult.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `StartPositions` | `const TArray<FVector>&` |
| `EndPositions` | `const TArray<FVector>&` |
| `(unnamed / type only)` | `EFindPathType Algorithm = EFindPathType::AStar` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static TArray<FPathfindingResult> FindMultiplePaths(UObject* WorldContextObject, const TArray<FVector>& StartPositions, const TArray<FVector>& EndPositions, EFindPathType Algorithm = EFindPathType::AStar);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 批量路径查找

---

### Function `GetPathfindingStats`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Pathfinding" |
| Return type | [FPathfindingStats](WorldMapPathSubsystem__FPathfindingStats.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static FPathfindingStats GetPathfindingStats(UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取路径查找性能统计

---

### Function `ResetPathfindingStats`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Pathfinding" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static void ResetPathfindingStats(UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 重置性能统计

---

### Function `ClearPathfindingCache`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Pathfinding" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static void ClearPathfindingCache(UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 清理路径缓存

---

### Function `IsPathValid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Pathfinding" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Path` | `const TArray<FVector>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "Pathfinding") static bool IsPathValid(const TArray<FVector>& Path);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查路径是否有效

---

### Function `CalculatePathLength`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Pathfinding" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Path` | `const TArray<FVector>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "Pathfinding") static float CalculatePathLength(const TArray<FVector>& Path);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 计算路径总长度

---

### Function `SmoothPath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Pathfinding" |
| Return type | `TArray<FVector>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Path` | `const TArray<FVector>&` |
| `2` | `int32 SubdivisionsPerSegment =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static TArray<FVector> SmoothPath(const TArray<FVector>& Path, int32 SubdivisionsPerSegment = 2);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 平滑路径

---

### Function `GetPathfindingErrorString`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Pathfinding" |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Error` | `EPathfindingError` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "Pathfinding") static FString GetPathfindingErrorString(EPathfindingError Error);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 路径查找错误转换为字符串

---

### Function `IsPathfindingSystemAvailable`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Pathfinding" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "Pathfinding") static bool IsPathfindingSystemAvailable(UObject* WorldContextObject);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查路径查找子系统是否可用

---

### Function `GetPathfindingConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Pathfinding" |
| Return type | [FPathfindingConfig](WorldMapPathSubsystem__FPathfindingConfig.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static FPathfindingConfig GetPathfindingConfig(UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取路径查找配置

---

### Function `SetPathfindingConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Pathfinding" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `Config` | const [FPathfindingConfig](WorldMapPathSubsystem__FPathfindingConfig.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static void SetPathfindingConfig(UObject* WorldContextObject, const FPathfindingConfig& Config);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置路径查找配置

---
