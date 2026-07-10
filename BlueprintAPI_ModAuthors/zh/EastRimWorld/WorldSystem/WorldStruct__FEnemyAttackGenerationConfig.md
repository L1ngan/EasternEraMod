# `struct` `FEnemyAttackGenerationConfig`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 敌对势力袭击配置

## 蓝图暴露变量

### 属性 `EnemyForcesNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 EnemyForcesNum = 1;` |

**说明:**

> 参与袭击的敌国数量(包含必须参加的势力的总数)

---

### 属性 `MustEnemyForceIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> MustEnemyForceIDs;` |

**说明:**

> 必须参与袭击的敌对门派ID列表

---

### 属性 `EnemyCharacterMiniNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 EnemyCharacterMiniNum = 1;` |

**说明:**

> 参与袭击的角色数目最小值

---

### 属性 `EnemyCharacterMaxNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 EnemyCharacterMaxNum = 5;` |

**说明:**

> 参与袭击的角色数目最大值

---

### 属性 `EnemyReputationMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float EnemyReputationMin =0.f;` |

**说明:**

> 参与随机的门派声望限制

---

### 属性 `EnemyReputationMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float EnemyReputationMax =99999.f;` |

**说明:**

> 参与随机的门派声望限制

---

### 属性 `GenerationPosition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FTransform>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTransform> GenerationPosition;` |

**说明:**

> 地点生成位置数组（也是撤退的点位置）

---

### 属性 `TeamIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<int32> TeamIDs = {2, 3, 4, 5};` |

**说明:**

> 生成的队伍ID(相同ID的队伍会在同一阵营)

---

### 属性 `BehaviorTree`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowedClasses = "/Script/AIModule.BehaviorTree")) FSoftObjectPath BehaviorTree;` |

**说明:**

> 对应的行为树 不配置则使用默认阵营行为树

---

### 属性 `AddGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> AddGoals;` |

**说明:**

> 新增的Goals

---

### 属性 `RemoveGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> RemoveGoals;` |

**说明:**

> 移除的Goals

---

### 属性 `FirstAttackExecGoal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName FirstAttackExecGoal = TEXT("InAssault");` |

**说明:**

> 生成后，立即执行的Goal(默认攻击)

---

### 属性 `GenerationInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float GenerationInterval = 1.f;` |

**说明:**

> 角色之间生成间隔

---

### 属性 `bTimeOutRetreat`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTimeOutRetreat = false;` |

**说明:**

> 是否允许时间到了撤退

---

### 属性 `AttackDuration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "bTimeOutRetreat")) float AttackDuration = 300.f;` |

**说明:**

> 攻击持续事件，超过这个时间后，就自动撤退（秒）

---

### 属性 `RetreatDuration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "bTimeOutRetreat")) float RetreatDuration = 20.f;` |

**说明:**

> 撤退持续时间，超过这个时间后，强制删除角色（秒）

---

### 属性 `RetreatBehaviorTree`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowedClasses = "/Script/AIModule.BehaviorTree")) FSoftObjectPath RetreatBehaviorTree;` |

**说明:**

> 撤退行为树 不配置则使用默认阵营行为树

---

### 属性 `RetreatExecGoal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RetreatExecGoal = TEXT("ForceRetreat");` |

**说明:**

> 撤退执行的Goal

---

### 属性 `GenerationTips`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ETipsType](WorldStruct__ETipsType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETipsType GenerationTips = ETipsType::ForceAssault;` |

**说明:**

> 提示 生成提示

---

### 属性 `RetreatTips`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ETipsType](WorldStruct__ETipsType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETipsType RetreatTips = ETipsType::ForceAssaultRetreat;` |

**说明:**

> 提示 撤退提示

---
