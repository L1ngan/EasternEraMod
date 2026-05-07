---Standard properties of the polygon-on-mesh operations
---@class UPolygonOnMeshToolProperties : UInteractiveToolPropertySet
---@field public Operation EEmbeddedPolygonOpMethod @What operation to apply using the Polygon
---@field public Shape EPolygonType @Polygon Shape to use in this Operation
---@field public bCutWithBoolean boolean @Use a volumetric boolean rather than curve projection; cuts through all layers and across edges
---@field public bTryToFixHoles boolean @Automatically attempt to fill any open boundaries left by CSG (e.g. due to numerical errors)
---@field public PolygonScale number @Scale of polygon to embed
---@field public Width number @Width of Polygon
---@field public Height number @Height of Polygon
---@field public CornerRatio number @Corner Ratio of RoundRect Polygon
---@field public Subdivisions integer @Number of sides in Circle or RoundRect Corner
---@field public bCanAcceptFailedResult boolean @Whether the tool will allow accepting a result if the operation fails, for instance due to inability to insert the polygon when not cutting with boolean, or due to unrepaired cracks in the result.
---@field public bShowIntermediateResultOnFailure boolean @If an operation fails and we do not allow accepting the result, whether to show the intermediate failed result, or to show the original mesh.
local UPolygonOnMeshToolProperties = {}

