# `class` `UModLuaLibrary`

**Source header:** `EastRimWorld/Mod/ModLuaLibrary.h`

---

## Functional description (from header comments)

> Mod Lua函数库
> 提供从Lua调用C++功能的接口

## Blueprint-exposed functions

### Function `GetModSubsystem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | class [UModSubsystem](ModSubsystem__UModSubsystem.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") static class UModSubsystem* GetModSubsystem(const UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取Mod子系统

---

### Function `IsModLoaded`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `ModId` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") static bool IsModLoaded(const UObject* WorldContextObject, const FName& ModId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查Mod是否已加载

---

### Function `GetModInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | class [UModRuntimeInfo](ModInfo__UModRuntimeInfo.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `ModId` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") static class UModRuntimeInfo* GetModInfo(const UObject* WorldContextObject, const FName& ModId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取Mod信息

---

### Function `ModLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModId` | `const FName&` |
| `Message` | `const FString&` |
| `(unnamed / type only)` | `const FString& ModLogLevel = TEXT("Log")` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System", meta = (CallInEditor = "true")) static void ModLog(const FName& ModId, const FString& Message, const FString& ModLogLevel = TEXT("Log"));`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 日志输出

---

### Function `RegisterModCommand`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModId` | `const FName&` |
| `CommandName` | `const FString&` |
| `Description` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") static void RegisterModCommand(const FName& ModId, const FString& CommandName, const FString& Description);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 注册控制台命令（旧接口：无回调只打日志，保留兼容；Lua 侧请改用 RegisterModConsoleCommand）

---

### Function `LoadAndApplyModConfigFromJson`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `ModId` | `const FName&` |
| `bNewGameLoad` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") static bool LoadAndApplyModConfigFromJson(const UObject* WorldContextObject, const FName& ModId, bool bNewGameLoad);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 从 Mod 目录 JSON 配置加载并应用（ModInfo.json 中 DataTableConfigs / DataAssetConfigs）

---

### Function `GetWidgetByName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|UI" |
| Return type | `UWidget*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Widget` | `UUserWidget*` |
| `WidgetName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|UI") static UWidget* GetWidgetByName(UUserWidget* Widget, FName WidgetName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按控件名取界面里的子控件（不要求勾选 Is Variable）。Lua：UE.UModLuaLibrary.GetWidgetByName(Widget, "Btn_Save")

---

### Function `GetAllChildWidgets`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|UI" |
| Return type | `TArray<UWidget*>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Widget` | `UUserWidget*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|UI") static TArray<UWidget*> GetAllChildWidgets(UUserWidget* Widget);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取界面里的全部子控件（含嵌套）。

---

### Function `PushModWidgetToLayer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|UI" |
| Return type | `UCommonActivatableWidget*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `LayerName` | `FName` |
| `WidgetClass` | `TSubclassOf<UCommonActivatableWidget>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|UI") static UCommonActivatableWidget* PushModWidgetToLayer(const UObject* WorldContextObject, FName LayerName, TSubclassOf<UCommonActivatableWidget> WidgetClass);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 把界面推入 CommonUI 层栈，LayerName 只收 Menu / Modal（不开放 Game 层），界面类须继承 CommonActivatableWidget。归属当前 Mod，卸载时自动移除。

---

### Function `SetCharacterApparel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `Slot` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |
| `ApparelId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool SetCharacterApparel(AEastRimWorldCharacter_Human* Character, EArmorType Slot, FName ApparelId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置角色某个槽位的服饰外观（只改外观，不改装备）；槽位只收 Helmet / Armor / Pants / Shoes，服饰 ID 必须是装备表里该槽位的服饰。玩家势力有职位的成员写进个人时装，叠加在装备或分堂统一服饰之上，宗门服饰的开关、保存和调职不会冲掉它。随角色存档保存。

---

### Function `ClearCharacterApparel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `Slot` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool ClearCharacterApparel(AEastRimWorldCharacter_Human* Character, EArmorType Slot);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 清掉角色某个槽位的服饰外观，该槽显示为空；玩家势力有职位的成员记进个人时装，宗门服饰也不会把它填上。

---

### Function `ResetCharacterApparels`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool ResetCharacterApparels(AEastRimWorldCharacter_Human* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 清空个人时装：玩家势力有职位的成员回到宗门服饰规则（分堂开了统一服饰就穿统一服饰，没开按装备显示），其他角色回到按装备显示。

---

### Function `RemoveCharacterPersonalApparel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `Slot` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool RemoveCharacterPersonalApparel(AEastRimWorldCharacter_Human* Character, EArmorType Slot);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 去掉个人时装里某个槽，让该槽重新跟随宗门服饰规则；只对玩家势力有职位的成员有效。

---

### Function `GetCharacterPersonalApparels`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | TMap<[EArmorType](../Struct/CommonEnum__EArmorType.md), FName> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static TMap<EArmorType, FName> GetCharacterPersonalApparels(AEastRimWorldCharacter_Human* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取角色的个人时装（按槽；值为 None 表示该槽留空）；不是玩家势力有职位的成员时返回空表。

---

### Function `SetCharacterCustomizationId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `ProfileId` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool SetCharacterCustomizationId(AEastRimWorldCharacter_Human* Character, const FString& ProfileId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 把角色的脸型、体型、发型换成捏脸预设表里的一行（须与角色当前预设同性别；掌门与使用掌门外观的角色不支持）。随角色存档保存。

---

