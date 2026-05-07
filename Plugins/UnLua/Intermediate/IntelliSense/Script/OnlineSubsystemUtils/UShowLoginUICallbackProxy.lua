---@class UShowLoginUICallbackProxy : UBlueprintAsyncActionBase
---@field public OnSuccess MulticastDelegate @Called when there is a successful query
---@field public OnFailure MulticastDelegate @Called when there is an unsuccessful query
local UShowLoginUICallbackProxy = {}

---Shows the login UI for the currently active online subsystem, if the subsystem supports a login UI.
---@param WorldContextObject UObject
---@param InPlayerController APlayerController
---@return UShowLoginUICallbackProxy
function UShowLoginUICallbackProxy.ShowExternalLoginUI(WorldContextObject, InPlayerController) end

