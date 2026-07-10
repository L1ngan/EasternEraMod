# `struct` `FDominionIntelInfo`

**源码头文件:** `EastRimWorld/System/Dominion/DominionTypes.h`

---

## 功能说明（来自头文件注释）

> 交流-索取情报返回的城市情报快照(不存档)

## 蓝图暴露变量

### 属性 `LordForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FGuid LordForceGuid;` |

**说明:**

> 城主势力Guid

---

### 属性 `LordForceName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FText LordForceName;` |

**说明:**

> 城主势力名

---

### 属性 `DefenderCombat`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float DefenderCombat = 0.f;` |

**说明:**

> 城市总守备战力(驻扎弟子+附属门派守备贡献,=攻城时实际面对的 De)

---

### 属性 `ResidentCombat`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float ResidentCombat = 0.f;` |

**说明:**

> 其中附属门派守备贡献部分(已包含在 DefenderCombat 内,供拆分展示)

---

### 属性 `ResidentSectCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 ResidentSectCount = 0;` |

**说明:**

> 城内附属门派数量

---

### 属性 `SectCapacity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 SectCapacity = 0;` |

**说明:**

> 城市门派容量上限

---

### 属性 `CityLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 CityLevel = 1;` |

**说明:**

> 城市等级

---

### 属性 `Prosperity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float Prosperity = 0.f;` |

**说明:**

> 城市繁荣度

---
