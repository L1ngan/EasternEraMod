# `struct` `FMartialArtsLevelConfig`

**源码头文件：** `EastRimWorld/Struct/MartialArts.h`

---

## 功能说明（来自头文件注释）

> 武学等级配置

## 蓝图暴露变量

### 属性 `Score`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int32>` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArtsLevel" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") TArray<int32> Score;` |

**源码注释：**

> 等级增加的评分

---

### 属性 `Experience`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int32>` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArtsLevel" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") TArray<int32> Experience;` |

**源码注释：**

> 等级所需的经验

---

### 属性 `MovesSlotNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int32>` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArtsLevel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MartialArtsLevel") TArray<int32> MovesSlotNumber;` |

**源码注释：**

> 招式插槽数量

---

### 属性 `PassiveSlotNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int32>` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArtsLevel" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MartialArtsLevel") TArray<int32> PassiveSlotNumber;` |

**源码注释：**

> 被动的插槽数量

---
