---@class UInterchangeSpecularProfileFactoryNode : UInterchangeFactoryBaseNode
local UInterchangeSpecularProfileFactoryNode = {}

---@param TextureUid string
---@return boolean
function UInterchangeSpecularProfileFactoryNode:SetCustomTexture(TextureUid) end

---@param Format ESpecularProfileFormat
---@return boolean
function UInterchangeSpecularProfileFactoryNode:SetCustomFormat(Format) end

---@param TextureUid string @[out] 
---@return boolean
function UInterchangeSpecularProfileFactoryNode:GetCustomTexture(TextureUid) end

---@param Format ESpecularProfileFormat @[out] 
---@return boolean
function UInterchangeSpecularProfileFactoryNode:GetCustomFormat(Format) end

