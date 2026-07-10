# `class` `UERW_SquadFormation`

**源码头文件:** `EastRimWorld/System/Squad/ERW_SquadFormation.h`

---

## 功能说明（来自头文件注释）

> 单个编组（纵队）。
> - 沿预设地面路径(PathPoints)以"虚拟头点"推进。
> - 队员按弧长偏移(HeadDistance - SlotIndex*Spacing)排成纵队。
> - 散兵入队先跑(Joining)，到位后转走(InFormation)。

## 蓝图暴露变量

### 属性 `Members`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FSquadMember](ERW_SquadFormation__FSquadMember.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Squad" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Squad") TArray<FSquadMember> Members;` |

**说明:**

> 当前队员（含正在赶来的 Joining 成员）

---

### 属性 `PathPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FVector>` |
| 反射说明符 | BlueprintReadOnly, Category="Squad" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Squad") TArray<FVector> PathPoints;` |

**说明:**

> 预设地面路径（来自 WorldMapPathSubsystem）

---

### 属性 `TotalPathLength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Squad" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Squad") float TotalPathLength = 0.f;` |

**说明:**

> 路径总长（环形时包含末点->首点的闭合段）

---

### 属性 `bLoop`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Squad" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Squad") bool bLoop = false;` |

**说明:**

> 路径是否首尾相接（环形巡逻，永不停止）

---

### 属性 `HeadDistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Squad" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Squad") float HeadDistance = 0.f;` |

**说明:**

> 虚拟头点已推进的弧长

---

### 属性 `Spacing`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Squad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Squad") float Spacing = 150.f;` |

**说明:**

> 纵队前后间距(cm)

---

### 属性 `AcceptanceRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Squad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Squad") float AcceptanceRadius = 50.f;` |

**说明:**

> 到达槽位容差(cm)，小于此值不再下发移动指令（防抖动）

---

### 属性 `StragglerSpacingFactor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Squad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Squad") float StragglerSpacingFactor = 3.f;` |

**说明:**

> 已入列成员掉队超过 Spacing*此倍数 时，降级回 Joining 重新跑步归队

---

### 属性 `LaneJoinTolerance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Squad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Squad") float LaneJoinTolerance = 80.f;` |

**说明:**

> 散兵汇入车道判定(cm)：到路径折线的横向(2D)距离小于此值即视为"上线"，
> 转入 InFormation——不再死磕仍在移动的精确槽位（抗入队抖动）。

---

### 属性 `JoinLead`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Squad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Squad") float JoinLead = 100.f;` |

**说明:**

> 散兵入队提前量(cm)：Joining 寻路目标取槽位再沿路径前移此距离，
> 让散兵从后方切线汇入而非垂直撞移动点，逼近轨迹更顺（抗逼近抖动）。

---

### 属性 `bActive`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Squad" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Squad") bool bActive = false;` |

**说明:**

> 是否激活（开始行军）

---

### 属性 `PathIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Squad" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Squad") int32 PathIndex = INDEX_NONE;` |

**说明:**

> 本编组所属的样条路径索引（子系统多路径匹配用；-1 表示未绑定）

---
