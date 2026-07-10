# `struct` `FEmergenceLogLinkPayload`

**源码头文件:** `EastRimWorld/System/Emergence/Log/EmergenceLogComponent.h`

---

## 功能说明（来自头文件注释）

> 日志超链接点击载荷 — 广播用结构体(便于扩展; wid 载荷支持多 Guid: "类型:Guid1,Guid2,...")。
> 新链接类型加字段/枚举即可, 不动委托签名。

## 蓝图暴露变量

### 属性 `LinkType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEmergenceLogLinkType](EmergenceLogComponent__EEmergenceLogLinkType.md) |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "EmergenceLog") EEmergenceLogLinkType LinkType = EEmergenceLogLinkType::None;` |

**说明:**

> 动作类型(UI 按此分支)

---

### 属性 `TargetGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "EmergenceLog") TArray<FGuid> TargetGuids;` |

**说明:**

> 目标对象 Guid(可多个; 单目标动作取 [0])

---

### 属性 `ForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "EmergenceLog") FGuid ForceGuid;` |

**说明:**

> 弟子所属势力 Guid(ShowDiscipleInfo 用: 解析时按角色 Guid 反查各势力名册填入; 查不到为无效 Guid, 如宿敌分身这类不入名册的 NPC)

---

### 属性 `LogGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "EmergenceLog") FGuid LogGuid;` |

**说明:**

> 所属日志条目 Guid(TriggerDialogue 用: 配合 ActionIndex 调 ExecuteLogAction 触发, 自带阶段有效性判定)

---

### 属性 `ActionIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "EmergenceLog") int32 ActionIndex = 0;` |

**说明:**

> 日志动作序号(TriggerDialogue 用: Entry.Actions 的下标)

---

### 属性 `ItemID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "EmergenceLog") FName ItemID;` |

**说明:**

> 物品配置 ID(ShowItemInfo 用)

---

### 属性 `ItemType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGroundInventoryType](../../../Struct/CommonEnum__EGroundInventoryType.md) |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "EmergenceLog") EGroundInventoryType ItemType = EGroundInventoryType::NormalItem;` |

**说明:**

> 物品类型(ShowItemInfo 用; 与 ItemID 一起定位物品配置)

---
