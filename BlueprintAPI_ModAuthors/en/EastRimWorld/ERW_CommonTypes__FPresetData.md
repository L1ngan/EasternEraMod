# `struct` `FPresetData`

**Source header:** `EastRimWorld/ERW_CommonTypes.h`

---

## Functional description (from header comments)

> 预设建筑数据

## Blueprint-exposed variables

### Property `Transform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FTransform Transform;` |

**Source comments:**

> 相对坐标

---

### Property `EmbeddedWallType`

| Field | Details |
|------|------|
| C++ type | `EEmbeddedWallType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EEmbeddedWallType EmbeddedWallType { EEmbeddedWallType::None };` |

**Source comments:**

> 嵌入式墙体类型

---

### Property `RoofPartType`

| Field | Details |
|------|------|
| C++ type | `ERoofPartType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) ERoofPartType RoofPartType { ERoofPartType::None };` |

**Source comments:**

> 屋顶部位类型

---

### Property `IsWide`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) bool IsWide { false };` |

**Source comments:**

> 是否是宽的门或窗

---

### Property `Actor`

| Field | Details |
|------|------|
| C++ type | `AActor*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) AActor* Actor { nullptr };` |

**Source comments:**

> 对应的建筑

---
