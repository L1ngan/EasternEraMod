# `class` `UDLCInformationAsset`

**Source header:** `EastRimWorld/DLC/DLCSubsystem.h`

---

## Functional description (from header comments)

> DCL中的信息 放置于dlc包中

## Blueprint-exposed variables

### Property `DLCId`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int DLCId = 0;` |

**Notes:**

> DLCId 需与steam 主包中配置 id 统一

---

### Property `DLCWeGameID`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int DLCWeGameID = 0;` |

**Notes:**

> wegameID 统一id dlc包中的id steam上id

---

### Property `DLCName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FText DLCName;` |

**Notes:**

> 此DLC的名字

---

### Property `DLCIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftObjectPtr<UTexture2D> DLCIcon;` |

**Notes:**

> DLC图标

---

### Property `AddDataTable`

| Field | Details |
|------|------|
| C++ type | TMap<[EDLCConfigType](DLCSubsystem__EDLCConfigType.md),TSoftObjectPtr<UDataTable>> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<EDLCConfigType,TSoftObjectPtr<UDataTable>> AddDataTable;` |

**Notes:**

> 此Dlc增加的配置项

---

### Property `bPurchase`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) bool bPurchase = false;` |

**Notes:**

> 此DLC是否需要购买

---

### Property `DLCDescription`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText DLCDescription;` |

**Notes:**

> DLC的描述

---
