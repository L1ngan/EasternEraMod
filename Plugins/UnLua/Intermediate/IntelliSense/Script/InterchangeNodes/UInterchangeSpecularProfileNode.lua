---@class UInterchangeSpecularProfileNode : UInterchangeBaseNode
local UInterchangeSpecularProfileNode = {}

---@param TextureUid string
---@return boolean
function UInterchangeSpecularProfileNode:SetCustomTexture(TextureUid) end

---Set/Get the format based on ESpecularProfileFormat
---@param Format integer
---@return boolean
function UInterchangeSpecularProfileNode:SetCustomFormat(Format) end

---@param TextureUid string @[out] 
---@return boolean
function UInterchangeSpecularProfileNode:GetCustomTexture(TextureUid) end

---@param Format integer @[out] 
---@return boolean
function UInterchangeSpecularProfileNode:GetCustomFormat(Format) end

