---@class UAsyncActionLoadPrimaryAsset : UAsyncActionLoadPrimaryAssetBase
---@field public Completed MulticastDelegate
local UAsyncActionLoadPrimaryAsset = {}

---Load a primary asset object into memory, this will cause it to stay loaded until it is explicitly unloaded.
---The completed event will happen when the load succeeds or fails, you should cast the Loaded object to verify it is the correct type.
---If LoadBundles is specified, those bundles are loaded along with the asset.
---@param WorldContextObject UObject
---@param PrimaryAsset FPrimaryAssetId
---@param LoadBundles TArray_string_
---@return UAsyncActionLoadPrimaryAsset
function UAsyncActionLoadPrimaryAsset.AsyncLoadPrimaryAsset(WorldContextObject, PrimaryAsset, LoadBundles) end

