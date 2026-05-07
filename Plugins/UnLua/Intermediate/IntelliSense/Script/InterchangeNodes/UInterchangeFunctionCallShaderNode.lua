---A function call shader node has a named set of inputs and outputs which corresponds to the inputs and outputs of the shader function it instances.
---@class UInterchangeFunctionCallShaderNode : UInterchangeShaderNode
local UInterchangeFunctionCallShaderNode = {}

---Set the unique id of the material function referenced by the function call expression.
---@param AttributeValue string
---@return boolean
function UInterchangeFunctionCallShaderNode:SetCustomMaterialFunction(AttributeValue) end

---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeFunctionCallShaderNode:GetCustomMaterialFunction(AttributeValue) end

