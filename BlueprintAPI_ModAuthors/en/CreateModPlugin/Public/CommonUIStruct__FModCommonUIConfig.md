# `struct` `FModCommonUIConfig`

**Source header:** `CreateModPlugin/Public/CommonUIStruct.h`

---

## Functional description (from header comments)

> Common UI config table row defining the panel title type, icons, common modules/buttons and tab composition.

## Blueprint-exposed variables

### Property `TitleType`

| Field | Details |
|------|------|
| C++ type | [EModTitleTypeEnum](CommonUIStruct__EModTitleTypeEnum.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EModTitleTypeEnum TitleType = EModTitleTypeEnum::Fixed;` |

**Notes:**

> 界面标题类型

---

### Property `TitleText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta = (EditConditionHides,EditCondition = "TitleType == EModTitleTypeEnum::Fixed")) FText TitleText;` |

**Notes:**

> 名称

---

### Property `LabelIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> LabelIcon;` |

**Notes:**

> 标题小图标

---

### Property `UIBigImg`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> UIBigImg;` |

**Notes:**

> 大图

---

### Property `CommonModuleIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> CommonModuleIds;` |

**Notes:**

> 要添加的公共模块id

---

### Property `CommonFuncButtonIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> CommonFuncButtonIds;` |

**Notes:**

> 要添加的公共按钮id

---

### Property `BottomCommonModuleIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> BottomCommonModuleIds;` |

**Notes:**

> 要添加的公共模块id(与CommonModuleIds的区别在一个在顶上一个在最下面,tab带的模块在中间)

---

### Property `TabInfos`

| Field | Details |
|------|------|
| C++ type | TArray<[FModTabInfo](CommonUIStruct__FModTabInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FModTabInfo> TabInfos;` |

**Notes:**

> 要添加的页签

---

### Property `BottomFuncButtonIsd`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> BottomFuncButtonIsd;` |

**Notes:**

> 底部功能按钮

---
