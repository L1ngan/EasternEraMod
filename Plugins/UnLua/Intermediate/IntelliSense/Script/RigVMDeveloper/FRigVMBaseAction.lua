---The base action is the base struct for all actions, and provides
---access to sub actions, merge functionality as well as undo and redo
---base implementations.
---@class FRigVMBaseAction
---@field protected ControllerPath FSoftObjectPath
---@field protected Title string
---@field protected SubActions TArray<FRigVMActionKey>
---@field protected ExportedNodes TMap<string, FRigVMActionNodeContent>
local FRigVMBaseAction = {}
