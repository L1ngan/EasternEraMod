---Make a disc mesh
---@class FMakeDiscMeshDataflowNode : FDataflowNode
---@field private Radius number @Radius
---@field private Normal FVector @Normal vector of all vertices will be set to this value. Default is +Z axis.
---@field private AngleSamples integer @Number of vertices around circumference
---@field private RadialSamples integer @Number of vertices along radial spokes
---@field private StartAngle number @Start of angle range spanned by disc, in degrees
---@field private EndAngle number @End of angle range spanned by disc, in degrees
---@field private Mesh UDynamicMesh @Output mesh
local FMakeDiscMeshDataflowNode = {}
