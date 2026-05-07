---Make a rectangle mesh
---@class FMakeRectangleMeshDataflowNode : FDataflowNode
---@field private Origin FVector @Rectangle will be translated so that center is at this point
---@field private Normal FVector @Normal vector of all vertices will be set to this value. Default is +Z axis.
---@field private Width number @Width of rectangle
---@field private Height number @Height of rectangle
---@field private WidthVertexCount integer @Number of vertices along Width axis
---@field private HeightVertexCount integer @Number of vertices along Height axis
---@field private Mesh UDynamicMesh @Output mesh
local FMakeRectangleMeshDataflowNode = {}
