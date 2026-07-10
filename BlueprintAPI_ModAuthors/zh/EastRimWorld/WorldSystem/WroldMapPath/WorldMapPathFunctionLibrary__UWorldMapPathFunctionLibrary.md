# `class` `UWorldMapPathFunctionLibrary`

**源码头文件:** `EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathFunctionLibrary.h`

---

## 功能说明（来自头文件注释）

> 世界地图路径查找蓝图函数库
> 提供易于使用的路径查找接口

## 蓝图暴露函数

### 函数 `GetWorldMapPathSubsystem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Pathfinding" |
| 返回类型 | [UWorldMapPathSubsystem](WorldMapPathSubsystem__UWorldMapPathSubsystem.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static UWorldMapPathSubsystem* GetWorldMapPathSubsystem(const UObject* WorldContextObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取路径查找子系统

---

### 函数 `FindPath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Pathfinding" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `StartPosition` | `const FVector&` |
| `EndPosition` | `const FVector&` |
| `OutPath` | `TArray<FVector>&` |
| `OutPathLength` | `float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static bool FindPath(UObject* WorldContextObject, const FVector& StartPosition, const FVector& EndPosition, TArray<FVector>& OutPath, float& OutPathLength);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 简单的路径查找（使用优化的A*算法）

---

### 函数 `FindPathAdvanced`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Pathfinding" |
| 返回类型 | [FPathfindingResult](WorldMapPathSubsystem__FPathfindingResult.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `StartPosition` | `const FVector&` |
| `EndPosition` | `const FVector&` |
| `（匿名/仅类型）` | [EFindPathType](WorldMapPathSubsystem__EFindPathType.md) Algorithm = [EFindPathType](WorldMapPathSubsystem__EFindPathType.md)::AStar |
| `2` | `int32 SmoothingLevel =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static FPathfindingResult FindPathAdvanced(UObject* WorldContextObject, const FVector& StartPosition, const FVector& EndPosition, EFindPathType Algorithm = EFindPathType::AStar, int32 SmoothingLevel = 2);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 高级路径查找（可选择算法）

---

### 函数 `FindNearestWaypoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Pathfinding" |
| 返回类型 | [AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `Location` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static AWorldMapWayPoint* FindNearestWaypoint(UObject* WorldContextObject, const FVector& Location);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查找最近的路径点

---

### 函数 `GetRandomWaypoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Pathfinding" |
| 返回类型 | `FVector` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `Center` | `const FVector&` |
| `Radius` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static FVector GetRandomWaypoint(UObject* WorldContextObject, const FVector& Center, float Radius);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取随机路径点

---

### 函数 `FindMultiplePaths`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Pathfinding" |
| 返回类型 | TArray<[FPathfindingResult](WorldMapPathSubsystem__FPathfindingResult.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `StartPositions` | `const TArray<FVector>&` |
| `EndPositions` | `const TArray<FVector>&` |
| `（匿名/仅类型）` | [EFindPathType](WorldMapPathSubsystem__EFindPathType.md) Algorithm = [EFindPathType](WorldMapPathSubsystem__EFindPathType.md)::AStar |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static TArray<FPathfindingResult> FindMultiplePaths(UObject* WorldContextObject, const TArray<FVector>& StartPositions, const TArray<FVector>& EndPositions, EFindPathType Algorithm = EFindPathType::AStar);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 批量路径查找

---

### 函数 `GetPathfindingStats`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Pathfinding" |
| 返回类型 | [FPathfindingStats](WorldMapPathSubsystem__FPathfindingStats.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static FPathfindingStats GetPathfindingStats(UObject* WorldContextObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取路径查找性能统计

---

### 函数 `ResetPathfindingStats`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Pathfinding" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static void ResetPathfindingStats(UObject* WorldContextObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 重置性能统计

---

### 函数 `ClearPathfindingCache`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Pathfinding" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static void ClearPathfindingCache(UObject* WorldContextObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 清理路径缓存

---

### 函数 `IsPathValid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Pathfinding" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Path` | `const TArray<FVector>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "Pathfinding") static bool IsPathValid(const TArray<FVector>& Path);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查路径是否有效

---

### 函数 `CalculatePathLength`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Pathfinding" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Path` | `const TArray<FVector>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "Pathfinding") static float CalculatePathLength(const TArray<FVector>& Path);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 计算路径总长度

---

### 函数 `SmoothPath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Pathfinding" |
| 返回类型 | `TArray<FVector>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Path` | `const TArray<FVector>&` |
| `2` | `int32 SubdivisionsPerSegment =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static TArray<FVector> SmoothPath(const TArray<FVector>& Path, int32 SubdivisionsPerSegment = 2);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 平滑路径

---

### 函数 `GetPathfindingErrorString`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Pathfinding" |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Error` | [EPathfindingError](WorldMapPathSubsystem__EPathfindingError.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "Pathfinding") static FString GetPathfindingErrorString(EPathfindingError Error);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 路径查找错误转换为字符串

---

### 函数 `IsPathfindingSystemAvailable`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Pathfinding" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "Pathfinding") static bool IsPathfindingSystemAvailable(UObject* WorldContextObject);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查路径查找子系统是否可用

---

### 函数 `GetPathfindingConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Pathfinding" |
| 返回类型 | [FPathfindingConfig](WorldMapPathSubsystem__FPathfindingConfig.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static FPathfindingConfig GetPathfindingConfig(UObject* WorldContextObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取路径查找配置

---

### 函数 `SetPathfindingConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Pathfinding" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `Config` | const [FPathfindingConfig](WorldMapPathSubsystem__FPathfindingConfig.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") static void SetPathfindingConfig(UObject* WorldContextObject, const FPathfindingConfig& Config);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置路径查找配置

---
