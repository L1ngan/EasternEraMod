---@class UAsyncActionLoadPrimaryAssetList : UAsyncActionLoadPrimaryAssetBase
---@field public Completed MulticastDelegate
local UAsyncActionLoadPrimaryAssetList = {}

---Load a list of primary asset objects into memory, this will cause them to stay loaded until explicitly unloaded.
---The completed event will happen when the load succeeds or fails, and the Loaded list will contain all of the requested assets found at completion.
---If LoadBundles is specified, those bundles are loaded along with the assets.
---@param WorldContextObject UObject
---@param PrimaryAssetList TArray_FPrimaryAssetId_
---@param LoadBundles TArray_string_
---@return UAsyncActionLoadPrimaryAssetList
function UAsyncActionLoadPrimaryAssetList.AsyncLoadPrimaryAssetList(WorldContextObject, PrimaryAssetList, LoadBundles) end

