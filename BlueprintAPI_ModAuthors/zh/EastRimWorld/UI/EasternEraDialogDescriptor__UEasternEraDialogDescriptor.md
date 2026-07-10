# `class` `UEasternEraDialogDescriptor`

**源码头文件:** `EastRimWorld/UI/EasternEraDialogDescriptor.h`

---

## 功能说明（来自头文件注释）

> Eastern Era Dialog Descriptor UObject 类型。

## 蓝图暴露变量

### 属性 `ObjectParams`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<UObject*>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere) TArray<UObject*> ObjectParams;` |

**说明:**

> Object Params 字段。

---

### 属性 `StringParams`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FString>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere) TArray<FString> StringParams;` |

**说明:**

> String Params 字段。

---

## 蓝图暴露函数

### 函数 `CreateConfirmationYesNoLabel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UEasternEraDialogDescriptor](EasternEraDialogDescriptor__UEasternEraDialogDescriptor.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InHeader` | `const FText&` |
| `InBody` | `const FText&` |
| `YesLabel` | `const FText&` |
| `NoLabel` | `const FText&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) static UEasternEraDialogDescriptor* CreateConfirmationYesNoLabel(const FText& InHeader, const FText& InBody, const FText& YesLabel, const FText& NoLabel);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Create Confirmation Yes No Label 操作。

---
