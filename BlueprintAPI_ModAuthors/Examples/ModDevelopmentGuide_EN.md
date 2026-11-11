# EastRimWorld Mod Development Guide (English)

> Companion sample: [ParagonSunWukong/](ParagonSunWukong/) (based on the real `Content/Mods/ParagonSunWukong` character mod)
> Type reference: `BlueprintAPI_ModAuthors/en/INDEX.md` at the project root (all enums / structs / Blueprint API, bilingual)

---

## 1. Mod folder layout

Each mod is a folder under `Content/Mods/` (or the Steam Workshop install directory):

```
MyMod/
├── ModInfo.json      # metadata (required)
├── Main.lua          # Lua entry (optional; config-only mods may omit it)
├── Config/           # DataTable/DataAsset override JSON (optional)
│   └── *.json
├── MyMod.png         # icon (optional)
├── MyModGameplayTags.ini  # custom GameplayTags (optional)
└── *.pak             # cooked assets (produced by the packaging tool)
```

## 2. ModInfo.json fields

| Field | Type | Description |
|---|---|---|
| `ModId` | string | **Required.** Unique identifier (ASCII, no spaces) |
| `ModName` | string | Display name |
| `Version` | string | Version like "1.0.0" (used by save-compatibility checks) |
| `Author` / `Description` | string | Author / description |
| `Icon` | string | Icon file relative to the mod root (extension may be omitted) |
| `MainLuaFile` | string | Lua entry, defaults to `Main.lua` |
| `LogLevel` | string | Lowest level written to this mod's log file: `Log` / `Warning` / `Error` / `None`; defaults to `Warning` (see [7.2](#72-per-mod-log-file)) |
| `NewGameLoad` | bool | true = only loaded when starting a new game |
| `MinGameVersion` | string | Minimum required game version |
| `ModToolVersion` | string | Packaging tool version (written automatically; used for compatibility checks) |
| `Dependencies` | array | `[{"ModId":"OtherMod","MinVersion":"1.0","Required":true}]` — loaded in dependency order |
| `IncludeGameplayTags` | bool | Whether the mod ships a custom GameplayTags ini |
| `GameplayTagsIniFile` | string | Tag ini file name (defaults to `{ModId}GameplayTags.ini`) |
| `DataTableConfigs` | array | DataTable overrides `[{"ConfigType":"CommonBuff","JsonFile":"Config/xx.json","StructName":"/Script/EastRimWorld.CommonBuff","bOverrideData":false}]` |
| `DataAssetConfigs` | array | DataAsset overrides `[{"AssetType":"NewGameConfiguration","JsonFile":"...","bOverrideData":false}]` |
| `PublishedFileId` | string | Steam Workshop id (filled automatically after upload) |

Valid `ConfigType` values: see the `EModConfigType` type page; `AssetType`: see `EModDataAssetType`.

## 3. Lifecycle

```
Discovery (scans Content/Mods + the Workshop directory)
→ player enables the mod → LoadMod:
   ① mount .pak assets
   ② register the GameplayTags ini (idempotent)
   ③ apply DataTableConfigs / DataAssetConfigs JSON overrides
   ④ run Main.lua (isolated sandbox) → call Mod:OnModLoaded()
→ runtime: event / timer / command callbacks
→ unload: Mod:OnModUnloaded() → the engine auto-cleans every timer/command/event
  listener owned by this mod → unmount .pak
```

**Save compatibility:** each save records the enabled mods and their versions. On load, missing / disabled / version-mismatched mods are reported to the player through the UI.

## 4. Lua API reference

Mod Lua runs in an isolated sandbox; engine exports are reachable through the `UE` namespace.

### 4.1 Basics

| API | Description |
|---|---|
| `UE.UModLuaLibrary.ModLog(ModId, Message, Level)` | Logging; Level = "Log"/"Warning"/"Error". Entries at or above the ModInfo.json `LogLevel` are also written to this mod's log file (see [7.2](#72-per-mod-log-file)) |
| `UE.UModLuaLibrary.IsModLoaded(nil, ModId)` | Whether another mod is loaded |
| `UE.UModLuaLibrary.GetModInfo(nil, ModId)` | Mod runtime info (version/state/path) |
| `UE.UModLuaLibrary.LoadAndApplyModConfigFromJson(nil, ModId, false)` | Re-apply this mod's JSON configs manually (already applied on load) |

### 4.2 Game event subscription (the recommended gameplay hook)

```lua
local id = UE.UModEventBus.RegisterModEvent("OnDayChanged", function(EventName, Payload, Params)
    -- Payload: related UObject (may be nil); Params: string key/value table
end)
UE.UModEventBus.UnregisterModEvent(id) -- optional; auto-cleaned on unload
```

