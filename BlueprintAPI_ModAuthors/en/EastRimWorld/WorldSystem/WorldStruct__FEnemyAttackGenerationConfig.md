# `struct` `FEnemyAttackGenerationConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 敌对势力袭击配置

## Blueprint-exposed variables

### Property `EnemyForcesNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 EnemyForcesNum = 1;` |

**Notes:**

> 参与袭击的敌国数量(包含必须参加的势力的总数)

---

### Property `MustEnemyForceIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> MustEnemyForceIDs;` |

**Notes:**

> 必须参与袭击的敌对门派ID列表

---

### Property `EnemyCharacterMiniNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 EnemyCharacterMiniNum = 1;` |

**Notes:**

> 参与袭击的角色数目最小值

---

### Property `EnemyCharacterMaxNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 EnemyCharacterMaxNum = 5;` |

**Notes:**

> 参与袭击的角色数目最大值

---

### Property `EnemyReputationMin`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float EnemyReputationMin =0.f;` |

**Notes:**

> 参与随机的门派声望限制

---

### Property `EnemyReputationMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float EnemyReputationMax =99999.f;` |

**Notes:**

> 参与随机的门派声望限制

---

### Property `GenerationPosition`

| Field | Details |
|------|------|
| C++ type | `TArray<FTransform>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTransform> GenerationPosition;` |

**Notes:**

> 地点生成位置数组（也是撤退的点位置）

---

### Property `TeamIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<int32> TeamIDs = {2, 3, 4, 5};` |

**Notes:**

> 生成的队伍ID(相同ID的队伍会在同一阵营)

---

### Property `BehaviorTree`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowedClasses = "/Script/AIModule.BehaviorTree")) FSoftObjectPath BehaviorTree;` |

**Notes:**

> 对应的行为树 不配置则使用默认阵营行为树

---

### Property `AddGoals`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> AddGoals;` |

**Notes:**

> 新增的Goals

---

### Property `RemoveGoals`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> RemoveGoals;` |

**Notes:**

> 移除的Goals

---

### Property `FirstAttackExecGoal`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName FirstAttackExecGoal = TEXT("InAssault");` |

**Notes:**

> 生成后，立即执行的Goal(默认攻击)

---

### Property `GenerationInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float GenerationInterval = 1.f;` |

**Notes:**

> 角色之间生成间隔

---

### Property `bTimeOutRetreat`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTimeOutRetreat = false;` |

**Notes:**

> 是否允许时间到了撤退

---

### Property `AttackDuration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "bTimeOutRetreat")) float AttackDuration = 300.f;` |

**Notes:**

> 攻击持续事件，超过这个时间后，就自动撤退（秒）

---

### Property `RetreatDuration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "bTimeOutRetreat")) float RetreatDuration = 20.f;` |

**Notes:**

> 撤退持续时间，超过这个时间后，强制删除角色（秒）

---

### Property `RetreatBehaviorTree`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowedClasses = "/Script/AIModule.BehaviorTree")) FSoftObjectPath RetreatBehaviorTree;` |

**Notes:**

> 撤退行为树 不配置则使用默认阵营行为树

---

### Property `RetreatExecGoal`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RetreatExecGoal = TEXT("ForceRetreat");` |

**Notes:**

> 撤退执行的Goal

---

### Property `GenerationTips`

| Field | Details |
|------|------|
| C++ type | [ETipsType](WorldStruct__ETipsType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETipsType GenerationTips = ETipsType::ForceAssault;` |

**Notes:**

> 提示 生成提示

---

### Property `RetreatTips`

| Field | Details |
|------|------|
| C++ type | [ETipsType](WorldStruct__ETipsType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETipsType RetreatTips = ETipsType::ForceAssaultRetreat;` |

**Notes:**

> 提示 撤退提示

---
