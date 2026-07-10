# `struct` `FOrganAttackedShareConfig`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 器官收到伤害的分摊配置表

## Blueprint-exposed variables

### Property `SharedOrganID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="OrganAttackedShareConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganAttackedShareConfig") FName SharedOrganID;` |

**Notes:**

> 分摊伤害的部位ID

---

### Property `MinSharePercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="OrganAttackedShareConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganAttackedShareConfig") float MinSharePercent = 0.5f;` |

**Notes:**

> 最小分摊伤害百分比

---

### Property `MaxSharePercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="OrganAttackedShareConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganAttackedShareConfig") float MaxSharePercent = 1.f;` |

**Notes:**

> 最大分摊伤害百分比

---

### Property `ShareWeight`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="OrganAttackedShareConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganAttackedShareConfig") int ShareWeight = 1;` |

**Notes:**

> 分摊权重

---
