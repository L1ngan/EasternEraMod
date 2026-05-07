---Class to represent a set of VariantSet nodes
---@class UInterchangeSceneVariantSetsNode : UInterchangeBaseNode
local UInterchangeSceneVariantSetsNode = {}

---Remove the specified VariantSet's unique id from this object.
---@param VariantUid string
---@return boolean
function UInterchangeSceneVariantSetsNode:RemoveCustomVariantSetUid(VariantUid) end

---Retrieve all the VariantSets' unique ids for this object.
---@param OutVariantUids TArray_string_ @[out] 
function UInterchangeSceneVariantSetsNode:GetCustomVariantSetUids(OutVariantUids) end

---Retrieve the number of VariantSets for this object.
---@return integer
function UInterchangeSceneVariantSetsNode:GetCustomVariantSetUidCount() end

---Retrieve the specified VariantSet's unique id for this object.
---@param Index integer
---@param OutVariantUid string @[out] 
function UInterchangeSceneVariantSetsNode:GetCustomVariantSetUid(Index, OutVariantUid) end

---Add the specified VariantSet's unique id to this object.
---@param VariantUid string
---@return boolean
function UInterchangeSceneVariantSetsNode:AddCustomVariantSetUid(VariantUid) end

