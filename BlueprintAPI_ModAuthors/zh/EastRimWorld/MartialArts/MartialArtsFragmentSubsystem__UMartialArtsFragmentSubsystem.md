# `class` `UMartialArtsFragmentSubsystem`

**源码头文件:** `EastRimWorld/MartialArts/MartialArtsFragmentSubsystem.h`

---

## 功能说明（来自头文件注释）

> 武学残卷合成子系统 (世界级服务)
> 职责:
>  1) 集齐判定 (查玩家/势力收货仓库中某目标书的残卷张数)
>  2) 合成 (消耗 N 张残卷 + 辅料 -> 把 TargetBookID 完本书发给玩家, 复用现成给书路径)
>  3) "按缺张发残卷" API (供历练归来结算路调用, 实现"发缺失张"防挫败)
> 设计依据: Apprenticeship_FragmentCraft_Design_v1 §3/§4/§5。
> 复用红线: 残卷=DT_InventoryItem 物品; 产出=DT_MartialArtsBookData 完本书 (复用 AddItemToPostStation 给书);
>           不复用 FFormulaData (那是 GOAP 建筑配方)。
> 合成入口 v1 不做专用 UI: 留 BlueprintCallable 函数, 可由仓库右键触发 (见 TryCraftFragmentBook)。

## 蓝图暴露函数

### 函数 `GetOwnedFragmentCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts|Fragment" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetBookID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "MartialArts|Fragment") int32 GetOwnedFragmentCount(FName TargetBookID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查询某目标书当前已集齐的残卷张数 (查玩家收货仓库)。
> @param TargetBookID 目标完本书ID (S_*_Moves / A_*_Internal)
> @return 已拥有的不同残卷张数 (按配方 RequiredFragmentItemIDs 逐个查 GetItemTotalNum>0 计数)

---

### 函数 `GetRequiredFragmentCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts|Fragment" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetBookID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "MartialArts|Fragment") int32 GetRequiredFragmentCount(FName TargetBookID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查询某目标书的残卷总需求张数 N (= 配方 RequiredFragmentItemIDs 长度)。
> @return 配方缺失返回 0

---

### 函数 `IsFragmentSetComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts|Fragment" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetBookID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "MartialArts|Fragment") bool IsFragmentSetComplete(FName TargetBookID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 是否已集齐某目标书的全部残卷 (可合成)。

---

### 函数 `TryCraftFragmentBook`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts|Fragment" |
| 返回类型 | [EFragmentCraftResult](MartialArtsFragmentSubsystem__EFragmentCraftResult.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetBookID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "MartialArts|Fragment") EFragmentCraftResult TryCraftFragmentBook(FName TargetBookID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 尝试合成某目标书 (集齐判定 + 消耗残卷+辅料 + 发完本书)。
> 合成入口 v1: 留函数, 可由仓库右键触发 (无专用 UI)。
> @param TargetBookID 目标完本书ID
> @return 合成结果枚举

---

### 函数 `PickNextFragmentToGrant`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts|Fragment" |
| 返回类型 | `FName` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetBookID` | `FName` |
| `nullptr` | [UInventoryManagerComponent](../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)* InInventory = |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "MartialArts|Fragment") FName PickNextFragmentToGrant(FName TargetBookID, UInventoryManagerComponent* InInventory = nullptr);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按缺张发残卷: 查拥有方已有该书哪些残卷编号, 返回"下一张缺的"残卷物品ID。
> 供历练归来结算路 (另一路) 调用, 实现"发缺失张"防挫败 (设计 §4.1/§5.3, 体验成败关键)。
> @param TargetBookID 目标完本书ID
> @param InInventory  拥有方背包 (传 nullptr 则默认取玩家收货仓库)
> @return 下一张缺的残卷 ItemID; 若已全部集齐 (或配方缺失) 返回 NAME_None

---
