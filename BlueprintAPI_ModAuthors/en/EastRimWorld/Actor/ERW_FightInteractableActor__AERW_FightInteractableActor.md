# `class` `AERW_FightInteractableActor`

**Source header:** `EastRimWorld/Actor/ERW_FightInteractableActor.h`

---

## Functional description (from header comments)

> AERW_FightInteractableActor - 门派战交互物基类
> 宝箱、门、建筑等继承此类即可自动拥有交互能力
> 
> 功能：
>   - 自带交互范围碰撞球（蓝图可调半径）
>   - 自动检测 FightPawn 进入/离开
>   - 实现 IERW_FightInteractableInterface 接口

## Blueprint-exposed variables

### Property `InteractionSphere`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USphereComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightInteract" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightInteract") TObjectPtr<USphereComponent> InteractionSphere;` |

**Source comments:**

> === 交互范围 ===

---

### Property `InteractionRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FightInteract" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightInteract") float InteractionRadius = 150.f;` |

---

### Property `InteractionPromptWidget`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UWidgetComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightInteract" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightInteract") TObjectPtr<UWidgetComponent> InteractionPromptWidget;` |

---

### Property `PromptWidgetClass`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UUserWidget>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightInteract" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightInteract") TSubclassOf<UUserWidget> PromptWidgetClass;` |

---

### Property `PromptText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="FightInteract" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightInteract") FText PromptText;` |

**Source comments:**

> === 提示文字（覆盖接口默认值）===

---

### Property `PawnInteractMontage`

| Field | Details |
|------|------|
| C++ type | `class UAnimMontage*` |
| Reflection specifiers | BlueprintReadWrite, Category="FightInteract" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightInteract") class UAnimMontage* PawnInteractMontage;` |

**Source comments:**

> === 可选：FightPawn 前摇蒙太奇（覆盖接口默认值=nullptr）===

---

### Property `bEndInteractionImmediately`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="FightInteract" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightInteract") bool bEndInteractionImmediately = true;` |

---
