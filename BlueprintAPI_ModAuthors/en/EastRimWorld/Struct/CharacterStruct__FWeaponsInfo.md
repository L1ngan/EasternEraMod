# `struct` `FWeaponsInfo`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> Weapon socket/mesh info: weapon static mesh component, hand-held socket name and carry socket name

## Blueprint-exposed variables

### Property `WeaponStaticMesh`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UStaticMeshComponent>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TObjectPtr<UStaticMeshComponent> WeaponStaticMesh;` |

**Notes:**

> 携带的武器插槽对应的网格组件

---

### Property `HandParentSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName HandParentSocket = NAME_None;` |

**Notes:**

> 手持武器的插槽

---

### Property `CarryParentSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) FName CarryParentSocket = NAME_None;` |

**Notes:**

> 携带武器的插槽

---
