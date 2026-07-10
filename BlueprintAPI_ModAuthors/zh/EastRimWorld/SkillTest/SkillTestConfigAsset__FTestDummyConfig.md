# `struct` `FTestDummyConfig`

**源码头文件:** `EastRimWorld/SkillTest/SkillTestConfigAsset.h`

---

## 功能说明（来自头文件注释）

> 默认木桩生成配置:进入测试子关卡时按此列表自动生成靶子。

## 蓝图暴露变量

### 属性 `CharacterID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="SkillTest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkillTest") FName CharacterID;` |

**说明:**

> 木桩对应的角色配置ID(默认按人物表 GetHumanInfoByID 解析)

---

### 属性 `CharacterType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECharacterType](../Struct/CommonEnum__ECharacterType.md) |
| 反射说明符 | BlueprintReadWrite, Category="SkillTest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkillTest") ECharacterType CharacterType = ECharacterType::Human;` |

**说明:**

> 角色类型(默认人物;也可填动物等)

---

### 属性 `TeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `uint8` |
| 反射说明符 | BlueprintReadWrite, Category="SkillTest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkillTest") uint8 TeamID = 255;` |

**说明:**

> 阵营ID(默认255中立;按需设成与玩家敌对的阵营,木桩才能作为攻击目标/受击对象)

---

### 属性 `SpawnTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite, Category="SkillTest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkillTest") FTransform SpawnTransform = FTransform::Identity;` |

**说明:**

> 生成位置(相对子关卡原点)

---
