# `struct` `FDeployableCityOption`

**源码头文件:** `EastRimWorld/WorldSystem/WorldDirector.h`

---

## 功能说明（来自头文件注释）

> 出征出发地点下拉选项：玩家可作为起点的城(城 SGUID + 显示城名)。仅作 UI 临时返回值, 不入存档(故字段不标 SaveGame)

## 蓝图暴露变量

### 属性 `CityGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="World|Battle" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "World|Battle") FGuid CityGuid;` |

**说明:**

> 城的 SGUID(写入 W_GoForBattle.SGUID，FindWorldPlace 按此查)

---

### 属性 `CityName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="World|Battle" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "World|Battle") FText CityName;` |

**说明:**

> 城的显示名(WorldPlaceInfo.PlaceName)

---
