---Create a simple asset that stores data related to a particular system in an instance of this class.
---Assets can be made in the Content Browser using any native class that inherits from this.
---If you want data inheritance or a complicated hierarchy, Data Only Blueprint Classes should be created instead.
---@class UDataAsset : UObject
---@field private NativeClass TSubclassOf<UDataAsset>
local UDataAsset = {}

