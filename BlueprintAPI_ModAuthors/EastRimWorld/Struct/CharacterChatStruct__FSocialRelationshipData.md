# `struct` `FSocialRelationshipData`

**源码头文件：** `EastRimWorld/Struct/CharacterChatStruct.h`

---

## 功能说明（来自头文件注释）

> 社交关系数据

## 蓝图暴露变量

### 属性 `CharacterName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FText CharacterName;` |

**源码注释：**

> 关系对象名称

---

### 属性 `CurGoodOpinion`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) int32 CurGoodOpinion;` |

**源码注释：**

> 当前好感度

---

### 属性 `CurRelationship`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FName CurRelationship;` |

**源码注释：**

> 当前关系

---

### 属性 `NextRelationshipApplyTimes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) TMap<FName,int32> NextRelationshipApplyTimes;` |

**源码注释：**

> 下一段关系申请次数

---
