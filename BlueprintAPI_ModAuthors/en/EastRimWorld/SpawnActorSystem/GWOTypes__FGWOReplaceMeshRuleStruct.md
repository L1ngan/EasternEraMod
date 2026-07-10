# `struct` `FGWOReplaceMeshRuleStruct`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## Functional description (from header comments)

> Replace-mesh rule data table row (mesh, shadow casting, collision type)

## Blueprint-exposed variables

### Property `staticMesh`

| Field | Details |
|------|------|
| C++ type | `class UStaticMesh*` |
| Reflection specifiers | BlueprintReadWrite, Category="Replace Mesh Rule" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Replace Mesh Rule") class UStaticMesh* staticMesh = nullptr;` |

**Notes:**

> Static mesh asset this rule applies to

---

### Property `bCastShadow`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Replace Mesh Rule" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Replace Mesh Rule") bool bCastShadow = true;` |

**Notes:**

> Whether the replacement mesh instance casts shadows

---

### Property `collisionType`

| Field | Details |
|------|------|
| C++ type | `TEnumAsByte<ECollisionEnabled::Type>` |
| Reflection specifiers | BlueprintReadWrite, Category="Replace Mesh Rule" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Replace Mesh Rule") TEnumAsByte<ECollisionEnabled::Type> collisionType = ECollisionEnabled::NoCollision;` |

**Notes:**

> Collision enabled type of the replacement mesh instance (defaults to no collision)

---
