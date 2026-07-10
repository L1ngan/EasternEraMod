# `class` `UModInformationAsset`

**Source header:** `CreateModPlugin/Public/BaseDataStruct.h`

---

## Functional description (from header comments)

> Mod information asset listing the mod's config data tables (DataTables) and data assets (DataAssets).

## Blueprint-exposed variables

### Property `DataTables`

| Field | Details |
|------|------|
| C++ type | TArray<[FModConfig](BaseDataStruct__FModConfig.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FModConfig> DataTables;` |

**Notes:**

> Mod的配置项

---

### Property `DataAssets`

| Field | Details |
|------|------|
| C++ type | TArray<[FModAsset](BaseDataStruct__FModAsset.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FModAsset> DataAssets;` |

**Notes:**

> Mod的配置项

---
