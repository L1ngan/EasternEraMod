---@class UModelingToolsEditorMode : UBaseLegacyWidgetEdMode
---@field public bEnableVolumeElementSelection boolean
---@field public bEnableStaticMeshElementSelection boolean
---@field protected SceneSnappingManager UModelingSceneSnappingManager
---@field protected SelectionManager UGeometrySelectionManager
---@field protected SelectionInteraction UModelingSelectionInteraction
---@field protected ModelingModeCommands TArray<UInteractiveCommand> @UInteractiveCommand support. Currently implemented by creating instances of commands on mode startup and holding onto them. This perhaps should be revisited, command instances could probably be created as needed...
local UModelingToolsEditorMode = {}

