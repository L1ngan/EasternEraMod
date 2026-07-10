# `struct` `FPostStationGenerateInstanceInfo`

**源码头文件:** `EastRimWorld/PostStation/PostStationStruct.h`

---

## 功能说明（来自头文件注释）

> 驿站单个已生成NPC的实例信息（生成Guid、占用插槽、存续时间与角色状态）

## 蓝图暴露变量

### 属性 `ComponentGenerateGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid ComponentGenerateGuid;` |

**说明:**

> 生成组件中的Guid

---

### 属性 `OccupySocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName OccupySocket;` |

**说明:**

> 占用的插槽

---

### 属性 `AlreadyExistTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float AlreadyExistTime;` |

**说明:**

> 已经存续的时间

---

### 属性 `bIsAlreadyGenerate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bIsAlreadyGenerate;` |

**说明:**

> 是否已经生成

---

### 属性 `CharacterGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid CharacterGuid;` |

**说明:**

> 生成的角色Guid

---

### 属性 `CharacterID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName CharacterID;` |

**说明:**

> 生成的角色配置ID

---

### 属性 `NPCState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EPostStationNPCState](PostStationStruct__EPostStationNPCState.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EPostStationNPCState NPCState;` |

**说明:**

> 该NPC当前状态（空闲/切磋中）

---
