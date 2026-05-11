# `struct` `FModCharacterActionAbilityAnimSections`

**Source header:** `CreateModPlugin/Public/CharacterDataStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `BehaviorStartSections`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TArray<FName> BehaviorStartSections;` |

**Source comments:**

> 开始的动画蒙太奇片段名字

---

### Property `BehaviorLoopSections`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TArray<FName> BehaviorLoopSections;` |

**Source comments:**

> 循环动画蒙太奇片段名字

---

### Property `BehaviorEndSections`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TArray<FName> BehaviorEndSections;` |

**Source comments:**

> 结束动画蒙太奇片段名字

---

### Property `bDistinguishSex`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") bool bDistinguishSex = false;` |

**Source comments:**

> 区分性别

---

### Property `WomanBehaviorStartSections`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta=(EditCondition = "bDistinguishSex")) TArray<FName> WomanBehaviorStartSections;` |

**Source comments:**

> 开始的动画蒙太奇片段名字

---

### Property `WomanBehaviorLoopSections`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta=(EditCondition = "bDistinguishSex")) TArray<FName> WomanBehaviorLoopSections;` |

**Source comments:**

> 循环动画蒙太奇片段名字

---

### Property `WomanBehaviorEndSections`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta=(EditCondition = "bDistinguishSex")) TArray<FName> WomanBehaviorEndSections;` |

**Source comments:**

> 结束动画蒙太奇片段名字

---
