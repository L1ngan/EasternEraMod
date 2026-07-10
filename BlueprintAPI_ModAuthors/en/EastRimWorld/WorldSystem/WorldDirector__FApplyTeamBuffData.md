# `struct` `FApplyTeamBuffData`

**Source header:** `EastRimWorld/WorldSystem/WorldDirector.h`

---

## Functional description (from header comments)

> 施加的阵营buff

## Blueprint-exposed variables

### Property `TeamId`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 TeamId = 255;` |

**Notes:**

> 对应阵营

---

### Property `BuffInfos`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FCommonBuff> BuffInfos;` |

**Notes:**

> Buff

---
