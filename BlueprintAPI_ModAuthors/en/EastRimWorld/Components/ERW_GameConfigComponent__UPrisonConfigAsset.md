# `class` `UPrisonConfigAsset`

**Source header:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## Functional description (from header comments)

> 监狱配置

## Blueprint-exposed variables

### Property `ImprisonActionID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName ImprisonActionID;` |

**Source comments:**

> 囚禁行为(在监狱的核心建筑上创建)

---

### Property `ImprisonedBuffes`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> ImprisonedBuffes;` |

**Source comments:**

> 囚犯被囚禁时施加的buff

---

### Property `ExecutePrisonerActionID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName ExecutePrisonerActionID;` |

**Source comments:**

> 处决囚犯行为

---

### Property `PrisonerExecutedActionID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName PrisonerExecutedActionID;` |

**Source comments:**

> 囚犯被处决行为

---

### Property `PrisonerTorturedActionID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName PrisonerTorturedActionID;` |

**Source comments:**

> 囚犯被处决行为

---

### Property `PrisonTeamID`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGenericTeamId PrisonTeamID;` |

**Source comments:**

> 囚犯队伍ID

---

### Property `PrisonerInfoWidget`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName PrisonerInfoWidget;` |

**Source comments:**

> 囚犯界面

---

### Property `MaxTortureColdDown`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxTortureColdDown;` |

**Source comments:**

> 拷打CD

---

### Property `TortureLoyaltyBaseValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TortureLoyaltyBaseValue = 0.f;` |

**Source comments:**

> 拷打导致的忠诚度变化基础值

---

### Property `RecruitLoyaltyValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float RecruitLoyaltyValue = 0.f;` |

**Source comments:**

> 可发起招募的忠诚度

---

### Property `CanRecruitShoutTexts`

| Field | Details |
|------|------|
| C++ type | `TArray<FText>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FText> CanRecruitShoutTexts;` |

**Source comments:**

> 可招募时NPC喊话文本

---

### Property `RecruitLoyaltyRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float RecruitLoyaltyRate = 1.f;` |

**Source comments:**

> 每10点忠诚度提供的

---

### Property `MaxRecruitColdDown`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxRecruitColdDown;` |

**Source comments:**

> 招募CD

---

### Property `MaxRecruitWorkload`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxRecruitWorkload;` |

---

### Property `RedemptionTexts`

| Field | Details |
|------|------|
| C++ type | TArray<[FRedemptionTextData](ERW_GameConfigComponent__FRedemptionTextData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FRedemptionTextData> RedemptionTexts;` |

**Source comments:**

> 赎回文本

---

### Property `RedemptionWidget`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UCommonGameDialog>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<UCommonGameDialog> RedemptionWidget;` |

**Source comments:**

> 赎回界面

---

### Property `RecruitSuccessWidget`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UCommonGameDialog>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<UCommonGameDialog> RecruitSuccessWidget;` |

**Source comments:**

> 招募成功分配堂口界面

---

### Property `MaxSendFoodColdDown`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxSendFoodColdDown;` |

**Source comments:**

> 送饭CD

---

### Property `CanManageItemTags`

| Field | Details |
|------|------|
| C++ type | TMap<ECanManageTagType , [FGameplayTagArr](ERW_GameConfigComponent__FGameplayTagArr.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<ECanManageTagType , FGameplayTagArr> CanManageItemTags;` |

**Source comments:**

> 可以管理的物品Tag

---
