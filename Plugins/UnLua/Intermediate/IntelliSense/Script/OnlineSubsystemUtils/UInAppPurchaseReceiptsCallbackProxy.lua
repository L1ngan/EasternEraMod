---@class UInAppPurchaseReceiptsCallbackProxy : UObject
---@field public OnSuccess MulticastDelegate @Called when there is a successful In-App Purchase transaction
---@field public OnFailure MulticastDelegate @Called when there is an unsuccessful In-App Purchase transaction
local UInAppPurchaseReceiptsCallbackProxy = {}

---@param PlayerController APlayerController
---@return UInAppPurchaseReceiptsCallbackProxy
function UInAppPurchaseReceiptsCallbackProxy.CreateProxyObjectForInAppPurchaseRestoreOwnedProducts(PlayerController) end

---@param PlayerController APlayerController
---@return UInAppPurchaseReceiptsCallbackProxy
function UInAppPurchaseReceiptsCallbackProxy.CreateProxyObjectForInAppPurchaseQueryOwnedProducts(PlayerController) end

---@param PlayerController APlayerController
---@return UInAppPurchaseReceiptsCallbackProxy
function UInAppPurchaseReceiptsCallbackProxy.CreateProxyObjectForInAppPurchaseGetKnownReceipts(PlayerController) end

