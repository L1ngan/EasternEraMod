# `struct` `FForceData`

**源码头文件:** `EastRimWorld/Struct/ForceStruct.h`

---

## 功能说明（来自头文件注释）

> 势力表结构体

## 蓝图暴露变量

### 属性 `ForceName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText ForceName;` |

**说明:**

> 势力名称

---

### 属性 `SkillDatas`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FForceSkillData](ForceStruct__FForceSkillData.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FForceSkillData> SkillDatas;` |

**说明:**

> 主角技能

---

### 属性 `Resource`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FItemSimpleData](CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FItemSimpleData> Resource;` |

**说明:**

> 物资

---

### 属性 `PassGameConditionIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FName> PassGameConditionIds;` |

**说明:**

> 通关条件

---

### 属性 `ForceTitleIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="UI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") TSoftObjectPtr<UTexture2D> ForceTitleIcon;` |

**说明:**

> 势力名称图标

---

### 属性 `ForceNormalIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="UI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") TSoftObjectPtr<UTexture2D> ForceNormalIcon;` |

**说明:**

> 势力图标Normal

---

### 属性 `ForceHoverIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="UI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") TSoftObjectPtr<UTexture2D> ForceHoverIcon;` |

**说明:**

> 势力图标Hover

---

### 属性 `ForcePressIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="UI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") TSoftObjectPtr<UTexture2D> ForcePressIcon;` |

**说明:**

> 势力图标Press

---

### 属性 `TipTitle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="UI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") FText TipTitle;` |

**说明:**

> 势力tip

---

### 属性 `TipContent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="UI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") FText TipContent;` |

**说明:**

> 势力tip

---

### 属性 `PlayDescription`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FText>` |
| 反射说明符 | BlueprintReadWrite, Category="UI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") TArray<FText> PlayDescription;` |

**说明:**

> 玩法特色

---

### 属性 `bIsOpen`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="UI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") bool bIsOpen = true;` |

**说明:**

> 是否开放（未开放的势力不能被用户选择）

---
