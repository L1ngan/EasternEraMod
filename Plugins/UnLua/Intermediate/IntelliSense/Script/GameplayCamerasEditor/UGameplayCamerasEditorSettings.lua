---@class UGameplayCamerasEditorSettings : UDeveloperSettings
---@field public CameraNodeTitleColor FLinearColor @Title color for common camera nodes.
---@field public CameraAssetTitleColor FLinearColor @Title color for a camera asset's root node.
---@field public CameraRigAssetTitleColor FLinearColor @Title color for a camera rig asset's root node.
---@field public CameraShakeAssetTitleColor FLinearColor @Title color for a camera shake asset's root node.
---@field public CameraRigTransitionTitleColor FLinearColor @Title color for a camera transition node.
---@field public CameraRigTransitionConditionTitleColor FLinearColor @Title color for a camera transition condition node.
---@field public CameraBlendNodeTitleColor FLinearColor @Title color for a camera blend node.
---@field public LastCameraAssetToolkitModeName string @Camera asset mode to restore on open (director, shared transitions, etc.)
---@field public bEnableRunInEditor boolean @Global enable/disable flag for running camera rigs in editor.
local UGameplayCamerasEditorSettings = {}

