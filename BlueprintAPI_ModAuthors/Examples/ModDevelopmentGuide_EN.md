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
| `UE.UModLuaLibrary.ModLog(ModId, Message, Level)` | Logging; Level = "Log"/"Warning"/"Error" |
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

### 4.3 Timers

```lua
local timerId = UE.UModLuaLibrary.RegisterModRepeatingTimer(nil, 5.0, true, fn) -- interval s, looping
UE.UModLuaLibrary.UnregisterModRepeatingTimer(timerId)
UE.UModLuaLibrary.RegisterModNextTick(nil, fn)  -- one-shot next tick (retry while world not ready)
```

### 4.4 Console commands

```lua
UE.UModLuaLibrary.RegisterModConsoleCommand("mymod.dosomething", "description", function(Args)
    -- Args: array of argument strings (split on spaces)
end)
UE.UModLuaLibrary.UnregisterModConsoleCommand("mymod.dosomething")
```

### 4.5 Replacing DataTable rows at runtime (advanced)

```lua
UE.UModLuaLibrary.ReplaceDataTableRow(DataTable, "RowName", RowStruct)
```
RowStruct must match the table's row struct. For everyday tweaks prefer the
**DataTableConfigs JSON route** (toggles with the mod, validated by packaging).

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

## 6. Sandbox restrictions (what mods cannot do)

- `io` / `os` / `require` / `loadfile` / `dofile` / `debug` are **unavailable**;
- only the single Lua file named by `MainLuaFile` is loaded — inline everything;
- **no key-binding API is provided**;
- ordering between mods is controlled by dependency declarations; probe other mods with `IsModLoaded`.

## 7. Debugging

- Console command **`Mod.Status`**: every mod's state / version / load cost / timer / command / event-listener counts / error message;
- log lines are prefixed with `[YourModId]`; JSON parse failures log the **line/column** and the offending row content;
- the packaging window validates before packing: ModInfo.json shape, ModId, Lua syntax, JSON existence, StructName resolution, icon / tags ini presence.

## 8. Packaging & publishing

1. Editor menu **Tools → Modding**: create mod / edit ModInfo / package mod;
2. packaging cooks assets, produces the .pak, exports config JSON and rewrites ModInfo.json;
3. upload to Steam Workshop with the in-game/editor Workshop tools (title / description / preview / visibility / change notes);
4. custom GameplayTags: `IncludeGameplayTags=true` + `{ModId}GameplayTags.ini` — registered at game startup, and immediately after an in-game Workshop download completes.
