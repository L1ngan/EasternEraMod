---@class UInterchangeActorFactoryNode : UInterchangeFactoryBaseNode
local UInterchangeActorFactoryNode = {}

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeActorFactoryNode:SetCustomMobility(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue FTransform
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeActorFactoryNode:SetCustomLocalTransform(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue FTransform
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeActorFactoryNode:SetCustomGlobalTransform(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeActorFactoryNode:SetCustomComponentVisibility(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeActorFactoryNode:SetCustomActorVisibility(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue string
---@return boolean
function UInterchangeActorFactoryNode:SetCustomActorClassName(AttributeValue) end

---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeActorFactoryNode:GetCustomMobility(AttributeValue) end

---@param AttributeValue FTransform @[out] 
---@return boolean
function UInterchangeActorFactoryNode:GetCustomLocalTransform(AttributeValue) end

---@param AttributeValue FTransform @[out] 
---@return boolean
function UInterchangeActorFactoryNode:GetCustomGlobalTransform(AttributeValue) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeActorFactoryNode:GetCustomComponentVisibility(AttributeValue) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeActorFactoryNode:GetCustomActorVisibility(AttributeValue) end

---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeActorFactoryNode:GetCustomActorClassName(AttributeValue) end

