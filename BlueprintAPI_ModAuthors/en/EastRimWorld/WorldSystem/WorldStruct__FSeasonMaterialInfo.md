# `struct` `FSeasonMaterialInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 季节变化材质配置表

## Blueprint-exposed variables

### Property `Season`

| Field | Details |
|------|------|
| C++ type | [EERWSeason](WorldStruct__EERWSeason.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EERWSeason Season = EERWSeason::Spring;` |

**Notes:**

> 季节

---

### Property `ParameterChangeTransitionTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ParameterChangeTransitionTime = 20.f;` |

**Notes:**

> 参数过度时间(秒)

---

### Property `ParameterStartValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ParameterStartValue = 0.f;` |

**Notes:**

> 参数开始值

---

### Property `ParameterEndValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ParameterEndValue = 1.f;` |

**Notes:**

> 参数结束值

---

### Property `ParameterName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName ParameterName;` |

**Notes:**

> 参数开始值

---
