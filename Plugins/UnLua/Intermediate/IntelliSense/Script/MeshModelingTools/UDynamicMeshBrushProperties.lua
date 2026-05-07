---@class UDynamicMeshBrushProperties : UInteractiveToolPropertySet
---@field public BrushSize FBrushToolRadius
---@field public BrushFalloffAmount number @Amount of falloff to apply (0.0 - 1.0)
---@field public Depth number @Depth of Brush into surface along view ray or surface normal, depending on the Active Brush Type
---@field public bHitBackFaces boolean @Allow the Brush to hit the back-side of the mesh
local UDynamicMeshBrushProperties = {}

