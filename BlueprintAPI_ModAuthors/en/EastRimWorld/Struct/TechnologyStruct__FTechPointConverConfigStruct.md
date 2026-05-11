# `struct` `FTechPointConverConfigStruct`

**Source header:** `EastRimWorld/Struct/TechnologyStruct.h`

---

## Functional description (from header comments)

> 科技点数转化配置表结构

## Blueprint-exposed variables

### Property `TPointType`

| Field | Details |
|------|------|
| C++ type | `ETechPointType` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") ETechPointType TPointType = ETechPointType::BasTechPoint;` |

**Source comments:**

> 物品类型

---

### Property `RecoverValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 RecoverValue { 0 };` |

**Source comments:**

> 单个物品恢复值

---

### Property `BuildIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , Category="Base") TArray<FName> BuildIDs;` |

**Source comments:**

> 可以产生当前类型科技点的建筑

---
