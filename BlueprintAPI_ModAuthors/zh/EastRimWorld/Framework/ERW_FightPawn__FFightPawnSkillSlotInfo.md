# `struct` `FFightPawnSkillSlotInfo`

**源码头文件:** `EastRimWorld/Framework/ERW_FightPawn.h`

---

## 功能说明（来自头文件注释）

> 技能槽信息（UI 初始化用）
> SlotIndex = -1 表示鼠标左键普攻；0~N 表示 1234... 技能槽

## 蓝图暴露变量

### 属性 `SlotIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Skill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="FightPawn|Skill") int32 SlotIndex = -2;` |

**说明:**

> 槽位索引：-1=鼠标左键普攻，0~N=技能槽，-2=无效

---

### 属性 `AbilityID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Skill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="FightPawn|Skill") FName AbilityID;` |

**说明:**

> 该技能槽对应的能力 ID

---

### 属性 `BookID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Skill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="FightPawn|Skill") FName BookID;` |

**说明:**

> 武学书ID（招式所属武学；普攻等无武学来源时为 None）

---

### 属性 `SkillName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Skill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="FightPawn|Skill") FText SkillName;` |

**说明:**

> 技能显示名称

---

### 属性 `Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Skill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="FightPawn|Skill") TSoftObjectPtr<UTexture2D> Icon;` |

**说明:**

> 技能图标贴图（软引用）

---
