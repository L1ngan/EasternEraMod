# `struct` `FSectBattleEventEntry`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleRecordSubsystem.h`

---

## 功能说明（来自头文件注释）

> 单条门派战记录。

## 蓝图暴露变量

### 属性 `RecordType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ESBRecordType](WorldSectBattleRecordSubsystem__ESBRecordType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) ESBRecordType RecordType = ESBRecordType::BattleEvent;` |

**说明:**

> 顶层分类：BattleEvent（战场击杀 / 占旗等）或 HiddenEvent（隐藏事件）。

---

### 属性 `EventSubType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ESBBattleEventType](WorldSectBattleRecordSubsystem__ESBBattleEventType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) ESBBattleEventType EventSubType = ESBBattleEventType::None;` |

**说明:**

> 战场记录细分类型，仅 RecordType==BattleEvent 时有效；HiddenEvent 时为 None。

---

### 属性 `Content`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FText Content;` |

**说明:**

> 已格式化好的展示文本（含富文本样式标签），UI 用 RichTextBlock 直接显示这条。

---

### 属性 `TimeSeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float TimeSeconds = 0.f;` |

**说明:**

> 相对本场战斗开始的秒数，供 UI 排序 / 展示时间戳。

---
