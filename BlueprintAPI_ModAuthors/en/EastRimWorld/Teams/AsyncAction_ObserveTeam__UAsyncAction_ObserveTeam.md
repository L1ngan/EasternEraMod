# `class` `UAsyncAction_ObserveTeam`

**Source header:** `EastRimWorld/Teams/AsyncAction_ObserveTeam.h`

---

## Functional description (from header comments)

> Watches for team changes in the specified object

## Blueprint-exposed variables

### Property `OnTeamChanged`

| Field | Details |
|------|------|
| C++ type | `FTeamObservedAsyncDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FTeamObservedAsyncDelegate OnTeamChanged;` |

**Source comments:**

> Called when the team is set or changed

---

## Blueprint-exposed functions

### Function `ObserveTeam`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UAsyncAction_ObserveTeam](AsyncAction_ObserveTeam__UAsyncAction_ObserveTeam.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamAgent` | `UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Keywords="Watch")) static UAsyncAction_ObserveTeam* ObserveTeam(UObject* TeamAgent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Watches for team changes on the specified team agent
> - It will will fire once immediately to give the current team assignment
> - For anything that can ever belong to a team (implements IEastRimWorldTeamAgentInterface),
> it will also listen for team assignment changes in the future

---
