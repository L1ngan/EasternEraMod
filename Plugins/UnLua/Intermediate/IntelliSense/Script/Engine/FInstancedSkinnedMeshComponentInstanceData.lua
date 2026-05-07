---Helper class used to preserve state across blueprint re-instancing
---@class FInstancedSkinnedMeshComponentInstanceData : FSceneComponentInstanceData
---@field public SkinnedAsset USkinnedAsset
---@field public InstanceData TArray<FSkinnedMeshInstanceData>
---@field public bHasPerInstanceHitProxies boolean
---@field public PrimitiveBoundsOverride FBox
---@field public bIsInstanceDataGPUOnly boolean
---@field public NumInstancesGPUOnly integer
local FInstancedSkinnedMeshComponentInstanceData = {}
