# `struct` `FGoalAndAction`

**Source header:** `EastRimWorld/GOAP/GOAP_Data.h`

---

## Functional description (from header comments)

> Pairing of a GOAP goal and its action data

## Blueprint-exposed variables

### Property `GoalID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame) FName GoalID;` |

**Notes:**

> ID of the GOAP goal in the config table

---

### Property `Action`

| Field | Details |
|------|------|
| C++ type | [FGOAP_Action](GOAP_Data__FGOAP_Action.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame) FGOAP_Action Action;` |

**Notes:**

> GOAP action data

---
