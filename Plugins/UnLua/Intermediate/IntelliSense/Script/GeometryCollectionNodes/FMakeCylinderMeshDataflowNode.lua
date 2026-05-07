---Make a cylinder mesh
---@class FMakeCylinderMeshDataflowNode : FDataflowNode
---@field private Radius1 number @Radius1 of cylinder
---@field private Radius2 number @Radius2 of cylinder
---@field private Height number @Height of cylinder
---@field private LengthSamples integer @LengthSamples of cylinder
---@field private AngleSamples integer @AngleSamples of cylinder
---@field private Mesh UDynamicMesh @Output mesh
local FMakeCylinderMeshDataflowNode = {}
