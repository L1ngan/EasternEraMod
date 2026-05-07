---@class UInAppPurchaseCallbackProxy2 : UObject
---@field public OnSuccess MulticastDelegate @Called when there is a successful In-App Purchase transaction
---@field public OnFailure MulticastDelegate @Called when there is an unsuccessful In-App Purchase transaction
local UInAppPurchaseCallbackProxy2 = {}

---@param PlayerController APlayerController
---@return UInAppPurchaseCallbackProxy2
function UInAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases(PlayerController) end

---@param PlayerController APlayerController
---@return UInAppPurchaseCallbackProxy2
function UInAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned(PlayerController) end

---Kicks off a transaction for the provided product identifier
---@param PlayerController APlayerController
---@param ProductRequest FInAppPurchaseProductRequest2
---@return UInAppPurchaseCallbackProxy2
function UInAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase(PlayerController, ProductRequest) end

