---* Used for common non-physical camera with orthographic or perspective projection.
---@class UInterchangeStandardCameraFactoryNode : UInterchangeActorFactoryNode
local UInterchangeStandardCameraFactoryNode = {}

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStandardCameraFactoryNode:SetCustomWidth(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStandardCameraFactoryNode:SetCustomProjectionMode(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStandardCameraFactoryNode:SetCustomNearClipPlane(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStandardCameraFactoryNode:SetCustomFieldOfView(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStandardCameraFactoryNode:SetCustomFarClipPlane(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStandardCameraFactoryNode:SetCustomAspectRatio(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeStandardCameraFactoryNode:GetCustomWidth(AttributeValue) end

---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeStandardCameraFactoryNode:GetCustomProjectionMode(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeStandardCameraFactoryNode:GetCustomNearClipPlane(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeStandardCameraFactoryNode:GetCustomFieldOfView(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeStandardCameraFactoryNode:GetCustomFarClipPlane(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeStandardCameraFactoryNode:GetCustomAspectRatio(AttributeValue) end

