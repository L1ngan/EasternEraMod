# `struct` `FModBuildVariantInfo`

**Source header:** `EastRimWorld/Mod/ModBuildLibrary.h`

---

## Functional description (from header comments)

> 建筑的一种可选规格(同族建筑行, 见建筑配置的 VariantOf)

## Blueprint-exposed variables

### Property `VariantId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Mod System|Build" |
| Blueprint semantics | Read-only in Blueprint. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , Category = "Mod System|Build") FName VariantId;` |

**Notes:**

> 规格的建筑 ID(本体自己也算一条, 等于 BuildId)

---

### Property `BuildId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Mod System|Build" |
| Blueprint semantics | Read-only in Blueprint. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , Category = "Mod System|Build") FName BuildId;` |

**Notes:**

> 规格本体的建筑 ID

---

### Property `DisplayName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Mod System|Build" |
| Blueprint semantics | Read-only in Blueprint. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , Category = "Mod System|Build") FText DisplayName;` |

**Notes:**

> 规格行菜单行的显示名(保留菜单行里的字符表引用)

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadOnly, Category="Mod System|Build" |
| Blueprint semantics | Read-only in Blueprint. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , Category = "Mod System|Build") TObjectPtr<UTexture2D> Icon;` |

**Notes:**

> 规格行菜单行的图标

---

### Property `Size`

| Field | Details |
|------|------|
| C++ type | `FIntVector` |
| Reflection specifiers | BlueprintReadOnly, Category="Mod System|Build" |
| Blueprint semantics | Read-only in Blueprint. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , Category = "Mod System|Build") FIntVector Size;` |

**Notes:**

> 规格行配置的占格尺寸(旋转前, Z 为占高)

---

### Property `bIsDefault`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Mod System|Build" |
| Blueprint semantics | Read-only in Blueprint. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , Category = "Mod System|Build") bool bIsDefault;` |

**Notes:**

> 是否本体

---

### Property `bAvailable`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Mod System|Build" |
| Blueprint semantics | Read-only in Blueprint. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , Category = "Mod System|Build") bool bAvailable;` |

**Notes:**

> 是否通过建造配置与解锁检查(同 CanBuild);不代表一定能进入放置(还要在基地里操控玩家 Pawn), 也不含落点和数量上限

---

### Property `UnavailableReason`

| Field | Details |
|------|------|
| C++ type | `EBuildUnavailableReason` |
| Reflection specifiers | BlueprintReadOnly, Category="Mod System|Build" |
| Blueprint semantics | Read-only in Blueprint. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , Category = "Mod System|Build") EBuildUnavailableReason UnavailableReason;` |

**Notes:**

> bAvailable 为 false 时的原因

---

