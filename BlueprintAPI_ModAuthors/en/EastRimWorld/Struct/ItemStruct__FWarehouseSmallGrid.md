# `struct` `FWarehouseSmallGrid`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> 仓库中每个小格子信息

## Blueprint-exposed variables

### Property `GridPosition`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FGridPosition GridPosition;` |

**Source comments:**

> 所处的地格坐标

---

### Property `WorldPosition`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FVector WorldPosition = FVector::Zero();` |

**Source comments:**

> 世界坐标

---

### Property `LocalCoordinate`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FVector LocalCoordinate = FVector::Zero();` |

**Source comments:**

> 局部坐标

---

### Property `LayerNumber`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) int LayerNumber = 1;` |

**Source comments:**

> 所处的层级

---

### Property `PlaceInstance`

| Field | Details |
|------|------|
| C++ type | class [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md) * |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) class UInventoryItemInstance * PlaceInstance = nullptr;` |

**Source comments:**

> 放置的实例信息

---
