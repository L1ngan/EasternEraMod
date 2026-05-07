---Mesh instance-replacement settings
---@class FMeshInstancingSettings
---@field public ActorClassToUse TSubclassOf<AActor> @The actor class to attach new instance static mesh components to
---@field public InstanceReplacementThreshold integer @The number of static mesh instances needed before a mesh is replaced with an instanced version
---@field public bSkipMeshesWithVertexColors boolean @Whether to skip the conversion to an instanced static mesh for meshes with vertex colors. Instanced static meshes do not support vertex colors per-instance, so conversion will lose this data.
---@field public bUseHLODVolumes boolean @Whether split up instanced static mesh components based on their intersection with HLOD volumes
---@field public ISMComponentToUse TSubclassOf<UInstancedStaticMeshComponent> @Whether to use the Instanced Static Mesh Compoment or the Hierarchical Instanced Static Mesh Compoment
local FMeshInstancingSettings = {}
