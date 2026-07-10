# `struct` `FAutoTileMeshConfigData`

**源码头文件:** `EastRimWorld/ERW_ConfigTypes.h`

---

## 功能说明（来自头文件注释）

> 九宫格模型配置数据结构

## 蓝图暴露变量

### 属性 `AutoTileType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EAutoTileType](ERW_Enumerations__EAutoTileType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EAutoTileType AutoTileType { EAutoTileType::Flat };` |

**说明:**

> 九宫格类型

---

### 属性 `StaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UStaticMesh*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) UStaticMesh* StaticMesh { nullptr };` |

**说明:**

> 静态模型

---
