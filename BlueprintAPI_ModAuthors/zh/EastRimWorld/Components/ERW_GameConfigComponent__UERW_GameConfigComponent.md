# `class` `UERW_GameConfigComponent`

**源码头文件:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露函数

### 函数 `GetGameConfigByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UDataTable *` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameConfigType` | `const EGameConfigType &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UDataTable * GetGameConfigByType(const EGameConfigType & GameConfigType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetGameDataAssetByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UDataAsset *` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameDataAssetType` | `const EGameDataAssetType &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UDataAsset * GetGameDataAssetByType(const EGameDataAssetType & GameDataAssetType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---
