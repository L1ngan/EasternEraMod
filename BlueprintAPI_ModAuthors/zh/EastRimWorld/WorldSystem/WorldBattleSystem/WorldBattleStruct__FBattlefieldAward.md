# `struct` `FBattlefieldAward`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## 功能说明（来自头文件注释）

> 战场结果

## 蓝图暴露变量

### 属性 `RewardResources`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FItemSimpleData](../../Struct/CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FName,FItemSimpleData> RewardResources;` |

**说明:**

> 获得的资源

---

### 属性 `PostwarCharacterDispose`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32,[FPostwarCharacterDispose](WorldBattleStruct__FPostwarCharacterDispose.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<int32,FPostwarCharacterDispose> PostwarCharacterDispose;` |

**说明:**

> 处置的角色 阵营ID

---

### 属性 `PlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid PlaceGuid;` |

**说明:**

> 占领的地点

---

### 属性 `Reputation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Reputation = 0;` |

**说明:**

> 声望

---

### 属性 `FavorabilityChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGuid,float>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid,float> FavorabilityChange;` |

**说明:**

> 势力好感度变化 key 势力Guid value 变化的值

---

### 属性 `JusticeValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 JusticeValue = 0;` |

**说明:**

> 正义值

---

### 属性 `bNPCDisposal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bNPCDisposal = false;` |

**说明:**

> 是否已经处理NPC的战斗结算

---

### 属性 `PlaceDisposalType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EPlaceDisposalType](../WorldStruct__EPlaceDisposalType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EPlaceDisposalType PlaceDisposalType = EPlaceDisposalType::OccupyPlace;` |

**说明:**

> 城镇处理

---
