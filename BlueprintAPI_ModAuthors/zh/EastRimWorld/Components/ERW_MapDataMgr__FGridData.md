# `struct` `FGridData`

**源码头文件:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## 功能说明（来自头文件注释）

> 格子数据

## 蓝图暴露变量

### 属性 `LayerData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32 , [FEnvironData](ERW_MapDataMgr__FEnvironData.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<int32 , FEnvironData> LayerData;` |

**说明:**

> 每层环境数据
> TMap<层 , 环境数据>

---

### 属性 `IsHeightSet`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) bool IsHeightSet { false };` |

**说明:**

> 高度是否设置

---

### 属性 `FoundationHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float FoundationHeight { 0.f };` |

**说明:**

> 地基(或水池, 阶梯)高度

---

### 属性 `MinHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float MinHeight { 0.f };` |

**说明:**

> 格子最低高度

---

### 属性 `MaxHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float MaxHeight { 0.f };` |

**说明:**

> 格子最大高度

---

### 属性 `CenterHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float CenterHeight { 0.f };` |

**说明:**

> 格子中心高度

---

### 属性 `Slope`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float Slope { 0.f };` |

**说明:**

> 格子的斜率

---

### 属性 `GroundSoilType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGroundSoilType](../ERW_Enumerations__EGroundSoilType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,SaveGame) EGroundSoilType GroundSoilType = EGroundSoilType::None;` |

**说明:**

> 地形材质对应的土地类型 todo...废弃

---

### 属性 `GroundRichPercent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float GroundRichPercent = 0.f;` |

**说明:**

> 土地肥沃度

---
