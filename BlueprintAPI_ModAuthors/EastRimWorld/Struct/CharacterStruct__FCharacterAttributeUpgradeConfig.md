# `struct` `FCharacterAttributeUpgradeConfig`

**源码头文件：** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 角色属性升级配置

## 蓝图暴露变量

### 属性 `LevelName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeLevelConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeLevelConfig") FText LevelName;` |

**源码注释：**

> 等级名称

---

### 属性 `NextExp`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeLevelConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeLevelConfig") float NextExp = 0.f;` |

**源码注释：**

> 升级所需要的经验

---

### 属性 `Level`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeLevelConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeLevelConfig") int Level = 0;` |

**源码注释：**

> 等级

---
