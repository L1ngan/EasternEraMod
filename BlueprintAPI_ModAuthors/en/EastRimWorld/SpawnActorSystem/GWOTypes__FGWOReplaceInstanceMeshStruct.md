# `struct` `FGWOReplaceInstanceMeshStruct`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## Functional description (from header comments)

> Instanced replacement data grouped by static mesh (ISM component and instance transform list)

## Blueprint-exposed variables

### Property `instancedStaticComponent`

| Field | Details |
|------|------|
| C++ type | `class UInstancedStaticMeshComponent*` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(Transient) class UInstancedStaticMeshComponent* instancedStaticComponent = nullptr;` |

**Notes:**

> 运行时实例化网格组件缓存（标 Transient 防止序列化悬空指针致崩）

---

### Property `replaceableStaticMesh`

| Field | Details |
|------|------|
| C++ type | `class UStaticMesh*` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() class UStaticMesh* replaceableStaticMesh = nullptr;` |

**Notes:**

> Static mesh used for instanced replacement

---

### Property `instTransformArr`

| Field | Details |
|------|------|
| C++ type | `TArray<FTransform>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FTransform> instTransformArr;` |

**Notes:**

> Array of transforms of all instances of this mesh

---
