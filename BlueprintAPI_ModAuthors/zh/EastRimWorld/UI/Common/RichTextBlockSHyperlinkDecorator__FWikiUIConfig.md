# `struct` `FWikiUIConfig`

**源码头文件:** `EastRimWorld/UI/Common/RichTextBlockSHyperlinkDecorator.h`

---

## 功能说明（来自头文件注释）

> wiki结构表

## 蓝图暴露变量

### 属性 `TitleText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance) FText TitleText;` |

**源码注释:**

> 标题

---

### 属性 `ClassifyText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance) FText ClassifyText;` |

**源码注释:**

> 分类

---

### 属性 `ContentText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FText>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance) TArray<FText> ContentText;` |

**源码注释:**

> 内容

---

### 属性 `InfoIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UObject>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance) TSoftObjectPtr<UObject> InfoIcon;` |

**源码注释:**

> 内容图标

---

### 属性 `IconSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance) FVector2D IconSize = FVector2D::ZeroVector;` |

**源码注释:**

> 内容图标

---
