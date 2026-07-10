# `struct` `FRefugeeBatch`

**源码头文件:** `EastRimWorld/WorldSystem/WorldEconomyStruct.h`

---

## 功能说明（来自头文件注释）

> 单股流民(用于据点之间转移)

## 蓝图暴露变量

### 属性 `Count`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Count = 0;` |

**说明:**

> 该股流民人数

---

### 属性 `FromPlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid FromPlaceGuid;` |

**说明:**

> 流出据点 Guid(用于反查 / 后续可携带物资)

---
