# `class` `UERW_GameConfigComponent`

**Source header:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## Functional description (from header comments)

> Game config component that centrally manages and provides access to data tables and data assets by type, with runtime copies for mod modification

## Blueprint-exposed functions

### Function `GetGameConfigByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UDataTable *` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameConfigType` | const [EGameConfigType](ERW_GameConfigComponent__EGameConfigType.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UDataTable * GetGameConfigByType(const EGameConfigType & GameConfigType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Returns the data table for the given game config type

---

### Function `GetGameDataAssetByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UDataAsset *` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameDataAssetType` | const [EGameDataAssetType](ERW_GameConfigComponent__EGameDataAssetType.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UDataAsset * GetGameDataAssetByType(const EGameDataAssetType & GameDataAssetType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Returns the data asset for the given game data asset type

---
