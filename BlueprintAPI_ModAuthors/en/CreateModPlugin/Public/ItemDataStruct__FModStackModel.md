# `struct` `FModStackModel`

**Source header:** `CreateModPlugin/Public/ItemDataStruct.h`

---

## Functional description (from header comments)

> 定义堆叠模型的结构体

## Blueprint-exposed variables

### Property `MinCapacity`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="StackModel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="StackModel") float MinCapacity = 0.f;` |

**Notes:**

> 最小容量百分比

---

### Property `MaxCapacity`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="StackModel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="StackModel") float MaxCapacity = 0.f;` |

**Notes:**

> 最大容量百分比

---

### Property `StackModel`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="StackModel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="StackModel") TSoftObjectPtr<UStaticMesh> StackModel;` |

**Notes:**

> 在容量范围内显示的模型

---
