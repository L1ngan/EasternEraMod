---A runtime cache for determining if a set of instruction has to
---run for this execution of the VM
---@class FRigVMInstructionSetExecuteState
---@field public SliceHashToNumInstruction TMap<integer, integer>
local FRigVMInstructionSetExecuteState = {}
