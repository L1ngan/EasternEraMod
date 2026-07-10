# `struct` `FEastRimWorldHumanData`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> Human character config data (extends character data): customization ID, height/weight, background story, traveler/merchant and prisoner settings

## Blueprint-exposed variables

### Property `CustomizationId`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterCustomization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization") FString CustomizationId;` |

**Notes:**

> 捏人数据的id

---

### Property `Height`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterCustomization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization") int32 Height = 180;` |

**Notes:**

> 身高

---

### Property `Weight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterCustomization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization") int32 Weight = 120;` |

**Notes:**

> 体重

---

### Property `BackgroundStory`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterCustomization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization") FText BackgroundStory;` |

**Notes:**

> 背景故事

---

### Property `InitCharacteristicIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FName> InitCharacteristicIds;` |

**Notes:**

> 初始特性

---

### Property `RefuseText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterCustomization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization") FText RefuseText;` |

**Notes:**

> 投靠时拒绝文本

---

### Property `AcceptText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterCustomization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization") FText AcceptText;` |

**Notes:**

> 投靠时接受文本

---

### Property `JoinText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterCustomization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization") FText JoinText;` |

**Notes:**

> Text shown when the character joins after seeking refuge

---

### Property `bTraveler`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Traveler") bool bTraveler = false;` |

**Notes:**

> NPC标识

---

### Property `DialogueGroupID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Traveler") FName DialogueGroupID;` |

**Notes:**

> 对话组ID

---

### Property `TravelerTitle`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Traveler") FText TravelerTitle;` |

**Notes:**

> 称号

---

### Property `TravelerHeadIcon`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Traveler") FSoftObjectPath TravelerHeadIcon;` |

**Notes:**

> 头顶图标

---

### Property `TravelerSpeechBubble`

| Field | Details |
|------|------|
| C++ type | `TArray<FText>` |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Traveler") TArray<FText> TravelerSpeechBubble;` |

**Notes:**

> 场景喊话

---

### Property `TravelerIdleMontage`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Traveler") FSoftObjectPath TravelerIdleMontage;` |

**Notes:**

> NPC待机

---

### Property `TravelerMoney`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Traveler") FIntPoint TravelerMoney = FIntPoint::ZeroValue;` |

**Notes:**

> 商人初始金钱

---

### Property `TravelerGoodsNum`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Traveler") FIntPoint TravelerGoodsNum = FIntPoint::ZeroValue;` |

**Notes:**

> 商人商品数量

---

### Property `TravelerGoodsId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Traveler") FName TravelerGoodsId;` |

**Notes:**

> 商品ID(DT_FTravelerGoodsConfig表ID)

---

### Property `TravelerForceID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Traveler") FName TravelerForceID;` |

**Notes:**

> NPC所属势力ID(获取势力好感度计算商品价格)

---

### Property `ExchangeMartialArtsID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Traveler") FName ExchangeMartialArtsID;` |

**Notes:**

> 切磋ID

---

### Property `NPCInformationWidget`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName NPCInformationWidget;` |

**Notes:**

> NPC信息界面ID(非玩家队伍角色信息界面)

---

### Property `PrisonerImportance`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Prisoner" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Prisoner") int32 PrisonerImportance = 1;` |

**Notes:**

> 囚犯重要程度

---
