---Class to represent a set of variants.
---@class UInterchangeVariantSetNode : UInterchangeBaseNode
local UInterchangeVariantSetNode = {}

---Set the payload key needed to retrieve the variants for this VariantSet.
---@param PayloadKey string
---@return boolean
function UInterchangeVariantSetNode:SetCustomVariantsPayloadKey(PayloadKey) end

---Set the text to be displayed in the UI for this VariantSet.
---@param AttributeValue string
---@return boolean
function UInterchangeVariantSetNode:SetCustomDisplayText(AttributeValue) end

---Remove the specified translated node's unique ID from this VariantSet.
---@param DependencyUid string
---@return boolean
function UInterchangeVariantSetNode:RemoveCustomDependencyUid(DependencyUid) end

---Get the payload key needed to retrieve the variants for this VariantSet.
---@param PayloadKey string @[out] 
---@return boolean
function UInterchangeVariantSetNode:GetCustomVariantsPayloadKey(PayloadKey) end

---Retrieve the text that is displayed in the UI for this VariantSet.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeVariantSetNode:GetCustomDisplayText(AttributeValue) end

---Retrieve all the translated node's unique IDs for this VariantSet.
---@param OutDependencyUids TArray_string_ @[out] 
function UInterchangeVariantSetNode:GetCustomDependencyUids(OutDependencyUids) end

---Retrieve the number of translated node's unique IDs for this VariantSet.
---@return integer
function UInterchangeVariantSetNode:GetCustomDependencyUidCount() end

---Retrieve the specified translated node's unique ID for this VariantSet.
---@param Index integer
---@param OutDependencyUid string @[out] 
function UInterchangeVariantSetNode:GetCustomDependencyUid(Index, OutDependencyUid) end

---Add the specified translated node's unique ID to this VariantSet.
---@param DependencyUid string
---@return boolean
function UInterchangeVariantSetNode:AddCustomDependencyUid(DependencyUid) end

