---Make a torus mesh
---@class FMakeTorusMeshDataflowNode : FDataflowNode
---@field private Origin FVector @Torus will be translated so that center is at this point
---@field private Radius1 number @Radius of the profile
---@field private ProfileVertexCount integer @Number of vertices on the profile
---@field private Radius2 number @Radius of sweep curve
---@field private SweepVertexCount integer @Number of vertices on the sweep curve
---@field private Mesh UDynamicMesh @Output mesh
local FMakeTorusMeshDataflowNode = {}
