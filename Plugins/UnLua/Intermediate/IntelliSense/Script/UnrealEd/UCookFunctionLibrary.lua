---@class UCookFunctionLibrary : UObject
local UCookFunctionLibrary = {}

---Writes the cooked version of the provided object's package into the Saved folder, in the subfolder
---defined by DestinationSubfolder. Extra arguments (such as -unversioned) can be provided by
---CookCommandlineArgs. This function is experimental and may not exactly match the behavior of
---the cook commandlet.
---@param Object UObject
---@param ForPlatform string
---@param DestinationSubfolder string
---@param CookCommandlineArgs string
function UCookFunctionLibrary.CookAsset(Object, ForPlatform, DestinationSubfolder, CookCommandlineArgs) end

