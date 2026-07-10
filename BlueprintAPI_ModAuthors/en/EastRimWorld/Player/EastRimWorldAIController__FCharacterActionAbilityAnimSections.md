# `struct` `FCharacterActionAbilityAnimSections`

**Source header:** `EastRimWorld/Player/EastRimWorldAIController.h`

---

## Functional description (from header comments)

> Anim montage section configuration for a character action (start/loop/end section names, optionally distinguished by sex)

## Blueprint-exposed variables

### Property `BehaviorStartSections`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TArray<FName> BehaviorStartSections;` |

**Notes:**

> 开始的动画蒙太奇片段名字

---

### Property `BehaviorLoopSections`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TArray<FName> BehaviorLoopSections;` |

**Notes:**

> 循环动画蒙太奇片段名字

---

### Property `BehaviorEndSections`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TArray<FName> BehaviorEndSections;` |

**Notes:**

> 结束动画蒙太奇片段名字

---

### Property `bDistinguishSex`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") bool bDistinguishSex = false;` |

**Notes:**

> 区分性别

---

### Property `WomanBehaviorStartSections`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta=(EditCondition = "bDistinguishSex")) TArray<FName> WomanBehaviorStartSections;` |

**Notes:**

> 开始的动画蒙太奇片段名字

---

### Property `WomanBehaviorLoopSections`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta=(EditCondition = "bDistinguishSex")) TArray<FName> WomanBehaviorLoopSections;` |

**Notes:**

> 循环动画蒙太奇片段名字

---

### Property `WomanBehaviorEndSections`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta=(EditCondition = "bDistinguishSex")) TArray<FName> WomanBehaviorEndSections;` |

**Notes:**

> 结束动画蒙太奇片段名字

---
