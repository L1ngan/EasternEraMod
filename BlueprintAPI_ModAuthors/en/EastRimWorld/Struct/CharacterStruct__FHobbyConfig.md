# `struct` `FHobbyConfig`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 爱好配置表

## Blueprint-exposed variables

### Property `HobbyType`

| Field | Details |
|------|------|
| C++ type | [EHobbyType](CharacterStruct__EHobbyType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="FHobbyConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHobbyConfig") EHobbyType HobbyType = EHobbyType::None;` |

**Notes:**

> 爱好类型

---

### Property `HobbyIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="FHobbyConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FHobbyConfig") TSoftObjectPtr<UTexture2D> HobbyIcon;` |

**Notes:**

> 爱好图标

---

### Property `HobbyName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="FHobbyConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHobbyConfig") FText HobbyName;` |

**Notes:**

> 爱好名称

---

### Property `FormatEffectDesc`

| Field | Details |
|------|------|
| C++ type | `FFormatText` |
| Reflection specifiers | BlueprintReadWrite, Category="FHobbyConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FHobbyConfig") FFormatText FormatEffectDesc;` |

**Notes:**

> 格式化后的爱好效果描述文字

---

### Property `EffectAttributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadOnly, Category="FHobbyConfig" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FHobbyConfig") TMap<FGameplayAttribute,float> EffectAttributes;` |

**Notes:**

> 爱好效果属性

---

### Property `ActiveMoodIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="FHobbyConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHobbyConfig") TArray<FName> ActiveMoodIds;` |

**Notes:**

> 完成对应行为后，获得心情词条

---
