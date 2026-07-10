# `class` `UCharacterChatConfigAsset`

**Source header:** `EastRimWorld/Struct/CharacterChatStruct.h`

---

## Functional description (from header comments)

> 角色聊天配置资产

## Blueprint-exposed variables

### Property `ChatInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChatInterval;` |

**Notes:**

> 聊天间隔

---

### Property `ChatDuration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChatDuration;` |

**Notes:**

> 一次持续时间

---

### Property `FindChatPartnerInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float FindChatPartnerInterval;` |

**Notes:**

> 查找聊天对象的间隔

---

### Property `FindChatPartnerRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float FindChatPartnerRadius;` |

**Notes:**

> 查找半径

---

### Property `ShowFindChatPartnerRadiusDebug`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowFindChatPartnerRadiusDebug;` |

**Notes:**

> 显示查找Debug

---

### Property `ChatDistance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChatDistance;` |

**Notes:**

> 角色聊天时保持的距离

---

### Property `UpdateChattingInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float UpdateChattingInterval;` |

**Notes:**

> 聊天中更新间隔

---

### Property `ChatWidgetVisibleScaleCurve`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UCurveFloat>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UCurveFloat> ChatWidgetVisibleScaleCurve;` |

**Notes:**

> 聊天表情框显示距离缩放曲线

---

### Property `ChatActionID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ChatActionID;` |

**Notes:**

> 社交行为id

---

### Property `ChatType`

| Field | Details |
|------|------|
| C++ type | TMap<[EChatType](CharacterChatStruct__EChatType.md),[FChatTypeData](CharacterChatStruct__FChatTypeData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EChatType,FChatTypeData> ChatType;` |

**Notes:**

> 社交类型

---

### Property `ChatReplyProbability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChatReplyProbability;` |

**Notes:**

> 闲聊回复概率(0~1)

---

### Property `MinGoodOpinion`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinGoodOpinion=-999;` |

**Notes:**

> 好感度下限

---

### Property `MaxGoodOpinion`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxGoodOpinion=999;` |

**Notes:**

> 好感度上限

---

### Property `CeremonyBuildingAction`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName,FName> CeremonyBuildingAction;` |

**Notes:**

> 仪式建筑主要人员的goap行为

---

### Property `SpectateCeremonyBuildingAction`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName,FName> SpectateCeremonyBuildingAction;` |

**Notes:**

> 仪式建筑旁观者的goap行为(不能与CeremonyBuildingAction重复)

---

### Property `CeremonyWaitTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float CeremonyWaitTime;` |

**Notes:**

> 仪式最长等待时间(单位秒)

---

### Property `CeremonySpectateMaxNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CeremonySpectateMaxNum;` |

**Notes:**

> 参与仪式的旁观者最大数量

---

### Property `BuildingRelationshipIDs`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Ceremony" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Ceremony") TMap<FName,FName> BuildingRelationshipIDs;` |

**Notes:**

> 建筑为哪种关系举办仪式(建筑id,关系表id)

---
