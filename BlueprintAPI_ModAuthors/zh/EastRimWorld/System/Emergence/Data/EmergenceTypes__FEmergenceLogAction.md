# `struct` `FEmergenceLogAction`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## 功能说明（来自头文件注释）

> 日志的一个可点击动作 — 随事件/阶段不同(如触发一段对话)。随日志条目入档。
> 点击执行走 UEmergenceLogComponent::ExecuteLogAction(会先做阶段有效性判定)。

## 蓝图暴露变量

### 属性 `Type`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEmergenceLogActionType](EmergenceTypes__EEmergenceLogActionType.md) |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|LogAction" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|LogAction") EEmergenceLogActionType Type = EEmergenceLogActionType::None;` |

**说明:**

> 动作类型

---

### 属性 `ActionId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|LogAction" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|LogAction") FName ActionId;` |

**说明:**

> 动作参数 ID(按 Type 解释: Dialogue=对话组 ID; 其它类型自定义)

---

### 属性 `Label`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|LogAction" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|LogAction") FText Label;` |

**说明:**

> 超链接显示文案(如【前往支援】)。非空则 AddLog 自动把本动作尾随成日志末尾超链接(可多个动作=多个链接); 空=不生成尾随链接(仅作 UI chips)

---

### 属性 `TargetActorGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|LogAction" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|LogAction") FGuid TargetActorGuid;` |

**说明:**

> 目标演员 Guid(可空; Dialogue 用作发起方立绘来源, 其它类型自定义)

---
