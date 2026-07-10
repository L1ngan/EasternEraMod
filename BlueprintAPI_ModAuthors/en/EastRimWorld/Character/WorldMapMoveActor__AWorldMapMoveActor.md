# `class` `AWorldMapMoveActor`

**Source header:** `EastRimWorld/Character/WorldMapMoveActor.h`

---

## Functional description (from header comments)

> World map move actor: a selectable entity representing a character moving or staying on the world map

## Blueprint-exposed variables

### Property `SceneComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USceneComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<USceneComponent> SceneComponent;` |

**Notes:**

> Root scene component

---

### Property `StaticMesh`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UStaticMeshComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UStaticMeshComponent> StaticMesh;` |

**Notes:**

> Static mesh component

---

### Property `CharacterWorldMoveInfo`

| Field | Details |
|------|------|
| C++ type | [FCharacterWorldMoveInfo](../WorldSystem/WorldStruct__FCharacterWorldMoveInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) FCharacterWorldMoveInfo CharacterWorldMoveInfo;` |

**Notes:**

> The character's world map movement info

---

### Property `OnMOveStateChangeDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnMOveStateChangeDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMOveStateChangeDelegate OnMOveStateChangeDelegate;` |

**Notes:**

> Delegate broadcast when the movement state changes

---

### Property `bIsSelect`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bIsSelect = false;` |

**Notes:**

> Whether the actor is currently selected

---

## Blueprint-exposed functions

### Function `K2_InitWorldMapActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewCharacterWorldMoveInfo` | const [FCharacterWorldMoveInfo](../WorldSystem/WorldStruct__FCharacterWorldMoveInfo.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="InitWorldMapActor") void K2_InitWorldMapActor(const FCharacterWorldMoveInfo & NewCharacterWorldMoveInfo);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Blueprint event: called when the world map actor is initialized with movement info

---

### Function `K2_DeinitializeWorldMapActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="DeinitializeWorldMapActor") void K2_DeinitializeWorldMapActor();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Blueprint event: called when the world map actor is deinitialized

---

### Function `K2_OnMapActorDestroy`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="OnMapActorDestroy") void K2_OnMapActorDestroy();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Blueprint event: called when the map actor is destroyed

---

### Function `K2_OnMapActorBeginStay`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="OnMapActorBeginStay") void K2_OnMapActorBeginStay();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Blueprint event: called when the map actor begins staying

---

### Function `K2_OnMapActorEndStay`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="OnMapActorEndStay") void K2_OnMapActorEndStay();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Blueprint event: called when the map actor ends staying

---

### Function `UpdateMovePath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MovePath` | `const TArray<FVector> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void UpdateMovePath(const TArray<FVector> & MovePath);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 更新移动路径

---

### Function `SetMoveActorTipUI`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WidgetObject` | `UUserWidget *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetMoveActorTipUI(UUserWidget * WidgetObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Sets the tip UI widget for the move actor

---
