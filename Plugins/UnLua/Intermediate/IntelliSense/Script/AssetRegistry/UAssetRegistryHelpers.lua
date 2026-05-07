---@class UAssetRegistryHelpers : UObject
local UAssetRegistryHelpers = {}

---Convert to a SoftObjectPath for loading
---@param InAssetData FAssetData
---@return FSoftObjectPath
function UAssetRegistryHelpers.ToSoftObjectPath(InAssetData) end

---@param Left FAssetData
---@param Right FAssetData
---@return boolean
function UAssetRegistryHelpers:SortingPredicate__DelegateSignature(Left, Right) end

---Sorts the assets based on a custom Blueprint delegate.
---@param Assets TArray_FAssetData_ @[out] 
---@param SortingPredicate Delegate
---@param SortOrder EAssetRegistrySortOrder
function UAssetRegistryHelpers.SortByPredicate(Assets, SortingPredicate, SortOrder) end

---Sorts the assets by their asset name.
---@param Assets TArray_FAssetData_ @[out] 
---@param SortOrder EAssetRegistrySortOrder
function UAssetRegistryHelpers.SortByAssetName(Assets, SortOrder) end

---Populates the FARFilters tags and values map with the passed in tags and values
---@param InFilter FARFilter
---@param InTagsAndValues TArray_FTagAndValue_
---@return FARFilter
function UAssetRegistryHelpers.SetFilterTagsAndValues(InFilter, InTagsAndValues) end

---Checks to see if this AssetData refers to an asset or is NULL
---@param InAssetData FAssetData
---@return boolean
function UAssetRegistryHelpers.IsValid(InAssetData) end

---Returns true if this is the primary asset in a package, true for maps and assets but false for secondary objects like class redirectors
---@param InAssetData FAssetData
---@return boolean
function UAssetRegistryHelpers.IsUAsset(InAssetData) end

---Returns true if the this asset is a redirector.
---@param InAssetData FAssetData
---@return boolean
function UAssetRegistryHelpers.IsRedirector(InAssetData) end

---Returns true if the asset is loaded
---@param InAssetData FAssetData
---@return boolean
function UAssetRegistryHelpers.IsAssetLoaded(InAssetData) end

---Returns true if the asset is cooked
---@param InAssetData FAssetData
---@return boolean
function UAssetRegistryHelpers.IsAssetCooked(InAssetData) end

---Gets the value associated with the given tag as a string
---@param InAssetData FAssetData
---@param InTagName string
---@param OutTagValue string @[out] 
---@return boolean
function UAssetRegistryHelpers.GetTagValue(InAssetData, InTagName, OutTagValue) end

---Returns the full name for the asset in the form: Class ObjectPath
---@param InAssetData FAssetData
---@return string
function UAssetRegistryHelpers.GetFullName(InAssetData) end

---Returns the name for the asset in the form: Class'ObjectPath'
---@param InAssetData FAssetData
---@return string
function UAssetRegistryHelpers.GetExportTextName(InAssetData) end

---@param InAssetData FAssetData
---@return TSubclassOf_UObject_
function UAssetRegistryHelpers.GetClass(InAssetData) end

---Gets asset data for all blueprint assets that match the filter. ClassPaths in the filter specify the blueprint's parent class.
---@param InFilter FARFilter
---@param OutAssetData TArray_FAssetData_ @[out] 
function UAssetRegistryHelpers.GetBlueprintAssets(InFilter, OutAssetData) end

---@return TScriptInterface_UAssetRegistry_
function UAssetRegistryHelpers.GetAssetRegistry() end

---Returns the asset UObject if it is loaded or loads the asset if it is unloaded then returns the result
---@param InAssetData FAssetData
---@return UObject
function UAssetRegistryHelpers.GetAsset(InAssetData) end

---Returns the first native class of the asset type that can be found.  Normally this is just the FAssetData::GetClass(),
---however if the class is a blueprint generated class it may not be loaded.  In which case GetAncestorClassNames will
---be used to find the first native super class.  This can be slow if temporary caching mode is not on.
---@param AssetData FAssetData
---@return TSubclassOf_UObject_
function UAssetRegistryHelpers.FindAssetNativeClass(AssetData) end

---Creates asset data from a UObject.
---@param InAsset UObject
---@param bAllowBlueprintClass boolean @[opt] 
---@return FAssetData
function UAssetRegistryHelpers.CreateAssetData(InAsset, bAllowBlueprintClass) end

---Returns true if the asset has its editor-only data
---@param InAssetData FAssetData
---@return boolean
function UAssetRegistryHelpers.AssetHasEditorOnlyData(InAssetData) end

