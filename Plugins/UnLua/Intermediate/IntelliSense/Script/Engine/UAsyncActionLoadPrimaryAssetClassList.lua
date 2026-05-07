---@class UAsyncActionLoadPrimaryAssetClassList : UAsyncActionLoadPrimaryAssetBase
---@field public Completed MulticastDelegate
local UAsyncActionLoadPrimaryAssetClassList = {}

---Load a list of primary asset classes into memory, this will cause them to stay loaded until explicitly unloaded.
---The completed event will happen when the load succeeds or fails, and the Loaded list will contain all of the requested classes found at completion.
---If LoadBundles is specified, those bundles are loaded along with the assets.
---@param WorldContextObject UObject
---@param PrimaryAssetList TArray_FPrimaryAssetId_
---@param LoadBundles TArray_string_
---@return UAsyncActionLoadPrimaryAssetClassList
function UAsyncActionLoadPrimaryAssetClassList.AsyncLoadPrimaryAssetClassList(WorldContextObject, PrimaryAssetList, LoadBundles) end

