# `struct` `FTestDummyConfig`

**Source header:** `EastRimWorld/SkillTest/SkillTestConfigAsset.h`

---

## Functional description (from header comments)

> 默认木桩生成配置:进入测试子关卡时按此列表自动生成靶子。

## Blueprint-exposed variables

### Property `CharacterID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="SkillTest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkillTest") FName CharacterID;` |

**Notes:**

> 木桩对应的角色配置ID(默认按人物表 GetHumanInfoByID 解析)

---

### Property `CharacterType`

| Field | Details |
|------|------|
| C++ type | [ECharacterType](../Struct/CommonEnum__ECharacterType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="SkillTest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkillTest") ECharacterType CharacterType = ECharacterType::Human;` |

**Notes:**

> 角色类型(默认人物;也可填动物等)

---

### Property `TeamID`

| Field | Details |
|------|------|
| C++ type | `uint8` |
| Reflection specifiers | BlueprintReadWrite, Category="SkillTest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkillTest") uint8 TeamID = 255;` |

**Notes:**

> 阵营ID(默认255中立;按需设成与玩家敌对的阵营,木桩才能作为攻击目标/受击对象)

---

### Property `SpawnTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite, Category="SkillTest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkillTest") FTransform SpawnTransform = FTransform::Identity;` |

**Notes:**

> 生成位置(相对子关卡原点)

---
