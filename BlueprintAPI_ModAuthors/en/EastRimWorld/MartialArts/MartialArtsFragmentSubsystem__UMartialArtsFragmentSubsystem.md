# `class` `UMartialArtsFragmentSubsystem`

**Source header:** `EastRimWorld/MartialArts/MartialArtsFragmentSubsystem.h`

---

## Functional description (from header comments)

> 武学残卷合成子系统 (世界级服务)
> 职责:
>  1) 集齐判定 (查玩家/势力收货仓库中某目标书的残卷张数)
>  2) 合成 (消耗 N 张残卷 + 辅料 -> 把 TargetBookID 完本书发给玩家, 复用现成给书路径)
>  3) "按缺张发残卷" API (供历练归来结算路调用, 实现"发缺失张"防挫败)
> 设计依据: Apprenticeship_FragmentCraft_Design_v1 §3/§4/§5。
> 复用红线: 残卷=DT_InventoryItem 物品; 产出=DT_MartialArtsBookData 完本书 (复用 AddItemToPostStation 给书);
>           不复用 FFormulaData (那是 GOAP 建筑配方)。
> 合成入口 v1 不做专用 UI: 留 BlueprintCallable 函数, 可由仓库右键触发 (见 TryCraftFragmentBook)。

## Blueprint-exposed functions

### Function `GetOwnedFragmentCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts|Fragment" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetBookID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "MartialArts|Fragment") int32 GetOwnedFragmentCount(FName TargetBookID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查询某目标书当前已集齐的残卷张数 (查玩家收货仓库)。
> @param TargetBookID 目标完本书ID (S_*_Moves / A_*_Internal)
> @return 已拥有的不同残卷张数 (按配方 RequiredFragmentItemIDs 逐个查 GetItemTotalNum>0 计数)

---

### Function `GetRequiredFragmentCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts|Fragment" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetBookID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "MartialArts|Fragment") int32 GetRequiredFragmentCount(FName TargetBookID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查询某目标书的残卷总需求张数 N (= 配方 RequiredFragmentItemIDs 长度)。
> @return 配方缺失返回 0

---

### Function `IsFragmentSetComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts|Fragment" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetBookID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "MartialArts|Fragment") bool IsFragmentSetComplete(FName TargetBookID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 是否已集齐某目标书的全部残卷 (可合成)。

---

### Function `TryCraftFragmentBook`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts|Fragment" |
| Return type | [EFragmentCraftResult](MartialArtsFragmentSubsystem__EFragmentCraftResult.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetBookID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "MartialArts|Fragment") EFragmentCraftResult TryCraftFragmentBook(FName TargetBookID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 尝试合成某目标书 (集齐判定 + 消耗残卷+辅料 + 发完本书)。
> 合成入口 v1: 留函数, 可由仓库右键触发 (无专用 UI)。
> @param TargetBookID 目标完本书ID
> @return 合成结果枚举

---

### Function `PickNextFragmentToGrant`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts|Fragment" |
| Return type | `FName` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetBookID` | `FName` |
| `nullptr` | [UInventoryManagerComponent](../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)* InInventory = |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "MartialArts|Fragment") FName PickNextFragmentToGrant(FName TargetBookID, UInventoryManagerComponent* InInventory = nullptr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按缺张发残卷: 查拥有方已有该书哪些残卷编号, 返回"下一张缺的"残卷物品ID。
> 供历练归来结算路 (另一路) 调用, 实现"发缺失张"防挫败 (设计 §4.1/§5.3, 体验成败关键)。
> @param TargetBookID 目标完本书ID
> @param InInventory  拥有方背包 (传 nullptr 则默认取玩家收货仓库)
> @return 下一张缺的残卷 ItemID; 若已全部集齐 (或配方缺失) 返回 NAME_None

---
