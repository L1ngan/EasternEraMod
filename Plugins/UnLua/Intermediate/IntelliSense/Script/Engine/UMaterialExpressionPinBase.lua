---@class UMaterialExpressionPinBase : UMaterialExpression
---@field public ReroutePins TArray<FCompositeReroute> @Underlying reroute pins used to compile material. Must call Modify after editing to update output expressions.
---@field public PinDirection integer @Direction of the pins for this base.
local UMaterialExpressionPinBase = {}

