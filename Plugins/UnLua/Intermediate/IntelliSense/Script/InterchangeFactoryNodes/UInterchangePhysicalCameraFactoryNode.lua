---@class UInterchangePhysicalCameraFactoryNode : UInterchangeActorFactoryNode
local UInterchangePhysicalCameraFactoryNode = {}

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangePhysicalCameraFactoryNode:SetCustomSensorWidth(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangePhysicalCameraFactoryNode:SetCustomSensorHeight(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue ECameraFocusMethod
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangePhysicalCameraFactoryNode:SetCustomFocusMethod(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangePhysicalCameraFactoryNode:SetCustomFocalLength(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangePhysicalCameraFactoryNode:GetCustomSensorWidth(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangePhysicalCameraFactoryNode:GetCustomSensorHeight(AttributeValue) end

---@param AttributeValue ECameraFocusMethod @[out] 
---@return boolean
function UInterchangePhysicalCameraFactoryNode:GetCustomFocusMethod(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangePhysicalCameraFactoryNode:GetCustomFocalLength(AttributeValue) end

