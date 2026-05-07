---@class UAsyncActionChangePrimaryAssetBundles : UAsyncActionLoadPrimaryAssetBase
---@field public Completed MulticastDelegate
local UAsyncActionChangePrimaryAssetBundles = {}

---Change the bundle state of specific assets in PrimaryAssetList.
---AddBundles are added to the final state and RemoveBundles are removed, an empty array will make no change.
---This will not change the loaded status of primary assets but will load or unload secondary assets based on the bundles.
---@param WorldContextObject UObject
---@param PrimaryAssetList TArray_FPrimaryAssetId_
---@param AddBundles TArray_string_
---@param RemoveBundles TArray_string_
---@return UAsyncActionChangePrimaryAssetBundles
function UAsyncActionChangePrimaryAssetBundles.AsyncChangeBundleStateForPrimaryAssetList(WorldContextObject, PrimaryAssetList, AddBundles, RemoveBundles) end

---Change the bundle state of all assets that match OldBundles to instead contain NewBundles.
---This will not change the loaded status of primary assets but will load or unload secondary assets based on the bundles.
---@param WorldContextObject UObject
---@param NewBundles TArray_string_
---@param OldBundles TArray_string_
---@return UAsyncActionChangePrimaryAssetBundles
function UAsyncActionChangePrimaryAssetBundles.AsyncChangeBundleStateForMatchingPrimaryAssets(WorldContextObject, NewBundles, OldBundles) end

