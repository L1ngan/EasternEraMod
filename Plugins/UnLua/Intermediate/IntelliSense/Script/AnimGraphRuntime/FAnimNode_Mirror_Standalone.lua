---@class FAnimNode_Mirror_Standalone : FAnimNode_MirrorBase
---@field protected bMirror boolean
---@field protected MirrorDataTable UMirrorDataTable
---@field protected BlendTime number @Inertialization blend time to use when transitioning between mirrored and unmirrored states
---@field protected bResetChild boolean @Whether to reset (reinitialize) the child (source) pose when the mirror state changes
---@field protected bBoneMirroring boolean
---@field protected bCurveMirroring boolean
---@field protected bAttributeMirroring boolean
local FAnimNode_Mirror_Standalone = {}
