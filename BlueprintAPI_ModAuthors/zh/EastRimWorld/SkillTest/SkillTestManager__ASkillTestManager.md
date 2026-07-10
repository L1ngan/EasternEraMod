# `class` `ASkillTestManager`

**源码头文件:** `EastRimWorld/SkillTest/SkillTestManager.h`

---

## 功能说明（来自头文件注释）

> 技能/武学测试沙盒管理器(放在测试子关卡里,随子关卡流式加载/卸载)。
> - BeginPlay : 读 USkillTestConfigAsset 自动生成默认木桩。
> - 蓝图接口  : 克隆主测试角色 / 按ID生成人物·动物·召唤物 / 给主角色装配指定等级武学。
> - EndPlay   : 子关卡卸载或本Actor销毁时,销毁所有由本管理器生成的临时角色,
>               保证不残留、不存档(这些角色生命周期等同子关卡)。
> 注:生成出来的临时角色都走 SetTestActor(true) → IsSaveObject() 恒 false、bRegisterWorld=false,
>    所以即便它们挂在常驻关卡上、即便中途存档,也不会被写入存档/注册到世界。

## 蓝图暴露变量

### 属性 `MainTestCharacter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TWeakObjectPtr<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)> |
| 反射说明符 | BlueprintReadOnly, Category="SkillTest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "SkillTest") TWeakObjectPtr<AEastRimWorldCharacter> MainTestCharacter;` |

**说明:**

> 当前主测试角色(用源角色配置的真实类生成,以保证AIController/组件齐全;测试身份靠 bIsTestActor 标记)

---

## 蓝图暴露函数

### 函数 `GetSkillTestManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="SkillTest" |
| 返回类型 | [ASkillTestManager](SkillTestManager__ASkillTestManager.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContext` | `const UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "SkillTest") static ASkillTestManager* GetSkillTestManager(const UObject* WorldContext);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取场景里的测试管理器(供子关卡UI查找,取第一个)

---

### 函数 `CreateMainTestCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="SkillTest" |
| 返回类型 | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SourceWorldCharacterGuid` | `FGuid` |
| `SpawnTransform` | `FTransform` |
| `false` | `bool bPossess =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "SkillTest") AEastRimWorldCharacter* CreateMainTestCharacter(FGuid SourceWorldCharacterGuid, FTransform SpawnTransform, bool bPossess = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 克隆一个现有世界角色(按其GUID,跨所有势力查找)生成主测试角色。
> 全新GUID(与原角色不冲突)、不存档、不注册世界。默认 bPossess=false:测试角色不由Player占有。

---

### 函数 `CreateMainTestCharacterFromData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="SkillTest" |
| 返回类型 | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InMainCharacterData` | const [FCharacterSaveData](../WorldSystem/WorldCharacterData__FCharacterSaveData.md) & |
| `SpawnTransform` | `FTransform` |
| `false` | `bool bPossess =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "SkillTest") AEastRimWorldCharacter* CreateMainTestCharacterFromData(const FCharacterSaveData & InMainCharacterData, FTransform SpawnTransform, bool bPossess = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 直接按传入的存档信息生成主测试角色(不依赖世界势力注册):
> 拷贝后换全新GUID、不存档、不注册世界。默认 bPossess=false:测试角色不由Player占有,由AI控制器持有以便初始化。

---

### 函数 `SpawnTestCharacterByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="SkillTest" |
| 返回类型 | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterID` | `FName` |
| `CharacterType` | [ECharacterType](../Struct/CommonEnum__ECharacterType.md) |
| `SpawnTransform` | `FTransform` |
| `255` | `uint8 TeamID =` |
| `false` | `bool bInvincible =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "SkillTest") AEastRimWorldCharacter* SpawnTestCharacterByID(FName CharacterID, ECharacterType CharacterType, FTransform SpawnTransform, uint8 TeamID = 255, bool bInvincible = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按ID生成一个临时(不存档)角色:人物/动物/召唤物通用。bInvincible=true 时无敌且停手(木桩)。

---

### 函数 `GiveMartialArtsToMain`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="SkillTest" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MartialArtsID` | `FName` |
| `Level` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "SkillTest") bool GiveMartialArtsToMain(FName MartialArtsID, int32 Level);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 给主测试角色装配指定武学到指定等级(内功/招式/被动)

---

### 函数 `SetPossessMainCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="SkillTest" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bPossessMain` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "SkillTest") void SetPossessMainCharacter(bool bPossessMain);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 在"玩家操控主角色"与"原观察Pawn"之间切换

---

### 函数 `DestroyAllTestActors`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="SkillTest" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "SkillTest") void DestroyAllTestActors();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 销毁所有临时角色(退出子关卡或手动清场)

---
