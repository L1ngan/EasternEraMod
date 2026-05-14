# `class` `AERW_FightPawn`

**Source header:** `EastRimWorld/Framework/ERW_FightPawn.h`

---

## Functional description (from header comments)

> AERW_FightPawn - 门派战俯视角战斗主角
> 俯视角相机 + WASD 移动 + 交互系统（旧式输入）

## Blueprint-exposed variables

### Property `AbilitySystemComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UEastRimWorldAbilitySystemComponent](../AbilitySystem/EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Ability" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Ability") TObjectPtr<UEastRimWorldAbilitySystemComponent> AbilitySystemComponent;` |

---

### Property `CameraSpringArm`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USpringArmComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Camera" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Camera") TObjectPtr<USpringArmComponent> CameraSpringArm;` |

---

### Property `FightCamera`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UCameraComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Camera" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Camera") TObjectPtr<UCameraComponent> FightCamera;` |

---

### Property `CameraZoomMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Camera" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraZoomMax = 1400.f;` |

**Source comments:**

> === 相机参数 ===

---

### Property `CameraZoomMin`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Camera" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraZoomMin = 300.f;` |

---

### Property `CameraPitchFar`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Camera" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraPitchFar = -40.f;` |

---

### Property `CameraPitchNear`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Camera" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraPitchNear = -10.f;` |

---

### Property `CameraLagSpeed`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Camera" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraLagSpeed = 18.f;` |

---

### Property `CurrentInteractableTarget`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Interaction" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Interaction") TObjectPtr<AActor> CurrentInteractableTarget;` |

---

### Property `bIsInteracting`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Interaction" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Interaction") bool bIsInteracting = false;` |

---

## Blueprint-exposed functions

### Function `RegisterInteractable`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewTarget` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RegisterInteractable(AActor* NewTarget);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 交互物进入范围时调用（由交互物基类自动调用）

---

### Function `UnregisterInteractable`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Target` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnregisterInteractable(AActor* Target);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 交互物离开范围时调用（由交互物基类自动调用）

---

### Function `GetCurrentInteractable`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `AActor*` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) AActor* GetCurrentInteractable() const { return CurrentInteractableTarget; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取当前可交互目标

---

### Function `FinishInteraction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void FinishInteraction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---
