# `class` `UEastRimWorldSceneTextWidget`

**Source header:** `EastRimWorld/UI/Common/EastRimWorldSceneTextWidget.h`

---

## Functional description (from header comments)

> East Rim World Scene Text Widget UObject type.

## Blueprint-exposed variables

### Property `TextAnimationComplete`

| Field | Details |
|------|------|
| C++ type | `FTextAnimationComplete` |
| Reflection specifiers | BlueprintCallable, BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FTextAnimationComplete TextAnimationComplete;` |

**Notes:**

> Text Animation Complete field.

---

### Property `TextAnimations`

| Field | Details |
|------|------|
| C++ type | `TMap<FString,UWidgetAnimation*>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FString,UWidgetAnimation*> TextAnimations;` |

**Notes:**

> 界面中包含的所有动画

---

## Blueprint-exposed functions

### Function `InitSceneTextWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GenericTeamId` | `const FGenericTeamId &` |
| `SceneTextInfo` | const [FSceneTextInfo](../../AbilitySystem/SceneText/SceneTextStruct__FSceneTextInfo.md) & |
| `InText` | `const FText &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintNativeEvent) void InitSceneTextWidget(const FGenericTeamId & GenericTeamId,const FSceneTextInfo & SceneTextInfo,const FText & InText);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Notes:**

> Executes the Init Scene Text Widget operation.

---

### Function `InitAllWidgetAnimations`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitAllWidgetAnimations();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Init All Widget Animations operation.

---
