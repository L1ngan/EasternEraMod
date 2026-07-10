# `struct` `FEmergencePressureObject`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## 功能说明（来自头文件注释）

> 压力指向对象条目 — 单对象维只填 ObjectA(如最沉寂地/最重伤弟子); 成对维两个都填(如结仇: ObjectA+ObjectB=一对仇家)。

## 蓝图暴露变量

### 属性 `ObjectA`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Pressure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Pressure") FGuid ObjectA;` |

**说明:**

> 主对象 Guid

---

### 属性 `ObjectB`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Pressure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Pressure") FGuid ObjectB;` |

**说明:**

> 次对象 Guid(仅成对维度填, 如结仇对的另一方)

---
