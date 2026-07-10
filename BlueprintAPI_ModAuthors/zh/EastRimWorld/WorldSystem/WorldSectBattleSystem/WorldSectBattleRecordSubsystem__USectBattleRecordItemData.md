# `class` `USectBattleRecordItemData`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleRecordSubsystem.h`

---

## 功能说明（来自头文件注释）

> CommonListView 列表项数据对象。一条 = 一行记录，暂时只承载 Content（已格式化的富文本）。
> CommonListView 的数据源必须是 UObject*，故用本类包装 FSectBattleEventEntry.Content。
> Entry Widget 实现 IUserObjectListEntry，在 OnListItemObjectSet 里把本对象的 Content 灌进 RichTextBlock。

## 蓝图暴露变量

### 属性 `Content`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Record" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "WorldSectBattle|Record") FText Content;` |

**说明:**

> 富文本展示内容，直接来自 FSectBattleEventEntry.Content。

---

### 属性 `TimeText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Record" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "WorldSectBattle|Record") FText TimeText;` |

**说明:**

> 已格式化的时间戳 "MM:SS"，由 FSectBattleEventEntry.TimeSeconds 经 FormatRecordTime 预格式化得到，
> Entry Widget 直接显示、无需再计算。

---
