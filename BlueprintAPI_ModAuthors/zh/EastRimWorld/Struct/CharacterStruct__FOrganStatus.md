# `struct` `FOrganStatus`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 器官状态

## 蓝图暴露变量

### 属性 `StatusName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="OrganStatus" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganStatus") FText StatusName;` |

**源码注释:**

> 名称

---

### 属性 `MinValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="OrganStatus" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = 0.f,ClampMax = 1.0f),Category = "OrganStatus") float MinValue = 0.f;` |

**源码注释:**

> 区间最小值 百分比

---

### 属性 `MaxValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="OrganStatus" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = 0.f,ClampMax = 1.0f), Category = "OrganStatus") float MaxValue = 0.f;` |

**源码注释:**

> 区间最大值

---

### 属性 `TakeEffectBuffID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="OrganStatus" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganStatus") FName TakeEffectBuffID;` |

**源码注释:**

> 处在此区间时生效的buff

---

### 属性 `WorkAdditionPercentage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="OrganStatus" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganStatus") float WorkAdditionPercentage = 1.f;` |

**源码注释:**

> 处在此区间时工作的加成

---

### 属性 `TextColorType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="OrganStatus" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganStatus") int TextColorType = 0;` |

**源码注释:**

> 器官状态UI文字(-1 红色；0 灰色；1 绿色)

---
