# `class` `AWorldMapMoveActor`

**源码头文件：** `EastRimWorld/Character/WorldMapMoveActor.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `SceneComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USceneComponent>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<USceneComponent> SceneComponent;` |

---

### 属性 `StaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UStaticMeshComponent>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UStaticMeshComponent> StaticMesh;` |

---

### 属性 `CharacterWorldMoveInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FCharacterWorldMoveInfo` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) FCharacterWorldMoveInfo CharacterWorldMoveInfo;` |

---

### 属性 `OnMOveStateChangeDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnMOveStateChangeDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnMOveStateChangeDelegate OnMOveStateChangeDelegate;` |

---

### 属性 `bIsSelect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bIsSelect = false;` |

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
| `NewCharacterWorldMoveInfo` | `const FCharacterWorldMoveInfo &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,DisplayName="InitWorldMapActor") void K2_InitWorldMapActor(const FCharacterWorldMoveInfo & NewCharacterWorldMoveInfo);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `K2_DeinitializeWorldMapActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,DisplayName="DeinitializeWorldMapActor") void K2_DeinitializeWorldMapActor();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `K2_OnMapActorDestroy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,DisplayName="OnMapActorDestroy") void K2_OnMapActorDestroy();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `K2_OnMapActorBeginStay`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,DisplayName="OnMapActorBeginStay") void K2_OnMapActorBeginStay();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `K2_OnMapActorEndStay`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,DisplayName="OnMapActorEndStay") void K2_OnMapActorEndStay();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void UpdateMovePath(const TArray<FVector> & MovePath);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetMoveActorTipUI(UUserWidget * WidgetObject);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---
