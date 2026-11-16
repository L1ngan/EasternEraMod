# `enum` `EModContainerChangeReason`

**Source header:** `EastRimWorld/Mod/ModStorageEventSubsystem.h`

---

## Functional description (from header comments)

> Reason of a container item change (Reason of OnContainerItemAdded / OnContainerItemRemoved).

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `Other` |  | Other paths (player UI moves, Blueprint changes, ...) |
| `Haul` |  | Hauled into storage |
| `Pickup` |  | Picked up (crafting, construction, eating, equipping, reading, ...) |
| `Consume` |  | Consumed through the player inventory |
| `Spoil` |  | Spoiled |
| `Demolish` |  | Dropped when the building was demolished |
| `Mod` |  | Moved by UModStorageLibrary.TransferItems |
| `Mixed` |  | Several reasons in the same frame |
