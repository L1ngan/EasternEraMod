---@class FMaterialLayersFunctionsEditorOnlyData
---@field public LayerStates TArray<boolean>
---@field public LayerNames TArray<string>
---@field public RestrictToLayerRelatives TArray<boolean>
---@field public RestrictToBlendRelatives TArray<boolean>
---@field public LayerGuids TArray<FGuid> @Guid that identifies each layer in this stack
---@field public LayerLinkStates TArray<EMaterialLayerLinkState> @State of each layer's link to parent material
---@field public DeletedParentLayerGuids TArray<FGuid> @List of Guids that exist in the parent material that have been explicitly deleted This is needed to distinguish these layers from newly added layers in the parent material
local FMaterialLayersFunctionsEditorOnlyData = {}
