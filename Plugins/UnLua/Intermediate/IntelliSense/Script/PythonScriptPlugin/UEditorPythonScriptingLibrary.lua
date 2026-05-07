---Utility class for Python scripting functionality.
---@class UEditorPythonScriptingLibrary : UBlueprintFunctionLibrary
local UEditorPythonScriptingLibrary = {}

---Sets the bKeepPythonScriptAlive flag.
---If this is false (default), it will close the editor during the next tick (when executing a Python script in the editor-environment using the UnrealEditor-Cmd commandline tool).
---If this is true, it will not close the editor by itself, and you will have to close it manually, either by setting this value to false again, or by calling a function like unreal.SystemLibrary.quit_editor().
---@param bNewKeepAlive boolean
function UEditorPythonScriptingLibrary.SetKeepPythonScriptAlive(bNewKeepAlive) end

---Returns the value of the bKeepPythonScriptAlive flag.
---If this is false (default), it will close the editor during the next tick (when executing a Python script in the editor-environment using the UnrealEditor-Cmd commandline tool).
---If this is true, it will not close the editor by itself, and you will have to close it manually, either by setting this value to false again, or by calling a function like unreal.SystemLibrary.quit_editor().
---@return boolean
function UEditorPythonScriptingLibrary.GetKeepPythonScriptAlive() end

