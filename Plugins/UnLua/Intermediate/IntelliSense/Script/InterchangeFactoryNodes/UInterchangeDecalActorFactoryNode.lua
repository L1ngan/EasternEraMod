---@class UInterchangeDecalActorFactoryNode : UInterchangeActorFactoryNode
local UInterchangeDecalActorFactoryNode = {}

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeDecalActorFactoryNode:SetCustomSortOrder(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue FVector
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeDecalActorFactoryNode:SetCustomDecalSize(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue string
---@return boolean
function UInterchangeDecalActorFactoryNode:SetCustomDecalMaterialPathName(AttributeValue) end

---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeDecalActorFactoryNode:GetCustomSortOrder(AttributeValue) end

---@param AttributeValue FVector @[out] 
---@return boolean
function UInterchangeDecalActorFactoryNode:GetCustomDecalSize(AttributeValue) end

---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeDecalActorFactoryNode:GetCustomDecalMaterialPathName(AttributeValue) end

