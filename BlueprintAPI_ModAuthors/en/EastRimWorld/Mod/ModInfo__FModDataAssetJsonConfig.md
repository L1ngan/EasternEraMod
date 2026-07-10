# `struct` `FModDataAssetJsonConfig`

**Source header:** `EastRimWorld/Mod/ModInfo.h`

---

## Functional description (from header comments)

> ModInfo.json 中记录的数据资产 JSON 条目

## Blueprint-exposed variables

### Property `AssetType`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString AssetType;` |

**Notes:**

> Type name of the data asset

---

### Property `JsonFile`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString JsonFile;` |

**Notes:**

> Path of the exported data asset JSON file

---

### Property `bOverrideData`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bOverrideData = false;` |

**Notes:**

> Whether to override the game's existing data asset data

---
