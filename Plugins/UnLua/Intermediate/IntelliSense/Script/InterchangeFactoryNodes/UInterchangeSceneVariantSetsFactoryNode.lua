---@class UInterchangeSceneVariantSetsFactoryNode : UInterchangeFactoryBaseNode
local UInterchangeSceneVariantSetsFactoryNode = {}

---Remove the specified unique ID of a translated VariantSet from this object.
---@param VariantUid string
---@return boolean
function UInterchangeSceneVariantSetsFactoryNode:RemoveCustomVariantSetUid(VariantUid) end

---Retrieve the unique IDs of all translated VariantSets for this object.
---@param OutVariantUids TArray_string_ @[out] 
function UInterchangeSceneVariantSetsFactoryNode:GetCustomVariantSetUids(OutVariantUids) end

---Retrieve the number of unique IDs of all translated VariantSets for this object.
---@return integer
function UInterchangeSceneVariantSetsFactoryNode:GetCustomVariantSetUidCount() end

---Retrieve the UID of the VariantSet with the specified index.
---@param Index integer
---@param OutVariantUid string @[out] 
function UInterchangeSceneVariantSetsFactoryNode:GetCustomVariantSetUid(Index, OutVariantUid) end

---Add a unique id of a translated VariantSet for this object.
---@param VariantUid string
---@return boolean
function UInterchangeSceneVariantSetsFactoryNode:AddCustomVariantSetUid(VariantUid) end

