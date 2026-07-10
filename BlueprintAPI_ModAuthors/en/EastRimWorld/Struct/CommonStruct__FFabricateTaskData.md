# `struct` `FFabricateTaskData`

**Source header:** `EastRimWorld/Struct/CommonStruct.h`

---

## Functional description (from header comments)

> 制造任务信息

## Blueprint-exposed variables

### Property `FabricateTaskGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FGuid FabricateTaskGuid;` |

**Notes:**

> 当前制造任务的GUID

---

### Property `FormulaData`

| Field | Details |
|------|------|
| C++ type | [FFormulaData](CommonStruct__FFormulaData.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FFormulaData FormulaData;` |

**Notes:**

> 制造的配方信息

---

### Property `LackResource`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FName,int> LackResource;` |

**Notes:**

> 缺少的资源

---

### Property `SelectableResourceTags`

| Field | Details |
|------|------|
| C++ type | `TArray<FGameplayTag>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FGameplayTag> SelectableResourceTags;` |

**Notes:**

> 选择的资源标签

---

### Property `AlreadyHaveSelectableResource`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FName,int> AlreadyHaveSelectableResource;` |

**Notes:**

> 已经放入的可选资源

---

### Property `FabricateState`

| Field | Details |
|------|------|
| C++ type | [EFabricateState](CommonStruct__EFabricateState.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EFabricateState FabricateState = EFabricateState::None;` |

**Notes:**

> 制造状态

---

### Property `TargetNumber`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int TargetNumber = 0;` |

**Notes:**

> 目标数量

---

### Property `FabricateRule`

| Field | Details |
|------|------|
| C++ type | [EFabricateRule](CommonStruct__EFabricateRule.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EFabricateRule FabricateRule = EFabricateRule::NumberOfTimes;` |

**Notes:**

> 制造的规则

---

### Property `CurWorkload`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float CurWorkload = 0.f;` |

**Notes:**

> 当前单次已经完成的工作量

---

### Property `QualityValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float QualityValue = 0.f;` |

**Notes:**

> 单次累加的品质值

---
