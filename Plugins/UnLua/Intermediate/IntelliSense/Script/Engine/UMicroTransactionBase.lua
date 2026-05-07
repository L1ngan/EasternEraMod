---@class UMicroTransactionBase : UPlatformInterfaceBase
---@field public AvailableProducts TArray<FPurchaseInfo> @The list of products available to purchase, filled out by the time a MTD_PurchaseQueryComplete is fired
---@field public LastError string @In case of errors, this will describe the most recent error
---@field public LastErrorSolution string @In case of errors, this will describe possible solutions (if there are any)
local UMicroTransactionBase = {}

