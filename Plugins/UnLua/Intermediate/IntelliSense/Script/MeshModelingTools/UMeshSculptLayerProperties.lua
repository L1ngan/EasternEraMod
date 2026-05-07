---@class UMeshSculptLayerProperties : UObject
---@field public ActiveLayer integer @Set the active sculpt layer
---@field public LayerWeights TArray<number> @Set the sculpt layer weights
---@field public bCanEditLayers boolean
local UMeshSculptLayerProperties = {}

function UMeshSculptLayerProperties:RemoveLayer() end

function UMeshSculptLayerProperties:AddLayer() end

