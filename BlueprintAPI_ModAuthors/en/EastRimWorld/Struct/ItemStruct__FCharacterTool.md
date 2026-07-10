# `struct` `FCharacterTool`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> 角色工具

## Blueprint-exposed variables

### Property `ToolType`

| Field | Details |
|------|------|
| C++ type | [EToolType](ItemStruct__EToolType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Tool" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tool") EToolType ToolType = EToolType::None;` |

**Notes:**

> Tool Type field.

---

### Property `CollectLossDurability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Weapon" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") float CollectLossDurability = 0.f;` |

**Notes:**

> 采集掉耐久

---
