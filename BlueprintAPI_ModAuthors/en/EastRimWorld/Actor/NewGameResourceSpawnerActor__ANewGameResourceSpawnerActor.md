# `class` `ANewGameResourceSpawnerActor`

**Source header:** `EastRimWorld/Actor/NewGameResourceSpawnerActor.h`

---

## Functional description (from header comments)

> New-game resource spawner actor that places initial item resources around its own grid position.

## Blueprint-exposed variables

### Property `SpawnClass`

| Field | Details |
|------|------|
| C++ type | TSubclassOf<[AInventoryItemSet](../Inventory/InventoryItemSet__AInventoryItemSet.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<AInventoryItemSet> SpawnClass;` |

**Notes:**

> Inventory item set actor class used to spawn the initial resources.

---
