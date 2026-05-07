---@class UInterchangeDecalNode : UInterchangeBaseNode
local UInterchangeDecalNode = {}

---@param AttributeValue integer
---@return boolean
function UInterchangeDecalNode:SetCustomSortOrder(AttributeValue) end

---@param AttributeValue FVector
---@return boolean
function UInterchangeDecalNode:SetCustomDecalSize(AttributeValue) end

---@param AttributeValue string
---@return boolean
function UInterchangeDecalNode:SetCustomDecalMaterialPathName(AttributeValue) end

---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeDecalNode:GetCustomSortOrder(AttributeValue) end

---@param AttributeValue FVector @[out] 
---@return boolean
function UInterchangeDecalNode:GetCustomDecalSize(AttributeValue) end

---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeDecalNode:GetCustomDecalMaterialPathName(AttributeValue) end

