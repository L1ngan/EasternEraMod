# `struct` `FBuildingUIConfig`

**Source header:** `EastRimWorld/UI/Struct/UIStruct.h`

---

## Functional description (from header comments)

> Building UI Config data structure.

## Blueprint-exposed variables

### Property `Name`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText Name;` |

**Notes:**

> 建筑名称

---

### Property `BuildingIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> BuildingIcon;` |

**Notes:**

> 建筑的小图标

---

### Property `BuildingImg`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> BuildingImg;` |

**Notes:**

> 建筑的示意图

---

### Property `LabelIcon`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftObjectPtr<UTexture2D>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<TSoftObjectPtr<UTexture2D>> LabelIcon;` |

**Notes:**

> 页签Icon

---

### Property `LabelTipTitle`

| Field | Details |
|------|------|
| C++ type | `TArray<FText>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FText> LabelTipTitle;` |

**Notes:**

> 页签tip标题

---

### Property `LabelTipContent`

| Field | Details |
|------|------|
| C++ type | `TArray<FText>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FText> LabelTipContent;` |

**Notes:**

> 页签tip内容

---

### Property `LabelModuleIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> LabelModuleIds;` |

**Notes:**

> 页签对应的模块UIid

---

### Property `ModuleIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> ModuleIds;` |

**Notes:**

> 要添加的模块id

---

### Property `FuncButtonIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> FuncButtonIds;` |

**Notes:**

> 要添加的模块功能按钮id

---
