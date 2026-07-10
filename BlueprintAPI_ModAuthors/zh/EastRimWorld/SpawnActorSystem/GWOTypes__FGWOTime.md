# `struct` `FGWOTime`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## 功能说明（来自头文件注释）

> 生成时间点（小时+分钟）

## 蓝图暴露变量

### 属性 `hours`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Spawn Time" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time", meta=(ClampMin="0", ClampMax="23")) int hours = 0;` |

**说明:**

> 小时数，取值0-23

---

### 属性 `minutes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Spawn Time" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time", meta=(ClampMin="0", ClampMax="59")) int minutes = 0;` |

**说明:**

> 分钟数，取值0-59

---
