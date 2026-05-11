# `class` `UEastRimWorldTeamStatics`

**Source header:** `EastRimWorld/Teams/EastRimWorldTeamStatics.h`

---

## Functional description (from header comments)

> A subsystem for easy access to team information for team-based actors (e.g., pawns or player states)

## Blueprint-exposed functions

### Function `FindTeamFromObject`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Agent` | `const UObject*` |
| `bIsPartOfTeam` | `bool&` |
| `TeamId` | `int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category=Teams, meta=(Keywords="GetTeamFromObject", DefaultToSelf="Agent")) static void FindTeamFromObject(const UObject* Agent, bool& bIsPartOfTeam, int32& TeamId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Returns the team this object belongs to, or INDEX_NONE if it is not part of a team

---
