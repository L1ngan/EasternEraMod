---The Action Stack can be used to track actions happening on a
---Graph. Currently the only owner of the ActionStack is the Controller.
---Actions can be added to the stack, or they can be understood as
---scopes / brackets. For this you can use BeginAction / EndAction / CancelAction
---to open / close a bracket. Open brackets automatically record additional
---actions occuring during the bracket's lifetime.
---@class URigVMActionStack : UObject
---@field private ActionIndex integer
---@field private UndoActions TArray<FRigVMActionKey>
---@field private RedoActions TArray<FRigVMActionKey>
local URigVMActionStack = {}

---Pops the last action from the undo stack and perform undo on it.
---Note: This should really only be used for unit tests,
---use the GEditor's main Undo method instead.
---@param InController URigVMController
---@return boolean
function URigVMActionStack:Undo(InController) end

---Pops the last action from the redo stack and perform redo on it.
---Note: This should really only be used for unit tests,
---use the GEditor's main Redo method instead.
---@param InController URigVMController
---@return boolean
function URigVMActionStack:Redo(InController) end

---Opens an undo bracket / scope to record actions into.
---This is primary useful for Python.
---@param InController URigVMController
---@param InTitle string
---@return boolean
function URigVMActionStack:OpenUndoBracket(InController, InTitle) end

---Closes an undo bracket / scope.
---This is primary useful for Python.
---@param InController URigVMController
---@return boolean
function URigVMActionStack:CloseUndoBracket(InController) end

---Cancels an undo bracket / scope.
---This is primary useful for Python.
---@param InController URigVMController
---@return boolean
function URigVMActionStack:CancelUndoBracket(InController) end