### Function `GetCharacterCustomizationIds`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | `TArray<FString>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `OutCurrentId` | `FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static TArray<FString> GetCharacterCustomizationIds(AEastRimWorldCharacter_Human* Character, FString& OutCurrentId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取角色可换的捏脸预设：与角色当前预设同性别的全部行（含 Mod 用 JSON 加的行），按表内顺序，都能传给 SetCharacterCustomizationId；OutCurrentId 为角色当前使用的预设。掌门与使用掌门外观的角色返回空。

---

### Function `GetCustomizationPresetInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `ProfileId` | `const FString&` |
| `OutName` | `FString&` |
| `OutAvatar` | `UTexture2D*&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool GetCustomizationPresetInfo(const UObject* WorldContextObject, const FString& ProfileId, FString& OutName, UTexture2D*& OutAvatar);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取捏脸预设的显示信息：名称（预设元数据里的 Name）与缩略图（Avatar，可能为空）；预设表里没有这一行时返回 false。

---

### Function `GetCharacterShapeParams`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | TArray<[FModShapeParamInfo](ModCharacterLayerTypes__FModShapeParamInfo.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static TArray<FModShapeParamInfo> GetCharacterShapeParams(AEastRimWorldCharacter_Human* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取角色可调的体型、脸型滑条（照官方宗门时装界面的滑条）及当前值和范围。主角和世界里有登记的角色可调。

---

### Function `SetCharacterShapeParam`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `ParamId` | `FName` |
| `Value` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool SetCharacterShapeParam(AEastRimWorldCharacter_Human* Character, FName ParamId, float Value);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 调一个体型或脸型滑条（ParamId 取自 GetCharacterShapeParams），数值按滑条范围钳制。随存档保存。

---

### Function `GetCharacterColorParams`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | TArray<[FModColorParamInfo](ModCharacterLayerTypes__FModColorParamInfo.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static TArray<FModColorParamInfo> GetCharacterColorParams(AEastRimWorldCharacter_Human* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取角色可调的颜色（肤色、唇色、瞳色、发色等，照官方宗门时装界面的取色器）及当前颜色。

---

### Function `SetCharacterColorParam`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `ParamId` | `FName` |
| `Color` | `FLinearColor` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool SetCharacterColorParam(AEastRimWorldCharacter_Human* Character, FName ParamId, FLinearColor Color);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 改一个颜色（ParamId 取自 GetCharacterColorParams）。随存档保存。

---

### Function `GetHairstyleSlots`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | TArray<[FModHairstyleSlotConfig](ModCharacterLayerTypes__FModHairstyleSlotConfig.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static TArray<FModHairstyleSlotConfig> GetHairstyleSlots(const UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取发型槽（头发、胡子等）的配置：ID、名称、是否允许留空。

---

### Function `GetCharacterHairstyles`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | TArray<[FModHairstyleOption](ModCharacterLayerTypes__FModHairstyleOption.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `SlotId` | `FName` |
| `OutCurrentId` | `FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static TArray<FModHairstyleOption> GetCharacterHairstyles(AEastRimWorldCharacter_Human* Character, FName SlotId, FString& OutCurrentId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取角色某个发型槽可选的发型（按角色当前体型筛过），OutCurrentId 为当前发型。

---

### Function `SetCharacterHairstyle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `SlotId` | `FName` |
| `HairstyleId` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool SetCharacterHairstyle(AEastRimWorldCharacter_Human* Character, FName SlotId, const FString& HairstyleId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 换发型（HairstyleId 取自 GetCharacterHairstyles；传空摘掉该槽的发型，只对允许留空的槽）。随存档保存。

---

### Function `ResetCharacterCustomization`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool ResetCharacterCustomization(AEastRimWorldCharacter_Human* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 撤销 Mod 对角色捏脸的全部改动（体型、脸型、发型、颜色和 Mod 换的预设），回到游戏原有外观。

---

### Function `GetCharacterAvatarConfigId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | `FName` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static FName GetCharacterAvatarConfigId(AEastRimWorldCharacter_Human* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取角色当前生效的立绘行（Mod 指定的优先，其次角色自己的立绘配置）；都没有返回 None。

---

### Function `SetCharacterAvatarConfigId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `AvatarConfigId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool SetCharacterAvatarConfigId(AEastRimWorldCharacter_Human* Character, FName AvatarConfigId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 给角色指定立绘（立绘表的行，Mod 可用 JSON 往立绘表 CharacterAvatarConfig 加行）。存进 MOD 数据区，不改角色原有立绘配置。

---

### Function `ResetCharacterAvatar`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Character" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Character") static bool ResetCharacterAvatar(AEastRimWorldCharacter_Human* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 撤销 Mod 指定的立绘，回到角色原有立绘。

---

### Function `SetModData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Data" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Key` | `const FString&` |
| `Value` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Data") static bool SetModData(const FString& Key, const FString& Value);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 存一条数据（键不超过 128 字符，值不超过 1M 字符，单个 Mod 合计不超过 16M 字符）。当场写盘。

---

### Function `GetModData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Data" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Key` | `const FString&` |
| `OutValue` | `FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Data") static bool GetModData(const FString& Key, FString& OutValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 读一条数据；没有时返回 false。

---

### Function `RemoveModData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Data" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Key` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Data") static bool RemoveModData(const FString& Key);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 删一条数据。

---

### Function `GetModDataKeys`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Data" |
| Return type | `TArray<FString>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Data") static TArray<FString> GetModDataKeys();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取全部键。

---
