---This structure is used for semantically describing a pin
---on a RigVMStruct - but without any content. So rather than
---adding an actual FRigVMExecuteContext this can be added as
---the type for a pin and it won't use any memory.
---To customize which FRigVMExecuteContext structure to use
---on your node you can add the ExecuteContext=FMyExecuteContext
---meta data tag on the USTRUCT macro.
---@class FRigVMExecutePin
local FRigVMExecutePin = {}
