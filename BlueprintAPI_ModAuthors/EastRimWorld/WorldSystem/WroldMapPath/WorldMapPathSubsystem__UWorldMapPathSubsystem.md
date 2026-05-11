# `class` `UWorldMapPathSubsystem`

**源码头文件：** `EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem.h`

---

## 功能说明（来自头文件注释）

> 优化的世界地图路径子系统

## 蓝图暴露变量

### 属性 `Config`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FPathfindingConfig` |
| 反射说明符 | BlueprintReadWrite, Category="Pathfinding" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pathfinding") FPathfindingConfig Config;` |

**源码注释：**

> 性能配置

---

### 属性 `Stats`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FPathfindingStats` |
| 反射说明符 | BlueprintReadOnly, Category="Pathfinding" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Pathfinding") FPathfindingStats Stats;` |

**源码注释：**

> 性能统计

---

## 蓝图暴露函数

### 函数 `FindPath_BFS`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldMapPathSubsystem" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Start` | `AWorldMapWayPoint*` |
| `Goal` | `AWorldMapWayPoint*` |
| `OutPath` | `TArray<AWorldMapWayPoint*>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "WorldMapPathSubsystem") static bool FindPath_BFS(AWorldMapWayPoint* Start, AWorldMapWayPoint* Goal, TArray<AWorldMapWayPoint*>& OutPath);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 广度优先查找路径

---

### 函数 `FindPath_Dijkstra`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="worldMapPathSubsystem" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Start` | `AWorldMapWayPoint*` |
| `Goal` | `AWorldMapWayPoint*` |
| `OutPath` | `TArray<AWorldMapWayPoint*>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category = "worldMapPathSubsystem") static bool FindPath_Dijkstra(AWorldMapWayPoint* Start, AWorldMapWayPoint* Goal, TArray<AWorldMapWayPoint*>& OutPath);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 迪杰斯特拉算法查找路径

---

### 函数 `FindPath_AStar`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="worldMapPathSubsystem" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Start` | `AWorldMapWayPoint*` |
| `Goal` | `AWorldMapWayPoint*` |
| `OutPath` | `TArray<AWorldMapWayPoint*>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category = "worldMapPathSubsystem") static bool FindPath_AStar(AWorldMapWayPoint* Start, AWorldMapWayPoint* Goal, TArray<AWorldMapWayPoint*>& OutPath);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> A* 最短路径

---

### 函数 `FindPath_AStar_Optimized`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldMapPathSubsystem" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Start` | `AWorldMapWayPoint*` |
| `Goal` | `AWorldMapWayPoint*` |
| `OutPath` | `TArray<AWorldMapWayPoint*>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "WorldMapPathSubsystem") bool FindPath_AStar_Optimized(AWorldMapWayPoint* Start, AWorldMapWayPoint* Goal, TArray<AWorldMapWayPoint*>& OutPath);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 优化的A*算法

---

### 函数 `FindNearestWaypoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="worldMapPathSubsystem" |
| 返回类型 | `AWorldMapWayPoint *` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Location` | `const FVector&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category = "worldMapPathSubsystem") AWorldMapWayPoint * FindNearestWaypoint(const FVector& Location);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查找距离位置的最近路径点

---

### 函数 `FindNearestWaypoint_Optimized`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldMapPathSubsystem" |
| 返回类型 | `AWorldMapWayPoint*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Location` | `const FVector&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "WorldMapPathSubsystem") AWorldMapWayPoint* FindNearestWaypoint_Optimized(const FVector& Location);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 优化的最近路径点查找

---

### 函数 `SearchPath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartPosition` | `const FVector &` |
| `EndPosition` | `const FVector &` |
| `OutPath` | `TArray<FVector> &` |
| `PathLength` | `float &` |
| `（匿名/仅类型）` | `EFindPathType FindPathType = EFindPathType::AStar` |
| `2` | `int NumSubdivisionsPerSegment =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool SearchPath(const FVector & StartPosition,const FVector & EndPosition,TArray<FVector> & OutPath,float & PathLength,EFindPathType FindPathType = EFindPathType::AStar,int NumSubdivisionsPerSegment = 2);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查找路径

---

### 函数 `SearchPath_Optimized`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FPathfindingResult` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartPosition` | `const FVector&` |
| `EndPosition` | `const FVector&` |
| `（匿名/仅类型）` | `EFindPathType FindPathType = EFindPathType::AStar` |
| `2` | `int32 NumSubdivisionsPerSegment =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FPathfindingResult SearchPath_Optimized(const FVector& StartPosition, const FVector& EndPosition, EFindPathType FindPathType = EFindPathType::AStar, int32 NumSubdivisionsPerSegment = 2);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 优化的路径查找

---

### 函数 `GetStats`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Pathfinding" |
| 返回类型 | `const FPathfindingStats&` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure, Category = "Pathfinding") const FPathfindingStats& GetStats() const { return Stats; }`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取性能统计

---

### 函数 `ResetStats`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Pathfinding" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") void ResetStats() { Stats.Reset(); }`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 重置性能统计

---

### 函数 `ClearCache`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Pathfinding" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Pathfinding") void ClearCache();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 清理缓存

---
