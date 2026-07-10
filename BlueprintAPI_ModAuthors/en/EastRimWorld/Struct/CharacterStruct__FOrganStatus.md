# `struct` `FOrganStatus`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 器官状态

## Blueprint-exposed variables

### Property `StatusName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="OrganStatus" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganStatus") FText StatusName;` |

**Notes:**

> 名称

---

### Property `MinValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="OrganStatus" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = 0.f,ClampMax = 1.0f),Category = "OrganStatus") float MinValue = 0.f;` |

**Notes:**

> 区间最小值 百分比

---

### Property `MaxValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="OrganStatus" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = 0.f,ClampMax = 1.0f), Category = "OrganStatus") float MaxValue = 0.f;` |

**Notes:**

> 区间最大值

---

### Property `TakeEffectBuffID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="OrganStatus" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganStatus") FName TakeEffectBuffID;` |

**Notes:**

> 处在此区间时生效的buff

---

### Property `WorkAdditionPercentage`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="OrganStatus" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganStatus") float WorkAdditionPercentage = 1.f;` |

**Notes:**

> 处在此区间时工作的加成

---

### Property `TextColorType`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="OrganStatus" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganStatus") int TextColorType = 0;` |

**Notes:**

> 器官状态UI文字(-1 红色；0 灰色；1 绿色)

---
