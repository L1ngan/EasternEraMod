# `struct` `FEastRimWorldTabDescriptor`

**源码头文件:** `EastRimWorld/UI/Common/EastRimWorldTabListWidgetBase.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `TabId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName TabId;` |

---

### 属性 `TabText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText TabText;` |

---

### 属性 `IconBrush`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSlateBrush` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush IconBrush;` |

---

### 属性 `IconHorverBrush`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSlateBrush` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush IconHorverBrush;` |

---

### 属性 `IconSelectedBrush`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSlateBrush` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush IconSelectedBrush;` |

---

### 属性 `bHidden`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bHidden;` |

---

### 属性 `TabButtonType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UCommonButtonBase>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UCommonButtonBase> TabButtonType;` |

---

### 属性 `TabContentType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UCommonUserWidget>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UCommonUserWidget> TabContentType;` |

**源码注释:**

> TODO NDarnell - This should become a TSoftClassPtr<>, the underlying common tab list needs to be able to handle lazy tab content construction.

---

### 属性 `CreatedTabContentWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UWidget>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(Transient) TObjectPtr<UWidget> CreatedTabContentWidget;` |

---
