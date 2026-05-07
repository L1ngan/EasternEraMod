---@class URetargetProfileLibrary : UBlueprintFunctionLibrary
local URetargetProfileLibrary = {}

---@param InRetargetProfile FRetargetProfile @[out] 
---@param InRetargetOpName string
---@return UIKRetargetOpControllerBase
function URetargetProfileLibrary.GetOpControllerFromRetargetProfile(InRetargetProfile, InRetargetOpName) end

---@param InRetargetAsset UIKRetargeter
---@return FRetargetProfile
function URetargetProfileLibrary.CopyRetargetProfileFromRetargetAsset(InRetargetAsset) end

