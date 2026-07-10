# `struct` `FPostStationGenerateInfo`

**源码头文件:** `EastRimWorld/PostStation/PostStationStruct.h`

---

## 功能说明（来自头文件注释）

> 生产线中单个槽位的生成信息（生成配置、权重、可用生成池与在场实例）

## 蓝图暴露变量

### 属性 `GenerateConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FPostStationGenerateConfig](PostStationStruct__FPostStationGenerateConfig.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FPostStationGenerateConfig GenerateConfig;` |

**说明:**

> 驿站生成配置

---

### 属性 `Weight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Weight;` |

**说明:**

> 权重

---

### 属性 `AllMonsterGenerateConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FMonsterGenerationConfig](../WorldSystem/WorldStruct__FMonsterGenerationConfig.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FMonsterGenerationConfig> AllMonsterGenerateConfig;` |

**说明:**

> 配置的所有生成(初始化之后不可再变动)

---

### 属性 `CanUseMonsterGenerateIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<int32> CanUseMonsterGenerateIndex;` |

**说明:**

> 当前可用的生成序号(当配置的条件满足之后就加入到这里面,此后不再检测条件)

---

### 属性 `ComponentGenerateInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FPostStationGenerateInstanceInfo](PostStationStruct__FPostStationGenerateInstanceInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FPostStationGenerateInstanceInfo> ComponentGenerateInfos;` |

**说明:**

> 当前在场的生成实例信息列表

---

### 属性 `bRetiredFromLineConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) bool bRetiredFromLineConfig;` |

**说明:**

> 本槽已从当前线路配置中移除，仅等旧配置遗留 NPC 离场；为 true 时不再随 RandGenerate/条件解锁参与生成，人走光后从 GenerateInfos 剔除

---
