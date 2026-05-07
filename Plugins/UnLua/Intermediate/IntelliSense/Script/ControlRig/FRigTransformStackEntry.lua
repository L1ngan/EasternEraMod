---@class FRigTransformStackEntry
---@field public Key FRigElementKey
---@field public EntryType integer
---@field public TransformType integer
---@field public OldTransform FTransform
---@field public NewTransform FTransform
---@field public bAffectChildren boolean
---@field public Callstack TArray<string>
local FRigTransformStackEntry = {}
