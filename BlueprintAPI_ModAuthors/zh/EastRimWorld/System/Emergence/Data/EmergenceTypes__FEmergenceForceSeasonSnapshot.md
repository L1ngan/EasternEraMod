# `struct` `FEmergenceForceSeasonSnapshot`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## 功能说明（来自头文件注释）

> ─────────────────────────────────────────────────────────────────────────────
> 兴衰压力·暴起子项的"上季势力快照" — Director 每季滚存, 供 SurgeRatio 环比(本季/上季)。
> 只含 POD(float/int), Savior 嵌套序列化安全(无裸指针)。
> ─────────────────────────────────────────────────────────────────────────────

## 蓝图暴露变量

### 属性 `Combat`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Emergence|Snapshot" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Emergence|Snapshot") float Combat = 0.f;` |

**说明:**

> 上季战力(TotalCombat)

---

### 属性 `PlaceCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Emergence|Snapshot" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Emergence|Snapshot") int32 PlaceCount = 0;` |

**说明:**

> 上季据点数

---
