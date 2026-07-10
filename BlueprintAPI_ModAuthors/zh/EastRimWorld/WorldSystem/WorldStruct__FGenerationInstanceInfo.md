# `struct` `FGenerationInstanceInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 生成的实例

## 蓝图暴露变量

### 属性 `GenerationGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid GenerationGuid;` |

**说明:**

> 生成队列中的唯一GUID

---

### 属性 `InstanceGenerationActorInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FInstanceGenerationActorInfo](WorldStruct__FInstanceGenerationActorInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FInstanceGenerationActorInfo> InstanceGenerationActorInfos;` |

**说明:**

> 生成的实例

---

### 属性 `GenerationNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int GenerationNumber = 0;` |

**说明:**

> 生成的数量

---
