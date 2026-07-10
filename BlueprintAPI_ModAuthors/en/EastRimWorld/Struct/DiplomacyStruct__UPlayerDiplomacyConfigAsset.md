# `class` `UPlayerDiplomacyConfigAsset`

**Source header:** `EastRimWorld/Struct/DiplomacyStruct.h`

---

## Functional description (from header comments)

> Player Diplomacy Config Asset UObject type.

## Blueprint-exposed variables

### Property `DiplomacyNumLevelLimit`

| Field | Details |
|------|------|
| C++ type | `TMap<int32,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32,int32> DiplomacyNumLevelLimit;` |

**Notes:**

> 门派等级可以结交门派的数量限制

---

### Property `DiplomacyCostMoneyCoefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float DiplomacyCostMoneyCoefficient;` |

**Notes:**

> 结交所需金钱 = 对方门派声望 * 此系数

---

### Property `DiplomacySuccessAddFavor`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float DiplomacySuccessAddFavor;` |

**Notes:**

> 结交成功增加好感度

---

### Property `DiplomacySuccessTipText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DiplomacySuccessTipText;` |

**Notes:**

> 结交成功提示文本

---

### Property `BrokenColdDown`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float BrokenColdDown;` |

**Notes:**

> 断交操作冷却

---

### Property `BrokenColdDownTipText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText BrokenColdDownTipText;` |

**Notes:**

> 断交操作冷却提示文本

---

### Property `BrokenReduceFavor`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float BrokenReduceFavor;` |

**Notes:**

> 断交减少的好感度(填正数)

---

### Property `RequireTaskColdDown`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float RequireTaskColdDown;` |

**Notes:**

> 请求任务冷却

---

### Property `RequireTaskColdDownTipText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText RequireTaskColdDownTipText;` |

**Notes:**

> 请求任务操作冷却提示文本

---

### Property `RequireTaskDialogueGroupID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RequireTaskDialogueGroupID;` |

**Notes:**

> 请求任务对话组ID

---

### Property `RequireHelpColdDown`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float RequireHelpColdDown;` |

**Notes:**

> 请求援助冷却

---

### Property `RequireHelpColdDownTipText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText RequireHelpColdDownTipText;` |

**Notes:**

> 请求任务操作冷却提示文本

---

### Property `RequireHelpDialogueGroupID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RequireHelpDialogueGroupID;` |

**Notes:**

> 请求援助对话组ID

---

### Property `GivePresentsDialogueGroupID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName GivePresentsDialogueGroupID;` |

**Notes:**

> 上供对话组ID

---

### Property `TauntDialogueGroupID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TauntDialogueGroupID;` |

**Notes:**

> 嘲讽对话组ID

---
