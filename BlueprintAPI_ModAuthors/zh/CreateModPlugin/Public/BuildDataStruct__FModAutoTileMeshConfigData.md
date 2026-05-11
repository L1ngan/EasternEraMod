# `struct` `FModAutoTileMeshConfigData`

**源码头文件:** `CreateModPlugin/Public/BuildDataStruct.h`

---

## 功能说明（来自头文件注释）

> 九宫格模型配置数据结构

## 蓝图暴露变量

### 属性 `AutoTileType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EModAutoTileType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EModAutoTileType AutoTileType { EModAutoTileType::Flat };` |

**源码注释:**

> 九宫格类型

---

### 属性 `StaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UStaticMesh*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) UStaticMesh* StaticMesh { nullptr };` |

**源码注释:**

> 静态模型

---
