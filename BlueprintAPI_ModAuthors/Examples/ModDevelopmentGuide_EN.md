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
| `NewGameLoad` | bool | true = also loaded early when the player clicks "New Game", so its configs already apply in the new-game setup screens; it is loaded as usual when entering the game world (new game or loaded save alike). See [3](#3-lifecycle) |
| `MinGameVersion` | string | Minimum required game version |
| `ModToolVersion` | string | Packaging tool version (written automatically; used for compatibility checks) |
| `Dependencies` | array | `[{"ModId":"OtherMod","MinVersion":"1.0","Required":true}]` — loaded in dependency order |
| `IncludeGameplayTags` | bool | Whether the mod ships a custom GameplayTags ini |
| `GameplayTagsIniFile` | string | Tag ini file name (defaults to `{ModId}GameplayTags.ini`) |
| `DataTableConfigs` | array | DataTable overrides `[{"ConfigType":"CommonBuff","JsonFile":"Config/xx.json","StructName":"/Script/EastRimWorld.CommonBuff","bOverrideData":false}]` |
| `DataAssetConfigs` | array | DataAsset overrides `[{"AssetType":"NewGameConfiguration","JsonFile":"...","bOverrideData":false}]` |
| `PublishedFileId` | string | Steam Workshop id (filled automatically after upload) |
| `LocalOverride` | bool | true = test an uploaded mod locally: when the copy under `Content/Mods` has the same `ModId` as a subscribed Workshop item, the local copy wins and the Workshop copy is not loaded; `Mod.Status` shows `Source=Local(Override)` and the skipped Workshop folder. Only applies to local copies. The launch option `-ModLocalOverride` does the same without editing the JSON (new in 2026-11, see [8](#8-packaging--publishing)) |
| `Settings` | array | Declared settings that players and the mod can change; values persist across saves (new in 2026-11, see [4.14](#414-mod-settings)) |

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

**When mods are loaded and unloaded** (game versions from November 2026):

- **Entering the game world** (new game, loading a save, including loading a save in-game): every mod enabled in the mod manager is loaded.
- **Mods with `NewGameLoad=true`** are also loaded early when the player clicks "New Game", so their configs already apply in the new-game setup screens; they are loaded as usual when entering the game world.
- **Before leaving the current game world** (new game, loading a save, loading a save in-game, returning to the main menu): `Mod:OnModUnloaded()` is called first, and the mod's timers, commands, event listeners, button bindings and pushed widgets are cleaned up. In the new world, Main.lua and `Mod:OnModLoaded()` run again.
  - Why: config tables and UI belong to the current world and are recreated in the new one, so the mod's changes must be applied again.
  - The .pak stays mounted.
- **Changing places** (entering a city, a battlefield, etc.) does **not** run Main.lua again.
- **Returning to the main menu** unloads every mod.

So: initialize in `OnModLoaded` (change config tables, register events), only clean up in `OnModUnloaded`, and do not assume Main.lua runs only once per game session. Do not call `DiscoverMods`, `LoadMod` or `UnloadMod` of `ModSubsystem` from Lua; the game manages mod loading.

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
| `OnGameSaving` | Before the whole save is written (**synchronous**: save data written in the callback goes into this save) | — | — |
| `OnGameSaved` | Saving finished | — | Success (true/false), SlotID |
| `OnBuildingPlaced` | The player places a building (a construction site appears; includes presets, roofs, auto pillars) | building | ConfigId, BuildGuid, BatchId, IsTransfer |
| `OnBuildingRemoved` | A building is removed (demolished, lost support, destroyed, construction cancelled, wall replaced) | — (already destroyed) | ConfigId, BuildGuid, Reason (Demolished / Collapsed / Destroyed / Cancelled / Replaced / Removed), BatchId |
| `OnItemCrafted` | A production building outputs items | building | BuildGuid, FormulaId, ItemId, Count, Quality, CrafterGuid |
| `OnDiscipleJoined` | A human joins the player sect | — | CharacterGuid, Reason (Visitor / PostStation / Recruited / Orphan / Returned / Unspecified), FromForceGuid |
| `OnDiscipleLeft` | A formal disciple leaves the player sect | — | CharacterGuid, Reason (Death / Expelled / leave reason enum name) |
| `OnContainerItemAdded` / `OnContainerItemRemoved` | Items added to or removed from a warehouse, special storage or trade area (see [4.15](#415-storage)) | the container building (nil if demolished) | ItemId, Count, Total, Reason, BuildGuid, ContainerType |
| `OnCharacterTrapped` | A disciple is judged trapped (stuck at one spot repeatedly, or a whole floor cannot reach the ground) | character | CharacterGuid, Storey, IsPlayerDisciple |
| `OnModSettingChanged` | A mod setting value changed (**synchronous**) | — | ModId, Key, Value |

The 7 build events are all broadcast **on the next tick**; callbacks read the latest state.

The events added in 2026-11 (except `OnGameSaving` and `OnModSettingChanged`) are also sent on the **next frame**; building and storage changes during loading or place changes send no events. When `OnLoadGameComplete` fires, characters and buildings are not spawned yet; wait for the following `OnEnterPlaceComplete` to work with them. Demolishing an area sends one event per building in the same frame with the same `BatchId`. Deaths outside the home base (battles, secret realms, cities) do not go through the sect roster leave flow and send no `OnDiscipleLeft`; listen to `OnCharacterDeath` as well.

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
  - once the map loads, the preview character takes over player control and keeps animating while the game is paused; the view stays on a level camera in the map (outside the studio it may not face the stage). To use your own camera, call `SetViewTargetWithBlend(Camera, 0)`: the blend time must be 0 (blending runs on game time and stalls while paused), and move the camera every frame from a real-time timer. Do not enable the plugin's studio camera `CameraStudio` in the map; its interpolation stalls while the game is paused;
  - open sub-pages with `PushModWidgetToLayer(nil, "Menu" or "Modal", Class)` — this does not close the map; close your sub-pages yourself before closing the main widget;
  - game-time timers practically stop while the game is paused; use `RegisterModRealTimeTimer` (see [4.3](#43-timers)).
- Closing: press Esc or call `DeactivateWidget()`. Once the widget leaves the layer stack, the map closes automatically and the place HUD returns. Game speed is back at 1 afterwards (every loading screen resets it to 1, same as the original apparel UI).
- The target disciple is only checked when opening; if it later leaves or dies, `GetCharacterEditorTargetCharacter()` returns nil, so check before use.

**Studio (when a target disciple is passed)**

> Added in November 2026; requires a game version that includes this API.

- With a valid Guid, the preview character in the map takes on the target disciple's current look (body, face, hair, apparel, colors) and acts as a display-only stand-in. The disciple stays where they are and is never moved.
- After a successful call on **the target disciple** to `SetCharacterApparel`, `ClearCharacterApparel`, `RemoveCharacterPersonalApparel`, `ResetCharacterApparels` or `SetCharacterCustomizationId` from [4.9](#49-character-appearance-and-personal-apparel), the stand-in refreshes on the next frame. Changes go straight into the disciple's save data, so nothing needs to be written back when the map closes.
- To support "cancel", record the personal apparel and current preset with `GetCharacterPersonalApparels` and `GetCharacterCustomizationIds` when entering, and write them back on cancel.
- The stand-in appears already standing on the stage, with no entrance animation, and then plays its idle animation while the game is paused.
- View: a level camera in the map, placed at the default front shot of the stand-in (the framing designed by the plugin) when the studio opens.
- Camera controls: use the studio camera functions in the table above (orbit, distance, height, reset). They change the shot parameters and immediately move that level camera into place, even while the game is paused. How buttons, dragging or the mouse wheel map onto them is up to the mod.
- There are two ways to build a turntable:
  - Orbit the camera: call `SetCharacterEditorCameraOrbit` every frame from a real-time timer. The lights stay fixed relative to the stand-in, so the lit side changes as the camera moves.
  - Rotate the stand-in: the camera and lights stay still, like a real turntable. Get the stand-in with `GetCharacterEditorPreviewCharacter()` and call `K2_SetActorRotation(UE.FRotator(0, yaw, 0), false)` every frame from a real-time timer. The camera functions still work while the stand-in is turned: shots are always computed from the stand-in's facing when the studio opened, so the camera does not jump to the stand-in's current front. `ResetCharacterEditorCamera` does not reset the stand-in's facing; to restore it, record `K2_GetActorRotation()` when the studio opens and write it back.
- Lighting matches the sect apparel editor: opening the studio disables every enabled post-process volume in the scene (the map's own volume darkens the image and adds a heavy vignette), and closing the map restores them. If you add your own post-process volume, add it after the studio opens.
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
| `GetCharacterApparel(Character)` | What the character currently shows, as a "slot → apparel ID" map (the layered result when sect uniform or personal apparel is in use, otherwise the equipped gear; empty slots are left out). Works for visitors too. Added 2026-11 (in testing) |
| `SetCharacterCustomizationId(Character, ProfileId)` | Switches the customization preset (body, face, hair); apparel already set is kept; returns bool. Since November 2026 the chosen preset is stored in the mod data area (see [4.10](#410-customization-body-face-hair-colors)) instead of changing the character's own preset, so the character goes back to its own preset when the mod that wrote it is disabled. Switching the preset also clears this character's customization edits from 4.10 |
| `GetCharacterCustomizationIds(Character)` | → `ids, currentId`: every preset ID with the character's gender that `SetCharacterCustomizationId` accepts (rows added through JSON included, in table order), plus the character's current preset. Added November 2026. |
| `GetCustomizationPresetInfo(nil, ProfileId)` | → `ok, name, avatar`: the preset's name and thumbnail (`Texture2D`, may be nil, loaded synchronously). Added November 2026. |

```lua
local ok = UE.UModLuaLibrary.SetCharacterApparel(Character, UE.EArmorType.Armor, "MyMod_Robe")
local ids, currentId = UE.UModLuaLibrary.GetCharacterCustomizationIds(Character)
```

- `Character` must be a fully initialized human disciple (`AEastRimWorldCharacter_Human`).
- `Slot` accepts `UE.EArmorType.Helmet`, `Armor`, `Pants`, `Shoes`; since 2026-11 also `Accessory`, `Hairpin`, `Underwear` (lower underwear), `UpperUnderwear`, `Socks` (socks, stockings, leg wraps) and `Back` (capes, shoulder pieces, back items) (in testing). The equipment panel does not show the new slots yet; mods dress them with the functions in this section. Different slots show at the same time, so underwear, stockings and trousers can be layered; see "Layered apparel" below.
- `ApparelId` must be a row of the equipment table (`EquipmentConfig`) whose slot matches `Slot`, and the appearance asset (CDA) for the character's gender must be of the appearance class of that slot (table below); otherwise the call returns false and writes to the mod log.
- `ProfileId` must be a row of the customization preset table (`CharacterAppearancePreset`) with the same gender as the character's current preset. The sect leader and characters that use the protagonist's appearance are rejected. New bodies, faces and hairstyles can be added as rows of `CharacterAppearancePreset` and `CharacterAnatomyProfiles` through JSON (see the ParagonSunWukong example).
- In game versions before November 2026, the gender check in `SetCharacterCustomizationId` read the wrong field of the preset table, so it returned false even for presets of the same gender. Versions that include `GetCharacterCustomizationIds` have the fix.
- Apparel changes are stored in the character's save data and the chosen preset in the mod data area; both survive save/load and leaving and returning to a place. Customization presets are not affected by sect apparel.

**Personal apparel** (disciples of the player's sect who hold a post, the sect leader included):

- `SetCharacterApparel` and `ClearCharacterApparel` write the disciple's personal apparel. What the disciple shows is layered slot by slot as "equipped gear → branch uniform → personal apparel": slots set personally use the personal apparel, the other slots follow the sect apparel, or the equipped gear when the branch uniform is off.
- Toggling or saving a branch uniform, and transferring the disciple to another post, keep the personally set slots and update the rest as usual.
- If the mod that wrote the personal apparel is disabled, the personal apparel stops applying and the disciple returns to the sect apparel rules at the next sect apparel refresh (toggling a uniform, a transfer, and so on). Once the mod is enabled again, the next refresh layers it back on.
- `NewGameLoad=true` in ModInfo.json only makes a mod load early during new-game setup; it is still loaded when a save is loaded, so it has no effect on personal apparel. Earlier versions of this guide said such mods are not loaded when loading a save; that was wrong.
- Characters outside the player's sect (visitors and so on) are not managed by sect apparel; these functions change their look directly, and the first switch from "show equipped gear" to custom apparel fills the other slots with what the character currently wears.
- The sect apparel UI does not show which disciples use personal apparel.

**Layered apparel** (added 2026-11, in testing):

The character customizer layers apparel by the **class** of the appearance asset: every garment is its own mesh following the body pose, one garment per class, and different classes show together; the classes listed in a garment's `HiddenCDA_Classes` are hidden while it is worn. Each slot maps to one class:

| Slot `EArmorType` | Appearance class | Hidden by official clothes? |
|---|---|---|
| `Helmet` | `BP_CDA_Apparel_Hat` | — |
| `Hairpin` | `BP_CDA_Apparel_Glasses` | not by hats |
| `Armor` | `BP_CDA_Apparel_UpperBody` | — |
| `UpperUnderwear` | `BP_CDA_Apparel_UpperUnderWear` | by official tops |
| `Accessory` | `BP_CDA_Apparel_Accessory` | **by every official top**; use it for bracers and the like |
| `Back` | `BP_CDA_Apparel_Back` (new class, 2026-11) | no; use it for capes and back items |
| `Pants` | `BP_CDA_Apparel_LowerBody` | — |
| `Underwear` | `BP_CDA_Apparel_Underwear` | by official trousers |
| `Socks` | `BP_CDA_Apparel_Socks` | by official trousers |
| `Shoes` | `BP_CDA_Apparel_Feet` | — |

- Whether an outer layer hides an inner one is decided by the outer asset's `HiddenCDA_Classes`: leave `BP_CDA_Apparel_Socks_C` out of your skirt and the stockings show through.
- Clearing either underwear slot brings the default underwear back.
- Layers are separate meshes; avoid z-fighting in the model by making outer layers slightly larger. There is no render-order switch.
- One garment per layer (two pairs of stockings cannot be stacked).
- If an asset's class does not match its slot, the garment cannot be taken off again. With `-ModConsole`, run `Mod.CheckApparel [ModId]` to check the apparel rows of your mod's JSON: rows whose class does not match, rows missing a male/female asset, assets that fail to load.
- Since 2026-11 the `ArmorType` written in a mod apparel row takes effect (it used to be dropped and inherited from `TemplateID`); leave it out to keep the template's slot. When the slot differs from the template's, the male/female appearance assets are not inherited from the template: only the ones you write are used (female-only items show nothing on male characters in that layer).
- Layer selection in the sect apparel UI comes later; until then dress layers with the functions in this section.

### 4.10 Customization: body, face, hair, colors

> Added in November 2026; requires a game version that includes this API.

| API (`UE.UModLuaLibrary`) | Notes |
|---|---|
| `GetCharacterShapeParams(Character)` | → array of the adjustable body and face sliders; each item has `ID`, `DisplayName`, `Category`, `Value` (current value), `MinValue`, `MaxValue`, `DefaultValue` |
| `SetCharacterShapeParam(Character, ParamId, Value)` | Sets one slider; the value is clamped to the slider range; returns bool |
| `GetCharacterColorParams(Character)` | → array of the adjustable colors; each item has `ID`, `DisplayName`, `Color` (`FLinearColor`), `bHasValue` (whether the character's profile has this color; `Color` is white when it does not) |
| `SetCharacterColorParam(Character, ParamId, Color)` | Sets one color; returns bool |
| `GetHairstyleSlots(WorldContext)` | → array of hairstyle slots with `ID`, `DisplayName`, `bAllowEmpty`; currently `Head` (hair) and `Beard` (may be empty). Pass `self.ModInfo` as `WorldContext` |
| `GetCharacterHairstyles(Character, SlotId)` | → `options, currentId`: hairstyles of this slot that fit the character's current anatomy (each with `HairstyleId`, `DisplayName`, `Icon`), plus the character's current hairstyle ID |
| `SetCharacterHairstyle(Character, SlotId, HairstyleId)` | Switches the hairstyle; `HairstyleId` comes from `GetCharacterHairstyles`; pass an empty string to remove the hairstyle of a slot that may be empty; returns bool |
| `ResetCharacterCustomization(Character)` | Undoes every customization change a mod made to this character (body, face, hair, colors, the switched body type, body parts and the chosen preset) and returns to the game's own look; returns bool |

```lua
local params = UE.UModLuaLibrary.GetCharacterShapeParams(Character)
for i = 1, params:Num() do
    local p = params[i]
    self:Log(string.format("%s %.3f [%.3f, %.3f]", tostring(p.ID), p.Value, p.MinValue, p.MaxValue))
end
UE.UModLuaLibrary.SetCharacterShapeParam(Character, "Body_Size", 0.8)
UE.UModLuaLibrary.SetCharacterColorParam(Character, "SkinTint", UE.FLinearColor(0.8, 0.6, 0.5, 1))
local options, currentId = UE.UModLuaLibrary.GetCharacterHairstyles(Character, "Head")
UE.UModLuaLibrary.SetCharacterHairstyle(Character, "Head", options[1].HairstyleId)
```

- The sliders and colors follow the official sect apparel UI, with the same ranges (see the table below). `Body_Size` (height) drives an animation blend parameter; `Body_Age` changes an animation blend parameter, a morph target and a skin parameter together, exactly like the official UI. Parameters that are not in the table are rejected.
- The sect leader and every character registered in the world can be edited. Stand-ins and other characters that use the sect leader's appearance follow the sect leader, so edit the sect leader instead. Temporary characters created for arenas, sparring or tests are rejected.
- The write functions (Set and Reset) can only be called from a mod's Lua, because the game records which mod made the change.
- Changes apply to the character immediately, and the stand-in in the character editor map follows on the next frame. They are saved with the game and survive save/load, leaving and returning to a place, and sect battles.
- **Mod data is stored separately and never changes the game's own data**: a mod's changes are kept per character in a separate part of the save. When the mod that wrote them is disabled or removed, the character shows the game's own look and the mod's changes are kept unchanged; they come back after the mod is enabled again and the save is loaded. Players without your mod can load the save normally.
- Temporary copies of a character (arena fighters, prison break copies and so on) show the character's own look.
- You may call the setters every frame while a slider is dragged. "Cancel" is up to the mod: record the original values with the Get functions when your UI opens and write them back on cancel, or call `ResetCharacterCustomization`.
- If a setter returns false, the character's look is restored to what it was before the call.

Slider `ParamId`s:

| ID | Name | Range | Notes |
|---|---|---|---|
| `Body_Size` | Height | 0.470 to 1.0 | animation blend parameter `size` |
| `Body_Age` | Age | 0 to 0.346 | animation blend `Age`, morph target `body_age` and skin parameter `Age` together |
| `Eyes_MorphTarget_Size` | Eye size | -1 to 1 | morph target `Eye_01` |
| `Eyes_MorphTarget_Depth` | Eye depth | -1 to 1 | morph target `Eye_02` |
| `Ear_MorphTarget_Morph01` | Ear length | -1 to 1 | morph target `Ear_01` |
| `Jaw_MorphTarget_Height` | Jaw height | -1 to 1 | morph target `Jaw_01` |
| `Mouth_MorphTarget_Depth` | Mouth depth | -1 to 1 | morph target `Mouth_01` |
| `Nose_MorphTarget_Height` | Nose height | -1 to 1 | morph target `Nose_01` |
| `Face_CheekBone` | Cheekbone | -1 to 1 | morph target `Sculpt_CheekBone` (from the new game character editor) |
| `Face_LipLower` | Lower lip | -1 to 1 | morph target `Sculpt_LipLower` (same) |
| `Face_NoseBridge` | Nose bridge | -1 to 1 | morph target `Sculpt_NoseBridge` (same) |
| `Face_BrowHeight`, `Face_BrowRidge`, `Face_EyeDistance`, `Face_EyeCant`, `Face_EyeLid`, `Face_CheekFull`, `Face_ChinDepth`, `Face_ChinLength`, `Face_JawAngle`, `Face_JawWidth`, `Face_LipUpper`, `Face_MouthWidth`, `Face_NoseTipHeight`, `Face_NoseTipDepth`, `Face_NoseWidth` | the other 15 face sliders of the new-game character creator | -1 to 1 | morph targets `Sculpt_<name>` (added 2026-11, in testing) |
| `EyeRoughness` | Eye shadow roughness | 0 to 1 | skin material parameter `Eye Roughness` |
| `LipsRoughness` | Lip gloss | 1.5 to 0.35 | skin material parameter `Lips Roughness` (the official slider runs from high to low) |

Color `ParamId`s: `SkinTint` (skin), `LipsTint` (lips), `TattooTint` (tattoo), `Eyes_IrisHueColor` (iris), `HDR_ColorPicker_Hair_Root` (hair, material parameter `TipColor`).

`Category` values are `Body`, `Ear`, `Eyes`, `Jaw`, `Mouth`, `Nose`, `Face`, `Skin`. The display names of `Jaw_MorphTarget_Height` and `Nose_MorphTarget_Height` are just "height" and need the category next to them; `EyeRoughness`, `LipsRoughness`, `LipsTint` and `TattooTint` have no proper names in the official UI either. Match on `ID`.

#### Body types and body parts (ears, tails, ...)

> Added 2026-11, in testing.

| API (`UE.UModLuaLibrary`) | Notes |
|---|---|
| `GetCharacterBodyTypeId(Character)` | → the character's body type (a `CharacterAnatomyProfiles` row name such as `ERWFemaleAdult`) |
| `GetCharacterBodyTypes(Character)` | → switchable body types (`ID`, `DisplayName`, `Icon`, `bCurrent`): rows of the `CharacterBodyTypes` table with the character's gender and race |
| `SetCharacterBodyType(Character, BodyTypeId)` | Switches only the body type; slider values, hair, colors and apparel stay; returns bool |
| `GetCharacterBodyPartSlots(Character)` | → body part slots for the current body type (`ID`, `DisplayName`, `bAllowEmpty`) |
| `GetCharacterBodyPartOptions(Character, SlotId)` | → parts of a slot (`PartId`, `DisplayName`, `Icon`), filtered by the asset's body types |
| `GetCharacterBodyPart(Character, SlotId)` | → `worn, partId`; false when nothing is worn; `partId` is None when the worn asset is not in the table |
| `SetCharacterBodyPart(Character, SlotId, PartId)` | Changes the part; an empty string removes it (only for slots that allow empty); returns bool |

- The customizer's own "set anatomy" replaces the whole profile with that body's default (all face edits gone); this API only changes the body type in the profile. The head is matched by mesh in the target body type (the first head otherwise). Same gender and race only. Works for the sect master too.
- Add the body type itself to `CharacterAnatomyProfiles` as before (registered as human, using the game's humanoid skeleton), then register it in `CharacterBodyTypes` (`/Script/EastRimWorld.ModBodyTypeConfig`): row name = body type ID, `BaseAnatomy` = the official body type to match when listing hairstyles and parts (official hairstyles never list your body type), `DisplayName`, `Icon`. The official human body types are already registered. If the body type row disappears (the mod that added it is disabled), the character shows its original look.
- A body part slot is an appearance class: create a subclass of `BP_CDA_Apparel` in your own pak (e.g. `BP_CDA_Apparel_YaoEar`); each ear or tail is an asset of that class skinned to the game skeleton, with `Anatomies` listing the body types (empty = any). Equipment never touches these classes, so ears do not replace hats and tails do not replace trousers. The class must not be one used by any equipment slot.
- Slot table `CharacterBodyPartSlots` (`/Script/EastRimWorld.ModBodyPartSlotConfig`): `DisplayName`, `CDAClass` (full class path ending in `_C`), `bAllowEmpty`, `BodyTypeIds` (empty = all). Part table `CharacterBodyParts` (`/Script/EastRimWorld.ModBodyPartConfig`): `SlotId`, `CDA`, `DisplayName`, `Icon`.
- Parts follow the body pose; bones the body skeleton does not have (tail bones) stay in the bind pose.
- Body types and parts are stored in the mod data area like other customization edits: saved with the game, hidden while the mod is disabled, restored when it is enabled again, undone by `ResetCharacterCustomization`. Write functions must be called from a mod's Lua.

### 4.11 Portraits

> Added in November 2026; requires a game version that includes this API.

| API (`UE.UModLuaLibrary`) | Notes |
|---|---|
| `GetCharacterAvatarConfigId(Character)` | → the portrait row in effect: the one a mod set first, otherwise the character's own portrait config; None when neither exists |
| `SetCharacterAvatarConfigId(Character, AvatarConfigId)` | Assigns a row of the portrait table (`CharacterAvatarConfig`) to the character; returns bool |
| `ResetCharacterAvatar(Character)` | Removes the portrait a mod assigned; returns bool |

- Add new portraits as rows of the portrait table through JSON: `ConfigType` is `CharacterAvatarConfig` and `StructName` is `/Script/EastRimWorld.CharacterAvatarConfig`. The five images of a row are soft references, so write full asset paths: `Avatar` (head icon), `HalfAvatar` (half-body portrait), `HalfUIAvatar` (half-body portrait for UI), `HalfTourAvatar` (tournament half-body portrait), `SmallTourAvatar` (tournament small image).
- The sect leader and every character registered in the world can be assigned a portrait, with the same rules as 4.10. The assigned portrait is stored in the mod data area and does not change the character's own portrait config; when the mod that wrote it is disabled the character shows its own portrait again, including in the graveyard.
- UIs that are already open show the new portrait after they are closed and reopened.

### 4.12 A mod's own data (shared across saves)

> Added in November 2026; requires a game version that includes this API.

| API (`UE.UModLuaLibrary`) | Notes |
|---|---|
| `SetModData(Key, Value)` | Stores one entry and writes it to disk right away; returns bool |
| `GetModData(Key)` | → `ok, value`; `ok` is false when the entry does not exist |
| `RemoveModData(Key)` | Removes one entry and writes the file right away; returns bool |
| `GetModDataKeys()` | → all keys |

```lua
UE.UModLuaLibrary.SetModData("outfits", '{"list":["white","teal"]}')
local ok, text = UE.UModLuaLibrary.GetModData("outfits")
```

- Each mod has one file under `Saved/SaveGames/ModData/`. The data is shared across saves: it stays when the player switches saves or restarts the game. A mod can only read and write its own data.
- Keys and values are strings; the value format is up to you (JSON text is fine). Keys are case-insensitive and 1 to 128 characters long. A value may hold up to 1M characters, and one mod up to 16M characters and 65,536 entries in total; beyond that the call returns false and writes to the mod log.
- These functions can only be called from a mod's Lua. Data that should follow a particular save belongs in the 4.10 and 4.11 APIs or in the game's own save data, not here.

### 4.13 Per-save data and playthrough ID

> New in 2026-11 (in testing); requires a game version that includes it.

| API (`UE.UModLuaLibrary`) | Description |
|---|---|
| `SetSaveData(Key, Value)` | Write one entry in memory; it goes into the save the next time the game saves. Returns bool |
| `GetSaveData(Key)` | → `ok, value` |
| `RemoveSaveData(Key)` | Remove one entry. Returns bool |
| `GetSaveDataKeys()` | → all keys of this mod in the current save |
| `IsSaveDataReady()` | Whether the current save's data is ready |
| `GetPlaythroughId()` | Playthrough ID (GUID string); empty when not ready |

- The data travels with the save (one copy per save), and a mod can only read and write its own. When the mod is disabled the data stays in the save and comes back when it is re-enabled.
- Available from `OnNewGameStarted` / `OnLoadGameComplete`. At the top level of `Main.lua` or in `OnModLoaded` the data has not been read yet: Get returns false and Set fails with a log entry.
- If you load without saving after a write, the value goes back to what was saved. To write right before saving, listen to the synchronous `OnGameSaving` event.
- Keys are 1-128 characters, a value is at most 64K characters, and one mod has at most 1M characters and 4096 entries in total.
- Playthrough ID: generated for a new game and kept by save-as and autosaves. Saves from before 2026-11 get a fixed value derived from the current sect leader the first time they are loaded, written on the next save. Sect and leader SGUIDs are the same in every playthrough; use this ID to tell playthroughs apart.

### 4.14 Mod settings

> New in 2026-11 (in testing). The settings panel UI is still being made; until then players change settings with the console commands `Mod.Settings` and `Mod.Set`.

Declare them in `ModInfo.json`:

```json
"Settings": [
  { "Key": "Enabled", "Type": "bool", "Default": true, "NameKey": "MyMod_Setting_Enabled" },
  { "Key": "Speed", "Type": "int", "Default": 3, "Min": 1, "Max": 10, "Step": 1 },
  { "Key": "Mode", "Type": "enum", "Default": "Normal", "Options": ["Easy", "Normal", "Hard"] }
]
```

| Field | Description |
|---|---|
| `Key` | 1-64 characters, must not start with `__` |
| `Type` | `bool` / `int` / `float` / `enum` / `string` |
| `Default` | Default value; when omitted: false for bool, 0 for numbers, the first option for enum, empty for string |
| `Min` / `Max` / `Step` | Numeric range and panel step; out-of-range values are clamped |
| `Options` | Allowed values for enum |
| `NameKey` / `DescKey` | String table keys for the display name and description (used by the settings panel) |

| API (`UE.UModLuaLibrary`) | Description |
|---|---|
| `GetModSetting(Key)` | → `ok, value`: the current value as text (`true`/`false` for bool); the default when never changed |
| `SetModSetting(Key, Value)` | Validate against the declaration and save; broadcasts `OnModSettingChanged` when the value changes. Returns bool |
| `GetModSettings()` | → current values of all settings (key → text) |

- Values are kept across saves in this mod's data file (same as [4.12](#412-a-mods-own-data-shared-across-saves)); `SetModData` cannot write the keys used by settings.
- Console: `Mod.Settings [ModId]` lists declarations and values; `Mod.Set <ModId> <Key> <Value>` changes one.
- Invalid declarations (wrong type, enum without options, Key starting with `__`) are skipped with a log entry.

### 4.15 Storage

> New in 2026-11 (in testing).

**Safe transfer** (`UE.UModStorageLibrary`):

| API | Description |
|---|---|
| `GetAcceptableItemCount(Container, ItemId)` | How many the warehouse can take right now (space reserved by disciples hauling there counts as taken; 0 when the storage filter rejects the item, or the warehouse is keep-clear, prohibited or being relocated) |
| `TransferItems(From, To, ItemId, Count)` | Move items and return the number actually moved; the source is reduced only after the target has taken them, anything that does not fit stays in the source |

- The first version supports warehouse → warehouse and ground item pile → warehouse.
- Only unused items are moved: amounts reserved by disciples, equipment and books assigned to a disciple, and food left for prisoners are kept; equipment and books move as whole items.
- Do not use the game's internal transfer functions (such as `InventoryItemInstanceTransferToOtherManager`) to move items into warehouses: they reduce the source first and ignore whether the target took the items, so overflow is lost.

**Item home building** (`UE.UModStorageLibrary`):

| API | Description |
|---|---|
| `SetItemHomeBuilding(Warehouse, ItemId, bExclusive)` | Make the warehouse a home for the item. Returns bool |
| `ClearItemHomeBuilding(Warehouse, ItemId)` | Remove that rule. Returns bool |
| `GetItemHomeBuildings(nil, ItemId)` | → home warehouses of the item (active rules only) |
| `GetBuildingHomeItems(Warehouse)` | → item IDs this warehouse is home for |

- Exclusive (`bExclusive=true`): no other warehouse takes the item. Preferred: other warehouses do not take it while a home warehouse can; when all home warehouses are full the normal rules apply.
- Rules are saved with the game and disappear with the building; while the mod that wrote a rule is disabled the rule is ignored but kept.
- Items already stored elsewhere are not moved to the home warehouse. With an exclusive rule, if the home warehouse is keep-clear or its filter rejects the item, the item has nowhere to go.
- To order warehouses use `SetStoragePriority`; per-item scoring callbacks are not supported (haul planning never calls Lua).

**Storage events**: `OnContainerItemAdded` / `OnContainerItemRemoved` (see [4.2](#42-game-event-subscription-the-recommended-gameplay-hook)). Sent on the next frame as the net change per (container, item). `Reason` is `Haul`, `Pickup`, `Consume`, `Spoil`, `Demolish` (dropped when demolishing), `Mod` (`TransferItems`), `Other`, or `Mixed` when one frame has several reasons; `Total` is the current count of the item in that container. Backpacks and ground item piles send no events.

**Storage setters** (existing, Blueprint-callable):

| Function | On | Description |
|---|---|---|
| `SetStoragePriority(Priority)` | warehouse building (`AGOAP_ActorBase`) | Storage priority; use this instead of writing the `StoragePriority` property (that does not refresh hauling) |
| `AddNotPutInItemTag` / `SetNotPutInItemTag` / `RemoveNotPutInItemTag` | the warehouse's `InventoryManagerComponent` | Storage filter (item tags not to store) |
| `SetCanUseGridNum` / `GetCanUseGridNum` | same | Usable grid count |
| `AllSelectStorageTag` / `CancelAllSelectStorageTag` | warehouse building (`ABuildingActorBase`) | Select all / none in the filter |
| `SetCommonButtonState(KeepClear / ProhibitionUse, bState)` | building common buttons | Keep clear, prohibit use |
| `IsWarehouseFull`, `GetWarehouseState`, `CanPlaceItemInWarehouseByItemData`, `GetRegisteredWarehouses` | `UWarehouseManagerSubsystem` | Read-only queries |

Reservation functions such as `TryReserveWarehouseFromTransportPlans` are internal; do not call them.

### 4.16 AI: work priority and stuck plans

> New in 2026-11 (in testing).

| API (`UE.UModAILibrary`) | Description |
|---|---|
| `SetCharacterWorkPriority(Character, GoalId, Priority, bCreateIfMissing)` | Set a disciple's priority for one work goal. Returns bool; the reason for a failure is logged |
| `GetCharacterWorkPriority(Character, GoalId)` | → `ok, priority` |
| `IsCustomWorkPriorityEnabled()` | Whether the save uses custom work priorities |
| `ResetCharacterPlan(Character, bForgetUnreachable)` | Abort the disciple's current plan (reservations and claims are released, carried items are put down), then the disciple looks for work as usual. Returns bool |

- Priorities follow the work priority panel: 0 = do not do this work, other values are the game's configured levels (the failure log lists the valid values). Only work goals the disciple has are accepted. Priorities only affect work assignment when custom work priorities are enabled.
- The existing `UpdateGoalPriority` is unchanged (it does nothing when the goal is not in the table); use `SetCharacterWorkPriority` instead.
- `ResetCharacterPlan` only works on disciples of the player sect. It returns false while a saved plan is being restored, before the world finishes initializing, or while the current action is already ending; try again later. `bForgetUnreachable=true` also clears the trapped state and the "temporarily unreachable" records. It does not teleport; in a narrow corridor the disciple may pick the same target again.
- Listen to `OnCharacterTrapped` to react when a disciple is judged trapped.

### 4.17 GameplayTag safety

> New in 2026-11 (in testing).

| API (`UE.UModLuaLibrary`) | Description |
|---|---|
| `RequestGameplayTag(Name)` | → `ok, tag`: get a registered tag by name; false when not found, no error; `tag` is a copy |
| `IsValidGameplayTag(Tag)` | Whether the tag is registered (a hand-filled `TagName` that is not registered returns false) |
| `GetGameplayTagName(Tag)` | The tag name |

- In Lua keep only tag name strings and call `RequestGameplayTag` when you need the tag. Do not keep references to `FGameplayTag` structs, or to the arrays and maps holding them, across callbacks: using them after the owner is freed or the array grows crashes the game.
- If you hit a crash, please send us the call stack.

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

- `io` / `os` / `require` / `loadfile` / `dofile` / `debug` are **unavailable**; use `SetModData` from [4.12](#412-a-mods-own-data-shared-across-saves) to persist your own data;
- only the single Lua file named by `MainLuaFile` is loaded — inline everything;
- **no key-binding API is provided**; use buttons for UI actions ([4.7](#47-ui-widgets-and-buttons)) and CommonUI back handling for Esc (check `Is Back Handler` in the class defaults);
- switching to a mod's own level with `OpenLevel` during play is not supported: it destroys the current world, together with the mod's widgets and timers;
- ordering between mods is controlled by dependency declarations; probe other mods with `IsModLoaded`.

## 7. Debugging

- Console command **`Mod.Status`**: every mod's state / version / load cost / timer / command / event-listener counts / error message;
- log lines are prefixed with `[YourModId]`; JSON parse failures log the **line/column** and the offending row content;
- each mod can write its own log file, with the level set by `LogLevel` in ModInfo.json — see [7.2](#72-per-mod-log-file);
- the packaging window validates before packing: ModInfo.json shape, ModId, Lua syntax, JSON existence, StructName resolution, icon / tags ini presence.
- New built-in commands in 2026-11: `Mod.Settings [ModId]`, `Mod.Set <ModId> <Key> <Value>` (see [4.14](#414-mod-settings)) and `Mod.ExportUsmap` (see [7.3](#73-exporting-a-usmap-mappings-file)); `Mod.Status` now shows `Source` (Local / Local(Override) / Workshop) and the overridden Workshop folder.

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

### 7.3 Exporting a usmap mappings file

> New in 2026-11 (in testing).

Release builds store assets with unversioned properties, so tools like FModel need a mappings file to read them. After each game update, export one in the game:

1. Start the game with `-ModConsole` and load a save (so Blueprint types are loaded);
2. Type `Mod.ExportUsmap` in the console;
3. The file is written to `%LOCALAPPDATA%\EasternEra\Saved\ModTools\EasternEra_<time>.usmap`; the console shows the path and entry counts.

The format is usmap version 3 (LargeEnums, uncompressed, no engine version info), the same as **Tools → Modding → Export Usmap** in the SDK editor; FModel and UAssetGUI can read it. The in-game export only contains types loaded at export time; the SDK editor export only contains types present in the SDK project, so the two complement each other.

## 8. Packaging & publishing

1. Editor menu **Tools → Modding**: create mod / edit ModInfo / package mod;
2. packaging cooks assets, produces the .pak, exports config JSON and rewrites ModInfo.json; levels (`.umap`) under the mod folder (`Content/Mods/<ModId>/`) are added to the cook automatically, so they reach the pak even when no other asset references them (SDK from November 2026);
3. upload to Steam Workshop with the in-game/editor Workshop tools (title / description / preview / visibility / change notes);
   - Testing an uploaded mod locally: add `"LocalOverride": true` to the ModInfo.json of the copy under `Content/Mods` (or use the launch option `-ModLocalOverride`); with the same ModId the local copy wins and the subscribed Workshop copy is not loaded. Check `Source=Local(Override)` with `Mod.Status`. New in 2026-11 (in testing).
4. custom GameplayTags: `IncludeGameplayTags=true` + `{ModId}GameplayTags.ini` — registered at game startup, and immediately after an in-game Workshop download completes.
