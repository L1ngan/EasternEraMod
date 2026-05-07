---@class UMaterialExpressionNamedRerouteDeclaration : UMaterialExpressionNamedRerouteBase
---@field public Input FExpressionInput @The input pin
---@field public Name string
---@field public NodeColor FLinearColor @The color of the graph node. The same color will apply to all linked usages of this Declaration node
---@field public VariableGuid FGuid @The variable GUID, to support copy across graphs
local UMaterialExpressionNamedRerouteDeclaration = {}

