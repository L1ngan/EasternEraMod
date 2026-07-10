# `class` `ASceneTextActor`

**Source header:** `EastRimWorld/AbilitySystem/SceneText/SceneTextActor.h`

---

## Functional description (from header comments)

> Abstract base actor for floating scene text (damage numbers, prompts, etc.), reusable via the cache pool.

## Blueprint-exposed variables

### Property `ParentActor`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AActor>ParentActor = nullptr;` |

**Notes:**

> Parent actor the text is attached to.

---

### Property `StartOffset`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FVector2D StartOffset = FVector2D::ZeroVector;` |

**Notes:**

> Initial 2D offset of the text.

---

### Property `SceneComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USceneComponent>` |
| Reflection specifiers | BlueprintReadWrite, Category="Component" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Component") TObjectPtr<USceneComponent> SceneComponent;` |

**Notes:**

> Root scene component.

---

## Blueprint-exposed functions

### Function `InitSceneTextActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGenericTeamId` | `FGenericTeamId` |
| `InSceneTextType` | const [ESceneTextType](SceneTextStruct__ESceneTextType.md) |
| `InTextValue` | `const FText` |
| `InTransform` | `const FTransform &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitSceneTextActor(FGenericTeamId InGenericTeamId,const ESceneTextType InSceneTextType,const FText InTextValue,const FTransform & InTransform);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Initializes the scene text actor with team ID, scene text type, text value and transform.

---

### Function `SceneTextActorEnd`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SceneTextActorEnd();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Ends this scene text actor's display.

---

### Function `ActivateText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SceneTextInfo` | const [FSceneTextInfo](SceneTextStruct__FSceneTextInfo.md) & |
| `InGenericTeamId` | `const FGenericTeamId &` |
| `InTextValue` | `const FText &` |
| `InTransform` | `const FTransform &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void ActivateText(const FSceneTextInfo & SceneTextInfo,const FGenericTeamId & InGenericTeamId,const FText & InTextValue,const FTransform & InTransform);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 激活字体

---

### Function `SetParentActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InParentActor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetParentActor(AActor * InParentActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置父actor

---

### Function `CloseText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void CloseText();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Closes the text display (implemented in Blueprint).

---
