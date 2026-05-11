# `class` `AERW_FightPawn`

**源码头文件：** `EastRimWorld/Framework/ERW_FightPawn.h`

---

## 功能说明（来自头文件注释）

> AERW_FightPawn - 门派战俯视角战斗主角
> 俯视角相机 + WASD 移动 + 交互系统（旧式输入）

## 蓝图暴露变量

### 属性 `AbilitySystemComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UEastRimWorldAbilitySystemComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Ability" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Ability") TObjectPtr<UEastRimWorldAbilitySystemComponent> AbilitySystemComponent;` |

---

### 属性 `CameraSpringArm`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USpringArmComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Camera" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Camera") TObjectPtr<USpringArmComponent> CameraSpringArm;` |

---

### 属性 `FightCamera`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UCameraComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Camera" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Camera") TObjectPtr<UCameraComponent> FightCamera;` |

---

### 属性 `CameraArmLength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Camera" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraArmLength = 1400.f;` |

**源码注释：**

> === 相机参数 ===

---

### 属性 `CameraSocketOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Camera" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") FVector CameraSocketOffset = FVector(0.f, -50.f, 0.f);` |

---

### 属性 `CameraZoomMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Camera" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraZoomMax = 1400.f;` |

---

### 属性 `CameraPitchFar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Camera" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraPitchFar = -50.f;` |

---

### 属性 `CameraZoomMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Camera" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraZoomMin = 300.f;` |

---

### 属性 `CameraPitchNear`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Camera" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraPitchNear = -10.f;` |

---

### 属性 `CameraLagSpeed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Camera" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraLagSpeed = 10.f;` |

---

### 属性 `CurrentInteractableTarget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Interaction" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Interaction") TObjectPtr<AActor> CurrentInteractableTarget;` |

---

### 属性 `bIsInteracting`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Interaction" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Interaction") bool bIsInteracting = false;` |

---

## 蓝图暴露函数

### 函数 `RegisterInteractable`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewTarget` | `AActor*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RegisterInteractable(AActor* NewTarget);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 交互物进入范围时调用（由交互物基类自动调用）

---

### 函数 `UnregisterInteractable`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Target` | `AActor*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UnregisterInteractable(AActor* Target);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 交互物离开范围时调用（由交互物基类自动调用）

---

### 函数 `GetCurrentInteractable`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `AActor*` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) AActor* GetCurrentInteractable() const { return CurrentInteractableTarget; }`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取当前可交互目标

---

### 函数 `FinishInteraction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void FinishInteraction();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---
