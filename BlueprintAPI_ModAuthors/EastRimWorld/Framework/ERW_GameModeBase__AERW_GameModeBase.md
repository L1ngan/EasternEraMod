# `class` `AERW_GameModeBase`

**源码头文件：** `EastRimWorld/Framework/ERW_GameModeBase.h`

---

## 功能说明（来自头文件注释）

> GameMode基类

## 蓝图暴露变量

### 属性 `GameConfigComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UERW_GameConfigComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="Configs" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Configs", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UERW_GameConfigComponent> GameConfigComponent;` |

---

### 属性 `RoleMng`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<ULGameRoleMng>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) TObjectPtr<ULGameRoleMng> RoleMng;` |

---

### 属性 `AllActorMng`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<ULGameActorMng>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) TObjectPtr<ULGameActorMng> AllActorMng;` |

---

### 属性 `OnPlayerTeamCharacterDead`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnPlayerTeamCharacterDead` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnPlayerTeamCharacterDead OnPlayerTeamCharacterDead;` |

**源码注释：**

> 当玩家阵营角色死亡时

---

### 属性 `GoalBaseInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , FGoalBaseInfo>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TMap<FName , FGoalBaseInfo> GoalBaseInfos;` |

**源码注释：**

> GOAP目标的信息

---

### 属性 `BIsShowCharacTips`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool BIsShowCharacTips = true;` |

**源码注释：**

> 是否显示角色的经验值变化提示

---

### 属性 `BIsShowTemperatureRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool BIsShowTemperatureRange = true;` |

**源码注释：**

> 是否显示温度范围

---

### 属性 `BIsShowpowerRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool BIsShowpowerRange = true;` |

**源码注释：**

> 是否显示星能范围

---

### 属性 `BIsShowAttackRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool BIsShowAttackRange = true;` |

**源码注释：**

> 是否显示攻击范围

---

## 蓝图暴露函数

### 函数 `SpawnSceneManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SpawnSceneManager();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 生成SceneManager

---

### 函数 `GemeModeLoadSuccess`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GemeModeLoadSuccess();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 生成SceneManager

---

### 函数 `GetSceneManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `AERW_SceneManager*` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) AERW_SceneManager* GetSceneManager() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 获得SceneManager

---

### 函数 `AttributeChangeNeedTips`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FCharacterAttributeInfo &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayAttribute` | `const FGameplayAttribute &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FCharacterAttributeInfo & AttributeChangeNeedTips(const FGameplayAttribute & GameplayAttribute);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 属性变化是否需要提示

---

