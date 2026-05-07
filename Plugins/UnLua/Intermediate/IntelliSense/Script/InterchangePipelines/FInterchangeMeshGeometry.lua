---* A mesh geometry is a description of a translated mesh asset node that defines a geometry.
---@class FInterchangeMeshGeometry
---@field public MeshUid string @The unique ID of the UInterchangeMeshNode represented by this structure.
---@field public MeshNode UInterchangeMeshNode @The UInterchangeMeshNode pointer represented by this structure.
---@field public ReferencingMeshInstanceUids TArray<string> @All mesh instances that refer to this UInterchangeMeshNode pointer.
---@field public AttachedSocketUids TArray<string> @A list of all scene nodes that represent sockets attached to this mesh.
local FInterchangeMeshGeometry = {}
