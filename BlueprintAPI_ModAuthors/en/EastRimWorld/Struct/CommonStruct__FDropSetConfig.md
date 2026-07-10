# `struct` `FDropSetConfig`

**Source header:** `EastRimWorld/Struct/CommonStruct.h`

---

## Functional description (from header comments)

> 掉落配置

## Blueprint-exposed variables

### Property `MinAwardNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MinAwardNum = 1;` |

**Notes:**

> 物品类型掉落最小数量 既选取DropSet最少多少个

---

### Property `MaxAwardNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MaxAwardNum = 1;` |

**Notes:**

> 物品类型掉落最大数量 既选取DropSet最多多少个

---

### Property `DropSet`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FDropItemInfo](CommonStruct__FDropItemInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FName,FDropItemInfo> DropSet;` |

**Notes:**

> 掉落合集 key 道具ID Value 权重

---

### Property `MustDrop`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FDropItemInfo](CommonStruct__FDropItemInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FName,FDropItemInfo> MustDrop;` |

**Notes:**

> 必定额外掉落 key 道具ID value 数量

---

### Property `bRemoveDuplicate`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bRemoveDuplicate = false;` |

**Notes:**

> 是否在随机多次时，随机到后不在参与随机（去重）

---

### Property `AwardImage`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> AwardImage;` |

**Notes:**

> 奖励图标

---

### Property `Describe`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FText Describe;` |

**Notes:**

> 奖励描述

---
