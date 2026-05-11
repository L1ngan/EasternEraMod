# `struct` `FModAsset`

**源码头文件:** `CreateModPlugin/Public/BaseDataStruct.h`

---

## 功能说明（来自头文件注释）

> Mod资产

## 蓝图暴露变量

### 属性 `ModDataAssetType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EModDataAssetType` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EModDataAssetType ModDataAssetType = EModDataAssetType::None;` |

**源码注释:**

> 配置类型

---

### 属性 `DataAsset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UDataAsset>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftObjectPtr<UDataAsset> DataAsset;` |

**源码注释:**

> 配置表

---

### 属性 `bOverrideData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) bool bOverrideData = false;` |

**源码注释:**

> 勾选后Map或Array则直接覆盖原来的数据，不勾选则在原有的基础增加。其他类型的属性如果是默认值则不生效

---
