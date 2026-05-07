---This is the base class for defining operations that live in the retargeter "op" stack.
---These operations are executed in order by calling the virtual Run() function on each one in order.
---The Run() function takes an input pose on the source skeletal mesh and affects the output pose on the target mesh.
---NOTE: any user defined settings associated with a retarget op must be aggregated into a custom UStruct derived from FIKRetargetOpSettingsBase
---This ensures that the settings are user editable in the details panel with full undo/redo support and serialization.
---@class FIKRetargetOpBase
---@field private bIsEnabled boolean @when false, execution of this op is skipped
---@field private Name string @the text label given to the op, used to refer to it from script
---@field private ParentOpName string @(optional) some ops are considered as a group, this is the name of the group parent
local FIKRetargetOpBase = {}
