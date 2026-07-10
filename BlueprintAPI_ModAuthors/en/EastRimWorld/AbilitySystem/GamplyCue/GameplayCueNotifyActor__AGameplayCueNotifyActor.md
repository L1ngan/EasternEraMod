# `class` `AGameplayCueNotifyActor`

**Source header:** `EastRimWorld/AbilitySystem/GamplyCue/GameplayCueNotifyActor.h`

---

## Functional description (from header comments)

> Project base class for gameplay cue notify actors; extracts the EastRimWorld effect context and context parameter from cue parameters

## Blueprint-exposed functions

### Function `GetGameplayEffectParameter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Parameters` | `const FGameplayCueParameters&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetGameplayEffectParameter(const FGameplayCueParameters& Parameters);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取上下文参数

---
