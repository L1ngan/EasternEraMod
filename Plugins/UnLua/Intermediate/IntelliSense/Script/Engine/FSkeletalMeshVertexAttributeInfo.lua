---A structure to store user-controllable settings for attributes
---@class FSkeletalMeshVertexAttributeInfo
---@field public EnabledForRender FPerPlatformBool @Whether this vertex attribute should be included in the render data. Requires a rebuild of the render mesh.
---@field public Name string @The name of the vertex attribute
---@field public DataType ESkeletalMeshVertexAttributeDataType @The data type to store the vertex data as for rendering
local FSkeletalMeshVertexAttributeInfo = {}
