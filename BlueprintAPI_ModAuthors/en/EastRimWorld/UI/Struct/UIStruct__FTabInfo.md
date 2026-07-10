# `struct` `FTabInfo`

**Source header:** `EastRimWorld/UI/Struct/UIStruct.h`

---

## Functional description (from header comments)

> Tab Info data structure.

## Blueprint-exposed variables

### Property `NormalBase`

| Field | Details |
|------|------|
| C++ type | `FSlateBrush` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FSlateBrush NormalBase;` |

**Notes:**

> 普通按钮状态

---

### Property `NormalHovered`

| Field | Details |
|------|------|
| C++ type | `FSlateBrush` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FSlateBrush NormalHovered;` |

**Notes:**

> 普通按钮悬浮

---

### Property `NormalPressed`

| Field | Details |
|------|------|
| C++ type | `FSlateBrush` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FSlateBrush NormalPressed;` |

**Notes:**

> 普通按钮按下

---

### Property `LabelModuleIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> LabelModuleIds;` |

**Notes:**

> 对应的模块UIid

---

### Property `TipTitle`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText TipTitle;` |

**Notes:**

> 页签tip标题

---

### Property `LabelTipContent`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText LabelTipContent;` |

**Notes:**

> 页签tip内容

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