### 函数 `AddGoalBaseScore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalID` | `const FName&` |
| `Score` | `float` |
| `WorkSchedule` | `const FName&` |
| `GoalCategory` | `EGOAPGoalCategory` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddGoalBaseScore(const FName& GoalID , float Score , const FName& WorkSchedule , EGOAPGoalCategory GoalCategory) { GoalBaseInfos.Add(GoalID , FGoalBaseInfo(Score , WorkSchedule , GoalCategory)); }`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 记录GOAP目标基础分值

---

### 函数 `GetCharacterActionAbilityByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCharacterActionAbility &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterActionAbilityID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCharacterActionAbility & GetCharacterActionAbilityByID(const FName & CharacterActionAbilityID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID（行命名）获取角色的具体动作能力

---

### 函数 `GetGameplayAbilityByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FGameAbilityStruct &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilityID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FGameAbilityStruct & GetGameplayAbilityByID(const FName & AbilityID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID（行命名）获取能力配置

---

### 函数 `GetBuffTagInfoByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FBuffTagInfo &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuffTag` | `const FGameplayTag &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FBuffTagInfo & GetBuffTagInfoByTag(const FGameplayTag & BuffTag) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过Tag获取buff图标

---

### 函数 `GetGameplayAbilityByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FGameAbilityStruct &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayTagContainer` | `const FGameplayTagContainer &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FGameAbilityStruct & GetGameplayAbilityByTag(const FGameplayTagContainer & GameplayTagContainer) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过标签（行命名）获取能力配置

---

### 函数 `GetProjectileByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FProjectileStruct &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ProjectileID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FProjectileStruct & GetProjectileByID(const FName & ProjectileID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID（行命名）获取投射物配置

---

### 函数 `GetGamePlayConfigurationAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UGamePlayConfigurationAsset *` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UGamePlayConfigurationAsset * GetGamePlayConfigurationAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取游戏的通用配置

---

### 函数 `GetSceneTextInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FSceneTextInfo &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SceneTextType` | `const ESceneTextType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FSceneTextInfo & GetSceneTextInfo(const ESceneTextType SceneTextType) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过类型获取场景文字配置

---

### 函数 `GetModuleUIInfoByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FModuleUIConfig` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FModuleUIConfig GetModuleUIInfoByID(const FName & ID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID（行命名）获取模块UI配置

---

### 函数 `GetGridCollectDataBySurfaceType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FGridCollectData &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSurfaceType` | `const EPhysicalSurface` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FGridCollectData & GetGridCollectDataBySurfaceType(const EPhysicalSurface InSurfaceType) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过物理材质SurfaceType获取地格属性

---

### 函数 `（见源码签名）`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `（复杂返回类型）` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `FInstancedStruct GetInventoryGeneralDataByMeshName(const FName & MeshName)const;` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FInstancedStruct GetInventoryGeneralDataByMeshName(const FName & MeshName)const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过模型名字获取采集物或者物品

---

### 函数 `GetCollectItemDataByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCollectItem &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCollectItem & GetCollectItemDataByID(const FName & ID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID获取采集物表

---

### 函数 `GetInventoryItemByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FInventoryItem &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FInventoryItem & GetInventoryItemByID(const FName & ID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID获取对应的物品配置

---

### 函数 `GetTreasureItemIDs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FName> GetTreasureItemIDs();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有珍宝阁商品ID

---

### 函数 `GetTreasureItemByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FTreasureItem &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FTreasureItem & GetTreasureItemByID(const FName & ID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID获取对应的商品配置

---

### 函数 `GetWeaponInfoByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCharacterWeapon &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWeaponID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCharacterWeapon & GetWeaponInfoByID(const FName & InWeaponID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID获取对应的武器配置

---

### 函数 `GetToolInfoByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCharacterTool &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InToolID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCharacterTool & GetToolInfoByID(const FName & InToolID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID获取工具配置

---

### 函数 `GetBuildingDataByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FBuildingData &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBuildingID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FBuildingData & GetBuildingDataByID(const FName & InBuildingID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID获取建筑配置

---

### 函数 `GetEquipmentAttributeByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FEquipmentAttribute &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InAttributeID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FEquipmentAttribute & GetEquipmentAttributeByID(const FName & InAttributeID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID获取装备词条属性

---

### 函数 `GetCharacterEquipmentByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCharacterApparel &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InEquipmentID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCharacterApparel & GetCharacterEquipmentByID(const FName & InEquipmentID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID获取装备属性

---

### 函数 `GetCommonUIInfoByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCommonUIConfig &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCommonUIConfig & GetCommonUIInfoByID(const FName & ID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID（行命名）获取UI配置

---

### 函数 `GetCommonButtonByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCommonButton &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCommonButton & GetCommonButtonByID(const FName & ID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID（行命名）获取按钮配置

---

### 函数 `GetInventoryGeneralDataByItemID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FInstancedStruct` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InItemID` | `const FName &` |
| `GroundInventoryType` | `EGroundInventoryType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FInstancedStruct GetInventoryGeneralDataByItemID(const FName & InItemID,EGroundInventoryType GroundInventoryType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过id 物品类型查询配置

---

### 函数 `GetForceDataByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FForceData&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FForceData& GetForceDataByID(const FName & ID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID（行命名）获取势力数据

---

### 函数 `GetAllForceData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutData` | `TArray<FForceData>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllForceData(TArray<FForceData>& OutData) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有势力数据

---

### 函数 `GetPassGameConditionByForceID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FPassGameConditionDescribe>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FPassGameConditionDescribe> GetPassGameConditionByForceID(const FName & ID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID（行命名）获取势力通关条件数据

---

### 函数 `GetCharacterAttributeInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCharacterAttributeInfo &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InAttribute` | `FGameplayAttribute` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCharacterAttributeInfo & GetCharacterAttributeInfo(FGameplayAttribute InAttribute);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过属性集来获取详细的属性信息

---

### 函数 `GetCharacterAttributeInfoByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCharacterAttributeInfo &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCharacterAttributeInfo & GetCharacterAttributeInfoByID(const FName& ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过属性ID来获取详细的属性信息

---

### 函数 `GetAllCharacterAttributeInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FCharacterAttributeInfo>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `true` | `bool isShowUI =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FCharacterAttributeInfo> GetAllCharacterAttributeInfo(bool isShowUI = true) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有属性信息

---

### 函数 `GetCharacterAttributeInfoByName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCharacterAttributeInfo &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InAttributeName` | `FString` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCharacterAttributeInfo & GetCharacterAttributeInfoByName(FString InAttributeName);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过属性镜子来获取详细的属性信息

---

### 函数 `GetEquipmentQualityRange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FEquipmentQualityRange &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FEquipmentQualityRange & GetEquipmentQualityRange(const FName & ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID获取装备的品质区间配置

---

### 函数 `GetFabricateEquipmentData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FFabricateEquipmentData &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FFabricateEquipmentData & GetFabricateEquipmentData(const FName & ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过id获取制造的装备池子

---

### 函数 `GetGenerateEquipmentData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FGenerateEquipmentData &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FGenerateEquipmentData & GetGenerateEquipmentData(const FName & ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID获取装备生成信息

---

### 函数 `GetFormulaDataByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FFormulaData &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `const FName &ID` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FFormulaData & GetFormulaDataByID(const FName &ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID获取制造配方

---

### 函数 `GetItemClassifyInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FItemClassify &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGameplayTag` | `const FGameplayTag &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FItemClassify & GetItemClassifyInfo(const FGameplayTag & InGameplayTag);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过标签获取标签的信息

---

### 函数 `GetAllItemClassifyInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutItemClassifyArray` | `UPARAM(ref) TArray<FItemClassify>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllItemClassifyInfo(UPARAM(ref) TArray<FItemClassify>& OutItemClassifyArray);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有物品分类分类信息

---

### 函数 `GetGOAPActionData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FGOAP_Action_Data&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InActionID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FGOAP_Action_Data& GetGOAPActionData(const FName & InActionID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取goap动作信息

---

### 函数 `GetGOAPActionDataArr`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FGOAP_Action_Data>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGoalID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FGOAP_Action_Data> GetGOAPActionDataArr(const FName& InGoalID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询符合目标的所有行动数据

---

### 函数 `GetGOAPGoalBaseScore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) float GetGOAPGoalBaseScore(FName GoalID);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `GetCommonButtonByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCommonButton &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CommonButtonType` | `ECommonButtonType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCommonButton & GetCommonButtonByType(ECommonButtonType CommonButtonType) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过按钮类型获取按钮配置

---

### 函数 `GetCharacterInfoByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FInstancedStruct` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterID` | `FName` |
| `InCharacterType` | `ECharacterType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FInstancedStruct GetCharacterInfoByID(FName InCharacterID,ECharacterType InCharacterType) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过角色id和角色类型获取角色信息

---

### 函数 `GetHumanInfoByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FEastRimWorldHumanData &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InHumanID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FEastRimWorldHumanData & GetHumanInfoByID(FName InHumanID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通人类id获取人类信息

---

### 函数 `GetAllHumanId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FName> GetAllHumanId();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有人类id

---

### 函数 `GetSummonsInfoByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FEastRimWorldSummonsData &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSummonsID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FEastRimWorldSummonsData & GetSummonsInfoByID(FName InSummonsID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通召唤物id获取召唤物信息

---

### 函数 `GetAnimalInfoByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FEastRimWorldAnimalData &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InAnimalID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FEastRimWorldAnimalData & GetAnimalInfoByID(FName InAnimalID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通动物id获取动物信息

---

### 函数 `GetTechCategoryUIConfigByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FTechCategoryUIConfigStruct&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TechCategoryID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FTechCategoryUIConfigStruct& GetTechCategoryUIConfigByID(const FName& TechCategoryID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID科技分类配置

---

### 函数 `GetTechnologyConfigByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FTechnologyConfigStruct&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TechItemID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FTechnologyConfigStruct& GetTechnologyConfigByID(const FName& TechItemID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID获取科技配置

---

### 函数 `GetTechPointConverConfigByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FTechPointConverConfigStruct&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TechPointConverID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FTechPointConverConfigStruct& GetTechPointConverConfigByID(const FName& TechPointConverID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID获取科技点转换配置

---

### 函数 `GetTechPointConvertConfigByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TechPointType` | `ETechPointType` |
| `Config` | `FTechPointConverConfigStruct&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool GetTechPointConvertConfigByType(ETechPointType TechPointType , FTechPointConverConfigStruct& Config) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 通过科技点类型获得科技点转换配置

---

### 函数 `GetTechPointConvertConfigByBuildID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildID` | `const FName&` |
| `Config` | `FTechPointConverConfigStruct&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool GetTechPointConvertConfigByBuildID(const FName& BuildID , FTechPointConverConfigStruct& Config) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 通过建筑ID获得科技点转换配置

---

### 函数 `GetTechUnlockItemConigByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FTechUnlockItemConigStruct&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TechUnlockItemConigID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FTechUnlockItemConigStruct& GetTechUnlockItemConigByID(const FName& TechUnlockItemConigID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID获取科技解锁物品配置

---

### 函数 `GetTechUnlockItemConigByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FTechUnlockItemConigStruct>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `UnlockType` | `ETechUnlockItemType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FTechUnlockItemConigStruct> GetTechUnlockItemConigByType(ETechUnlockItemType UnlockType) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询某种类型的解锁包

---

### 函数 `GetAllTechnologyConfigs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FTechnologyConfigStruct>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FTechnologyConfigStruct> GetAllTechnologyConfigs() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有科技分类配置

---

### 函数 `GetAllTechCategoryUIConfigs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FTechCategoryUIConfigStruct>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FTechCategoryUIConfigStruct> GetAllTechCategoryUIConfigs() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有科技解锁物品配置

---

### 函数 `GetWorkAttributeLevelConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FWorkAttributeLevelConfig &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayAttribute` | `FGameplayAttribute` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FWorkAttributeLevelConfig & GetWorkAttributeLevelConfig(FGameplayAttribute GameplayAttribute) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取属性值的等级配置

---

### 函数 `GetNewGameConfigurationAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UNewGameConfigAsset *` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UNewGameConfigAsset * GetNewGameConfigurationAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取新游戏的配置

---

### 函数 `GetAllStoryBackgroundData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FStoryBackgroundQuestionData>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FStoryBackgroundQuestionData> GetAllStoryBackgroundData() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有背景故事

---

### 函数 `GetStoryBackAnswerById`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FStoryBackgroundAnswerData&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Id` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FStoryBackgroundAnswerData& GetStoryBackAnswerById(FName Id) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过id获取背景故事选项

---

### 函数 `GetStoryBackAnswersByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Type` | `FName` |
| `OutAnswer` | `UPARAM(ref) TArray<FStoryBackgroundAnswerData>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetStoryBackAnswersByType(FName Type,UPARAM(ref) TArray<FStoryBackgroundAnswerData>& OutAnswer);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过type获取背景故事选项

---

### 函数 `GetCharacterOrganConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCharacterOrganConfig &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayAttribute` | `FGameplayAttribute` |
| `TargetSpecies` | `ESpeciesType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCharacterOrganConfig & GetCharacterOrganConfig(FGameplayAttribute GameplayAttribute , ESpeciesType TargetSpecies) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取角色器官信息

---

### 函数 `GetAllCharacterOrganConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FCharacterOrganConfig>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetSpecies` | `ESpeciesType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FCharacterOrganConfig> GetAllCharacterOrganConfig(ESpeciesType TargetSpecies) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有角色器官配置

---

### 函数 `GetCharacterOrganConfigById`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCharacterOrganConfig&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GAId` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCharacterOrganConfig& GetCharacterOrganConfigById(FName GAId) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 读取角色器官配置表

---

### 函数 `GetCharacterOrganConfigByOrganType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCharacterOrganConfig&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OType` | `EBodyOrganType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCharacterOrganConfig& GetCharacterOrganConfigByOrganType(EBodyOrganType OType) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过器官类型获取角色器官配置

---

### 函数 `GetCharacterOrganStatus`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FOrganStatus` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayAttribute` | `FGameplayAttribute` |
| `InCurrentValue` | `float` |
| `InMaxValue` | `float` |
| `Species` | `ESpeciesType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FOrganStatus GetCharacterOrganStatus(FGameplayAttribute GameplayAttribute,float InCurrentValue,float InMaxValue , ESpeciesType Species) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取角色器官当前状态

---

### 函数 `GetCharacterOrganStatusByOrganId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FOrganStatus` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OrganId` | `FName` |
| `InCurrentValue` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FOrganStatus GetCharacterOrganStatusByOrganId(FName OrganId, float InCurrentValue) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取角色器官当前状态按ID

---

### 函数 `GetCharacterOrganUIConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FCharacterOrganUIConfig>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FCharacterOrganUIConfig> GetCharacterOrganUIConfig() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有角色器官UI配置

---

### 函数 `GetCharacterMainSkillUIConfigs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FCharacterMainSkillUIConfig>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FCharacterMainSkillUIConfig> GetCharacterMainSkillUIConfigs() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取角色主技能UI配置

---

### 函数 `GetCharacterMainSkillUIConfigByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `ConfigData` | `FCharacterMainSkillUIConfig&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetCharacterMainSkillUIConfigByID(const FName& ID , FCharacterMainSkillUIConfig& ConfigData) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过行名获取角色主技能UI配置

---

### 函数 `GetCharacterAttributeUpgradeConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FCharacterAttributeUpgradeConfig &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InLevel` | `int` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FCharacterAttributeUpgradeConfig & GetCharacterAttributeUpgradeConfig(int InLevel);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取角色属性等级升级配置

---

### 函数 `GetAnimalActionAbilityByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FAnimalActionAbility&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ActionAbilityID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FAnimalActionAbility& GetAnimalActionAbilityByID(const FName& ActionAbilityID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取动物的具体动作能力

---

### 函数 `GetAnimalCultivationConfigByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FAnimalCultivationConfig&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CultivationConfigID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FAnimalCultivationConfig& GetAnimalCultivationConfigByID(const FName& CultivationConfigID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID获取动物修炼配置

---

### 函数 `GetMartialArtsBookData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FMartialArtsBookData &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InMartialArtsID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FMartialArtsBookData & GetMartialArtsBookData(const FName & InMartialArtsID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取武学书籍信息

---

### 函数 `GetAllRealmData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FRealmData>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FRealmData> GetAllRealmData();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有的境界信息

---

### 函数 `GetRealmDataByLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FRealmData &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InLevel` | `int` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FRealmData & GetRealmDataByLevel(int InLevel) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取境界等级信息

---

### 函数 `GetMartialArtsEntries`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FMartialArtsEntries &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InEntriesID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FMartialArtsEntries & GetMartialArtsEntries(const FName & InEntriesID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取武学词条信息

---

### 函数 `GetSkillEntryConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FSkillEntryConfig &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EntryID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FSkillEntryConfig & GetSkillEntryConfig(const FName & EntryID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取技能词条配置（DT SkillEntryConfig）

---

### 函数 `GetAllCharacterNameConfigByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FText>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Type` | `const ECharacterNameType&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FText> GetAllCharacterNameConfigByType(const ECharacterNameType& Type);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有角色名字

---

### 函数 `GetAllCharacterFirstNameConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FText>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FText> GetAllCharacterFirstNameConfig();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有角色姓氏

---

### 函数 `GetCharacteristicInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCharacteristicInfo &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacteristicID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCharacteristicInfo & GetCharacteristicInfo(const FName & InCharacteristicID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取特性信息

---

### 函数 `GetAllCharacteristicInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacteristicInfos` | `TArray<FCharacteristicInfo>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllCharacteristicInfo(TArray<FCharacteristicInfo>& CharacteristicInfos);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有特性信息

---

### 函数 `GetAllCharacteristicInfoQualityMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacteristicInfos` | `TMap<EItemQuality,FCharacteristicInfoArray>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllCharacteristicInfoQualityMap(TMap<EItemQuality,FCharacteristicInfoArray>& CharacteristicInfos);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetCommonBuff`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCommonBuff &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBuffID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCommonBuff & GetCommonBuff(const FName & InBuffID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取buff信息

---

### 函数 `GetBreakdownValueData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `Data` | `FBreakdownValueConfigData&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GetBreakdownValueData(const FName& ID , FBreakdownValueConfigData& Data);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获得崩溃值配置数据

---

### 函数 `GetBreakdownValueDataByCurrentMood`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CurrentMood` | `float` |
| `BreakdownThresholdChangeValue` | `float` |
| `Data` | `FBreakdownValueConfigData&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GetBreakdownValueDataByCurrentMood(float CurrentMood, float BreakdownThresholdChangeValue, FBreakdownValueConfigData& Data);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过当前心情值获得崩溃值配置数据

---

### 函数 `GetAllWorkPriorityUIConfigData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConfigDatas` | `TArray<FWorkPriorityUIConfigData>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllWorkPriorityUIConfigData(TArray<FWorkPriorityUIConfigData>& ConfigDatas);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获得工作优先级UI配置所有行数据

---

### 函数 `GetAllBuildConfigData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Datas` | `TArray<FBuildConfigData>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllBuildConfigData(TArray<FBuildConfigData>& Datas);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获得所有建筑配置行数据

---

### 函数 `GetBuildConfigData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `Data` | `FBuildConfigData&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GetBuildConfigData(const FName& ID , FBuildConfigData& Data);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获得建筑配置数据

---

### 函数 `GetAllBuildConfigDataByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Datas` | `TArray<FBuildConfigData>&` |
| `GOAPActionType` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllBuildConfigDataByType(TArray<FBuildConfigData>& Datas,FName GOAPActionType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询所有建筑配置数据，有对应的GOAPAction

---

### 函数 `GetAllBuildConfigDataByBuildingType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Datas` | `TArray<FBuildConfigData>&` |
| `BType` | `EBuildingType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllBuildConfigDataByBuildingType(TArray<FBuildConfigData>& Datas,EBuildingType BType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询所有建筑配置数据，有对应的建筑类型

---

### 函数 `GetAllBuildConfigDataByEnvironType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Datas` | `TArray<FBuildConfigData>&` |
| `EType` | `EEnvironType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllBuildConfigDataByEnvironType(TArray<FBuildConfigData>& Datas,EEnvironType EType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询所有建筑配置数据，有对应的环境类型

---

### 函数 `GetBuildTabByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `FName` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) FName GetBuildTabByID(const FName& ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 获取建筑物的二级分类

---

### 函数 `GetAllMartialArtsBookCateConfigs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FMartialArtsBookCategoryData>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FMartialArtsBookCategoryData> GetAllMartialArtsBookCateConfigs() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有武学分类配置

---

### 函数 `GetMartialArtsBookCateConfigByMABID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FMartialArtsBookCategoryData>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MartialArtsBookID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FMartialArtsBookCategoryData> GetMartialArtsBookCateConfigByMABID(const FName& MartialArtsBookID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据数据名称，获取武学分类配置

---

### 函数 `GetWorldPlaceInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FWorldPlaceInfo &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlaceID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FWorldPlaceInfo & GetWorldPlaceInfo(const FName & WorldPlaceID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetWorldForceInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FWorldForceInfo &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldForceID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FWorldForceInfo & GetWorldForceInfo(const FName & WorldForceID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetWorldAreaInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FWorldAreaInfo` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldAreaID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FWorldAreaInfo GetWorldAreaInfo(const FName & WorldAreaID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetWorldForceConfigurationAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `class UWorldForceConfigurationAsset*` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) class UWorldForceConfigurationAsset* GetWorldForceConfigurationAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetPlayerDiplomacyConfigAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `class UPlayerDiplomacyConfigAsset*` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) class UPlayerDiplomacyConfigAsset* GetPlayerDiplomacyConfigAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetWorldForceAimInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FForceAimInfo&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldForceAimID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FForceAimInfo& GetWorldForceAimInfo(const FName & WorldForceAimID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetWorldPlaceWeatherInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FWorldPlaceWeatherInfo &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Weather` | `EERWWeather` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FWorldPlaceWeatherInfo & GetWorldPlaceWeatherInfo(EERWWeather Weather);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取天气信息

---

### 函数 `GetWorldPlaceWeatherInfoById`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FWorldPlaceWeatherInfo&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WeatherID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FWorldPlaceWeatherInfo& GetWorldPlaceWeatherInfoById(FName WeatherID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过天气ID获取天气信息

---

### 函数 `GetInjuryBuffById`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FInjuryEffectConfig &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InInjuryID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FInjuryEffectConfig & GetInjuryBuffById(const FName& InInjuryID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取伤势配置

---

### 函数 `GetWorldConfigurationAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UWorldGameConfigurationAsset *` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UWorldGameConfigurationAsset * GetWorldConfigurationAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取世界的配置资产

---

### 函数 `GetInjuryScar`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FInjuryEffectConfig&` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FInjuryEffectConfig& GetInjuryScar();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取疤痕配置信息

---

### 函数 `GetWorldMoveInfoPreset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FWorldMoveInfoPreset &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldMapMoveType` | `EWorldMapMoveType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FWorldMoveInfoPreset & GetWorldMoveInfoPreset(EWorldMapMoveType WorldMapMoveType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取世界地图移动预设

---

### 函数 `GetForceFavorabilityConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FForceFavorabilityConfig &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FavorabilityType` | `const EForceFavorabilityType&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FForceFavorabilityConfig & GetForceFavorabilityConfig(const EForceFavorabilityType& FavorabilityType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetWorldEventConfigurationAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UWorldEventData *` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UWorldEventData * GetWorldEventConfigurationAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取世界事件的配置资产

---

### 函数 `GetTipsInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FCommonTips` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TipsType` | `const ETipsType&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FCommonTips GetTipsInfo(const ETipsType& TipsType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通用提示

---

### 函数 `GetWorldTaskInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCommonTaskInfo &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCommonTaskInfo & GetWorldTaskInfo(const FName & TaskID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取任务信息

---

### 函数 `GetBeginnerGuideDialogue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DialogueID` | `const FName&` |
| `Dialogue` | `FBeginnerGuideDialogue&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GetBeginnerGuideDialogue(const FName& DialogueID , FBeginnerGuideDialogue& Dialogue);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获得新手引导对话

---

### 函数 `GetBeginnerGuidePopupData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `PopupData` | `FBeginnerGuidePopup&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GetBeginnerGuidePopupData(const FName& ID , FBeginnerGuidePopup& PopupData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获得新手引导弹窗数据

---

### 函数 `GetBeginnerGuideTipsData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `TipsData` | `FBeginnerGuideTips&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GetBeginnerGuideTipsData(const FName& ID , FBeginnerGuideTips& TipsData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获得新手引导Tips数据

---

### 函数 `GetConditionInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCommonTaskCondition &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConditionID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCommonTaskCondition & GetConditionInfo(const FName & ConditionID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取任务信息

---

### 函数 `GetCommonDialogueGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FDialogueGroup &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `const FName &GroupID` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FDialogueGroup & GetCommonDialogueGroup(const FName &GroupID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取对话信息

---

### 函数 `GetCommonDialogueInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FDialogueInfo &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DialogueID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FDialogueInfo & GetCommonDialogueInfo(const FName & DialogueID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetCommonDialogueOption`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FDialogueOption&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OptionID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FDialogueOption& GetCommonDialogueOption(const FName & OptionID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetDialogueOptionsByNPCId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NPCId` | `const FName &` |
| `OutOptions` | `TArray<FDialogueOption>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetDialogueOptionsByNPCId(const FName & NPCId,TArray<FDialogueOption>& OutOptions);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetFarmlandConfigAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UFarmlandConfigAsset *` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UFarmlandConfigAsset * GetFarmlandConfigAsset() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取田地的配置

---

### 函数 `GetPlantTypeTabInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FPlantTypeTabInfo&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Type` | `const ECollectPlantType &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FPlantTypeTabInfo& GetPlantTypeTabInfo(const ECollectPlantType & Type);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取种植物分类数据

---

### 函数 `GetForceLevelInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FForceLevelInfo &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InForceLevel` | `const int32 &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FForceLevelInfo & GetForceLevelInfo(const int32 & InForceLevel);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取势力等级信息

---

### 函数 `GetForceLevelInfoByUnlockItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FForceLevelInfo &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `UnlockItemId` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FForceLevelInfo & GetForceLevelInfoByUnlockItem(const FName & UnlockItemId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询解锁包id对应的势力等级信息

---

### 函数 `GetAllForceLevelInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const TArray<FForceLevelInfo>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const TArray<FForceLevelInfo> GetAllForceLevelInfo();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询所有势力等级信息

---

### 函数 `GetMaxForceLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const int32` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const int32 GetMaxForceLevel();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取配置的最大势力等级

---

### 函数 `GetAllForcePurpose`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const TArray<FForcePurpose>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const TArray<FForcePurpose> GetAllForcePurpose();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有的门派宗旨

---

### 函数 `GetForcePurposeByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FForcePurpose` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ForcePurposeID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FForcePurpose GetForcePurposeByID(const FName & ForcePurposeID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据ID获取门派宗旨配置

---

### 函数 `GetPlaceLevelInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FPlaceLevelInfo &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InPlaceLevel` | `const int32 &` |
| `WorldPlaceType` | `EWorldPlaceType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FPlaceLevelInfo & GetPlaceLevelInfo(const int32 & InPlaceLevel,EWorldPlaceType WorldPlaceType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据等级和类型获取城市等级信息

---

### 函数 `GetPlaceAllLevelInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const TArray<FPlaceLevelInfo>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlaceType` | `EWorldPlaceType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const TArray<FPlaceLevelInfo> GetPlaceAllLevelInfo(EWorldPlaceType WorldPlaceType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据类型获取城市各等级信息

---

### 函数 `GetWeathersInfoBySeason`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FSeasonWeathersInfo>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SType` | `EERWSeason` |
| `LevelName` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FSeasonWeathersInfo> GetWeathersInfoBySeason(EERWSeason SType,FName LevelName) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 按季节返回天气配置信息

---

### 函数 `GetGOAPActionIcon`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FGOAP_ActionIcon &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BehaviorState` | `const ECharacterBehaviorState &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FGOAP_ActionIcon & GetGOAPActionIcon(const ECharacterBehaviorState & BehaviorState) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取行为对应配置信息（图标）

---

### 函数 `GetGameplayTeamInfoByTeamID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamId` | `const FGenericTeamId` |
| `GameplayTeamInfo` | `FGameplayTeamInfo&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetGameplayTeamInfoByTeamID(const FGenericTeamId TeamId , FGameplayTeamInfo& GameplayTeamInfo) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过阵营ID获取阵营信息

---

### 函数 `GetNewGameResourcePackages`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutData` | `TArray<FResourcePackage>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetNewGameResourcePackages(TArray<FResourcePackage>& OutData) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 创建游戏时，可以选择的初始资源包列表

---

### 函数 `GetSoundChangeEventConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FSoundChangeEventConfig &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EventID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FSoundChangeEventConfig & GetSoundChangeEventConfig(const FName & EventID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetAllStoryBackgroundStorys`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Datas` | `TArray<FStoryBackgroundData>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllStoryBackgroundStorys(TArray<FStoryBackgroundData>& Datas);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 返回全部新游戏剧本

---

### 函数 `GetMonsterGenerationConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FMonsterGenerationConfig &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MonsterGenerationID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FMonsterGenerationConfig & GetMonsterGenerationConfig(const FName & MonsterGenerationID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取怪物生成配置

---

### 函数 `GetEnemyAttackGenerationConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FEnemyAttackGenerationConfig &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConfigID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FEnemyAttackGenerationConfig & GetEnemyAttackGenerationConfig(const FName & ConfigID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 敌对势力袭击配置

---

### 函数 `GetAllAchievementUIConfigs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Datas` | `TArray<FAchievementUIConfigData>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllAchievementUIConfigs(TArray<FAchievementUIConfigData>& Datas);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 返回所有成就配置

---

### 函数 `GetRoomConfigDataByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FRoomConfigData&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RoomID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FRoomConfigData& GetRoomConfigDataByID(const FName& RoomID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据id获取房间配置

---

### 函数 `GetRoomConfigDataByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FRoomConfigData&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RoomType` | `const ERoomType&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FRoomConfigData& GetRoomConfigDataByType(const ERoomType& RoomType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据RoomType获取房间配置

---

### 函数 `GetAllRoomConfigData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutRoomData` | `TArray<FRoomConfigData>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllRoomConfigData(TArray<FRoomConfigData>& OutRoomData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有房间配置

---

### 函数 `GetSeasonMaterialInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FSeasonMaterialInfo&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SeasonID` | `const EERWSeason&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FSeasonMaterialInfo& GetSeasonMaterialInfo(const EERWSeason& SeasonID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询季节参数变化配置

---

### 函数 `GetRoomConfigAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `URoomConfigAsset*` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) URoomConfigAsset* GetRoomConfigAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetBuildCombinationById`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FBuildCombination&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FBuildCombination& GetBuildCombinationById(const FName& ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过id获取组合建筑配置

---

### 函数 `GetAllBuildCombinations`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutAllCombinations` | `TArray<FBuildCombination>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllBuildCombinations(TArray<FBuildCombination>& OutAllCombinations);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有组合建筑配置

---

### 函数 `GetCharacterChatConfigAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `class UCharacterChatConfigAsset *` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) class UCharacterChatConfigAsset * GetCharacterChatConfigAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取聊天配置

---

### 函数 `GetSocialRelationshipConfigByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FSocialRelationshipConfig&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `const FName &ID` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FSocialRelationshipConfig& GetSocialRelationshipConfigByID(const FName &ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID获取社交关系配置

---

### 函数 `GetAllSocialRelationshipConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutSocialRelationshipConfigs` | `TArray<FSocialRelationshipConfig>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllSocialRelationshipConfig(TArray<FSocialRelationshipConfig>& OutSocialRelationshipConfigs);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过type获取社交关系配置
> UFUNCTION(BlueprintCallable)
> const FSocialRelationshipConfig& GetSocialRelationshipConfigByType(const ESocialRelationshipType& RelationshipType);
> 获取所有社交关系配置

---

### 函数 `GetHobbyConfigByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FHobbyConfig&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InHobbyConfigID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FHobbyConfig& GetHobbyConfigByID(FName InHobbyConfigID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询爱好配置

---

### 函数 `GetBattleRuleset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FBattleRuleset` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleType` | `EBattleType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FBattleRuleset GetBattleRuleset(EBattleType BattleType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取战斗规则

---

### 函数 `GetCharacterPresetData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FCharacterSaveData` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InPresetID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FCharacterSaveData GetCharacterPresetData(FName InPresetID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过预设id 获取预设信息

---

### 函数 `GetNPCForceConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FWorldNPCForceConfig` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InNPCForceConfigID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FWorldNPCForceConfig GetNPCForceConfig(FName InNPCForceConfigID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过NCP配置ID 获取配置

---

### 函数 `GetStratagemAbilityInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FStratagemAbility` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InAbilityID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FStratagemAbility GetStratagemAbilityInfo(FName InAbilityID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取战略技能信息

---

### 函数 `GetAllStratagemAbilityInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutSaData` | `TArray<FStratagemAbility>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) void GetAllStratagemAbilityInfo(TArray<FStratagemAbility>& OutSaData);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取全部战略技能信息

---

### 函数 `GetAutoUseCharacterRule`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FAutoUseCharacterRule` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AutoUseCharacterType` | `EAutoUseCharacterType` |
| `BattleType` | `EBattleType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FAutoUseCharacterRule GetAutoUseCharacterRule(EAutoUseCharacterType AutoUseCharacterType,EBattleType BattleType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取自动使用角色规则

---

### 函数 `GetDropSetConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FDropSetConfig` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DropSetID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FDropSetConfig GetDropSetConfig(FName DropSetID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取掉落集

---

### 函数 `GetWorldPlaceBuildInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FWorldPlaceBuildConfig&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FWorldPlaceBuildConfig& GetWorldPlaceBuildInfo(const FName& ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取城镇建筑设施配置

---

### 函数 `GetWorldPlaceEffectInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FWorldPlaceEffectConfig&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FWorldPlaceEffectConfig& GetWorldPlaceEffectInfo(const FName& ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取城镇效果配置

---

### 函数 `GetWorldPlaceSpecialEffectConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FWorldPlaceSpecialEffectConfig&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FWorldPlaceSpecialEffectConfig& GetWorldPlaceSpecialEffectConfig(const FName& ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取地点特殊效果配置（全局效果）

---

### 函数 `GetPlaceJobConfigByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FWorldPlaceJobConfig` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `JobType` | `EPlaceJobType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FWorldPlaceJobConfig GetPlaceJobConfigByType(EPlaceJobType JobType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetCommonLogConfigurationAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UCommonLogConfigurationAsset*` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UCommonLogConfigurationAsset* GetCommonLogConfigurationAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetTransportationInfoByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FTransportationInfo` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FTransportationInfo GetTransportationInfoByID(const FName & ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取交通工具的信息

---

### 函数 `GetTransportationInfoByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FTransportationInfo` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TransportationType` | `ETransportationType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FTransportationInfo GetTransportationInfoByType(ETransportationType TransportationType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过类型获取交通工具的信息

---

### 函数 `GetAllTransportationInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutData` | `TArray<FTransportationInfo>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllTransportationInfo(TArray<FTransportationInfo>& OutData) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有交通工具信息

---

### 函数 `GetPuppetPlatformConfigAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `class UPuppetPlatformConfigurationAsset *` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) class UPuppetPlatformConfigurationAsset * GetPuppetPlatformConfigAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取傀儡台配置

---

### 函数 `GetPlaceLightInfluenceInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FWorldPlaceLightInfluenceInfo` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LightValue` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FWorldPlaceLightInfluenceInfo GetPlaceLightInfluenceInfo(float LightValue);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetPlaceLightInfluenceInfoByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FWorldPlaceLightInfluenceInfo` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FWorldPlaceLightInfluenceInfo GetPlaceLightInfluenceInfoByID(FName ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetTournamentRule`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FTournamentRule` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TournamentType` | `ETournamentType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FTournamentRule GetTournamentRule(ETournamentType TournamentType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 比武规则

---

### 函数 `GetTournamentConfigurationAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UTournamentConfigurationAsset *` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UTournamentConfigurationAsset * GetTournamentConfigurationAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取游戏的通用配置

---

### 函数 `GetOffFieldOperationInfoByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FOffFieldOperationInfo` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FOffFieldOperationInfo GetOffFieldOperationInfoByID(FName ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetPostStationConfigAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UPostStationConfigAsset*` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UPostStationConfigAsset* GetPostStationConfigAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 驿站

---

### 函数 `GetAllPostStationGenerateConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutData` | `TArray<FPostStationGenerateConfig>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllPostStationGenerateConfig(TArray<FPostStationGenerateConfig>& OutData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 驿站生成

---

### 函数 `GetPostStationGenerateConfigByIDs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InIDs` | `const TArray<FName>&` |
| `OutData` | `TArray<FPostStationGenerateConfig>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetPostStationGenerateConfigByIDs(const TArray<FName>& InIDs,TArray<FPostStationGenerateConfig>& OutData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetAnnualRewardConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FAnnualRewardConfig` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Rank` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FAnnualRewardConfig GetAnnualRewardConfig(int32 Rank);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取排名奖励

---

### 函数 `GetBreakThroughConfigurationAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UBreakThroughConfigurationAsset *` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UBreakThroughConfigurationAsset * GetBreakThroughConfigurationAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 突破配置

---

### 函数 `GetTrainingRoomConfigByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FTrainingRoomConfig` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FiveElementType` | `EFiveElementType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FTrainingRoomConfig GetTrainingRoomConfigByType(EFiveElementType FiveElementType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 按五行类型获取训练房间配置信息

---

### 函数 `GetTrainingRoomSkillIDs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FiveElementType` | `EFiveElementType` |
| `RoomLevel` | `int32` |
| `CharacterPoints` | `int32` |
| `OutLoopSections` | `TArray<FName> &` |
| `OutPoolId` | `FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FName> GetTrainingRoomSkillIDs(EFiveElementType FiveElementType, int32 RoomLevel,int32 CharacterPoints,TArray<FName> & OutLoopSections,FName & OutPoolId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取指定类型和等级的技能池ID列表

---

### 函数 `GetTrainingRoomAllSkillIDs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TMap<int32, FNameArr>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FiveElementType` | `EFiveElementType` |
| `RoomLevel` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TMap<int32, FNameArr> GetTrainingRoomAllSkillIDs(EFiveElementType FiveElementType, int32 RoomLevel);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取指定类型和等级的技能池ID列表 不计算

---

### 函数 `GetSkillPoolConfigByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FSkillPoolConfig` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FSkillPoolConfig GetSkillPoolConfigByID(FName ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取随机的技能配置

---

### 函数 `BreakThroughCharacteristicInfoByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FCharacteristicInfo` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FCharacteristicInfo BreakThroughCharacteristicInfoByID(FName ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取突破技能配置

---

### 函数 `GetApparelLimit`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<int32>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ApparelID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<int32> GetApparelLimit(const FName& ApparelID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询势力分堂服饰限制

---

### 函数 `GetPracticeConfigurationAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UPracticeConfigurationAsset *` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UPracticeConfigurationAsset * GetPracticeConfigurationAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取修炼配置

---

### 函数 `GetTravelerGoodsConfigByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FTravelerGoodsConfig&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FTravelerGoodsConfig& GetTravelerGoodsConfigByID(FName ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 商品配置

---

### 函数 `GetDefaultTeamInfoAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UDefaultTeamInfoAsset *` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UDefaultTeamInfoAsset * GetDefaultTeamInfoAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取默认的阵营信息

---

### 函数 `GetExchangeMartialArtsConfigByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FExchangeMartialArtsConfig&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FExchangeMartialArtsConfig& GetExchangeMartialArtsConfigByID(FName ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据ID获取切磋配置

---

### 函数 `GetRaidConfigurationAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `URaidConfigurationAsset*` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) URaidConfigurationAsset* GetRaidConfigurationAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取袭击配置资产

---

### 函数 `GetPrisonConfigAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UPrisonConfigAsset*` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UPrisonConfigAsset* GetPrisonConfigAsset();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取监狱配置资产

---

### 函数 `GetThreatPoolInfoByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FThreatPoolInfo&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FThreatPoolInfo& GetThreatPoolInfoByID(FName ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据ID获取威胁池信息

---

### 函数 `GetThreatPoolInfoArr`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FThreatPoolInfo>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CurPoints` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FThreatPoolInfo> GetThreatPoolInfoArr(int32 CurPoints);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据当前点数获取威胁池信息数组

---

### 函数 `GetRaidRulesetByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FRaidRuleset&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FRaidRuleset& GetRaidRulesetByID(FName ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据ID获取袭击规则

---

### 函数 `GetCharacterLoyaltyConfigByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCharacterLoyaltyConfig&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCharacterLoyaltyConfig& GetCharacterLoyaltyConfigByID(FName ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据ID获取角色忠诚度配置

---

### 函数 `GetCharacterLoyaltyConfigByImportance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const FCharacterLoyaltyConfig&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Importance` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const FCharacterLoyaltyConfig& GetCharacterLoyaltyConfigByImportance(int32 Importance);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据重要度获取角色忠诚度配置

---
