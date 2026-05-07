---Convert a mesh to a string formatted as an OBJ file, which can be read by many external mesh viewers
---@class FMeshToOBJStringDebugDataflowNode : FDataflowNode
---@field public Mesh UDynamicMesh
---@field public bInvertFaces boolean @Whether to flip the orientation of the triangles in the OBJ output
---@field public StringOBJ string @A string representing the input mesh in the OBJ file format
local FMeshToOBJStringDebugDataflowNode = {}
