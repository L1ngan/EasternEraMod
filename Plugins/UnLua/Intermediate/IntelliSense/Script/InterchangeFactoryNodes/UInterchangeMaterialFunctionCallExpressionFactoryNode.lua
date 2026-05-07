---@class UInterchangeMaterialFunctionCallExpressionFactoryNode : UInterchangeMaterialExpressionFactoryNode
local UInterchangeMaterialFunctionCallExpressionFactoryNode = {}

---Set the unique ID of the material function that the function call expression
---is referring to.
---Note that a call to AddFactoryDependencyUid is made to guarantee that
---the material function is created before the function call expression
---@param AttributeValue string
---@return boolean
function UInterchangeMaterialFunctionCallExpressionFactoryNode:SetCustomMaterialFunctionDependency(AttributeValue) end

---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeMaterialFunctionCallExpressionFactoryNode:GetCustomMaterialFunctionDependency(AttributeValue) end

