# `struct` `FItemUseState`

**Source header:** `EastRimWorld/GOAP/GOAP_PlanComponent.h`

---

## Functional description (from header comments)

> 物品使用状态

## Blueprint-exposed variables

### Property `States`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayTag , bool>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FGameplayTag , bool> States;` |

**Notes:**

> TMap<物品标签 , 是否可用>

---
