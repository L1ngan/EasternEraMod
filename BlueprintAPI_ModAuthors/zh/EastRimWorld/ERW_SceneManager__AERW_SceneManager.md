# `class` `AERW_SceneManager`

**源码头文件:** `EastRimWorld/ERW_SceneManager.h`

---

## 功能说明（来自头文件注释）

> 场景管理器类

## 蓝图暴露变量

### 属性 `RecastNavMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ARecastNavMesh*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) ARecastNavMesh* RecastNavMesh { nullptr };` |

**说明:**

> Recast寻路网格引用

---

### 属性 `NavigationSystem`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UNavigationSystemV1*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) UNavigationSystemV1* NavigationSystem { nullptr };` |

**说明:**

> 导航系统实例引用

---

## 蓝图暴露函数

### 函数 `CreateInstancedStaticMeshComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `UInstancedStaticMeshComponent*` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) UInstancedStaticMeshComponent* CreateInstancedStaticMeshComponent();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 创建ISM组件

---

### 函数 `AddBuildingEffectRangeActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBuilding` | [ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)* |
| `InShowRangeActor` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddBuildingEffectRangeActor(ABuildingActorBase* InBuilding,AActor* InShowRangeActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 记录建筑与其影响范围显示Actor的对应关系

---

### 函数 `RemoveBUildingEffectRangeAtor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBuilding` | [ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveBUildingEffectRangeAtor(ABuildingActorBase* InBuilding);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除指定建筑对应的影响范围显示Actor记录

---

### 函数 `FindBuildingEffectRangeActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `AActor*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBuilding` | [ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AActor* FindBuildingEffectRangeActor(ABuildingActorBase* InBuilding);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查找指定建筑对应的影响范围显示Actor

---

### 函数 `ShowAllBuildingEffectRangeActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bIsShow` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ShowAllBuildingEffectRangeActor(bool bIsShow);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 显示或隐藏所有建筑的影响范围Actor

---

### 函数 `ShowOneBuildingEffectRangeActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBuilding` | [ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)* |
| `bIsShow` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ShowOneBuildingEffectRangeActor(ABuildingActorBase* InBuilding,bool bIsShow);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 显示或隐藏单个建筑的影响范围Actor

---

### 函数 `K2_InitSceneManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,DisplayName="InitSceneManager") void K2_InitSceneManager();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 初始化场景管理器（蓝图实现事件）

---

### 函数 `K2_ClearSceneManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,DisplayName="ClearSceneManager") void K2_ClearSceneManager();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 清理场景管理器（蓝图实现事件）

---

### 函数 `UpdateRecastNavMesh`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TileSize` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateRecastNavMesh(float TileSize);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新寻路网格

---

### 函数 `InNavigationBounds`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Location` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool InNavigationBounds(const FVector& Location) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 位置是否在寻路范围内

---

### 函数 `GetAgentMaxStepHeight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) float GetAgentMaxStepHeight() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获得垂直跨越高度

---

### 函数 `CreateBeginnerGuideBillboard`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemInstance` | [UInventoryItemInstance](Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void CreateBeginnerGuideBillboard(UInventoryItemInstance* ItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 创建新手引导箭头

---

### 函数 `DestroyBeginnerGuideBillboard`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ChangeActor` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void DestroyBeginnerGuideBillboard(bool ChangeActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 销毁新手引导指引箭头

---
