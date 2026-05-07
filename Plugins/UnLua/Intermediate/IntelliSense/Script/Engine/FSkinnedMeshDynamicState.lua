---/
--- Dynamic state for mesh instance. Can be updated inside ticks
---@class FSkinnedMeshDynamicState
---@field private Transform FTransformHandle @Use accessors (SetX/GetX) instead of properties directly
---@field private SkinnedAsset USkinnedAsset
---@field private OverrideMaterials TArray<UMaterialInterface>
local FSkinnedMeshDynamicState = {}
