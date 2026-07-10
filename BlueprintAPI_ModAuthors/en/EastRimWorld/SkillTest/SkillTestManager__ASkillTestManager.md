# `class` `ASkillTestManager`

**Source header:** `EastRimWorld/SkillTest/SkillTestManager.h`

---

## Functional description (from header comments)

> 技能/武学测试沙盒管理器(放在测试子关卡里,随子关卡流式加载/卸载)。
> - BeginPlay : 读 USkillTestConfigAsset 自动生成默认木桩。
> - 蓝图接口  : 克隆主测试角色 / 按ID生成人物·动物·召唤物 / 给主角色装配指定等级武学。
> - EndPlay   : 子关卡卸载或本Actor销毁时,销毁所有由本管理器生成的临时角色,
>               保证不残留、不存档(这些角色生命周期等同子关卡)。
> 注:生成出来的临时角色都走 SetTestActor(true) → IsSaveObject() 恒 false、bRegisterWorld=false,
>    所以即便它们挂在常驻关卡上、即便中途存档,也不会被写入存档/注册到世界。

## Blueprint-exposed variables

### Property `MainTestCharacter`

| Field | Details |
|------|------|
| C++ type | TWeakObjectPtr<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="SkillTest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "SkillTest") TWeakObjectPtr<AEastRimWorldCharacter> MainTestCharacter;` |

**Notes:**

> 当前主测试角色(用源角色配置的真实类生成,以保证AIController/组件齐全;测试身份靠 bIsTestActor 标记)

---

## Blueprint-exposed functions

### Function `GetSkillTestManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="SkillTest" |
| Return type | [ASkillTestManager](SkillTestManager__ASkillTestManager.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContext` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "SkillTest") static ASkillTestManager* GetSkillTestManager(const UObject* WorldContext);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取场景里的测试管理器(供子关卡UI查找,取第一个)

---

### Function `CreateMainTestCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="SkillTest" |
| Return type | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SourceWorldCharacterGuid` | `FGuid` |
| `SpawnTransform` | `FTransform` |
| `false` | `bool bPossess =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "SkillTest") AEastRimWorldCharacter* CreateMainTestCharacter(FGuid SourceWorldCharacterGuid, FTransform SpawnTransform, bool bPossess = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 克隆一个现有世界角色(按其GUID,跨所有势力查找)生成主测试角色。
> 全新GUID(与原角色不冲突)、不存档、不注册世界。默认 bPossess=false:测试角色不由Player占有。

---

### Function `CreateMainTestCharacterFromData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="SkillTest" |
| Return type | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InMainCharacterData` | const [FCharacterSaveData](../WorldSystem/WorldCharacterData__FCharacterSaveData.md) & |
| `SpawnTransform` | `FTransform` |
| `false` | `bool bPossess =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "SkillTest") AEastRimWorldCharacter* CreateMainTestCharacterFromData(const FCharacterSaveData & InMainCharacterData, FTransform SpawnTransform, bool bPossess = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 直接按传入的存档信息生成主测试角色(不依赖世界势力注册):
> 拷贝后换全新GUID、不存档、不注册世界。默认 bPossess=false:测试角色不由Player占有,由AI控制器持有以便初始化。

---

### Function `SpawnTestCharacterByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="SkillTest" |
| Return type | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterID` | `FName` |
| `CharacterType` | [ECharacterType](../Struct/CommonEnum__ECharacterType.md) |
| `SpawnTransform` | `FTransform` |
| `255` | `uint8 TeamID =` |
| `false` | `bool bInvincible =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "SkillTest") AEastRimWorldCharacter* SpawnTestCharacterByID(FName CharacterID, ECharacterType CharacterType, FTransform SpawnTransform, uint8 TeamID = 255, bool bInvincible = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按ID生成一个临时(不存档)角色:人物/动物/召唤物通用。bInvincible=true 时无敌且停手(木桩)。

---

### Function `GiveMartialArtsToMain`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="SkillTest" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MartialArtsID` | `FName` |
| `Level` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "SkillTest") bool GiveMartialArtsToMain(FName MartialArtsID, int32 Level);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 给主测试角色装配指定武学到指定等级(内功/招式/被动)

---

### Function `SetPossessMainCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="SkillTest" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bPossessMain` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "SkillTest") void SetPossessMainCharacter(bool bPossessMain);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 在"玩家操控主角色"与"原观察Pawn"之间切换

---

### Function `DestroyAllTestActors`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="SkillTest" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "SkillTest") void DestroyAllTestActors();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 销毁所有临时角色(退出子关卡或手动清场)

---
