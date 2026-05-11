# `struct` `FModEfficiencyByTemperature`

**源码头文件：** `CreateModPlugin/Public/ItemDataStruct.h`

---

## 功能说明（来自头文件注释）

> 温度与效率的关联  0<=T<=20 E=100%  21<=T<=40 E=50%  T无范围E=0 策划直接填

## 蓝图暴露变量

### 属性 `MinTemperature`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Grow" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grow") float MinTemperature = 0.f;` |

**源码注释：**

> 最小温度(包含)

---

### 属性 `MaxTemperature`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Grow" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grow") float MaxTemperature = 0.f;` |

**源码注释：**

> 最大温度(包含)

---

### 属性 `Efficiency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Grow" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grow") float Efficiency = 0.f;` |

**源码注释：**

> 效率

---
