# `class` `UERW_GameConfigComponent`

**Source header:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed functions

### Function `GetGameConfigByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UDataTable *` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameConfigType` | `const EGameConfigType &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UDataTable * GetGameConfigByType(const EGameConfigType & GameConfigType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetGameDataAssetByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UDataAsset *` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameDataAssetType` | `const EGameDataAssetType &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UDataAsset * GetGameDataAssetByType(const EGameDataAssetType & GameDataAssetType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---
