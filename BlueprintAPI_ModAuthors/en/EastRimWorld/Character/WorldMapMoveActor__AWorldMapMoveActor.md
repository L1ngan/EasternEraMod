# `class` `AWorldMapMoveActor`

**Source header:** `EastRimWorld/Character/WorldMapMoveActor.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `SceneComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USceneComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<USceneComponent> SceneComponent;` |

---

### Property `StaticMesh`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UStaticMeshComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UStaticMeshComponent> StaticMesh;` |

---

### Property `CharacterWorldMoveInfo`

| Field | Details |
|------|------|
| C++ type | [FCharacterWorldMoveInfo](../WorldSystem/WorldStruct__FCharacterWorldMoveInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) FCharacterWorldMoveInfo CharacterWorldMoveInfo;` |

---

### Property `OnMOveStateChangeDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnMOveStateChangeDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMOveStateChangeDelegate OnMOveStateChangeDelegate;` |

---

### Property `bIsSelect`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bIsSelect = false;` |

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

---

### Function `K2_DeinitializeWorldMapActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="DeinitializeWorldMapActor") void K2_DeinitializeWorldMapActor();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `K2_OnMapActorDestroy`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="OnMapActorDestroy") void K2_OnMapActorDestroy();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `K2_OnMapActorBeginStay`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="OnMapActorBeginStay") void K2_OnMapActorBeginStay();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `K2_OnMapActorEndStay`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="OnMapActorEndStay") void K2_OnMapActorEndStay();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

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

**Source comments:**

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

---
