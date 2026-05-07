---@class UBakeMultiMeshInputToolProperties : UInteractiveToolPropertySet
---@field public TargetStaticMesh UStaticMesh @Target mesh to sample to
---@field public TargetSkeletalMesh USkeletalMesh @Target mesh to sample to
---@field public TargetDynamicMesh AActor @Target mesh to sample to
---@field public TargetUVLayer string @UV channel to use for the target mesh
---@field public SourceMeshes TArray<FBakeMultiMeshDetailProperties> @Source meshes and textures to sample from
---@field public ProjectionDistance number @Maximum allowed distance for the projection from target mesh to source mesh for the sample to be considered valid. This is only relevant if a separate source mesh is provided.
---@field public TargetUVLayerNamesList TArray<string>
local UBakeMultiMeshInputToolProperties = {}

---@return TArray_string_
function UBakeMultiMeshInputToolProperties:GetTargetUVLayerNamesFunc() end

