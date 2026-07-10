# `struct` `FProductTypeInfo`

**源码头文件:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## 功能说明（来自头文件注释）

> 珍宝阁商品分类信息(分类权重与子分类权重映射)

## 蓝图暴露变量

### 属性 `Weight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float Weight = 0.f;` |

**说明:**

> 该商品分类的权重

---

### 属性 `SublevelInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32 , float>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<int32 , float> SublevelInfo;` |

**说明:**

> 子分类编号到权重的映射

---
