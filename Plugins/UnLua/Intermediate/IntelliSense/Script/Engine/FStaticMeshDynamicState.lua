---/
--- Dynamic state for mesh instance. Can be updated inside ticks
---@class FStaticMeshDynamicState
---@field private Transform FTransformHandle @Use accessors (SetX/GetX) instead of properties directly
---@field private Mesh UStaticMesh
---@field private OverrideMaterials TArray<UMaterialInterface>
---@field private Owners TArray<integer>
---@field private bOnlyOwnerSee boolean
---@field private bOwnerNoSee boolean
local FStaticMeshDynamicState = {}
