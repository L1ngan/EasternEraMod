# `class` `UModNewGameConfigAsset`

**Source header:** `CreateModPlugin/Public/ModNewGameStruct.h`

---

## Functional description (from header comments)

> 新游戏流程配置资产

## Blueprint-exposed variables

### Property `ProtagonistPresetDataID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ProtagonistPresetDataID;` |

**Notes:**

> 主角预设信息ID

---

### Property `ProtagonistFemaleAvatar`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftObjectPtr<UTexture2D>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UTexture2D>> ProtagonistFemaleAvatar;` |

**Notes:**

> 女性主角头像

---

### Property `Half_ProtagonistFemaleAvatar`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftObjectPtr<UTexture2D>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UTexture2D>> Half_ProtagonistFemaleAvatar;` |

**Notes:**

> 女性主角半身立绘

---

### Property `Half_TourFemaleAvatar`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftObjectPtr<UTexture2D>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UTexture2D>> Half_TourFemaleAvatar;` |

**Notes:**

> 女性比武半身立绘

---

### Property `Small_TourFemaleAvatar`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftObjectPtr<UTexture2D>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UTexture2D>> Small_TourFemaleAvatar;` |

**Notes:**

> 女性比武小立绘

---

### Property `Half_ProtagonistFemaleCenterAvatar`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftObjectPtr<UTexture2D>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UTexture2D>> Half_ProtagonistFemaleCenterAvatar;` |

**Notes:**

> 女性主角中心半身立绘

---

### Property `ProtagonistMaleAvatar`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftObjectPtr<UTexture2D>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UTexture2D>> ProtagonistMaleAvatar;` |

**Notes:**

> 男性主角头像

---

### Property `Half_ProtagonistMaleAvatar`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftObjectPtr<UTexture2D>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UTexture2D>> Half_ProtagonistMaleAvatar;` |

**Notes:**

> 男性主角半身立绘

---

### Property `Half_TourMaleAvatar`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftObjectPtr<UTexture2D>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UTexture2D>> Half_TourMaleAvatar;` |

**Notes:**

> 男性比武半身立绘

---

### Property `Small_TourMaleAvatar`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftObjectPtr<UTexture2D>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UTexture2D>> Small_TourMaleAvatar;` |

**Notes:**

> 男性比武小立绘

---

### Property `Half_ProtagonistMaleCenterAvatar`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftObjectPtr<UTexture2D>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UTexture2D>> Half_ProtagonistMaleCenterAvatar;` |

**Notes:**

> 男性主角中心半身立绘

---

### Property `ProtagonistSkillPoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ProtagonistSkillPoint = 0;` |

**Notes:**

> 主角技能点数

---

### Property `ProtagonistFirePoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ProtagonistFirePoint = 0;` |

**Notes:**

> 主角兴趣点数

---

### Property `PerSkillMaxFirePoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PerSkillMaxFirePoint = 0;` |

**Notes:**

> 每个技能最大添加的兴趣点

---

### Property `ProtagonistCharacteristicNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ProtagonistCharacteristicNum = 0;` |

**Notes:**

> 随机生成主角可选特性的总数

---

### Property `InitNewGameTeamMemberNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InitNewGameTeamMemberNum = 0;` |

**Notes:**

> 初始同行成员数量

---

### Property `UnLockBuildingId`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> UnLockBuildingId;` |

**Notes:**

> 初始解锁的建筑id(在列表中是否可见)

---

### Property `UnlockFormulaId`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> UnlockFormulaId;` |

**Notes:**

> 初始解锁的配方id

---

### Property `UnlockPlantId`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> UnlockPlantId;` |

**Notes:**

> 初始解锁的种植物id

---

### Property `UnlockGameFunction`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) TArray<FName> UnlockGameFunction;` |

**Notes:**

> 新游戏功能ID

---

### Property `InitNewGameResourceCoinNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InitNewGameResourceCoinNum = 0;` |

**Notes:**

> 初始资源积分数量

---

### Property `InitNewGameStoryCoinNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InitNewGameStoryCoinNum = 0;` |

**Notes:**

> 初始剧本积分

---

### Property `ProtagonistCharacteristicRand`

| Field | Details |
|------|------|
| C++ type | TMap<[EModItemQuality](ItemDataStruct__EModItemQuality.md), [FModCharacteristicNumWeight](ModNewGameStruct__FModCharacteristicNumWeight.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EModItemQuality, FModCharacteristicNumWeight> ProtagonistCharacteristicRand;` |

**Notes:**

> 主角特性随机

---
