# `class` `UERW_AreaSubsystem`

**源码头文件:** `EastRimWorld/System/AreaControl/ERW_AreaSubsystem.h`

---

## 功能说明（来自头文件注释）

> RW Area Subsystem UObject 类型。

## 蓝图暴露变量

### 属性 `OnAreaRegistryChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnAreaRegistryChanged` |
| 反射说明符 | BlueprintAssignable, Category="ERW|Area" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "ERW|Area") FOnAreaRegistryChanged OnAreaRegistryChanged;` |

**说明:**

> UI 刷新广播

---

## 蓝图暴露函数

### 函数 `Get`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="ERW|Area" |
| 返回类型 | [UERW_AreaSubsystem](ERW_AreaSubsystem__UERW_AreaSubsystem.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "ERW|Area", meta = (WorldContext = "WorldContextObject")) static UERW_AreaSubsystem* Get(const UObject* WorldContextObject);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> WorldContext 版访问器（仿 ControlBehaviorSubsystem，避免 GWorld 单例不安全）

---

### 函数 `GetFlagBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="ERW|Area" |
| 返回类型 | [ABuildingActorBase](../../Building/BuildingActorBase__ABuildingActorBase.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AreaId` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "ERW|Area") ABuildingActorBase* GetFlagBuilding(const FGuid& AreaId) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get Flag Building。

---

### 函数 `IsAwaitingRepair`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="ERW|Area" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AreaId` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "ERW|Area") bool IsAwaitingRepair(const FGuid& AreaId) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 待修复：派生自旗 BuildingRunState == Breakdown（不另存标记）

---

### 函数 `GetUnassignedCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="ERW|Area" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "ERW|Area") int32 GetUnassignedCount() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 未分配弟子数（HUD 红点）

---

### 函数 `GetAllAreasForUI`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|Area" |
| 返回类型 | TArray<[FAreaBuildingData](AreaControlTypes__FAreaBuildingData.md)> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") TArray<FAreaBuildingData> GetAllAreasForUI() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> —— D1：UI 数据接口（读写旗的 FAreaBuildingData，改名/改色随建筑存档持久化）——

---

### 函数 `GetAreaData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|Area" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AreaId` | `const FGuid&` |
| `OutData` | [FAreaBuildingData](AreaControlTypes__FAreaBuildingData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") bool GetAreaData(const FGuid& AreaId, FAreaBuildingData& OutData) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取或查询 Get Area Data。

---

### 函数 `SetAreaName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|Area" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AreaId` | `const FGuid&` |
| `NewName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") bool SetAreaName(const FGuid& AreaId, FName NewName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Set Area Name 操作。

---

### 函数 `SetAreaColor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|Area" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AreaId` | `const FGuid&` |
| `NewColor` | `FLinearColor` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") bool SetAreaColor(const FGuid& AreaId, FLinearColor NewColor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Set Area Color 操作。

---

### 函数 `GetAreaIdByFlag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|Area" |
| 返回类型 | `FGuid` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Flag` | const [ABuildingActorBase](../../Building/BuildingActorBase__ABuildingActorBase.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") FGuid GetAreaIdByFlag(const ABuildingActorBase* Flag) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> —— 补齐：管理面板接口 ——
> 点击世界里的旗 → 反查其 AreaId（再走上面的取数/改名接口）

---

### 函数 `GetAreaMembers`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|Area" |
| 返回类型 | `TArray<AActor*>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AreaId` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") TArray<AActor*> GetAreaMembers(const FGuid& AreaId) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 已分配弟子（管理面板列表）

---

### 函数 `GetUnassignedPawns`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|Area" |
| 返回类型 | `TArray<AActor*>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") TArray<AActor*> GetUnassignedPawns() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 未分配池（快速分配 UI）

---

### 函数 `SetAreaSize`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|Area" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AreaId` | `const FGuid&` |
| `SizeX` | `int32` |
| `SizeY` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") bool SetAreaSize(const FGuid& AreaId, int32 SizeX, int32 SizeY);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 改尺寸（实时应用到 Box + 存档）

---

### 函数 `SetAreaGroundHeight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|Area" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AreaId` | `const FGuid&` |
| `Level` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") bool SetAreaGroundHeight(const FGuid& AreaId, int32 Level);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 改地砖高度档（-2~+2）

---

### 函数 `SetAreaOrientation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|Area" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AreaId` | `const FGuid&` |
| `Orientation` | `uint8` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") bool SetAreaOrientation(const FGuid& AreaId, uint8 Orientation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 改朝向（0/1/2/3 = 0/90/180/270，实时应用到 Box）

---
