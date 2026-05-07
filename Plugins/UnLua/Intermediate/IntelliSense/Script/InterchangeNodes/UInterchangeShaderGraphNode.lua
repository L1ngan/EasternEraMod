---A shader graph has its own set of inputs on which shader nodes can be connected to.
---@class UInterchangeShaderGraphNode : UInterchangeShaderNode
local UInterchangeShaderGraphNode = {}

---@param AttributeValue boolean
---@return boolean
function UInterchangeShaderGraphNode:SetCustomTwoSidedTransmission(AttributeValue) end

---Set if this shader graph should be rendered two-sided or not. Defaults to off.
---@param AttributeValue boolean
---@return boolean
function UInterchangeShaderGraphNode:SetCustomTwoSided(AttributeValue) end

---@param AttributeValue boolean
---@return boolean
function UInterchangeShaderGraphNode:SetCustomScreenSpaceReflections(AttributeValue) end

---The shader is transparent if its alpha value is lower than the clip value, or opaque if it is higher.
---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeShaderGraphNode:SetCustomOpacityMaskClipValue(AttributeValue, bAddApplyDelegate) end

---Set whether this shader graph should be considered as a material (false), or a material function (true).
---@param AttributeValue boolean
---@return boolean
function UInterchangeShaderGraphNode:SetCustomIsAShaderFunction(AttributeValue) end

---@param AttributeValue number
---@return boolean
function UInterchangeShaderGraphNode:SetCustomDisplacementCenterMode(AttributeValue) end

---@param AttributeValue integer
---@return boolean
function UInterchangeShaderGraphNode:SetCustomBlendMode(AttributeValue) end

---Forces two-sided even for Transmission materials.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeShaderGraphNode:GetCustomTwoSidedTransmission(AttributeValue) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeShaderGraphNode:GetCustomTwoSided(AttributeValue) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeShaderGraphNode:GetCustomScreenSpaceReflections(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeShaderGraphNode:GetCustomOpacityMaskClipValue(AttributeValue) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeShaderGraphNode:GetCustomIsAShaderFunction(AttributeValue) end

---Set the center of the displacement
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeShaderGraphNode:GetCustomDisplacementCenterMode(AttributeValue) end

---Set the Blend Mode using EBlendMode to avoid a dependency on the Engine.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeShaderGraphNode:GetCustomBlendMode(AttributeValue) end

