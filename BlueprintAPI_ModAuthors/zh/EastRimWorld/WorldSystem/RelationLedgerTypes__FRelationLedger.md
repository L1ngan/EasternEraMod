# `struct` `FRelationLedger`

**源码头文件:** `EastRimWorld/WorldSystem/RelationLedgerTypes.h`

---

## 功能说明（来自头文件注释）

> 关系账本 — 挂在 AWorldForce (门派) 或 AEastRimWorldCharacter 上
> 记录与"另一方"的完整关系状态, 支持存档
> 使用方法:
>   AddDelta(ERelationAxis::Grace, +20.f);   // LLOG 记录
>   HasTag(ERelationTag::BloodFeud);
>   Decay(DeltaTime);                         // 每游戏日调用一次

## 蓝图暴露变量

### 属性 `OwnerGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Relation|Identity" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Relation|Identity") FGuid OwnerGuid;` |

**说明:**

> 账本所属方 Guid (AWorldForce Guid 或 Character Guid)

---

### 属性 `TargetGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Relation|Identity" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Relation|Identity") FGuid TargetGuid;` |

**说明:**

> 账本目标方 Guid

---

### 属性 `Grace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Relation|Values" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Relation|Values") float Grace = 0.f;` |

**说明:**

> 恩情值 [0, 100]

---

### 属性 `Grudge`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Relation|Values" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Relation|Values") float Grudge = 0.f;` |

**说明:**

> 仇恨值 [0, 100]

---

### 属性 `Romance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Relation|Values" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Relation|Values") float Romance = 0.f;` |

**说明:**

> 情感值 [0, 100]

---

### 属性 `CombinedFavor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Relation|Values" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Relation|Values") float CombinedFavor = 0.f;` |

**说明:**

> 综合好感 [-100, 100]
> = Grace - Grudge + 性格修饰 (由系统计算后缓存)
> 初始值由 Tag 关系规则推导 (v0.7 §3)

---

### 属性 `RelationTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[ERelationTag](RelationLedgerTypes__ERelationTag.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Relation|Tags" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Relation|Tags") TArray<ERelationTag> RelationTags;` |

**说明:**

> 标签集合 — 代表双方历史上发生过的决定性事件

---

### 属性 `LastMajorEventGameDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Relation|Tags" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Relation|Tags") float LastMajorEventGameDay = 0.f;` |

**说明:**

> 最近一次重大事件的游戏天 (衰减/UI 用)

---
