# `class` `UWorldMapPathSubsystem`

**Source header:** `EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem.h`

---

## Functional description (from header comments)

> 优化的世界地图路径子系统

## Blueprint-exposed variables

### Property `Config`

| Field | Details |
|------|------|
| C++ type | [FPathfindingConfig](WorldMapPathSubsystem__FPathfindingConfig.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Pathfinding" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pathfinding") FPathfindingConfig Config;` |

**Notes:**

> 性能配置

---

### Property `Stats`

| Field | Details |
|------|------|
| C++ type | [FPathfindingStats](WorldMapPathSubsystem__FPathfindingStats.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Pathfinding" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Pathfinding") FPathfindingStats Stats;` |

**Notes:**

> 性能统计

---

## Blueprint-exposed functions

### Function `FindPath_BFS`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldMapPathSubsystem" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Start` | [AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)* |
| `Goal` | [AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)* |
| `OutPath` | TArray<[AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldMapPathSubsystem") static bool FindPath_BFS(AWorldMapWayPoint* Start, AWorldMapWayPoint* Goal, TArray<AWorldMapWayPoint*>& OutPath);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 广度优先查找路径

---

### Function `FindPath_Dijkstra`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="worldMapPathSubsystem" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Start` | [AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)* |
| `Goal` | [AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)* |
| `OutPath` | TArray<[AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category = "worldMapPathSubsystem") static bool FindPath_Dijkstra(AWorldMapWayPoint* Start, AWorldMapWayPoint* Goal, TArray<AWorldMapWayPoint*>& OutPath);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 迪杰斯特拉算法查找路径

---

### Function `FindPath_AStar`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="worldMapPathSubsystem" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Start` | [AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)* |
| `Goal` | [AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)* |
| `OutPath` | TArray<[AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category = "worldMapPathSubsystem") static bool FindPath_AStar(AWorldMapWayPoint* Start, AWorldMapWayPoint* Goal, TArray<AWorldMapWayPoint*>& OutPath);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> A* 最短路径

---

### Function `FindPath_AStar_Optimized`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldMapPathSubsystem" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Start` | [AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)* |
| `Goal` | [AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)* |
| `OutPath` | TArray<[AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldMapPathSubsystem") bool FindPath_AStar_Optimized(AWorldMapWayPoint* Start, AWorldMapWayPoint* Goal, TArray<AWorldMapWayPoint*>& OutPath);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 优化的A*算法

---

### Function `FindNearestWaypoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="worldMapPathSubsystem" |
| Return type | [AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Location` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category = "worldMapPathSubsystem") AWorldMapWayPoint * FindNearestWaypoint(const FVector& Location);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查找距离位置的最近路径点

---

### Function `FindNearestWaypoint_Optimized`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldMapPathSubsystem" |
| Return type | [AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Location` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldMapPathSubsystem") AWorldMapWayPoint* FindNearestWaypoint_Optimized(const FVector& Location);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 优化的最近路径点查找

---

### Function `SearchPath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StartPosition` | `const FVector &` |
| `EndPosition` | `const FVector &` |
| `OutPath` | `TArray<FVector> &` |
| `PathLength` | `float &` |
| `(unnamed / type only)` | [EFindPathType](WorldMapPathSubsystem__EFindPathType.md) FindPathType = [EFindPathType](WorldMapPathSubsystem__EFindPathType.md)::AStar |
| `2` | `int NumSubdivisionsPerSegment =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool SearchPath(const FVector & StartPosition,const FVector & EndPosition,TArray<FVector> & OutPath,float & PathLength,EFindPathType FindPathType = EFindPathType::AStar,int NumSubdivisionsPerSegment = 2);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查找路径

---

### Function `SearchPath_Optimized`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FPathfindingResult](WorldMapPathSubsystem__FPathfindingResult.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StartPosition` | `const FVector&` |
| `EndPosition` | `const FVector&` |
| `(unnamed / type only)` | [EFindPathType](WorldMapPathSubsystem__EFindPathType.md) FindPathType = [EFindPathType](WorldMapPathSubsystem__EFindPathType.md)::AStar |
| `2` | `int32 NumSubdivisionsPerSegment =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FPathfindingResult SearchPath_Optimized(const FVector& StartPosition, const FVector& EndPosition, EFindPathType FindPathType = EFindPathType::AStar, int32 NumSubdivisionsPerSegment = 2);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 优化的路径查找

---

### Function `GetStats`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Pathfinding" |
| Return type | const [FPathfindingStats](WorldMapPathSubsystem__FPathfindingStats.md)& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "Pathfinding") const FPathfindingStats& GetStats() const { return Stats; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取性能统计

---

### Function `ResetStats`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Pathfinding" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") void ResetStats() { Stats.Reset(); }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 重置性能统计

---

### Function `ClearCache`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Pathfinding" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") void ClearCache();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 清理缓存

---
