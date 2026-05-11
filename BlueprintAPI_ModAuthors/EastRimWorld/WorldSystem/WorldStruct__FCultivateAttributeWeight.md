# `struct` `FCultivateAttributeWeight`

**源码头文件：** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> NPC培养角色属性抽取权重

## 蓝图暴露变量

### 属性 `AttributeWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FGameplayAttribute,int32> AttributeWeight;` |

**源码注释：**

> 境界等级对应的属性抽取权重

---

### 属性 `AttributeValueWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,FCultivateAttributeValueWeight>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FGameplayAttribute,FCultivateAttributeValueWeight> AttributeValueWeight;` |

**源码注释：**

> 境界等级对应的属性加值抽取权重

---
