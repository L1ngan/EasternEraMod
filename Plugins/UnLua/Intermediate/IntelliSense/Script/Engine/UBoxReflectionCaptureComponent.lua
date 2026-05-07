----> will be exported to EngineDecalClasses.h
---@class UBoxReflectionCaptureComponent : UReflectionCaptureComponent
---@field public BoxTransitionDistance number @Adjust capture transition distance
---@field public PreviewInfluenceBox UBoxComponent
---@field public PreviewCaptureBox UBoxComponent
local UBoxReflectionCaptureComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBoxReflectionCaptureComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UBoxReflectionCaptureComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBoxReflectionCaptureComponent:AddAssetUserDataOfClass(InUserDataClass) end

