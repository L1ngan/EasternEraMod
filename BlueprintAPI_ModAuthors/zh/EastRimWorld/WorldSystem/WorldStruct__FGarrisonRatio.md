# `struct` `FGarrisonRatio`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 驻守比例

## 蓝图暴露变量

### 属性 `MinNumberOfPeople`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 MinNumberOfPeople = 0;` |

**说明:**

> 最小人数 包含

---

### 属性 `MaxNumberOfPeople`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 MaxNumberOfPeople = 0;` |

**说明:**

> 最大人数 包含

---

### 属性 `Ratio`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(ClampMin = 0.0,ClampMax = 1.f,UIMin = 0.f, UIMax = 1.f)) float Ratio = 0.1;` |

**说明:**

> 比例

---
