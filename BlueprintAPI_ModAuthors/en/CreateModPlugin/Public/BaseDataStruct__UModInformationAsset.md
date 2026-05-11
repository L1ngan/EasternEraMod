# `class` `UModInformationAsset`

**Source header:** `CreateModPlugin/Public/BaseDataStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `DataTables`

| Field | Details |
|------|------|
| C++ type | TArray<[FModConfig](BaseDataStruct__FModConfig.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FModConfig> DataTables;` |

**Source comments:**

> Mod的配置项

---

### Property `DataAssets`

| Field | Details |
|------|------|
| C++ type | TArray<[FModAsset](BaseDataStruct__FModAsset.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FModAsset> DataAssets;` |

**Source comments:**

> Mod的配置项

---
