# `struct` `FSectBattleMessageEntry`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleMessageSubsystem.h`

---

## Functional description (from header comments)

> 单条弹窗消息。各类型共用同一结构体，靠 MessageType 区分有效字段。

## Blueprint-exposed variables

### Property `MessageType`

| Field | Details |
|------|------|
| C++ type | [ESBMessageType](WorldSectBattleMessageSubsystem__ESBMessageType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Message" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Message") ESBMessageType MessageType = ESBMessageType::Text;` |

**Notes:**

> Message Type field.

---

### Property `Description`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Message" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Message") FText Description;` |

**Notes:**

> MessageType==Text 时有效：已格式化好的展示文本（含富文本样式标签）。

---

### Property `ItemName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Message" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Message") FText ItemName;` |

**Notes:**

> MessageType==Item 时有效：物品名字/图标，均由入队方(EnqueueItemMessage)直接给好，本系统不查表。

---

### Property `ItemIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Message" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Message") TSoftObjectPtr<UTexture2D> ItemIcon;` |

**Notes:**

> Item Icon field.

---
