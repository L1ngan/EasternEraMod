---@class FMaterialExpressionCollection
---@field public Expressions TArray<UMaterialExpression> @Array of material expressions, excluding Comments.  Used by the material editor.
---@field public EditorComments TArray<UMaterialExpressionComment> @Array of comments associated with this material; viewed in the material editor.
---@field public ExpressionExecBegin UMaterialExpression @The execution begin expression, if material is using an exec wire
---@field public ExpressionExecEnd UMaterialExpression
local FMaterialExpressionCollection = {}
