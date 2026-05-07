---@class UInterchangeMaterialInstanceFactoryNode : UInterchangeBaseMaterialFactoryNode
local UInterchangeMaterialInstanceFactoryNode = {}

---@param AttributeValue string
---@return boolean
function UInterchangeMaterialInstanceFactoryNode:SetCustomParent(AttributeValue) end

---@param AttributeValue string
---@return boolean
function UInterchangeMaterialInstanceFactoryNode:SetCustomInstanceClassName(AttributeValue) end

---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeMaterialInstanceFactoryNode:GetCustomParent(AttributeValue) end

---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeMaterialInstanceFactoryNode:GetCustomInstanceClassName(AttributeValue) end

