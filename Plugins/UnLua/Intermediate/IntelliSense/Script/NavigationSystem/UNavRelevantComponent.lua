---@class UNavRelevantComponent : UActorComponent
---@field protected bAttachToOwnersRoot boolean @attach navigation data to entry for owner's root component (depends on its relevancy)
---@field protected CachedNavParent UObject
local UNavRelevantComponent = {}

---@param bRelevant boolean
function UNavRelevantComponent:SetNavigationRelevancy(bRelevant) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UNavRelevantComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UNavRelevantComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UNavRelevantComponent:AddAssetUserDataOfClass(InUserDataClass) end

