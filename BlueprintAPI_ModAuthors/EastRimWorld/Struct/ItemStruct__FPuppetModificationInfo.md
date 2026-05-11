# `struct` `FPuppetModificationInfo`

**源码头文件：** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> 傀儡装备改造相关结构体

## 蓝图暴露变量

### 属性 `PuppetID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName PuppetID;` |

**源码注释：**

> 傀儡ID

---

### 属性 `BuildingGUID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid BuildingGUID;` |

**源码注释：**

> 建筑物Guid

---

### 属性 `EquippedWeapon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FUseItemSaveData` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FUseItemSaveData EquippedWeapon;` |

**源码注释：**

> 已装备的武器

---

### 属性 `EquippedArmors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EArmorType, FUseItemSaveData>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<EArmorType, FUseItemSaveData> EquippedArmors;` |

**源码注释：**

> 已装备的防具数据

---
