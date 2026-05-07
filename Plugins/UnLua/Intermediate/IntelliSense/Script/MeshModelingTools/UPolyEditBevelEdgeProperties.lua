---@class UPolyEditBevelEdgeProperties : UInteractiveToolPropertySet
---@field public BevelDistance number @Distance that each beveled mesh edge is inset from its initial position
---@field public Subdivisions integer @Number of edge loops added along the bevel faces
---@field public RoundWeight number @Roundness of the bevel. Ignored if Subdivisions = 0.
---@field public bInferMaterialID boolean @If true, when faces on either side of a beveled mesh edges have the same Material ID, beveled edge will be set to that Material ID. Otherwise SetMaterialID is used.
---@field public SetMaterialID integer @Material ID to set on the new faces introduced by bevel operation, unless bInferMaterialID=true and non-ambiguous MaterialID can be inferred from adjacent faces
local UPolyEditBevelEdgeProperties = {}

