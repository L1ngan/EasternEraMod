# `struct` `FWorkScheduleUIConfigData`

**Source header:** `EastRimWorld/UI/Struct/UIStruct.h`

---

## Functional description (from header comments)

> 工作日程UI配置结构

## Blueprint-exposed variables

### Property `WorkScheduleType`

| Field | Details |
|------|------|
| C++ type | [EWorkScheduleType](UIStruct__EWorkScheduleType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EWorkScheduleType WorkScheduleType { EWorkScheduleType::None };` |

**Notes:**

> 工作日程类型

---

### Property `ScheduleScore`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 ScheduleScore { 0 };` |

**Notes:**

> 工作日程对应的分值

---

### Property `Name`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText Name;` |

**Notes:**

> 显示名称

---

### Property `BgTexture`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftObjectPtr<UTexture2D> BgTexture;` |

**Notes:**

> 背景图片

---

### Property `SelectedBgTexture`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftObjectPtr<UTexture2D> SelectedBgTexture;` |

**Notes:**

> 选中的背景图片

---

### Property `BlockTexture`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftObjectPtr<UTexture2D> BlockTexture;` |

**Notes:**

> 对应的方块图片

---
