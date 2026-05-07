---RigLogic is used to translate control input curves into bone transforms and values for blend shape and
---animated map multiplier curves
---@class FRigUnit_RigLogic : FRigUnitMutable
---@field private Data FRigUnit_RigLogic_Data @internal work data for the unit
---@field private bIsInitialized boolean @flag to determine if the node has been initialized
local FRigUnit_RigLogic = {}
