# `struct` `FGovernanceTendency`

**源码头文件:** `EastRimWorld/System/Dominion/DominionTypes.h`

---

## 功能说明（来自头文件注释）

> 城主性格治理倾向(配置:激进/中立/保守 各一份)

## 蓝图暴露变量

### 属性 `IdleWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float IdleWeight = 50.f;` |

**说明:**

> 不动作权重

---

### 属性 `ExpelWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float ExpelWeight = 25.f;` |

**说明:**

> 驱逐权重(见效快,推动门派流浪,降低同城其他门派忠诚)

---

### 属性 `RaiseTaxWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float RaiseTaxWeight = 25.f;` |

**说明:**

> 加税权重(温和,不产生驱逐记录,但降低忠诚/提升反水风险)

---

### 属性 `ApproveMoveInChance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float ApproveMoveInChance = 0.5f;` |

**说明:**

> 批准迁入申请的概率(0-1)

---
