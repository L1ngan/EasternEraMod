---A specialized WidgetComponent that color-corrects cameras previews (viewfinders) in VR
---@class UVREditorCameraWidgetComponent : UVREditorWidgetComponent
local UVREditorCameraWidgetComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UVREditorCameraWidgetComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UVREditorCameraWidgetComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UVREditorCameraWidgetComponent:AddAssetUserDataOfClass(InUserDataClass) end

