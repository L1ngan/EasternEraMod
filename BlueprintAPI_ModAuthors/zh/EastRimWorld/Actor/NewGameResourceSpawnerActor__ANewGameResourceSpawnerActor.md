# `class` `ANewGameResourceSpawnerActor`

**源码头文件:** `EastRimWorld/Actor/NewGameResourceSpawnerActor.h`

---

## 功能说明（来自头文件注释）

> 新游戏开局资源生成Actor，在自身所在格子周围放置初始物品资源

## 蓝图暴露变量

### 属性 `SpawnClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSubclassOf<[AInventoryItemSet](../Inventory/InventoryItemSet__AInventoryItemSet.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<AInventoryItemSet> SpawnClass;` |

**说明:**

> 生成初始资源所用的物品集Actor类

---
