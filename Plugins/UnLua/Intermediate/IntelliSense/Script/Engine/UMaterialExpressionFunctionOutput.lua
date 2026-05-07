---@class UMaterialExpressionFunctionOutput : UMaterialExpression
---@field public OutputName string @The output's name, which will be drawn on the connector in function call expressions that use this function.
---@field public Description string @The output's description, which will be used as a tooltip on the connector in function call expressions that use this function.
---@field public SortPriority integer @Controls where the output is displayed relative to the other outputs.
---@field public A FExpressionInput @Stores the expression in the material function connected to this output.
---@field public bLastPreviewed boolean @Whether this output was previewed the last time this function was edited.
---@field public Id FGuid @Id of this input, used to maintain references through name changes.
local UMaterialExpressionFunctionOutput = {}

