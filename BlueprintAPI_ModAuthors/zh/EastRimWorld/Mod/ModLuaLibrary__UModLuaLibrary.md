# `class` `UModLuaLibrary`

**源码头文件:** `EastRimWorld/Mod/ModLuaLibrary.h`

---

## 功能说明（来自头文件注释）

> Mod Lua函数库
> 提供从Lua调用C++功能的接口

## 蓝图暴露函数

### 函数 `GetModSubsystem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | class [UModSubsystem](ModSubsystem__UModSubsystem.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") static class UModSubsystem* GetModSubsystem(const UObject* WorldContextObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取Mod子系统

---

### 函数 `IsModLoaded`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `ModId` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") static bool IsModLoaded(const UObject* WorldContextObject, const FName& ModId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查Mod是否已加载

---

### 函数 `GetModInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | class [UModRuntimeInfo](ModInfo__UModRuntimeInfo.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `ModId` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") static class UModRuntimeInfo* GetModInfo(const UObject* WorldContextObject, const FName& ModId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取Mod信息

---

### 函数 `ModLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ModId` | `const FName&` |
| `Message` | `const FString&` |
| `（匿名/仅类型）` | `const FString& ModLogLevel = TEXT("Log")` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System", meta = (CallInEditor = "true")) static void ModLog(const FName& ModId, const FString& Message, const FString& ModLogLevel = TEXT("Log"));`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 日志输出

---

### 函数 `RegisterModCommand`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ModId` | `const FName&` |
| `CommandName` | `const FString&` |
| `Description` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") static void RegisterModCommand(const FName& ModId, const FString& CommandName, const FString& Description);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 注册控制台命令（旧接口：无回调只打日志，保留兼容；Lua 侧请改用 RegisterModConsoleCommand）

---

### 函数 `LoadAndApplyModConfigFromJson`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `ModId` | `const FName&` |
| `bNewGameLoad` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") static bool LoadAndApplyModConfigFromJson(const UObject* WorldContextObject, const FName& ModId, bool bNewGameLoad);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 从 Mod 目录 JSON 配置加载并应用（ModInfo.json 中 DataTableConfigs / DataAssetConfigs）

---

### 函数 `GetWidgetByName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|UI" |
| 返回类型 | `UWidget*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Widget` | `UUserWidget*` |
| `WidgetName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|UI") static UWidget* GetWidgetByName(UUserWidget* Widget, FName WidgetName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按控件名取界面里的子控件（不要求勾选 Is Variable）。Lua：UE.UModLuaLibrary.GetWidgetByName(Widget, "Btn_Save")

---

### 函数 `GetAllChildWidgets`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|UI" |
| 返回类型 | `TArray<UWidget*>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Widget` | `UUserWidget*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|UI") static TArray<UWidget*> GetAllChildWidgets(UUserWidget* Widget);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取界面里的全部子控件（含嵌套）。

---

