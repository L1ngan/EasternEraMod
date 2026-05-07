---A shader node is a named set of inputs and outputs. It can be connected to other shader nodes and finally to a shader graph input.
---@class UInterchangeShaderNode : UInterchangeBaseNode
local UInterchangeShaderNode = {}

---Sets which type of shader this nodes represents. Can be arbitrary or one of the predefined shader types.
---The material pipeline handling the shader node should be aware of the shader type that is being set here.
---@param AttributeValue string
---@return boolean
function UInterchangeShaderNode:SetCustomShaderType(AttributeValue) end

---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeShaderNode:GetCustomShaderType(AttributeValue) end

---Set the String Attribute on the Shader Node. If bIsAParameter is set to true, it would be treated as a overridable Texture
---or else it should be treated as a LUT Texture.
---Note: It is assumed that the input name would be the parameter name when bIsAParameter is true.
---@param InputName string
---@param AttributeValue string
---@param bIsAParameter boolean @[opt] 
---@return boolean
function UInterchangeShaderNode:AddStringInput(InputName, AttributeValue, bIsAParameter) end

---Set the Linear Color Attribute on the Shader Node. If bIsAParameter is set to true, it would be treated as a VectorParameter
---when the Material Pipeline creates the materials. Otherwise it would be a constant 3 vector expression in the shader graph.
---Note: It is assumed that the input name would be the parameter name when bIsAParameter is true.
---@param InputName string
---@param AttributeValue FLinearColor
---@param bIsAParameter boolean @[opt] 
---@return boolean
function UInterchangeShaderNode:AddLinearColorInput(InputName, AttributeValue, bIsAParameter) end

---Set the Float Attribute on the Shader Node. If bIsAParameter is set to true, it would be treated as a ScalarParameter
---when the Material Pipeline creates the materials. Otherwise it would be a constant expression in the shader graph.
---Note: It is assumed that the input name would be the parameter name when bIsAParameter is true.
---@param InputName string
---@param AttributeValue number
---@param bIsAParameter boolean @[opt] 
---@return boolean
function UInterchangeShaderNode:AddFloatInput(InputName, AttributeValue, bIsAParameter) end

