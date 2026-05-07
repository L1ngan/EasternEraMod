---@class FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData
---@field public StaticMesh UStaticMesh @Mesh being used by component
---@field public VertexColorLODs TArray<FStaticMeshVertexColorLODData> @Array of cached vertex colors for each LOD
---@field public CachedStaticLighting TArray<FGuid> @Used to store lightmap data during RerunConstructionScripts
---@field public StreamingTextureData TArray<FStreamingTextureBuildInfo> @Texture streaming build data
---@field public MaterialStreamingRelativeBoxes TArray<integer> @Texture streaming editor data (for viewmodes)
local FStaticMeshComponentInstanceData = {}
