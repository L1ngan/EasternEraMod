---@class UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase
---@field public OnSuccess MulticastDelegate @Called when the session was created successfully
---@field public OnFailure MulticastDelegate @Called when there was an error creating the session
local UCreateSessionCallbackProxy = {}

---Creates a session with the default online subsystem
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param PublicConnections integer
---@param bUseLAN boolean
---@param bUseLobbiesIfAvailable boolean @[opt] 
---@return UCreateSessionCallbackProxy
function UCreateSessionCallbackProxy.CreateSession(WorldContextObject, PlayerController, PublicConnections, bUseLAN, bUseLobbiesIfAvailable) end

