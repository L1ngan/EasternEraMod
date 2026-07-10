# `class` `UModInformationAsset`

**源码头文件:** `CreateModPlugin/Public/BaseDataStruct.h`

---

## 功能说明（来自头文件注释）

> Mod 信息资产，汇总该 Mod 的配置表（DataTables）与数据资产（DataAssets）列表

## 蓝图暴露变量

### 属性 `DataTables`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FModConfig](BaseDataStruct__FModConfig.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FModConfig> DataTables;` |

**说明:**

> Mod的配置项

---

### 属性 `DataAssets`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FModAsset](BaseDataStruct__FModAsset.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FModAsset> DataAssets;` |

**说明:**

> Mod的配置项

---
