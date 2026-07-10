# `struct` `FCommonUIConfig`

**Source header:** `EastRimWorld/UI/Struct/UIStruct.h`

---

## Functional description (from header comments)

> Common UI Config data structure.

## Blueprint-exposed variables

### Property `TitleType`

| Field | Details |
|------|------|
| C++ type | [ETitleTypeEnum](UIStruct__ETitleTypeEnum.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETitleTypeEnum TitleType = ETitleTypeEnum::Fixed;` |

**Notes:**

> 界面标题类型

---

### Property `TitleText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta = (EditConditionHides,EditCondition = "TitleType == ETitleTypeEnum::Fixed")) FText TitleText;` |

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
| C++ type | TArray<[FTabInfo](UIStruct__FTabInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTabInfo> TabInfos;` |

**Notes:**

> 要添加的页签

---

### Property `MainWidget`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[UEastRimWorldActivatableWidget](../EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftClassPtr<UEastRimWorldActivatableWidget> MainWidget;` |

**Notes:**

> 主要界面

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
