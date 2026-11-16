# `struct` `FItemHomeRule`

**源码头文件:** `EastRimWorld/Inventory/InventoryManagerComponent.h`

---

## 功能说明（来自头文件注释）

> 物品归属规则(Mod 设置, 只对普通仓库生效):本仓库是该物品的归属仓库。
> 规则本体随仓库组件入档;按物品 ID 反查归属仓库的索引是运行态, 由 UWarehouseManagerSubsystem 维护。

## 蓝图暴露变量

### 属性 `ItemId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) FName ItemId;` |

**说明:**

> 物品 ID

---

### 属性 `bExclusive`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) bool bExclusive = false;` |

**说明:**

> 独占:非归属仓库一律不收该物品;否则为偏好:有能收且不在迁移中的归属仓库时, 非归属仓库不收

---

### 属性 `ModId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) FName ModId;` |

**说明:**

> 写这条规则的 Mod;该 Mod 当前未加载时规则不生效, 但不删除

---
