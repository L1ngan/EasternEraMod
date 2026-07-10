# `struct` `FMijiTierVM`

**Source header:** `EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget.h`

---

## Functional description (from header comments)

> 秘籍层级（词条）视图模型——对应武学书的一个修炼层（FMartialArtsLevel）

## Blueprint-exposed variables

### Property `Level`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 Level = 0;` |

**Notes:**

> 层级序号（来自 FMartialArtsLevel::Level）

---

### Property `LevelName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText LevelName;` |

**Notes:**

> 层级名（如"第一层"，来自 FMartialArtsLevel::LevelName）

---

### Property `Desc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText Desc;` |

**Notes:**

> 该层效果描述（来自 FMartialArtsLevel::EntriesDescribe）

---

### Property `DescTooltip`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText DescTooltip;` |

**Notes:**

> 该层词条池描述（FSkillEntryPoolConfig::PoolDesc，鼠标悬停词条层行时显示；无池/无描述时为空）

---
