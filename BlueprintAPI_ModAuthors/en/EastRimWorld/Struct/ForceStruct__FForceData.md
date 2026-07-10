# `struct` `FForceData`

**Source header:** `EastRimWorld/Struct/ForceStruct.h`

---

## Functional description (from header comments)

> 势力表结构体

## Blueprint-exposed variables

### Property `ForceName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText ForceName;` |

**Notes:**

> 势力名称

---

### Property `SkillDatas`

| Field | Details |
|------|------|
| C++ type | TArray<[FForceSkillData](ForceStruct__FForceSkillData.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FForceSkillData> SkillDatas;` |

**Notes:**

> 主角技能

---

### Property `Resource`

| Field | Details |
|------|------|
| C++ type | TArray<[FItemSimpleData](CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FItemSimpleData> Resource;` |

**Notes:**

> 物资

---

### Property `PassGameConditionIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FName> PassGameConditionIds;` |

**Notes:**

> 通关条件

---

### Property `ForceTitleIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") TSoftObjectPtr<UTexture2D> ForceTitleIcon;` |

**Notes:**

> 势力名称图标

---

### Property `ForceNormalIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") TSoftObjectPtr<UTexture2D> ForceNormalIcon;` |

**Notes:**

> 势力图标Normal

---

### Property `ForceHoverIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") TSoftObjectPtr<UTexture2D> ForceHoverIcon;` |

**Notes:**

> 势力图标Hover

---

### Property `ForcePressIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") TSoftObjectPtr<UTexture2D> ForcePressIcon;` |

**Notes:**

> 势力图标Press

---

### Property `TipTitle`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") FText TipTitle;` |

**Notes:**

> 势力tip

---

### Property `TipContent`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") FText TipContent;` |

**Notes:**

> 势力tip

---

### Property `PlayDescription`

| Field | Details |
|------|------|
| C++ type | `TArray<FText>` |
| Reflection specifiers | BlueprintReadWrite, Category="UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") TArray<FText> PlayDescription;` |

**Notes:**

> 玩法特色

---

### Property `bIsOpen`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") bool bIsOpen = true;` |

**Notes:**

> 是否开放（未开放的势力不能被用户选择）

---
