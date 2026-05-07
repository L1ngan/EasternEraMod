---@class UUnLuaFunctionLibrary : UBlueprintFunctionLibrary
local UUnLuaFunctionLibrary = {}

function UUnLuaFunctionLibrary.HotReload() end

---@return string
function UUnLuaFunctionLibrary.GetScriptRootPath() end

---@param Path string
---@return integer
function UUnLuaFunctionLibrary.GetFileLastModifiedTimestamp(Path) end

