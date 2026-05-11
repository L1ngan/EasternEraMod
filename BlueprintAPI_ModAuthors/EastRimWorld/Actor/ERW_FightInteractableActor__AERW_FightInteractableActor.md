# `class` `AERW_FightInteractableActor`

**源码头文件：** `EastRimWorld/Actor/ERW_FightInteractableActor.h`

---

## 功能说明（来自头文件注释）

> AERW_FightInteractableActor - 门派战交互物基类
> 宝箱、门、建筑等继承此类即可自动拥有交互能力
> 
> 功能：
>   - 自带交互范围碰撞球（蓝图可调半径）
>   - 自动检测 FightPawn 进入/离开
>   - 实现 IERW_FightInteractableInterface 接口

## 蓝图暴露变量

### 属性 `InteractionSphere`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USphereComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="FightInteract" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightInteract") TObjectPtr<USphereComponent> InteractionSphere;` |

**源码注释：**

> === 交互范围 ===

---

### 属性 `InteractionRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FightInteract" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightInteract") float InteractionRadius = 150.f;` |

---

### 属性 `InteractionPromptWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UWidgetComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="FightInteract" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightInteract") TObjectPtr<UWidgetComponent> InteractionPromptWidget;` |

---

### 属性 `PromptWidgetClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UUserWidget>` |
| 反射说明符 | BlueprintReadWrite, Category="FightInteract" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightInteract") TSubclassOf<UUserWidget> PromptWidgetClass;` |

---

### 属性 `PromptText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="FightInteract" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightInteract") FText PromptText;` |

**源码注释：**

> === 提示文字（覆盖接口默认值）===

---

### 属性 `PawnInteractMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UAnimMontage*` |
| 反射说明符 | BlueprintReadWrite, Category="FightInteract" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightInteract") class UAnimMontage* PawnInteractMontage;` |

**源码注释：**

> === 可选：FightPawn 前摇蒙太奇（覆盖接口默认值=nullptr）===

---

### 属性 `bEndInteractionImmediately`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="FightInteract" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightInteract") bool bEndInteractionImmediately = true;` |

---
