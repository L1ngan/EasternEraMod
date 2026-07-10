# `class` `UFightPawnSaveDataComponent`

**源码头文件:** `EastRimWorld/Framework/FightPawnComponents/FightPawnSaveDataComponent.h`

---

## 功能说明（来自头文件注释）

> 玩家Pawn专用存档数据中心：承载FCharacterSaveData全部字段（武学/伤势除外），提供存档初始化/回写、能力授予移除、特性管理、外观应用及饥饿/丹田/出生点等状态字段。

## 蓝图暴露变量

### 属性 `CharacterSaveData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FCharacterSaveData](../../WorldSystem/WorldCharacterData__FCharacterSaveData.md) |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|SaveData" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") FCharacterSaveData CharacterSaveData;` |

**说明:**

> 完整存档结构（包含所有 FCharacterSaveData 字段）

---

### 属性 `EastRimWorldCharacterData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FInstancedStruct` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|SaveData" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FightPawn|SaveData") FInstancedStruct EastRimWorldCharacterData;` |

**说明:**

> 当前生效的角色配置（FEastRimWorldCharacterData 或 FEastRimWorldHumanData）

---

### 属性 `CharacteristicInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|SaveData" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") TArray<FName> CharacteristicInfos;` |

**说明:**

> 拥有的特性列表

---

### 属性 `bOpenDanTian`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|SaveData" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") bool bOpenDanTian = false;` |

**说明:**

> 是否开启丹田

---

### 属性 `bCanOpenDanTian`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|SaveData" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") bool bCanOpenDanTian = false;` |

**说明:**

> 是否可以开启丹田

---

### 属性 `NutritionTriggerFlag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|SaveData" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") bool NutritionTriggerFlag = false;` |

**说明:**

> 营养效果触发标记。

---

### 属性 `ButtonOperationState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ECommonButtonType](../../UI/Struct/UIStruct__ECommonButtonType.md), bool> |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|SaveData" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") TMap<ECommonButtonType, bool> ButtonOperationState;` |

**说明:**

> 各通用按钮的操作状态（按钮类型→是否开启），随存档保存。

---

### 属性 `ItemDrugUsed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName, int32>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|SaveData" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") TMap<FName, int32> ItemDrugUsed;` |

**说明:**

> 药品使用记录（物品ID→使用次数），随存档保存。

---

### 属性 `CurrentHungryIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|SaveData" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") float CurrentHungryIntervalTime = 0.f;` |

**说明:**

> 当前饥饿间隔的累计计时时间。

---

### 属性 `CurHungryId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|SaveData" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") FName CurHungryId;` |

**说明:**

> 当前饥饿状态ID。

---

### 属性 `ProhibitTreatSelf`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|SaveData" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") bool ProhibitTreatSelf = true;` |

**说明:**

> 是否禁止自我治疗（默认true）。

---

### 属性 `bCanSelect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|SaveData" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") bool bCanSelect = true;` |

**说明:**

> 是否可被选中（默认true）。

---

### 属性 `SpawnPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|SaveData" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") FVector SpawnPoint = FVector::ZeroVector;` |

**说明:**

> 出生点坐标（世界位置），随存档保存。

---

### 属性 `bRegisterWorld`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|SaveData" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") bool bRegisterWorld = false;` |

**说明:**

> 是否已注册到世界系统，随存档保存。

---

### 属性 `bInitializationCompleted`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|SaveData" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|SaveData") bool bInitializationCompleted = false;` |

**说明:**

> 存档初始化是否已完成。

---

## 蓝图暴露函数

### 函数 `InitializeBySaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|SaveData" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterSaveData` | const [FCharacterSaveData](../../WorldSystem/WorldCharacterData__FCharacterSaveData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|SaveData") void InitializeBySaveData(const FCharacterSaveData& InCharacterSaveData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过完整 FCharacterSaveData 初始化 Pawn（仿 AEastRimWorldCharacter::InitializeCharacterBySaveData）

---

### 函数 `UpdateSaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|SaveData" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|SaveData") void UpdateSaveData();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 把当前 Pawn 上的运行时状态回写到 CharacterSaveData

---

### 函数 `GetCharacterSaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="FightPawn|SaveData" |
| 返回类型 | const [FCharacterSaveData](../../WorldSystem/WorldCharacterData__FCharacterSaveData.md)& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "FightPawn|SaveData") const FCharacterSaveData& GetCharacterSaveData() const { return CharacterSaveData; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 完整存档数据

---

### 函数 `GiveAbilityByAbilityID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Ability" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayAbilityID` | `FName` |
| `1` | `int Level =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Ability") bool GiveAbilityByAbilityID(FName GameplayAbilityID, int Level = 1);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按能力ID授予Gameplay能力（可指定等级，默认1级），返回是否成功。

---

### 函数 `RemoveAbilityByAbilityID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Ability" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayAbilityID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Ability") bool RemoveAbilityByAbilityID(FName GameplayAbilityID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按能力ID移除已授予的Gameplay能力，返回是否成功。

---

### 函数 `AddNewCharacteristic`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Characteristic" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewCharacteristicID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Characteristic") void AddNewCharacteristic(const FName& NewCharacteristicID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 添加一个新特性（按特性ID）并应用其效果。

---

### 函数 `ApplyCharacteristicByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Characteristic" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewCharacteristicID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Characteristic") void ApplyCharacteristicByID(const FName& NewCharacteristicID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按特性ID应用该特性的效果。

---

### 函数 `RemoveCharacteristic`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Characteristic" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RemoveCharacteristicID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Characteristic") void RemoveCharacteristic(const FName& RemoveCharacteristicID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除指定ID的特性。

---

### 函数 `OpenDanTian`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Cultivation" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Cultivation") void OpenDanTian();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 开启丹田（修炼入口，设置丹田开启状态）。

---

### 函数 `ApplyCustomApparels`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Appearance" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bUseApparel` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Appearance") void ApplyCustomApparels(bool bUseApparel);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 应用自定义外观，bUseApparel控制是否启用自定义外观。

---
