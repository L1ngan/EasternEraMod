# `struct` `FGOAP_ActionIcon`

**源码头文件：** `EastRimWorld/GOAP/GOAP_Data.h`

---

## 功能说明（来自头文件注释）

> GOAP行为图标

## 蓝图暴露变量

### 属性 `ActionIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame) TSoftObjectPtr<UTexture2D> ActionIcon;` |

**源码注释：**

> 行为图标

---

### 属性 `CharacterBehaviorStates`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<ECharacterBehaviorState>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame) TArray<ECharacterBehaviorState> CharacterBehaviorStates;` |

**源码注释：**

> 行为的类型数组

---
