---@class UInterchangeTexture2DArrayFactoryNode : UInterchangeTextureFactoryNode
local UInterchangeTexture2DArrayFactoryNode = {}

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTexture2DArrayFactoryNode:SetCustomAddressZ(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTexture2DArrayFactoryNode:GetCustomAddressZ(AttributeValue) end

---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTexture2DArrayFactoryNode:GetCustomAddressY(AttributeValue) end

---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTexture2DArrayFactoryNode:GetCustomAddressX(AttributeValue) end

