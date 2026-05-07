---The world size for each texcoord mapping. Used by the texture streaming.
---@class FMeshUVChannelInfo
---@field public bInitialized boolean
---@field public bOverrideDensities boolean @Whether this values was set manually or is auto generated.
---@field public LocalUVDensities number @The UV density in the mesh, before any transform scaling, in world unit per UV. This value represents the length taken to cover a full UV unit.
local FMeshUVChannelInfo = {}
