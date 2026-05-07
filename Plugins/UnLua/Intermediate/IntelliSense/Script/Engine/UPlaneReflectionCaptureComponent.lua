----> will be exported to EngineDecalClasses.h
---@class UPlaneReflectionCaptureComponent : UReflectionCaptureComponent
---@field public InfluenceRadiusScale number @Radius of the area that can receive reflections from this capture.
---@field public PreviewInfluenceRadius UDrawSphereComponent
---@field public PreviewCaptureBox UBoxComponent
local UPlaneReflectionCaptureComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPlaneReflectionCaptureComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPlaneReflectionCaptureComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPlaneReflectionCaptureComponent:AddAssetUserDataOfClass(InUserDataClass) end

