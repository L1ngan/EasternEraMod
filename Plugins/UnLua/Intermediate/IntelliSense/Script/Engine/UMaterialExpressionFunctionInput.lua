---@class UMaterialExpressionFunctionInput : UMaterialExpression
---@field public Preview FExpressionInput @Used for previewing when editing the function, or when bUsePreviewValueAsDefault is enabled.
---@field public InputName string @The input's name, which will be drawn on the connector in function call expressions that use this function.
---@field public Description string @The input's description, which will be used as a tooltip on the connector in function call expressions that use this function.
---@field public Id FGuid @Id of this input, used to maintain references through name changes.
---@field public InputType integer @Type of this input. Input code chunks will be cast to this type, and a compiler error will be emitted if the cast fails.
---@field public PreviewValue FVector4f @Value used to preview this input when editing the material function.
---@field public bUsePreviewValueAsDefault boolean @Whether to use the preview value or texture as the default value for this input.
---@field public SortPriority integer @Controls where the input is displayed relative to the other inputs.
local UMaterialExpressionFunctionInput = {}

