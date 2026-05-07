---Using an editor subsystem allows us to make sure that we have a default preset asset whenever the editor exists
--- (and to avoid accidentally trying to make one when it doesn't, such as when running cooking scripts).
---@class UToolPresetAssetSubsystem : UEditorSubsystem
---@field protected DefaultCollection UInteractiveToolsPresetCollectionAsset
local UToolPresetAssetSubsystem = {}