### 函数 `PushModWidgetToLayer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|UI" |
| 返回类型 | `UCommonActivatableWidget*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `LayerName` | `FName` |
| `WidgetClass` | `TSubclassOf<UCommonActivatableWidget>` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|UI") static UCommonActivatableWidget* PushModWidgetToLayer(const UObject* WorldContextObject, FName LayerName, TSubclassOf<UCommonActivatableWidget> WidgetClass);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 把界面推入 CommonUI 层栈，LayerName 只收 Menu / Modal（不开放 Game 层），界面类须继承 CommonActivatableWidget。归属当前 Mod，卸载时自动移除。

---

### 函数 `SetCharacterApparel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `Slot` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |
| `ApparelId` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool SetCharacterApparel(AEastRimWorldCharacter_Human* Character, EArmorType Slot, FName ApparelId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置角色某个槽位的服饰外观（只改外观，不改装备）；槽位只收 Helmet / Armor / Pants / Shoes，服饰 ID 必须是装备表里该槽位的服饰。玩家势力有职位的成员写进个人时装，叠加在装备或分堂统一服饰之上，宗门服饰的开关、保存和调职不会冲掉它。随角色存档保存。

---

### 函数 `ClearCharacterApparel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `Slot` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool ClearCharacterApparel(AEastRimWorldCharacter_Human* Character, EArmorType Slot);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 清掉角色某个槽位的服饰外观，该槽显示为空；玩家势力有职位的成员记进个人时装，宗门服饰也不会把它填上。

---

### 函数 `ResetCharacterApparels`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool ResetCharacterApparels(AEastRimWorldCharacter_Human* Character);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 清空个人时装：玩家势力有职位的成员回到宗门服饰规则（分堂开了统一服饰就穿统一服饰，没开按装备显示），其他角色回到按装备显示。

---

### 函数 `RemoveCharacterPersonalApparel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `Slot` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool RemoveCharacterPersonalApparel(AEastRimWorldCharacter_Human* Character, EArmorType Slot);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 去掉个人时装里某个槽，让该槽重新跟随宗门服饰规则；只对玩家势力有职位的成员有效。

---

### 函数 `GetCharacterPersonalApparels`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | TMap<[EArmorType](../Struct/CommonEnum__EArmorType.md), FName> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static TMap<EArmorType, FName> GetCharacterPersonalApparels(AEastRimWorldCharacter_Human* Character);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取角色的个人时装（按槽；值为 None 表示该槽留空）；不是玩家势力有职位的成员时返回空表。

---

### 函数 `SetCharacterCustomizationId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `ProfileId` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool SetCharacterCustomizationId(AEastRimWorldCharacter_Human* Character, const FString& ProfileId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 把角色的脸型、体型、发型换成捏脸预设表里的一行（须与角色当前预设同性别；掌门与使用掌门外观的角色不支持）。随角色存档保存。

---

### 函数 `GetCharacterCustomizationIds`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | `TArray<FString>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `OutCurrentId` | `FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static TArray<FString> GetCharacterCustomizationIds(AEastRimWorldCharacter_Human* Character, FString& OutCurrentId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取角色可换的捏脸预设：与角色当前预设同性别的全部行（含 Mod 用 JSON 加的行），按表内顺序，都能传给 SetCharacterCustomizationId；OutCurrentId 为角色当前使用的预设。掌门与使用掌门外观的角色返回空。

---

### 函数 `GetCustomizationPresetInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `ProfileId` | `const FString&` |
| `OutName` | `FString&` |
| `OutAvatar` | `UTexture2D*&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool GetCustomizationPresetInfo(const UObject* WorldContextObject, const FString& ProfileId, FString& OutName, UTexture2D*& OutAvatar);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取捏脸预设的显示信息：名称（预设元数据里的 Name）与缩略图（Avatar，可能为空）；预设表里没有这一行时返回 false。

---

### 函数 `GetCharacterShapeParams`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | TArray<[FModShapeParamInfo](ModCharacterLayerTypes__FModShapeParamInfo.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static TArray<FModShapeParamInfo> GetCharacterShapeParams(AEastRimWorldCharacter_Human* Character);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取角色可调的体型、脸型滑条（照官方宗门时装界面的滑条）及当前值和范围。主角和世界里有登记的角色可调。

---

### 函数 `SetCharacterShapeParam`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `ParamId` | `FName` |
| `Value` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool SetCharacterShapeParam(AEastRimWorldCharacter_Human* Character, FName ParamId, float Value);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 调一个体型或脸型滑条（ParamId 取自 GetCharacterShapeParams），数值按滑条范围钳制。随存档保存。

---

### 函数 `GetCharacterColorParams`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | TArray<[FModColorParamInfo](ModCharacterLayerTypes__FModColorParamInfo.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static TArray<FModColorParamInfo> GetCharacterColorParams(AEastRimWorldCharacter_Human* Character);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取角色可调的颜色（肤色、唇色、瞳色、发色等，照官方宗门时装界面的取色器）及当前颜色。

---

### 函数 `SetCharacterColorParam`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `ParamId` | `FName` |
| `Color` | `FLinearColor` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool SetCharacterColorParam(AEastRimWorldCharacter_Human* Character, FName ParamId, FLinearColor Color);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 改一个颜色（ParamId 取自 GetCharacterColorParams）。随存档保存。

---

### 函数 `GetHairstyleSlots`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | TArray<[FModHairstyleSlotConfig](ModCharacterLayerTypes__FModHairstyleSlotConfig.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static TArray<FModHairstyleSlotConfig> GetHairstyleSlots(const UObject* WorldContextObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取发型槽（头发、胡子等）的配置：ID、名称、是否允许留空。

---

### 函数 `GetCharacterHairstyles`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | TArray<[FModHairstyleOption](ModCharacterLayerTypes__FModHairstyleOption.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `SlotId` | `FName` |
| `OutCurrentId` | `FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static TArray<FModHairstyleOption> GetCharacterHairstyles(AEastRimWorldCharacter_Human* Character, FName SlotId, FString& OutCurrentId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取角色某个发型槽可选的发型（按角色当前体型筛过），OutCurrentId 为当前发型。

---

### 函数 `SetCharacterHairstyle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `SlotId` | `FName` |
| `HairstyleId` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool SetCharacterHairstyle(AEastRimWorldCharacter_Human* Character, FName SlotId, const FString& HairstyleId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 换发型（HairstyleId 取自 GetCharacterHairstyles；传空摘掉该槽的发型，只对允许留空的槽）。随存档保存。

---

### 函数 `ResetCharacterCustomization`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool ResetCharacterCustomization(AEastRimWorldCharacter_Human* Character);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 撤销 Mod 对角色捏脸的全部改动（体型、脸型、发型、颜色和 Mod 换的预设），回到游戏原有外观。

---

### 函数 `GetCharacterAvatarConfigId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | `FName` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static FName GetCharacterAvatarConfigId(AEastRimWorldCharacter_Human* Character);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取角色当前生效的立绘行（Mod 指定的优先，其次角色自己的立绘配置）；都没有返回 None。

---

### 函数 `SetCharacterAvatarConfigId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `AvatarConfigId` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool SetCharacterAvatarConfigId(AEastRimWorldCharacter_Human* Character, FName AvatarConfigId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 给角色指定立绘（立绘表的行，Mod 可用 JSON 往立绘表 CharacterAvatarConfig 加行）。存进 MOD 数据区，不改角色原有立绘配置。

---

### 函数 `ResetCharacterAvatar`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Character" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool ResetCharacterAvatar(AEastRimWorldCharacter_Human* Character);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 撤销 Mod 指定的立绘，回到角色原有立绘。

---

### 函数 `SetModData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Data" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Key` | `const FString&` |
| `Value` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Data") static bool SetModData(const FString& Key, const FString& Value);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 存一条数据（键不超过 128 字符，值不超过 1M 字符，单个 Mod 合计不超过 16M 字符）。当场写盘。

---

### 函数 `GetModData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Data" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Key` | `const FString&` |
| `OutValue` | `FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Data") static bool GetModData(const FString& Key, FString& OutValue);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 读一条数据；没有时返回 false。

---

### 函数 `RemoveModData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Data" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Key` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Data") static bool RemoveModData(const FString& Key);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 删一条数据。

---

### 函数 `GetModDataKeys`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Data" |
| 返回类型 | `TArray<FString>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Data") static TArray<FString> GetModDataKeys();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取全部键。

---

### 函数 `GetModSetting`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Settings" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Key` | `const FString&` |
| `OutValue` | `FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Settings") static bool GetModSetting(const FString& Key, FString& OutValue);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 读设置当前值的文本形式（bool 为 true/false，int/float 为数字，enum 为选项之一；没改过返回默认值）；没声明这一项返回 false

---

### 函数 `SetModSetting`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Settings" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Key` | `const FString&` |
| `Value` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Settings") static bool SetModSetting(const FString& Key, const FString& Value);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 改设置：按声明校验（数值越界截到范围内，enum 必须是选项之一），值变了才保存并广播 OnModSettingChanged

---

### 函数 `GetModSettings`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|Settings" |
| 返回类型 | `TMap<FString, FString>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|Settings") static TMap<FString, FString> GetModSettings();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 本 Mod 全部设置的当前值（键 -> 文本形式的值）

---

### 函数 `SetSaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|SaveData" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Key` | `const FString&` |
| `Value` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|SaveData") static bool SetSaveData(const FString& Key, const FString& Value);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 写一条：只改内存，下次存档时写进存档（OnGameSaving 回调里写的进这一次存档）；不存档就读档会回到存档时的值。键 1~128 字符，值不超过 64K 字符，每个 Mod 合计不超过 1M 字符、4096 条

---

### 函数 `GetSaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|SaveData" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Key` | `const FString&` |
| `OutValue` | `FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|SaveData") static bool GetSaveData(const FString& Key, FString& OutValue);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 读一条；没有或数据未就绪时返回 false

---

### 函数 `RemoveSaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|SaveData" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Key` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|SaveData") static bool RemoveSaveData(const FString& Key);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 删一条

---

### 函数 `GetSaveDataKeys`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|SaveData" |
| 返回类型 | `TArray<FString>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|SaveData") static TArray<FString> GetSaveDataKeys();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取本 Mod 在当前存档里的全部键

---

### 函数 `IsSaveDataReady`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Mod System|SaveData" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System|SaveData") static bool IsSaveDataReady();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 按存档数据是否已就绪（新游戏初始化完、读档读入后）

---

### 函数 `GetPlaythroughId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|SaveData" |
| 返回类型 | `FString` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|SaveData") static FString GetPlaythroughId();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 周目 ID（GUID 字符串）：新游戏生成，另存、自动存档沿用；老档首次读入按当时掌门 GUID 补。门派、掌门存档里的 SGUID 每周目都一样，区分周目请用它。未就绪返回空串

---

### 函数 `RequestGameplayTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|GameplayTag" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TagName` | `const FString&` |
| `OutTag` | `FGameplayTag&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|GameplayTag") static bool RequestGameplayTag(const FString& TagName, FGameplayTag& OutTag);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按名字取已注册的标签：找不到返回 false、OutTag 为空，不报错不断言；OutTag 是拷贝。Lua：local ok, Tag = UE.UModLuaLibrary.RequestGameplayTag("A.B")

---

### 函数 `IsValidGameplayTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Mod System|GameplayTag" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Tag` | `const FGameplayTag&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System|GameplayTag") static bool IsValidGameplayTag(const FGameplayTag& Tag);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 是否为已注册的有效标签（手填 TagName 得到的未注册标签返回 false）

---

### 函数 `GetGameplayTagName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Mod System|GameplayTag" |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Tag` | `const FGameplayTag&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System|GameplayTag") static FString GetGameplayTagName(const FGameplayTag& Tag);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 取标签名（空标签返回空串）

---
