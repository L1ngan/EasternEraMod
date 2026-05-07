---@class ULevelStreamingDynamic : ULevelStreaming
---@field public bInitiallyLoaded boolean @Whether the level should be loaded at startup
---@field public bInitiallyVisible boolean @Whether the level should be visible at startup if it is loaded
local ULevelStreamingDynamic = {}

---@param WorldContextObject UObject
---@param Level TSoftObjectPtr_UWorld_
---@param Location FVector
---@param Rotation FRotator
---@param bOutSuccess boolean @[out] 
---@param OptionalLevelNameOverride string
---@param OptionalLevelStreamingClass TSubclassOf_ULevelStreamingDynamic_ @[opt] 
---@param bLoadAsTempPackage boolean @[opt] 
---@return ULevelStreamingDynamic
function ULevelStreamingDynamic.LoadLevelInstanceBySoftObjectPtr(WorldContextObject, Level, Location, Rotation, bOutSuccess, OptionalLevelNameOverride, OptionalLevelStreamingClass, bLoadAsTempPackage) end

---Stream in a level with a specific location and rotation. You can create multiple instances of the same level!
---The level to be loaded does not have to be in the persistent map's Levels list, however to ensure that the .umap does get
---packaged, please be sure to include the .umap in your Packaging Settings:
---  Project Settings -> Packaging -> List of Maps to Include in a Packaged Build (you may have to show advanced or type in filter)
---@param WorldContextObject UObject
---@param LevelName string
---@param Location FVector
---@param Rotation FRotator
---@param bOutSuccess boolean @[out] 
---@param OptionalLevelNameOverride string
---@param OptionalLevelStreamingClass TSubclassOf_ULevelStreamingDynamic_ @[opt] 
---@param bLoadAsTempPackage boolean @[opt] 
---@return ULevelStreamingDynamic
function ULevelStreamingDynamic.LoadLevelInstance(WorldContextObject, LevelName, Location, Rotation, bOutSuccess, OptionalLevelNameOverride, OptionalLevelStreamingClass, bLoadAsTempPackage) end

