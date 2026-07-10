# `class` `USectBattleRecordItemData`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleRecordSubsystem.h`

---

## Functional description (from header comments)

> CommonListView 列表项数据对象。一条 = 一行记录，暂时只承载 Content（已格式化的富文本）。
> CommonListView 的数据源必须是 UObject*，故用本类包装 FSectBattleEventEntry.Content。
> Entry Widget 实现 IUserObjectListEntry，在 OnListItemObjectSet 里把本对象的 Content 灌进 RichTextBlock。

## Blueprint-exposed variables

### Property `Content`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Record" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "WorldSectBattle|Record") FText Content;` |

**Notes:**

> 富文本展示内容，直接来自 FSectBattleEventEntry.Content。

---

### Property `TimeText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Record" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "WorldSectBattle|Record") FText TimeText;` |

**Notes:**

> 已格式化的时间戳 "MM:SS"，由 FSectBattleEventEntry.TimeSeconds 经 FormatRecordTime 预格式化得到，
> Entry Widget 直接显示、无需再计算。

---
