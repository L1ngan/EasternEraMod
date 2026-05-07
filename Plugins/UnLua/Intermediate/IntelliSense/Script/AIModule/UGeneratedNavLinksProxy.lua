---Experimental
---Blueprintable class used to handle generated links as custom links.
---@class UGeneratedNavLinksProxy : UBaseGeneratedNavLinksProxy
---@field protected OnSmartLinkReached MulticastDelegate
local UGeneratedNavLinksProxy = {}

---Called when agent reaches smart link during path following.
---@param Agent AActor
---@param Destination FVector
function UGeneratedNavLinksProxy:ReceiveSmartLinkReached(Agent, Destination) end

