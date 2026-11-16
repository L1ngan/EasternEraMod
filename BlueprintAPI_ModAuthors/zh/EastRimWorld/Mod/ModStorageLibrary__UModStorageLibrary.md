# `class` `UModStorageLibrary`

**源码头文件:** `EastRimWorld/Mod/ModStorageLibrary.h`

---

## 功能说明（来自头文件注释）

> Mod 的仓储接口：容器之间安全转移物品；物品归属仓库（影响搬运目的地）。
> Lua：UE.UModStorageLibrary.GetAcceptableItemCount(Container, ItemId)、UE.UModStorageLibrary.TransferItems(From, To, ItemId, Count)
> 归属：UE.UModStorageLibrary.SetItemHomeBuilding(Warehouse, ItemId, bExclusive)、ClearItemHomeBuilding(Warehouse, ItemId)、GetItemHomeBuildings(WorldContext, ItemId)、GetBuildingHomeItems(Warehouse)
> 容器参数传建筑或地面物品堆 Actor。第一版只开放 仓库→仓库、地面物品堆→仓库；特殊存储、交易区、背包等返回 0。
> 参数不对、容器不支持时返回 0，原因写进调用方 Mod 的日志（Mod.Status 与 -ModConsole 可见）；世界未初始化完（读档、切换地点期间）时返回 0。

## 蓝图暴露函数

### 函数 `GetAcceptableItemCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Storage" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Container` | `AActor*` |
| `ItemId` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Storage") static int32 GetAcceptableItemCount(AActor* Container, FName ItemId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 仓库此刻还能收下多少个此物品：同种物品堆的余量 + 空格可开新堆数 × 堆叠上限，已扣掉弟子正往这里搬、预约了的空间。
> 存储筛选不收、保持清空、禁止使用、迁移中时为 0。与 TransferItems 是同一套计算，紧接着转移时报多少就能收多少。
> 只接受仓库，其他容器返回 0 并写日志。

---

### 函数 `TransferItems`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Storage" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `From` | `AActor*` |
| `To` | `AActor*` |
| `ItemId` | `FName` |
| `Count` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Storage") static int32 TransferItems(AActor* From, AActor* To, FName ItemId, int32 Count);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 把 From 里的 ItemId 物品转移到仓库 To，返回实际转移的数量（0~Count）。
> 只取未使用状态的物品；弟子已预留的数量、指派给弟子的装备/书籍、留给囚犯的饭不动。目标收下后才从源里扣，收不下的留在源里，不会凭空消失。
> 可堆叠物品先补满目标里同种物品的堆、再在空格开新堆（每堆不超过堆叠上限）；并入的部分按源堆剩余保质期折算，新堆沿用源堆的剩余保质期、耐久、风干度。
> 装备、书籍这类每件独立的物品整件移、不拆分；有弟子正要拿取或使用的那件不动。
> 完成后刷新两边仓库的状态（满仓、搬运任务）。

---

### 函数 `SetItemHomeBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Storage" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Warehouse` | `AActor*` |
| `ItemId` | `FName` |
| `bExclusive` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Storage") static bool SetItemHomeBuilding(AActor* Warehouse, FName ItemId, bool bExclusive);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 把仓库设为某物品的归属仓库，影响弟子搬运时把这种物品送去哪个仓库（只影响之后的择仓，已在路上的搬运照常放下）。
> bExclusive=true 独占：别的仓库一律不收这种物品，归属仓库都放不下时就留在原地；false 偏好：有归属仓库能收（没满、存储筛选允许、不在迁移中）时只送归属仓库，都放不下时照常送别的仓库。
> 同一种物品可以有多个归属仓库，归属仓库之间照常按存储优先级和距离挑。同一仓库同一物品重复设置会更新独占与否，并记为本次调用的 Mod。
> 规则随仓库存档，仓库拆除时一并消失；写规则的 Mod 没加载时规则不生效，但会保留，Mod 重新启用后恢复。
> 只接受仓库（晾晒架、食槽等特殊存储不行）；必须在 Mod 的 Lua 里调用。参数不对、世界未初始化完时返回 false 并写日志。

---

### 函数 `ClearItemHomeBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Storage" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Warehouse` | `AActor*` |
| `ItemId` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Storage") static bool ClearItemHomeBuilding(AActor* Warehouse, FName ItemId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取消仓库对某物品的归属规则（不论是哪个 Mod 设的）；这个仓库本来没有该物品的规则时返回 false 并写日志

---

### 函数 `GetItemHomeBuildings`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Storage" |
| 返回类型 | `TArray<AActor*>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContext` | `const UObject*` |
| `ItemId` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Storage") static TArray<AActor*> GetItemHomeBuildings(const UObject* WorldContext, FName ItemId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 某物品当前生效的归属仓库（建筑 Actor）；没有时返回空数组。WorldContext 传任一游戏内对象

---

### 函数 `GetBuildingHomeItems`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Storage" |
| 返回类型 | `TArray<FName>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Warehouse` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Storage") static TArray<FName> GetBuildingHomeItems(AActor* Warehouse);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 仓库当前生效的归属物品 ID；没有时返回空数组

---
