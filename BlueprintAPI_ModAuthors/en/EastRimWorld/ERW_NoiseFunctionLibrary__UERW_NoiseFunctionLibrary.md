# `class` `UERW_NoiseFunctionLibrary`

**Source header:** `EastRimWorld/ERW_NoiseFunctionLibrary.h`

---

## Functional description (from header comments)

> 噪声相关功能函数库

## Blueprint-exposed functions

### Function `Noise`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Fx` | `float` |
| `Fy` | `float` |
| `Octaves` | `int32` |
| `Persistence` | `float` |
| `Seed` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static float Noise(float Fx , float Fy , int32 Octaves , float Persistence , int32 Seed);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 生成噪声值

---
