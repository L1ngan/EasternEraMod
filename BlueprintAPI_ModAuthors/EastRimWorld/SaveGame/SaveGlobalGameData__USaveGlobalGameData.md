# `class` `USaveGlobalGameData`

**源码头文件：** `EastRimWorld/SaveGame/SaveGlobalGameData.h`

---

## 功能说明（来自头文件注释）

> 保存游戏内全局的数据

## 蓝图暴露变量

### 属性 `ResourceCoin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, SaveGame) int32 ResourceCoin = 100;` |

**源码注释：**

> 物资积分

---

### 属性 `StoryCoin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, SaveGame) int32 StoryCoin = 100;` |

**源码注释：**

> 剧情积分

---

### 属性 `SaveSlotName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, SaveGame) FString SaveSlotName;` |

**源码注释：**

> 存档名称

---

### 属性 `EnabledModIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, SaveGame) TArray<FName> EnabledModIds;` |

**源码注释：**

> 启用的MOD

---

## 蓝图暴露函数

### 函数 `SetModEnabled`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ModId` | `const FName&` |
| `bEnabled` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetModEnabled(const FName& ModId, bool bEnabled);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 启用/禁用Mod

---
