# `struct` `FModCharacterApparel`

**源码头文件:** `CreateModPlugin/Public/EquipmentDataStruct.h`

---

## 功能说明（来自头文件注释）

> Mod 防具结构

## 蓝图暴露变量

### 属性 `ArmorType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `uint8` |
| 反射说明符 | BlueprintReadWrite, Category="Apparel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") uint8 ArmorType = 0;` |

**说明:**

> 防具类型

---

### 属性 `ApparelMaleDataAsset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UPrimaryDataAsset>` |
| 反射说明符 | BlueprintReadWrite, Category="Apparel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") TSoftObjectPtr<UPrimaryDataAsset> ApparelMaleDataAsset;` |

**说明:**

> 男外观数据资产引用

---

### 属性 `ApparelFemaleDataAsset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UPrimaryDataAsset>` |
| 反射说明符 | BlueprintReadWrite, Category="Apparel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") TSoftObjectPtr<UPrimaryDataAsset> ApparelFemaleDataAsset;` |

**说明:**

> 女外观数据资产引用

---

### 属性 `MaterialVariantsIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Apparel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") int32 MaterialVariantsIndex = -1;` |

**说明:**

> 数据资产里外观材质的索引

---

### 属性 `MaterialColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName, FLinearColor>` |
| 反射说明符 | BlueprintReadWrite, Category="Apparel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") TMap<FName, FLinearColor> MaterialColor;` |

**说明:**

> 外观材质的颜色

---

### 属性 `BeAttakedLossDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Apparel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") float BeAttakedLossDurability = 0.f;` |

**说明:**

> 被攻击时减少的耐久度

---
