---Allows multiple animations to be blended between based on input parameters
---@class UBlendSpace1D : UBlendSpace
---@field public bScaleAnimation boolean @If you have input smoothing, whether to scale the animation speed. E.g. for locomotion animation, the speed axis will scale the animation speed in order to make up the difference between the target and the result of blending the samples.
local UBlendSpace1D = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBlendSpace1D:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UBlendSpace1D:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBlendSpace1D:AddAssetUserDataOfClass(InUserDataClass) end

