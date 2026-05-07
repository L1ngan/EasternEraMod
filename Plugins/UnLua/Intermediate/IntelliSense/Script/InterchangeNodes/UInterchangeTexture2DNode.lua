---ns UE::Interchange
---@class UInterchangeTexture2DNode : UInterchangeTextureNode
local UInterchangeTexture2DNode = {}

---@param AttributeValue EInterchangeTextureWrapMode
---@return boolean
function UInterchangeTexture2DNode:SetCustomWrapV(AttributeValue) end

---@param AttributeValue EInterchangeTextureWrapMode
---@return boolean
function UInterchangeTexture2DNode:SetCustomWrapU(AttributeValue) end

---Get the source blocks for the texture.
---If the map is empty, the texture is imported as a normal texture using the payload key.
---@return TMap_integer__string_
function UInterchangeTexture2DNode:GetSourceBlocks() end

---@param AttributeValue EInterchangeTextureWrapMode @[out] 
---@return boolean
function UInterchangeTexture2DNode:GetCustomWrapV(AttributeValue) end

---@param AttributeValue EInterchangeTextureWrapMode @[out] 
---@return boolean
function UInterchangeTexture2DNode:GetCustomWrapU(AttributeValue) end

