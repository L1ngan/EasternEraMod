# `class` `UERW_GameConfigComponent`

**源码头文件:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## 功能说明（来自头文件注释）

> 游戏配置组件,按类型集中管理并提供配置表(DataTable)与配置资产(DataAsset)的获取,支持Mod用的运行时副本

## 蓝图暴露函数

### 函数 `GetGameConfigByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UDataTable *` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameConfigType` | const [EGameConfigType](ERW_GameConfigComponent__EGameConfigType.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UDataTable * GetGameConfigByType(const EGameConfigType & GameConfigType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取指定配置类型对应的DataTable配置表

---

### 函数 `GetGameDataAssetByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UDataAsset *` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameDataAssetType` | const [EGameDataAssetType](ERW_GameConfigComponent__EGameDataAssetType.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UDataAsset * GetGameDataAssetByType(const EGameDataAssetType & GameDataAssetType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取指定资产类型对应的DataAsset配置资产

---
