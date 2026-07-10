# `struct` `FModAutoTileMeshConfigData`

**Source header:** `CreateModPlugin/Public/BuildDataStruct.h`

---

## Functional description (from header comments)

> 九宫格模型配置数据结构

## Blueprint-exposed variables

### Property `AutoTileType`

| Field | Details |
|------|------|
| C++ type | [EModAutoTileType](BuildDataStruct__EModAutoTileType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EModAutoTileType AutoTileType { EModAutoTileType::Flat };` |

**Notes:**

> 九宫格类型

---

### Property `StaticMesh`

| Field | Details |
|------|------|
| C++ type | `UStaticMesh*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) UStaticMesh* StaticMesh { nullptr };` |

**Notes:**

> 静态模型

---
