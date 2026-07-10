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

**Notes:**

> === 交互范围 ===

---

### Property `StaticMeshComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UStaticMeshComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightInteract" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightInteract") TObjectPtr<UStaticMeshComponent> StaticMeshComponent;` |

**Notes:**

> Static mesh component for the interactable's appearance.

---

### Property `RandomStaticMeshes`

| Field | Details |
|------|------|
| C++ type | `TArray<TObjectPtr<UStaticMesh>>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightInteract|Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightInteract|Mesh") TArray<TObjectPtr<UStaticMesh>> RandomStaticMeshes;` |

**Notes:**

> Candidate list of static meshes for random appearance.

---

### Property `InteractionRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FightInteract" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightInteract") float InteractionRadius = 150.f;` |

**Notes:**

> Radius of the interaction collision sphere; defaults to 150.

---

### Property `InteractionPromptWidget`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UWidgetComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightInteract" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightInteract") TObjectPtr<UWidgetComponent> InteractionPromptWidget;` |

**Notes:**

> Widget component displaying the interaction prompt UI.

---

### Property `PromptWidgetClass`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UUserWidget>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightInteract" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightInteract") TSubclassOf<UUserWidget> PromptWidgetClass;` |

**Notes:**

> UserWidget class used for the interaction prompt.

---

### Property `PromptText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="FightInteract" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightInteract") FText PromptText;` |

**Notes:**

> === 提示文字（覆盖接口默认值）。C++ 不会主动写入提示 UI，UI 蓝图可按需读取。===

---

### Property `PawnInteractMontage`

| Field | Details |
|------|------|
| C++ type | `class UAnimMontage*` |
| Reflection specifiers | BlueprintReadWrite, Category="FightInteract" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightInteract") class UAnimMontage* PawnInteractMontage;` |

**Notes:**

> === 可选：FightPawn 前摇蒙太奇（覆盖接口默认值=nullptr）===

---

### Property `bEndInteractionImmediately`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="FightInteract" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightInteract") bool bEndInteractionImmediately = true;` |

**Notes:**

> Whether the interaction ends immediately; defaults to true.

---

## Blueprint-exposed functions

### Function `RandomSetStaticMesh`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightInteract|Mesh" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightInteract|Mesh") void RandomSetStaticMesh();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Sets the static mesh to one randomly chosen from the RandomStaticMeshes list.

---
