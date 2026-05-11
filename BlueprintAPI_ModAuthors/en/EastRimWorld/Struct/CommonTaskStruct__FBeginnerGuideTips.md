# `struct` `FBeginnerGuideTips`

**Source header:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## Functional description (from header comments)

> 新手引导Tips配置结构

## Blueprint-exposed variables

### Property `TipsType`

| Field | Details |
|------|------|
| C++ type | `EBeginnerGuideTipsType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EBeginnerGuideTipsType TipsType = EBeginnerGuideTipsType::PopupTips;` |

**Source comments:**

> Tips类型

---

### Property `Contents`

| Field | Details |
|------|------|
| C++ type | `TArray<FText>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FText> Contents;` |

**Source comments:**

> Tips内容

---
