---An action changing a pin type
---@class FRigVMChangePinTypeAction : FRigVMBaseAction
---@field public PinPath string
---@field public OldTypeIndex integer
---@field public NewTypeIndex integer
---@field public bSetupOrphanPins boolean
---@field public bBreakLinks boolean
---@field public bRemoveSubPins boolean
local FRigVMChangePinTypeAction = {}
