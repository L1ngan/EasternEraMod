----> will be exported to EngineDecalClasses.h
---@class USphereReflectionCaptureComponent : UReflectionCaptureComponent
---@field public InfluenceRadius number @Radius of the area that can receive reflections from this capture.
---@field public CaptureDistanceScale number @Not needed anymore, not yet removed in case the artist setup values are needed in the future
---@field public PreviewInfluenceRadius UDrawSphereComponent
local USphereReflectionCaptureComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USphereReflectionCaptureComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USphereReflectionCaptureComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USphereReflectionCaptureComponent:AddAssetUserDataOfClass(InUserDataClass) end

