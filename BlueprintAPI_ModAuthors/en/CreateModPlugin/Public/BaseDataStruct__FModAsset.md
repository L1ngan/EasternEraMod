# `struct` `FModAsset`

**Source header:** `CreateModPlugin/Public/BaseDataStruct.h`

---

## Functional description (from header comments)

> Mod资产

## Blueprint-exposed variables

### Property `ModDataAssetType`

| Field | Details |
|------|------|
| C++ type | `EModDataAssetType` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EModDataAssetType ModDataAssetType = EModDataAssetType::None;` |

**Source comments:**

> 配置类型

---

### Property `DataAsset`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UDataAsset>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftObjectPtr<UDataAsset> DataAsset;` |

**Source comments:**

> 配置表

---

### Property `bOverrideData`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) bool bOverrideData = false;` |

**Source comments:**

> 勾选后Map或Array则直接覆盖原来的数据，不勾选则在原有的基础增加。其他类型的属性如果是默认值则不生效

---
