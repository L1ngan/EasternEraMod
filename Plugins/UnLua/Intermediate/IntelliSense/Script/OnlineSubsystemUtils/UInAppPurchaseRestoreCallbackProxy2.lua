---@class UInAppPurchaseRestoreCallbackProxy2 : UObject
---@field public OnSuccess MulticastDelegate @Called when there is a successful In-App Purchase transaction
---@field public OnFailure MulticastDelegate @Called when there is an unsuccessful In-App Purchase transaction
local UInAppPurchaseRestoreCallbackProxy2 = {}

---Kicks off a transaction for the provided product identifier
---@param ConsumableProductFlags TArray_FInAppPurchaseProductRequest2_
---@param PlayerController APlayerController
---@return UInAppPurchaseRestoreCallbackProxy2
function UInAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore(ConsumableProductFlags, PlayerController) end

