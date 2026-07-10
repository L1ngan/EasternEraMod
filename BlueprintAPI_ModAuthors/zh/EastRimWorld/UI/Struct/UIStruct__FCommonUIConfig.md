# `struct` `FCommonUIConfig`

**源码头文件:** `EastRimWorld/UI/Struct/UIStruct.h`

---

## 功能说明（来自头文件注释）

> Common UI Config 数据结构。

## 蓝图暴露变量

### 属性 `TitleType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ETitleTypeEnum](UIStruct__ETitleTypeEnum.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETitleTypeEnum TitleType = ETitleTypeEnum::Fixed;` |

**说明:**

> 界面标题类型

---

### 属性 `TitleText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta = (EditConditionHides,EditCondition = "TitleType == ETitleTypeEnum::Fixed")) FText TitleText;` |

**说明:**

> 名称

---

### 属性 `LabelIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> LabelIcon;` |

**说明:**

> 标题小图标

---

### 属性 `UIBigImg`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> UIBigImg;` |

**说明:**

> 大图

---

### 属性 `CommonModuleIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> CommonModuleIds;` |

**说明:**

> 要添加的公共模块id

---

### 属性 `CommonFuncButtonIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> CommonFuncButtonIds;` |

**说明:**

> 要添加的公共按钮id

---

### 属性 `BottomCommonModuleIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> BottomCommonModuleIds;` |

**说明:**

> 要添加的公共模块id(与CommonModuleIds的区别在一个在顶上一个在最下面,tab带的模块在中间)

---

### 属性 `TabInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTabInfo](UIStruct__FTabInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTabInfo> TabInfos;` |

**说明:**

> 要添加的页签

---

### 属性 `MainWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[UEastRimWorldActivatableWidget](../EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftClassPtr<UEastRimWorldActivatableWidget> MainWidget;` |

**说明:**

> 主要界面

---

### 属性 `BottomFuncButtonIsd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> BottomFuncButtonIsd;` |

**说明:**

> 底部功能按钮

---
