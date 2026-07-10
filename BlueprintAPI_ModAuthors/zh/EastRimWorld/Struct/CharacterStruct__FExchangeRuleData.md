# `struct` `FExchangeRuleData`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 切磋（交流武学）规则数据：是否随机、是否允许及子类型开关映射

## 蓝图暴露变量

### 属性 `bIsRandom`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsRandom = true;` |

**说明:**

> 是否随机选择

---

### 属性 `bIsAllow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsAllow = true;` |

**说明:**

> 是否允许该规则

---

### 属性 `SubTypeData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32 , bool>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32 , bool> SubTypeData;` |

**说明:**

> 子类型开关映射（子类型编号 -> 是否允许）

---
