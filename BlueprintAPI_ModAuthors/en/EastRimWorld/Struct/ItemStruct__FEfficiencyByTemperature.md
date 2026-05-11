# `struct` `FEfficiencyByTemperature`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> 温度与效率的关联  0<=T<=20 E=100%  21<=T<=40 E=50%  T无范围E=0 策划直接填

## Blueprint-exposed variables

### Property `MinTemperature`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Grow" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grow") float MinTemperature = 0.f;` |

**Source comments:**

> 最小温度(包含)

---

### Property `MaxTemperature`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Grow" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grow") float MaxTemperature = 0.f;` |

**Source comments:**

> 最大温度(包含)

---

### Property `Efficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Grow" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grow") float Efficiency = 0.f;` |

**Source comments:**

> 效率

---
