# `class` `ASceneTextActor`

**源码头文件:** `EastRimWorld/AbilitySystem/SceneText/SceneTextActor.h`

---

## 功能说明（来自头文件注释）

> 场景文字Actor抽象基类，用于在场景中显示飘字（伤害数字、提示等），支持缓存池复用

## 蓝图暴露变量

### 属性 `ParentActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AActor>ParentActor = nullptr;` |

**说明:**

> 文字所依附的父Actor

---

### 属性 `StartOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FVector2D StartOffset = FVector2D::ZeroVector;` |

**说明:**

> 文字的起始二维偏移量

---

### 属性 `SceneComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USceneComponent>` |
| 反射说明符 | BlueprintReadWrite, Category="Component" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Component") TObjectPtr<USceneComponent> SceneComponent;` |

**说明:**

> 根场景组件

---

## 蓝图暴露函数

### 函数 `InitSceneTextActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGenericTeamId` | `FGenericTeamId` |
| `InSceneTextType` | const [ESceneTextType](SceneTextStruct__ESceneTextType.md) |
| `InTextValue` | `const FText` |
| `InTransform` | `const FTransform &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitSceneTextActor(FGenericTeamId InGenericTeamId,const ESceneTextType InSceneTextType,const FText InTextValue,const FTransform & InTransform);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 初始化场景文字Actor，设置队伍ID、文字类型、文字内容与变换

---

### 函数 `SceneTextActorEnd`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SceneTextActorEnd();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 结束本场景文字Actor的显示

---

### 函数 `ActivateText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SceneTextInfo` | const [FSceneTextInfo](SceneTextStruct__FSceneTextInfo.md) & |
| `InGenericTeamId` | `const FGenericTeamId &` |
| `InTextValue` | `const FText &` |
| `InTransform` | `const FTransform &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void ActivateText(const FSceneTextInfo & SceneTextInfo,const FGenericTeamId & InGenericTeamId,const FText & InTextValue,const FTransform & InTransform);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 激活字体

---

### 函数 `SetParentActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InParentActor` | `AActor *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetParentActor(AActor * InParentActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置父actor

---

### 函数 `CloseText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void CloseText();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 关闭文字显示（蓝图实现）

---
