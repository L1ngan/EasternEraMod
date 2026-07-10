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

**Notes:**

> 相对坐标

---

### Property `EmbeddedWallType`

| Field | Details |
|------|------|
| C++ type | [EEmbeddedWallType](ERW_Enumerations__EEmbeddedWallType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EEmbeddedWallType EmbeddedWallType { EEmbeddedWallType::None };` |

**Notes:**

> 嵌入式墙体类型

---

### Property `RoofPartType`

| Field | Details |
|------|------|
| C++ type | [ERoofPartType](ERW_Enumerations__ERoofPartType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) ERoofPartType RoofPartType { ERoofPartType::None };` |

**Notes:**

> 屋顶部位类型

---

### Property `IsWide`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) bool IsWide { false };` |

**Notes:**

> 是否是宽的门或窗

---

### Property `Actor`

| Field | Details |
|------|------|
| C++ type | `AActor*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) AActor* Actor { nullptr };` |

**Notes:**

> 对应的建筑

---
