# `class` `AWorldMapMoveActor`

**源码头文件:** `EastRimWorld/Character/WorldMapMoveActor.h`

---

## 功能说明（来自头文件注释）

> 大地图移动Actor：表示角色在世界地图上移动/停留的可选中实体

## 蓝图暴露变量

### 属性 `SceneComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USceneComponent>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<USceneComponent> SceneComponent;` |

**说明:**

> 根场景组件

---

### 属性 `StaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UStaticMeshComponent>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UStaticMeshComponent> StaticMesh;` |

**说明:**

> 静态网格组件

---

### 属性 `CharacterWorldMoveInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FCharacterWorldMoveInfo](../WorldSystem/WorldStruct__FCharacterWorldMoveInfo.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) FCharacterWorldMoveInfo CharacterWorldMoveInfo;` |

**说明:**

> 角色的大地图移动信息

---

### 属性 `OnMOveStateChangeDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnMOveStateChangeDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnMOveStateChangeDelegate OnMOveStateChangeDelegate;` |

**说明:**

> 行走（移动）状态发生改变时广播的委托

---

### 属性 `bIsSelect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bIsSelect = false;` |

**说明:**

> 是否处于选中状态

---

## 蓝图暴露函数

### 函数 `K2_InitWorldMapActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewCharacterWorldMoveInfo` | const [FCharacterWorldMoveInfo](../WorldSystem/WorldStruct__FCharacterWorldMoveInfo.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,DisplayName="InitWorldMapActor") void K2_InitWorldMapActor(const FCharacterWorldMoveInfo & NewCharacterWorldMoveInfo);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 蓝图事件：用移动信息初始化大地图Actor时调用

---

### 函数 `K2_DeinitializeWorldMapActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,DisplayName="DeinitializeWorldMapActor") void K2_DeinitializeWorldMapActor();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 蓝图事件：反初始化大地图Actor时调用

---

### 函数 `K2_OnMapActorDestroy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,DisplayName="OnMapActorDestroy") void K2_OnMapActorDestroy();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 蓝图事件：大地图Actor被销毁时调用

---

### 函数 `K2_OnMapActorBeginStay`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,DisplayName="OnMapActorBeginStay") void K2_OnMapActorBeginStay();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 蓝图事件：大地图Actor开始停留时调用

---

### 函数 `K2_OnMapActorEndStay`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,DisplayName="OnMapActorEndStay") void K2_OnMapActorEndStay();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 蓝图事件：大地图Actor结束停留时调用

---

### 函数 `UpdateMovePath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MovePath` | `const TArray<FVector> &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void UpdateMovePath(const TArray<FVector> & MovePath);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 更新移动路径

---

### 函数 `SetMoveActorTipUI`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WidgetObject` | `UUserWidget *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetMoveActorTipUI(UUserWidget * WidgetObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置移动Actor的提示UI控件

---
