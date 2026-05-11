# `struct` `FApplyTeamBuffData`

**源码头文件：** `EastRimWorld/WorldSystem/WorldDirector.h`

---

## 功能说明（来自头文件注释）

> 施加的阵营buff

## 蓝图暴露变量

### 属性 `TeamId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 TeamId = 255;` |

**源码注释：**

> 对应阵营

---

### 属性 `BuffInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FCommonBuff>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FCommonBuff> BuffInfos;` |

**源码注释：**

> Buff

---
