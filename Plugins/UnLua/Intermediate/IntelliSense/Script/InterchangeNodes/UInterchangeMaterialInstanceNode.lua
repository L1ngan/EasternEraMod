---@class UInterchangeMaterialInstanceNode : UInterchangeBaseNode
local UInterchangeMaterialInstanceNode = {}

---@param AttributeValue string
---@return boolean
function UInterchangeMaterialInstanceNode:SetCustomParent(AttributeValue) end

---@param ParameterName string
---@param AttributeValue FLinearColor @[out] 
---@return boolean
function UInterchangeMaterialInstanceNode:GetVectorParameterValue(ParameterName, AttributeValue) end

---@param ParameterName string
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeMaterialInstanceNode:GetTextureParameterValue(ParameterName, AttributeValue) end

---@param ParameterName string
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMaterialInstanceNode:GetStaticSwitchParameterValue(ParameterName, AttributeValue) end

---@param ParameterName string
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeMaterialInstanceNode:GetScalarParameterValue(ParameterName, AttributeValue) end

---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeMaterialInstanceNode:GetCustomParent(AttributeValue) end

---@param ParameterName string
---@param AttributeValue FLinearColor
---@return boolean
function UInterchangeMaterialInstanceNode:AddVectorParameterValue(ParameterName, AttributeValue) end

---@param ParameterName string
---@param AttributeValue string
---@return boolean
function UInterchangeMaterialInstanceNode:AddTextureParameterValue(ParameterName, AttributeValue) end

---@param ParameterName string
---@param AttributeValue boolean
---@return boolean
function UInterchangeMaterialInstanceNode:AddStaticSwitchParameterValue(ParameterName, AttributeValue) end

---@param ParameterName string
---@param AttributeValue number
---@return boolean
function UInterchangeMaterialInstanceNode:AddScalarParameterValue(ParameterName, AttributeValue) end

