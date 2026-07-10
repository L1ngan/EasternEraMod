# `struct` `FUObjectData`

**Source header:** `EastRimWorld/ERW_CommonTypes.h`

---

## Functional description (from header comments)

> 包含UObject和其对应的Guid的结构

## Blueprint-exposed variables

### Property `Object`

| Field | Details |
|------|------|
| C++ type | `UObject*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , Transient) UObject* Object { nullptr };` |

**Notes:**

> Object（运行时缓存指针；身份靠下方 Guid，标记 Transient 避免被序列化导致悬空指针崩溃）

---

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) FGuid Guid;` |

**Notes:**

> Object对应的Guid

---

### Property `OwnerType`

| Field | Details |
|------|------|
| C++ type | [EActorType](ERW_Enumerations__EActorType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) EActorType OwnerType { EActorType::None };` |

**Notes:**

> Owner的类型

---
