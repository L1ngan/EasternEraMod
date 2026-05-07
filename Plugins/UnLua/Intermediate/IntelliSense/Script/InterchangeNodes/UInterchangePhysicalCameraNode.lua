---@class UInterchangePhysicalCameraNode : UInterchangeBaseNode
local UInterchangePhysicalCameraNode = {}

---@param AttributeValue number
---@return boolean
function UInterchangePhysicalCameraNode:SetCustomSensorWidth(AttributeValue) end

---@param AttributeValue number
---@return boolean
function UInterchangePhysicalCameraNode:SetCustomSensorHeight(AttributeValue) end

---@param AttributeValue number
---@return boolean
function UInterchangePhysicalCameraNode:SetCustomFocalLength(AttributeValue) end

---@param AttributeValue boolean
---@return boolean
function UInterchangePhysicalCameraNode:SetCustomEnableDepthOfField(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangePhysicalCameraNode:GetCustomSensorWidth(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangePhysicalCameraNode:GetCustomSensorHeight(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangePhysicalCameraNode:GetCustomFocalLength(AttributeValue) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangePhysicalCameraNode:GetCustomEnableDepthOfField(AttributeValue) end

