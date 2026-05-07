---@class UContentBrowserAssetContextMenuContext : UObject
---@field public CommonAssetDefinition UAssetDefinition
---@field public SelectedAssets TArray<FAssetData> @The currently selected assets in the content browser.
---@field public CommonClass TSubclassOf<UObject>
---@field public bCanBeModified boolean
---@field public bCanView boolean
---@field public bHasCookedPackages boolean
---@field public bContainsUnsupportedAssets boolean
local UContentBrowserAssetContextMenuContext = {}

---Loads the selected assets (if needed) which is based on AssetViewUtils::LoadAssetsIfNeeded, this exists primarily
---for backwards compatability.  Reliance on a black box to determine 'neededness' is not recommended, this function
---will likely be deprecated a few versions after GetSelectedObjects.
---@return TArray_UObject_
function UContentBrowserAssetContextMenuContext:LoadSelectedObjectsIfNeeded() end

---Loads all the selected assets and returns an array of the objects.
---@param LoadTags TSet_string_
---@return TArray_UObject_
function UContentBrowserAssetContextMenuContext:LoadSelectedObjects(LoadTags) end

---@return TArray_UObject_
function UContentBrowserAssetContextMenuContext:GetSelectedObjects() end

