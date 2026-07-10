# `struct` `FBuildPersonConfigData`

**源码头文件:** `EastRimWorld/ERW_ConfigTypes.h`

---

## 功能说明（来自头文件注释）

> 玩家拥有此类建筑的数量

## 蓝图暴露变量

### 属性 `BuildConfigData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FBuildConfigData](ERW_ConfigTypes__FBuildConfigData.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FBuildConfigData BuildConfigData;` |

**说明:**

> 对应建筑的配置数据。

---

### 属性 `UserNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 UserNum = 0;` |

**说明:**

> 玩家拥有该类建筑的数量。

---