| Event | Fires when | Payload | Params |
|---|---|---|---|
| `OnNewGameStarted` | New-game world finished initializing | SaveGameDataActor | — |
| `OnLoadGameComplete` | Loaded-game world finished initializing | SaveGameDataActor | — |
| `OnDayChanged` | Every in-game day | WorldDirector | GameDay, GameYear |
| `OnSeasonChanged` | Season change | WorldDirector | Season(int), GameYear |
| `OnWeatherChanged` | Weather effect takes effect | WorldDirector | Weather(int) |
| `OnEnterPlace` | Entering a place (sub-level loaded) | AWorldPlace | PlaceID, LevelName |
| `OnExitPlace` | Leaving a place | AWorldPlace | PlaceID, LevelName |
| `OnEnterPlaceComplete` | **All** initialization done after entering a place (incl. videos/sequences) | AWorldPlace | PlaceID |
| `OnBuildingComplete` | A building finished construction | — | ConfigId, BuildGuid |
| `OnCharacterDeath` | Character death (unified death point) | character actor | DeathOrgan |
| `OnBreakThroughCompleted` | Realm breakthrough succeeded | character actor | CharacterGuid, RealmLevel |
| `OnEmergentEventSpawned` | An emergent event landed | EmergenceDirector | EventID, InstanceGuid |
| `OnBuildMenuOpened` | The build menu expanded a category | build menu widget | CategoryId |
| `OnBuildMenuClosed` | The build menu collapsed its category | build menu widget | CategoryId (the one just collapsed) |
| `OnBuildCategoryChanged` | The expanded category changed (incl. expand / collapse) | — | CategoryId (empty when collapsed) |
| `OnBuildTabChanged` | The shown sub-tab changed (not fired for the reset to "All" when a category expands) | — | TabId (empty for "All"), CategoryId |
| `OnBuildMenuModWidgetCreated` | The build menu created one of your widgets (see [4.6](#46-build-menu-api)) | your widget | RegisterId, Slot |
| `OnBuildPlaceStarted` | Building placement started (a cursor-following preview appeared; moving an existing building counts too) | — | BuildId |
| `OnBuildPlaceEnded` | Placement ended (placed, cancelled, or switched to another building) | — | BuildId |

The 7 build events are all broadcast **on the next tick**; callbacks read the latest state.

### 4.3 Timers

```lua
local timerId = UE.UModLuaLibrary.RegisterModRepeatingTimer(nil, 5.0, true, fn) -- interval s, looping
UE.UModLuaLibrary.UnregisterModRepeatingTimer(timerId)
UE.UModLuaLibrary.RegisterModNextTick(nil, fn)  -- one-shot next tick (retry while world not ready)

-- Real-time timer (added Nov 2026): no WorldContext parameter
local rtId = UE.UModLuaLibrary.RegisterModRealTimeTimer(1.0, true, fn) -- interval s, looping
UE.UModLuaLibrary.UnregisterModRealTimeTimer(rtId)
```

- `RegisterModRepeatingTimer` runs on game time: it practically stops while the game is paused (speed 0, e.g. while the character editor map is open, see [4.8](#48-character-editor-map-with-a-mod-ui)), is suspended while switching places, and resumes after entering the new place.
- `RegisterModRealTimeTimer` runs on real time: it ignores pause, game speed and sub-level loading; it is skipped while switching places; it unregisters itself after 3 consecutive callback errors and is cleaned up when the mod unloads. Returns a timer id, or 0 on failure. Requires a game version that includes this API.

### 4.4 Console commands

```lua
UE.UModLuaLibrary.RegisterModConsoleCommand("mymod.dosomething", "description", function(Args)
    -- Args: array of argument strings (split on spaces)
end)
UE.UModLuaLibrary.UnregisterModConsoleCommand("mymod.dosomething")
```

Commands are entered in the console. Release builds have no console by default; see [7.1](#71-using-the-console-in-release-builds) to enable it.

### 4.5 Replacing DataTable rows at runtime (advanced)

```lua
UE.UModLuaLibrary.ReplaceDataTableRow(DataTable, "RowName", RowStruct)
```
RowStruct must match the table's row struct. For everyday tweaks prefer the
**DataTableConfigs JSON route** (toggles with the mod, validated by packaging).

### 4.6 Build menu API

> Added in November 2026; requires a game version that includes it. All functions live under `UE.UModBuildLibrary`; the first argument is the world context — pass `nil`. Functions with output parameters return them in Lua after the return value (`ret, out1, ...`).

**Build menu data** (four tables; the table name is the `ConfigType`):

```
BuildListCategorizeConfig  top-level categories (icon row at the bottom of the menu)  fields: DisplayName, Sort, Icon[normal/hovered/pressed]
   ▲ BuildTabConfig.Category = category ID
BuildTabConfig             sub-tabs (text tabs above the icon row; the leading "All" tab is not a row)  fields: TabName, Sort, Category
   ▲ BuildingUI.Category = sub-tab ID
BuildingUI                 how a building shows in the menu; row ID = building ID  fields: Category, DisplayName, Icon, Desc
BuildConfig                the buildings themselves; list order follows this table's row order (BuildingUI.Sort is not used)
```

- A building appears in the menu when it has a `BuildConfig` row, a `BuildingUI` row whose `Category` is an existing sub-tab, and it is unlocked.
- A sub-tab (and a category) only gets a button when it contains **at least one unlocked building**; otherwise it is hidden (not greyed out).
- **`Sort` must be unique within a level**: if two sub-tabs of the same category, or two categories, share a `Sort`, the menu keeps only one of the buttons.
- Adding a sub-tab only needs data, no blueprint change: add a `BuildTabConfig` row, then set the buildings' `BuildingUI.Category` to it. The sub-tab row does not scroll; one or two extra tabs per category are fine, many more will overflow the panel.
- **Do not move vanilla buildings to another sub-tab**: rooms, combinations and prison facilities recognize a building by its sub-tab, so moved buildings stop counting for them. The runtime API refuses such changes; JSON overrides do not, at your own risk.

**Queries**

| API | Description |
|---|---|
| `GetAllBuildCategoryIds(nil)` | All category IDs, sorted by Sort |
| `GetAllBuildTabIds(nil, CategoryId)` | Sub-tab IDs sorted by Sort; pass `nil` for all categories |
| `GetBuildCategoryConfig(nil, CategoryId)` | → `ok, Row` (`FModBuildListCategorizeStruct`) |
| `GetBuildTabConfig(nil, TabId)` | → `ok, Row` (`FModBuildTabStruct`) |
| `GetBuildUIData(nil, BuildId)` | → `ok, Row` (`FModBuildUIData`) |
| `GetBuildTabIdByBuildId(nil, BuildId)` / `GetBuildCategoryIdByTabId(nil, TabId)` | Sub-tab of a building / category of a sub-tab; None if not found |
| `GetBuildIdsByTab(nil, TabId, bOnlyUnlocked)` | Buildings in a sub-tab, in menu order |
| `CanBuild(nil, BuildId)` | → `ok, Reason` (`EBuildUnavailableReason`) |
| `CanUseBuildTab(nil, TabId)` | → `ok, Reason`; unusable when it has no unlocked building |

`EBuildUnavailableReason`: `None`, `ConfigMissing` (no building / sub-tab config), `NoMenuConfig` (no menu row, or it points to a missing sub-tab), `NotUnlocked`, `NoUnlockedBuildingInTab`, `UpperStoreyClosed` (stairs leading up while the upper storey is not open yet; the menu hides them too). Only the enum is returned — write your own message text. During the tutorial the menu only shows tutorial-unlocked buildings; these functions do not account for that.

**Runtime registration** (changes the in-memory tables only)

```lua
local tab = UE.FModBuildTabStruct()
tab.TabName = "My Tab"
tab.Sort = 75                     -- must not clash with other sub-tabs of the same category
tab.Category = "BaseBuilding"     -- must be an existing category
UE.UModBuildLibrary.RegisterBuildTab(nil, "MyMod_Tab", tab, true)

-- menu row for your own new building (its BuildConfig row must already exist); existing rows cannot change sub-tab
local ui = UE.FModBuildUIData()
ui.Category = "MyMod_Tab"
ui.DisplayName = "My Building"
ui.Icon = UE.UObject.Load("/Game/Mods/MyMod/UI/T_MyBuilding.T_MyBuilding")
UE.UModBuildLibrary.RegisterBuildUIData(nil, "MyMod_Building", ui, true)

UE.UModBuildLibrary.RefreshBuildMenu(nil)  -- make the menu rebuild from the tables now

-- change one field of an existing row: read the whole row, modify, write it back
local ok, cat = UE.UModBuildLibrary.GetBuildCategoryConfig(nil, "BaseBuilding")
cat.DisplayName = "Housing"
UE.UModBuildLibrary.RegisterBuildCategory(nil, "BaseBuilding", cat, true)
```

- `RegisterBuildCategory` / `RegisterBuildTab` / `RegisterBuildUIData` **write the whole set of listed fields**; to change one field, `Get…` the row first, modify it, then register it back. With the last argument `bOverrideExisting = false`, an existing row makes the call return false.
- Rejected (returns false and writes a ModLog): empty ID; a sub-tab whose `Category` is not an existing category; a menu row whose `Category` is not an existing sub-tab, or whose building has no `BuildConfig` row; changing the `Category` of an existing menu row; a `Sort` that clashes within its level.
- Registrations live in memory only and are not saved: register again after loading a save or starting a new game (in `OnLoadGameComplete` / `OnNewGameStarted`); nothing is rolled back when the mod unloads. Call `RefreshBuildMenu` after registering, otherwise changes show up only after the next place change (switching categories does not refresh the sub-tabs).
- A category's `Icon` is an array of soft references (normal / hovered / pressed). Prefer setting icons for new categories in JSON (section 5); at runtime you can `GetBuildCategoryConfig` an existing category as a template and keep its icons.

**Driving the menu** ("menu open" means a category is expanded, so the sub-tab row and the list are visible)

| API | Description |
|---|---|
| `IsBuildMenuOpen(nil)` | Whether a category is expanded |
| `OpenBuildMenu(nil, CategoryId)` | Open the build tab of the bottom bar; also expand that category when it is not `nil` |
| `SelectBuildCategory(nil, CategoryId)` | Expand a category, same as clicking its icon |
| `SelectBuildTab(nil, TabId)` | Switch to a sub-tab (expands its category first if needed); `nil` means "All" of the current category |
| `CloseBuildMenu(nil)` | Collapse the category |
| `ShowBuildItems(nil, BuildIds)` | Show only these buildings in the vanilla list (a category must be expanded); an empty array restores it, so does switching tabs or collapsing |
| `GetCurrentBuildCategoryId(nil)` / `GetCurrentBuildTabId(nil)` | Expanded category / shown sub-tab (None for "All" or when collapsed) |
| `GetBuildMenuWidget(nil)` | The build menu widget (read-only use, e.g. measuring vanilla widgets with `UE.UModLuaLibrary.GetWidgetByName`, see [4.7](#47-ui-widgets-and-buttons)) |

Categories and sub-tabs without unlocked buildings have no button; `Select…` on them returns false.

**Placing buildings**

| API | Description |
|---|---|
| `BeginPlaceBuilding(nil, BuildId)` | Enter placement preview for the building, same as clicking it in the build list; placing, line drag and box drag then work as vanilla |
| `SelectBuildItem(nil, BuildId)` | Switch the menu to the building's sub-tab, then `BeginPlaceBuilding` |
| `CancelPlaceBuilding(nil)` | Cancel the current placement, same as right-clicking while placing; does nothing otherwise |
| `IsPlacingBuilding(nil)` | → `placing, BuildId` |
| `GetSelectedBuildId(nil)` | The menu has no separate selection; returns the building being placed |
| `CanPlaceCurrentBuilding(nil)` | → `ok, TipsType` (`EPlaceBuildingTipsType`: why the current spot is invalid); false and `Normal` when not placing |

`BeginPlaceBuilding` requires: the building is unlocked, the player is controlling the pawn in their base (not on the world map, a city visit, etc.), and the mouse is over the scene (over UI no preview is created and it returns false). There is no "confirm placement" API — the player still clicks in the scene to place.

**Adding your own widget to the menu**

```lua
local cls = UE.UClass.Load("/Game/Mods/MyMod/UI/WBP_MyTabBar.WBP_MyTabBar_C")
local regId = UE.UModBuildLibrary.RegisterBuildMenuWidget(nil, UE.EBuildMenuModSlot.BelowSubTabs, cls, 0)
UE.UModEventBus.RegisterModEvent("OnBuildMenuModWidgetCreated", function(EventName, Widget, Params)
    if tonumber(Params.RegisterId) ~= regId then return end
    -- the menu is rebuilt on every place change / load, creating a new instance and firing this event again: bind buttons here
    local btn = UE.UModLuaLibrary.GetWidgetByName(Widget, "Btn_Variant1")
    UE.UModLuaLibrary.BindWidgetClicked(btn, function()
        local ids = UE.TArray(UE.FName)
        ids:Add("MyMod_Building_A")
        ids:Add("MyMod_Building_B")
        UE.UModBuildLibrary.ShowBuildItems(nil, ids)
    end)
end)
```

- The only slot for now is `BelowSubTabs`, right under the sub-tab row. It is shown only while a category is expanded and the slot holds at least one widget; the vanilla list moves down to make room. Several widgets in the slot are ordered by Order, ascending.
- Do not add widgets directly to the vanilla category rows or list — they are cleared whenever the menu refreshes.
- `UnregisterBuildMenuWidget(nil, regId)` unregisters and removes the instance; `GetBuildMenuModWidget(nil, regId)` returns the current instance (nil when the menu does not exist). Everything is unregistered automatically when the mod unloads.
- Typical use: draw your own row of "third-level" buttons that filter the vanilla list with `ShowBuildItems`, or start placement directly with `BeginPlaceBuilding`.

### 4.7 UI widgets and buttons

> Added in November 2026; requires a game version that includes this API.

| API | Notes |
|---|---|
| `UE.UModLuaLibrary.GetWidgetByName(Widget, "Btn_Save")` | Finds a child widget by its designer name; nil if not found. The widget does not need Is Variable checked |
| `UE.UModLuaLibrary.GetAllChildWidgets(Widget)` | All child widgets (nested ones included), as an array |
| `UE.UModLuaLibrary.BindWidgetClicked(Button, fn)` | Binds a click; returns a bind id (0 on failure). Supports `Button` and `CommonButtonBase`; the callback receives the button |
| `UE.UModLuaLibrary.UnbindWidgetClicked(BindId)` | Unbinds; returns bool |
| `UE.UModLuaLibrary.PushModWidgetToLayer(nil, LayerName, WidgetClass)` | Pushes a widget onto the game's UI layer stack and returns the instance (nil on failure). `LayerName` accepts only `"Menu"` (menus, full-screen panels) and `"Modal"` (modal popups) |

```lua
local cls = UE.UClass.Load("/Game/Mods/MyMod/UI/WBP_MyPanel.WBP_MyPanel_C")
local panel = UE.UModLuaLibrary.PushModWidgetToLayer(nil, "Menu", cls)
if panel then
    local btn = UE.UModLuaLibrary.GetWidgetByName(panel, "Btn_Close")
    UE.UModLuaLibrary.BindWidgetClicked(btn, function(Button)
        panel:DeactivateWidget()  -- close the panel
    end)
end
```

- The engine's `GetWidgetFromName`, `GetRootWidget` and `WidgetTree`'s `GetAllWidgets` are not Blueprint-callable, so Lua cannot call them (they always come back empty). Use the functions above instead.
- Click bindings belong to the current mod: timers and events registered inside the callback belong to it too, callback errors go to ModLog, and bindings are removed when the mod unloads.
- Widgets pushed onto the layer stack:
  - the widget class must derive from `CommonActivatableWidget`;
  - to show the mouse cursor, implement "Get Desired Input Config" in the widget Blueprint and return Menu mode;
  - to close it with Esc, check `Is Back Handler` in the class defaults; close it from code with `DeactivateWidget()`;
  - widgets a mod pushed are removed automatically when the mod unloads.
- The `Game` layer is not available: the game treats the widget on that layer as its main HUD and calls the main-HUD interface on it, which a mod widget does not implement, and the game crashes. Passing `"Game"` returns nil and writes a ModLog error.
- Do not use `AddToViewport` for interactive widgets: they are not on the layer stack, so the mouse cursor and Esc are controlled by whatever widget is active there.

### 4.8 Character editor map with a mod UI

> Added in November 2026; requires a game version that includes this API.

```lua
local mgr = UE.AWorldMapManage.GetWorldMapManage()
local cls = UE.UClass.Load("/Game/Mods/MyMod/UI/WBP_MyEditor.WBP_MyEditor_C")
if mgr:OpenCharacterEditorMapEx(cls, TargetGuid) then  -- pass UE.FGuid() when there is no target disciple
    -- the character editor map starts loading; WBP_MyEditor is pushed once it has loaded
end
```

| API (`AWorldMapManage` instance methods) | Notes |
|---|---|
| `OpenCharacterEditorMapEx(WidgetClass, TargetCharacterGuid)` | Loads the character editor map and shows the mod widget instead of the sect apparel UI; returns whether loading started |
| `GetCharacterEditorTargetGuid()` | The target disciple Guid passed this time |
| `GetCharacterEditorTargetCharacter()` | The target disciple; nil when not present |
| `GetCharacterEditorPreviewCharacter()` | The preview character (stand-in) in the studio; nil when not in studio mode |
| `RefreshCharacterEditorPreview()` | Copies the target disciple's look onto the stand-in again on the next frame; returns false when not in studio mode |
| `SetCharacterEditorCameraOrbit(Yaw, Pitch)` | Orbits the studio camera around the stand-in to a yaw and pitch relative to the default shot (degrees; positive Pitch raises the camera to look down; total pitch is limited to ±89°); returns bool |
| `SetCharacterEditorCameraDistance(Distance)` | Camera distance to the stand-in (cm; negative values count as 0); returns bool |
| `SetCharacterEditorCameraHeight(Height)` | Camera height offset from the default shot (cm); returns bool |
| `ResetCharacterEditorCamera()` | Returns the camera to the default shot from when the map opened; returns bool |
| `GetCharacterEditorCameraDefaultDistance()` | The default distance, for scaling the zoom; 0 when unavailable |

- The widget class must derive from `CommonActivatableWidget`; set up mouse and Esc as in [4.7](#47-ui-widgets-and-buttons). The original `OpenCharacterEditorMap()` is unchanged, and the sect apparel button still opens the original UI.
- Returns false when: the widget class is empty; the map is in use (the sect apparel UI is open, or the previous session has not finished closing); you are not in a normal place (a place switch is in progress, or the player is controlling another pawn, e.g. city visits or sparring); a Guid was passed but it is not a human disciple of the player's force who is currently present.
- While it is open:
  - the mod widget is on the Menu layer; the main HUD is removed, so its hotkeys do not work; the game is paused once the loading screen closes;
  - the view switches to the preview character's own camera, and the preview character keeps animating while the game is paused. To use your own camera, call `SetViewTargetWithBlend(Camera, 0)`: the blend time must be 0 (blending runs on game time and stalls while paused), and move the camera every frame from a real-time timer. Do not enable the plugin's studio camera `CameraStudio` in the map; its interpolation stalls while the game is paused;
  - open sub-pages with `PushModWidgetToLayer(nil, "Menu" or "Modal", Class)` — this does not close the map; close your sub-pages yourself before closing the main widget;
  - game-time timers practically stop while the game is paused; use `RegisterModRealTimeTimer` (see [4.3](#43-timers)).
- Closing: press Esc or call `DeactivateWidget()`. Once the widget leaves the layer stack, the map closes automatically and the place HUD returns. Game speed is back at 1 afterwards (every loading screen resets it to 1, same as the original apparel UI).
- The target disciple is only checked when opening; if it later leaves or dies, `GetCharacterEditorTargetCharacter()` returns nil, so check before use.

**Studio (when a target disciple is passed)**

> Added in November 2026, in testing.

- With a valid Guid, the preview character in the map takes on the target disciple's current look (body, face, hair, apparel, colors) and acts as a display-only stand-in. The disciple stays where they are and is never moved.
- After a successful call on **the target disciple** to `SetCharacterApparel`, `ClearCharacterApparel`, `RemoveCharacterPersonalApparel`, `ResetCharacterApparels` or `SetCharacterCustomizationId` from [4.9](#49-character-appearance-and-personal-apparel), the stand-in refreshes on the next frame. Changes go straight into the disciple's save data, so nothing needs to be written back when the map closes.
- To support "cancel", record the personal apparel and current preset with `GetCharacterPersonalApparels` and `GetCharacterCustomizationIds` when entering, and write them back on cancel.
- Camera controls: use the studio camera functions in the table above (orbit, distance, height, reset). They move the spring arm of the stand-in's own camera and take effect immediately while the game is paused. How buttons, dragging or the mouse wheel map onto them is up to the mod; for an automatic turntable, call `SetCharacterEditorCameraOrbit` every frame from a real-time timer.
- Do not rotate the stand-in for a turntable: its own camera rotates with it, so nothing appears to change on screen.
- These camera functions only work in the studio; once you switch to your own camera (`SetViewTargetWithBlend`) they no longer affect the view.
- If the target disciple leaves while the map is loading, or the preview character cannot be found, the map opens in plain override mode (`GetCharacterEditorPreviewCharacter()` returns nil).

```lua
local mgr = UE.AWorldMapManage.GetWorldMapManage()
if mgr:OpenCharacterEditorMapEx(cls, TargetGuid) then  -- TargetGuid: the target disciple's Guid
    -- after the widget is activated: automatic turntable, looking slightly down and a bit closer
    local yaw = 0
    UE.UModLuaLibrary.RegisterModRealTimeTimer(0.02, true, function()
        yaw = yaw + 0.5
        mgr:SetCharacterEditorCameraOrbit(yaw, 10)
    end)
    mgr:SetCharacterEditorCameraDistance(mgr:GetCharacterEditorCameraDefaultDistance() * 0.8)
end
```

You can also edit a disciple without the map: point the camera at the disciple in the current scene, push your UI as in 4.7, and write the result back with 4.9.

### 4.9 Character appearance and personal apparel

> Added in November 2026; requires a game version that includes this API.

| API (`UE.UModLuaLibrary`) | Notes |
|---|---|
| `SetCharacterApparel(Character, Slot, ApparelId)` | Sets the apparel for one slot and refreshes the look immediately; returns bool |
| `ClearCharacterApparel(Character, Slot)` | Makes one slot show nothing; returns bool |
| `ResetCharacterApparels(Character)` | Removes apparel set by mods: disciples of the player's sect go back to the sect apparel rules, other characters go back to showing their equipped gear; returns bool |
| `RemoveCharacterPersonalApparel(Character, Slot)` | Drops one slot from the personal apparel so it follows the sect apparel again (only for disciples of the player's sect); returns bool |
| `GetCharacterPersonalApparels(Character)` | The personal apparel as a "slot → apparel ID" map; a None value means the slot is left empty |
| `SetCharacterCustomizationId(Character, ProfileId)` | Switches the customization preset (body, face, hair); apparel already set is kept; returns bool |
| `GetCharacterCustomizationIds(Character)` | → `ids, currentId`: every preset ID with the character's gender that `SetCharacterCustomizationId` accepts (rows added through JSON included, in table order), plus the character's current preset. Added November 2026, in testing |
| `GetCustomizationPresetInfo(nil, ProfileId)` | → `ok, name, avatar`: the preset's name and thumbnail (`Texture2D`, may be nil, loaded synchronously). Added November 2026, in testing |

```lua
local ok = UE.UModLuaLibrary.SetCharacterApparel(Character, UE.EArmorType.Armor, "MyMod_Robe")
local ids, currentId = UE.UModLuaLibrary.GetCharacterCustomizationIds(Character)
```

- `Character` must be a fully initialized human disciple (`AEastRimWorldCharacter_Human`).
- `Slot` accepts only `UE.EArmorType.Helmet`, `Armor`, `Pants` and `Shoes`.
- `ApparelId` must be a row of the equipment table (`EquipmentConfig`) whose slot matches `Slot`.
- `ProfileId` must be a row of the customization preset table (`CharacterAppearancePreset`) with the same gender as the character's current preset. The sect leader and characters that use the protagonist's appearance are rejected. New bodies, faces and hairstyles can be added as rows of `CharacterAppearancePreset` and `CharacterAnatomyProfiles` through JSON (see the ParagonSunWukong example).
- Changes are stored in the character's save data and survive save/load and leaving and returning to a place. Customization presets are not affected by sect apparel.

**Personal apparel** (disciples of the player's sect who hold a post, the sect leader included):

- `SetCharacterApparel` and `ClearCharacterApparel` write the disciple's personal apparel. What the disciple shows is layered slot by slot as "equipped gear → branch uniform → personal apparel": slots set personally use the personal apparel, the other slots follow the sect apparel, or the equipped gear when the branch uniform is off.
- Toggling or saving a branch uniform, and transferring the disciple to another post, keep the personally set slots and update the rest as usual.
- If the mod that wrote the personal apparel is disabled, the personal apparel stops applying and the disciple returns to the sect apparel rules at the next sect apparel refresh (toggling a uniform, a transfer, and so on). Once the mod is enabled again, the next refresh layers it back on.
- Mods with `NewGameLoad=true` in ModInfo.json are not loaded when a save is loaded, so personal apparel they wrote does not apply after loading; do not set that field in personal apparel mods.
- Characters outside the player's sect (visitors and so on) are not managed by sect apparel; these functions change their look directly, and the first switch from "show equipped gear" to custom apparel fills the other slots with what the character currently wears.
- The sect apparel UI does not show which disciples use personal apparel.

## 5. DataTable JSON override mechanics

JSON file format:

```json
{
  "StructName": "/Script/EastRimWorld.CommonBuff",
  "Rows": {
    "RowName (usually the ID)": { "ID": "...", "Field": "Value" }
  }
}
```

- **Existing row name** → modifies that row; **new row name** → adds a row.
- `bOverrideData=false` (merge, recommended): only fields you **explicitly set to a non-default value** apply; arrays/maps are **merged** into the original.
- `bOverrideData=true` (override): arrays/maps are **replaced wholesale**; scalars still only apply when non-default.
- Field names match loosely (spaces/underscores/case ignored); a normalization collision inside one struct logs a warning — trust the documented field names.
- Asset references use full paths: soft refs `"/Game/Path/Asset.Asset"`; hard refs `"Class'/Game/Path/Asset.Asset'"` are preloaded automatically.
- **Most reliable template**: export via the CreateModPlugin packaging window in the editor — it produces correct JSON and StructName.

`StructName` of the four build menu tables (data relations and caveats in [4.6](#46-build-menu-api)):

| ConfigType | StructName |
|---|---|
| `BuildListCategorizeConfig` | `/Script/CreateModPlugin.ModBuildListCategorizeStruct` |
| `BuildTabConfig` | `/Script/CreateModPlugin.ModBuildTabStruct` |
| `BuildingUI` | `/Script/CreateModPlugin.ModBuildUIData` |
| `BuildConfig` | `/Script/CreateModPlugin.ModBuildData` |

- A category's `Icon` is an array of soft references: the paths of the normal / hovered / pressed images, in that order. In older SDKs this field was a hard reference, and the game **silently skipped the icons** when merging because the types differ (new categories had no icon) — use the updated SDK. JSON exported by the old SDK stores the icons as path strings, which the new game still reads.
- `Sort` must be unique among categories, and among the sub-tabs of one category; do not change `Category` when overriding a vanilla building's `BuildingUI` row (see 4.6).
- JSON changes are applied when the mod loads and the menu reads the tables when you enter a place, so they take effect from the next place you enter.

## 6. Sandbox restrictions (what mods cannot do)

- `io` / `os` / `require` / `loadfile` / `dofile` / `debug` are **unavailable**;
- only the single Lua file named by `MainLuaFile` is loaded — inline everything;
- **no key-binding API is provided**; use buttons for UI actions ([4.7](#47-ui-widgets-and-buttons)) and CommonUI back handling for Esc (check `Is Back Handler` in the class defaults);
- switching to a mod's own level with `OpenLevel` during play is not supported: it destroys the current world, together with the mod's widgets and timers;
- ordering between mods is controlled by dependency declarations; probe other mods with `IsModLoaded`.

## 7. Debugging

- Console command **`Mod.Status`**: every mod's state / version / load cost / timer / command / event-listener counts / error message;
- log lines are prefixed with `[YourModId]`; JSON parse failures log the **line/column** and the offending row content;
- each mod can write its own log file, with the level set by `LogLevel` in ModInfo.json — see [7.2](#72-per-mod-log-file);
- the packaging window validates before packing: ModInfo.json shape, ModId, Lua syntax, JSON existence, StructName resolution, icon / tags ini presence.

### 7.1 Using the console in release builds

Release builds have no console by default. To enable it:

1. In your Steam library, right-click the game, open **Properties**, and add `-ModConsole` to **Launch Options**;
2. in game, press `~` to open the input line, then press it again for the full window. Command output only appears in the full window;
3. enter `Mod.Status`. If you see output, the console is enabled.

The console accepts only these two kinds of commands; anything else reports `Command not allowed`:

- built-in commands starting with `Mod.`, such as `Mod.Status`;
- commands registered through `RegisterModConsoleCommand`.

Logging and debugging in release builds:

- all `ModLog` levels and runtime Lua errors appear in the console;
- output from game startup, before the console is created, does not appear. If a mod fails to load during this stage, use `Mod.Status` to see the error;
- without the console, `%LOCALAPPDATA%\EasternEra\Saved\SaveGames\log.txt` only records `Error` messages. To keep `Log` and `Warning`, set `LogLevel` in ModInfo.json (see [7.2](#72-per-mod-log-file));
- Lua `print` output is not visible in release builds, so use `ModLog` for debug output;
- the console has no auto-complete and Chinese text may not display correctly, so keep debug output in English.

### 7.2 Per-mod log file

> Added in November 2026; requires a game version that includes this feature.

Add to ModInfo.json:

```json
"LogLevel": "Log"
```

- Values: `Log` / `Warning` / `Error` / `None`. Defaults to `Warning`; an invalid value is treated as `Warning` and reported once.
- `ModLog` entries at or above that level go to `%LOCALAPPDATA%\EasternEra\Saved\SaveGames\ModLogs\<ModId>.log` (in the editor: the project's `Saved/SaveGames/ModLogs/`).
- The first time the mod logs after each game start, the previous log is renamed to `<ModId>_backup.log` and kept.
- Existing output is unchanged: `Error` still goes to `log.txt`, and with the console enabled everything still shows in the console.
- The file is UTF-8 with a BOM and can be opened in Notepad or similar while the game is running.
- Pass the first argument of `ModLog` as a plain string (e.g. `self.ModInfo.Metadata.ModId`), not `UE.FName(...)`; entries with an empty ModId are not written to the file.
- Release builds of the game before 2026-11-11 have a bug: the log file is never created (the editor is fine). The fix ships in a later game update; until then, use `-ModConsole` to see the logs (see [7.1](#71-using-the-console-in-release-builds)).

## 8. Packaging & publishing

1. Editor menu **Tools → Modding**: create mod / edit ModInfo / package mod;
2. packaging cooks assets, produces the .pak, exports config JSON and rewrites ModInfo.json; levels (`.umap`) under the mod folder (`Content/Mods/<ModId>/`) are added to the cook automatically, so they reach the pak even when no other asset references them (SDK from November 2026);
3. upload to Steam Workshop with the in-game/editor Workshop tools (title / description / preview / visibility / change notes);
4. custom GameplayTags: `IncludeGameplayTags=true` + `{ModId}GameplayTags.ini` — registered at game startup, and immediately after an in-game Workshop download completes.
