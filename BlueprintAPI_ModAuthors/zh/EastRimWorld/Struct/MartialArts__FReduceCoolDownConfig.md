# `struct` `FReduceCoolDownConfig`

**源码头文件:** `EastRimWorld/Struct/MartialArts.h`

---

## 功能说明（来自头文件注释）

> 冷却时间减少的配置

## 蓝图暴露变量

### 属性 `TargetAbilityTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadOnly, Category="Cooldown" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cooldown") FGameplayTag TargetAbilityTag;` |

**说明:**

> 目标GA的Tag

---

### 属性 `ReduceTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Cooldown" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cooldown") float ReduceTime{0.f};` |

**说明:**

> 装备时增加的属性

---
