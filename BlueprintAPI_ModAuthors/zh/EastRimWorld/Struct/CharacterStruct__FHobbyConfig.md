# `struct` `FHobbyConfig`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 爱好配置表

## 蓝图暴露变量

### 属性 `HobbyType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EHobbyType` |
| 反射说明符 | BlueprintReadWrite, Category="FHobbyConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHobbyConfig") EHobbyType HobbyType = EHobbyType::None;` |

**源码注释:**

> 爱好类型

---

### 属性 `HobbyIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="FHobbyConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FHobbyConfig") TSoftObjectPtr<UTexture2D> HobbyIcon;` |

**源码注释:**

> 爱好图标

---

### 属性 `HobbyName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="FHobbyConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHobbyConfig") FText HobbyName;` |

**源码注释:**

> 爱好名称

---

### 属性 `FormatEffectDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFormatText` |
| 反射说明符 | BlueprintReadWrite, Category="FHobbyConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FHobbyConfig") FFormatText FormatEffectDesc;` |

**源码注释:**

> 格式化后的爱好效果描述文字

---

### 属性 `EffectAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadOnly, Category="FHobbyConfig" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FHobbyConfig") TMap<FGameplayAttribute,float> EffectAttributes;` |

**源码注释:**

> 爱好效果属性

---

### 属性 `ActiveMoodIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="FHobbyConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHobbyConfig") TArray<FName> ActiveMoodIds;` |

**源码注释:**

> 完成对应行为后，获得心情词条

---
