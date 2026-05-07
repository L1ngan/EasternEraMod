---@class UInAppPurchaseCheckoutCallbackProxy : UObject
---@field public OnSuccess MulticastDelegate @Called when there is a successful In-App Purchase transaction
---@field public OnFailure MulticastDelegate @Called when there is an unsuccessful In-App Purchase transaction
local UInAppPurchaseCheckoutCallbackProxy = {}

---Kicks off a transaction for the provided product identifier
---@param PlayerController APlayerController
---@param ProductRequest FInAppPurchaseProductRequest2
---@return UInAppPurchaseCheckoutCallbackProxy
function UInAppPurchaseCheckoutCallbackProxy.CreateProxyObjectForInAppPurchaseCheckout(PlayerController, ProductRequest) end

