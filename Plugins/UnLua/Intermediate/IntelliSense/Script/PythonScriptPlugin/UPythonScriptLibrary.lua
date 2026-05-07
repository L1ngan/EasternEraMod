---@class UPythonScriptLibrary : UBlueprintFunctionLibrary
local UPythonScriptLibrary = {}

---Check to see whether Python has been initialized and is ready to use.
---@return boolean
function UPythonScriptLibrary.IsPythonInitialized() end

---Check to see whether Python has been configured.
---@return boolean
function UPythonScriptLibrary.IsPythonConfigured() end

---Check to see whether Python support is available in the current environment.
---@return boolean
function UPythonScriptLibrary.IsPythonAvailable() end

---Force Python to be enabled and initialized, regardless of the settings that control its default enabled state.
---@return boolean
function UPythonScriptLibrary.ForceEnablePythonAtRuntime() end

---Execute a Python script with argument marshaling.
---@param PythonScript string
---@param PythonInputs TArray_string_
---@param PythonOutputs TArray_string_
---@return boolean
function UPythonScriptLibrary.ExecutePythonScript(PythonScript, PythonInputs, PythonOutputs) end

---Execute the given Python command.
---@param PythonCommand string
---@param CommandResult string @[out] 
---@param LogOutput TArray_FPythonLogOutputEntry_ @[out] 
---@param ExecutionMode EPythonCommandExecutionMode @[opt] 
---@param FileExecutionScope EPythonFileExecutionScope @[opt] 
---@return boolean
function UPythonScriptLibrary.ExecutePythonCommandEx(PythonCommand, CommandResult, LogOutput, ExecutionMode, FileExecutionScope) end

---Execute the given Python command.
---@param PythonCommand string
---@return boolean
function UPythonScriptLibrary.ExecutePythonCommand(PythonCommand) end

