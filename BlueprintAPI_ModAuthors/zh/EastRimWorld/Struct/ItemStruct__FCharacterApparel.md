# `struct` `FCharacterApparel`

**源码头文件:** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> 角色防具

## 蓝图暴露变量

### 属性 `ArmorType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EArmorType` |
| 反射说明符 | BlueprintReadWrite, Category="Apparel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") EArmorType ArmorType = EArmorType::None;` |

**源码注释:**

> 防具类型

---

### 属性 `ApparelMaleDataAsset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UPrimaryDataAsset>` |
| 反射说明符 | BlueprintReadWrite, Category="Apparel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") TSoftObjectPtr<UPrimaryDataAsset> ApparelMaleDataAsset;` |

**源码注释:**

> 男外观数据资产引用

---

### 属性 `ApparelFemaleDataAsset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UPrimaryDataAsset>` |
| 反射说明符 | BlueprintReadWrite, Category="Apparel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") TSoftObjectPtr<UPrimaryDataAsset> ApparelFemaleDataAsset;` |

**源码注释:**

> 女外观数据资产引用

---

### 属性 `MaterialVariantsIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Apparel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") int MaterialVariantsIndex;` |

**源码注释:**

> 数据资产里外观材质的索引

---

### 属性 `MaterialColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,FLinearColor>` |
| 反射说明符 | BlueprintReadWrite, Category="Apparel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") TMap<FName,FLinearColor> MaterialColor;` |

**源码注释:**

> 外观材质的颜色

---

### 属性 `BeAttakedLossDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Apparel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") float BeAttakedLossDurability;` |

**源码注释:**

> 被攻击时减少的耐久度

---
