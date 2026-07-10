# `struct` `FPracticePointCD`

**源码头文件:** `EastRimWorld/SaveGame/SaveGameDataActor.h`

---

## 功能说明（来自头文件注释）

> 角色获得参悟历练/回溯点数的冷却数据

## 蓝图暴露变量

### 属性 `TrainingPointCD`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float TrainingPointCD = 0.f;` |

**说明:**

> 历练点数获取冷却时间

---

### 属性 `RetracePointCD`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float RetracePointCD = 0.f;` |

**说明:**

> 回溯点数获取冷却时间

---
