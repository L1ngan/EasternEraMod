---Returns true if the Control Rig is being interacted
---@class FRigUnit_IsInteracting : FRigUnit
---@field public bIsInteracting boolean @True if there is currently an interaction happening
---@field public bIsTranslating boolean @True if the current interaction is a translation
---@field public bIsRotating boolean @True if the current interaction is a rotation
---@field public bIsScaling boolean @True if the current interaction is scaling
---@field public Items TArray<FRigElementKey> @The items being interacted on
local FRigUnit_IsInteracting = {}
