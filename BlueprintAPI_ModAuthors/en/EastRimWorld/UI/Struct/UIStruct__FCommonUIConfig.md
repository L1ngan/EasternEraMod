# `struct` `FCommonUIConfig`

**Source header:** `EastRimWorld/UI/Struct/UIStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `TitleType`

| Field | Details |
|------|------|
| C++ type | `ETitleTypeEnum` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETitleTypeEnum TitleType = ETitleTypeEnum::Fixed;` |

**Source comments:**

> 界面标题类型

---

### Property `TitleText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta = (EditConditionHides,EditCondition = "TitleType == ETitleTypeEnum::Fixed")) FText TitleText;` |

**Source comments:**

> 名称

---

### Property `LabelIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> LabelIcon;` |

**Source comments:**

> 标题小图标

---

### Property `UIBigImg`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> UIBigImg;` |

**Source comments:**

> 大图

---

### Property `CommonModuleIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> CommonModuleIds;` |

**Source comments:**

> 要添加的公共模块id

---

### Property `CommonFuncButtonIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> CommonFuncButtonIds;` |

**Source comments:**

> 要添加的公共按钮id

---

### Property `BottomCommonModuleIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> BottomCommonModuleIds;` |

**Source comments:**

> 要添加的公共模块id(与CommonModuleIds的区别在一个在顶上一个在最下面,tab带的模块在中间)

---

### Property `TabInfos`

| Field | Details |
|------|------|
| C++ type | TArray<[FTabInfo](UIStruct__FTabInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTabInfo> TabInfos;` |

**Source comments:**

> 要添加的页签

---

### Property `MainWidget`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[UEastRimWorldActivatableWidget](../EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftClassPtr<UEastRimWorldActivatableWidget> MainWidget;` |

**Source comments:**

> 主要界面

---

### Property `BottomFuncButtonIsd`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> BottomFuncButtonIsd;` |

**Source comments:**

> 底部功能按钮

---
