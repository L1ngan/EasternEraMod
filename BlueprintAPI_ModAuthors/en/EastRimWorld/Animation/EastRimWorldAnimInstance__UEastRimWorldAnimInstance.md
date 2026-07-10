# `class` `UEastRimWorldAnimInstance`

**Source header:** `EastRimWorld/Animation/EastRimWorldAnimInstance.h`

---

## Functional description (from header comments)

> UEastRimWorldAnimInstance
> The base game animation instance class used by this project.

## Blueprint-exposed variables

### Property `GameplayTagPropertyMap`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagBlueprintPropertyMap` |
| Reflection specifiers | Category="GameplayTags" |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, Category = "GameplayTags") FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;` |

**Notes:**

> Gameplay tags that can be mapped to blueprint variables. The variables will automatically update as the tags are added or removed.
> These should be used instead of manually querying for the gameplay tags.

---

### Property `GroundDistance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Character State Data" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Character State Data") float GroundDistance = -1.0f;` |

**Notes:**

> Distance from the character to the ground; -1 means invalid / not measured.

---

## Blueprint-exposed functions

### Function `UpdateBattleWeapon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void UpdateBattleWeapon(const FCharacterWeapon & InWeapon);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 更新战斗的武器

---

### Function `SetIdleAndRunBlendSpace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewBlendSpace` | `const TSoftObjectPtr<UBlendSpace1D> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void SetIdleAndRunBlendSpace(const TSoftObjectPtr<UBlendSpace1D> & NewBlendSpace);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 设置召唤物的待机行走混合空间

---

### Function `UpdateCharacterBehaviorState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterBehaviorState` | [ECharacterBehaviorState](../Struct/CommonEnum__ECharacterBehaviorState.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void UpdateCharacterBehaviorState(ECharacterBehaviorState CharacterBehaviorState);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 设置角色的行为状态

---

### Function `SetCharacterRideAnim`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewRideAnim` | `const TSoftObjectPtr<UAnimSequence> &` |
| `bRide` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void SetCharacterRideAnim(const TSoftObjectPtr<UAnimSequence> & NewRideAnim,bool bRide);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 设置角色的骑乘的动画

---
