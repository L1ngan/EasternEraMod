# `class` `UModInformationAsset`

**源码头文件:** `CreateModPlugin/Public/BaseDataStruct.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `DataTables`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FModConfig](BaseDataStruct__FModConfig.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FModConfig> DataTables;` |

**源码注释:**

> Mod的配置项

---

### 属性 `DataAssets`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FModAsset](BaseDataStruct__FModAsset.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FModAsset> DataAssets;` |

**源码注释:**

> Mod的配置项

---
