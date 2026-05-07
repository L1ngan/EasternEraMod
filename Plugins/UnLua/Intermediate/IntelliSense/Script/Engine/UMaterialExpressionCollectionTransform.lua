---Node that uses 3 to 5 consecutive vector elements of a Material Parameter Collection as a Transform matrix
---@class UMaterialExpressionCollectionTransform : UMaterialExpression
---@field public Input FExpressionInput
---@field public Collection UMaterialParameterCollection @The Parameter Collection to use.
---@field public ParameterName string @Name of the parameter being referenced.
---@field public ParameterId FGuid @Id that is set from the name, and used to handle renaming of collection parameters.
---@field public TransformType EParameterCollectionTransformType
local UMaterialExpressionCollectionTransform = {}

