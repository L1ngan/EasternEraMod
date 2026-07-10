# `struct` `FModStackModel`

**源码头文件:** `CreateModPlugin/Public/ItemDataStruct.h`

---

## 功能说明（来自头文件注释）

> 定义堆叠模型的结构体

## 蓝图暴露变量

### 属性 `MinCapacity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="StackModel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="StackModel") float MinCapacity = 0.f;` |

**说明:**

> 最小容量百分比

---

### 属性 `MaxCapacity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="StackModel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="StackModel") float MaxCapacity = 0.f;` |

**说明:**

> 最大容量百分比

---

### 属性 `StackModel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="StackModel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="StackModel") TSoftObjectPtr<UStaticMesh> StackModel;` |

**说明:**

> 在容量范围内显示的模型

---
