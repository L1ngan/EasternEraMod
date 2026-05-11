# `struct` `FModCommonBuff`

**源码头文件：** `CreateModPlugin/Public/BuffDataStruct.h`

---

## 功能说明（来自头文件注释）

> 通用BUFF

## 蓝图暴露变量

### 属性 `BuffName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FText BuffName;` |

**源码注释：**

> BUFF名称

---

### 属性 `BuffClassifyTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FGameplayTagContainer BuffClassifyTag;` |

**源码注释：**

> BUFF分类Tag

---

### 属性 `ActivateMastHaveTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FGameplayTagContainer ActivateMastHaveTags;` |

**源码注释：**

> BUFF激活需要的标签

---

### 属性 `ActivateMastNotHaveTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FGameplayTagContainer ActivateMastNotHaveTags;` |

**源码注释：**

> BUFF激活不能有的标签

---

### 属性 `BuffIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") TSoftObjectPtr<UTexture2D> BuffIcon;` |

**源码注释：**

> BUFF图标

---

### 属性 `bShow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") bool bShow = false;` |

**源码注释：**

> BUFF展示

---

### 属性 `Describe`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FText Describe;` |

**源码注释：**

> BUFF描述

---

### 属性 `FormatDescribe`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FModFormatText](BaseDataStruct__FModFormatText.md) |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="CommonBuff") FModFormatText FormatDescribe;` |

**源码注释：**

> 格式化的 BUFF描述

---

### 属性 `Priority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "CommonBuff") int Priority = 0;` |

**源码注释：**

> BUFF的优先级 越大优先级越高

---

### 属性 `Quality`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EModItemQuality` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "CommonBuff") EModItemQuality Quality = EModItemQuality::None;` |

**源码注释：**

> 品质

---

### 属性 `DurationType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EModBuffType` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "CommonBuff") EModBuffType DurationType = EModBuffType::ForEver;` |

**源码注释：**

> buff持续时间类型

---

### 属性 `Duration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "CommonBuff") float Duration = 0.f;` |

**源码注释：**

> 持续时间 秒数

---

### 属性 `GameplayEffects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TSoftClassPtr<UGameplayEffect>>` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") TArray<TSoftClassPtr<UGameplayEffect>> GameplayEffects;` |

**源码注释：**

> 效果Ge

---

### 属性 `Attributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "CommonBuff") TMap<FGameplayAttribute,float> Attributes;` |

**源码注释：**

> 效果中包含的属性

---

### 属性 `GameplayTagContainer`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "CommonBuff") FGameplayTagContainer GameplayTagContainer;` |

**源码注释：**

> 为自身添加的tag

---

### 属性 `ConflictBuffID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere,Category= "CommonBuff") TArray<FName> ConflictBuffID;` |

**源码注释：**

> 冲突的buff ID

---

### 属性 `NumberOfSuperpositions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "CommonBuff") int NumberOfSuperpositions = 1;` |

**源码注释：**

> 相同的buff可叠加的次数 0 是无限制 1 默认

---

### 属性 `OriginGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere,Category= "CommonBuff") FGuid OriginGuid = FGuid();` |

**源码注释：**

> 来源

---

### 属性 `OriginType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EModBuffOriginType` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere,Category= "CommonBuff") EModBuffOriginType OriginType = EModBuffOriginType::None;` |

**源码注释：**

> 来源类型

---

### 属性 `BuffGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FGuid BuffGuid = FGuid();` |

**源码注释：**

> 每个buff独立的guid

---

### 属性 `GameplayEffectText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FText>` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") TArray<FText> GameplayEffectText;` |

**源码注释：**

> buff在施加GE时显示的提示 与GE 一一对应

---

### 属性 `bIsActivated`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadWrite, EditAnywhere, Category = "CommonBuff") bool bIsActivated = false;` |

**源码注释：**

> 当前buff的激活状态

---

### 属性 `bSave`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="CommonBuff" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "CommonBuff") bool bSave = true;` |

---
