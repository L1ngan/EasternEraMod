# `struct` `FSectBattleMessageEntry`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleMessageSubsystem.h`

---

## 功能说明（来自头文件注释）

> 单条弹窗消息。各类型共用同一结构体，靠 MessageType 区分有效字段。

## 蓝图暴露变量

### 属性 `MessageType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ESBMessageType](WorldSectBattleMessageSubsystem__ESBMessageType.md) |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Message" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Message") ESBMessageType MessageType = ESBMessageType::Text;` |

**说明:**

> Message Type 字段。

---

### 属性 `Description`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Message" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Message") FText Description;` |

**说明:**

> MessageType==Text 时有效：已格式化好的展示文本（含富文本样式标签）。

---

### 属性 `ItemName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Message" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Message") FText ItemName;` |

**说明:**

> MessageType==Item 时有效：物品名字/图标，均由入队方(EnqueueItemMessage)直接给好，本系统不查表。

---

### 属性 `ItemIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Message" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Message") TSoftObjectPtr<UTexture2D> ItemIcon;` |

**说明:**

> Item Icon 字段。

---
