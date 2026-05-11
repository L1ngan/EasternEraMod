# `struct` `FGWOReplaceMeshRuleStruct`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `staticMesh`

| Field | Details |
|------|------|
| C++ type | `class UStaticMesh*` |
| Reflection specifiers | BlueprintReadWrite, Category="Replace Mesh Rule" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Replace Mesh Rule") class UStaticMesh* staticMesh = nullptr;` |

---

### Property `bCastShadow`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Replace Mesh Rule" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Replace Mesh Rule") bool bCastShadow = true;` |

---

### Property `collisionType`

| Field | Details |
|------|------|
| C++ type | `TEnumAsByte<ECollisionEnabled::Type>` |
| Reflection specifiers | BlueprintReadWrite, Category="Replace Mesh Rule" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Replace Mesh Rule") TEnumAsByte<ECollisionEnabled::Type> collisionType = ECollisionEnabled::NoCollision;` |

---
