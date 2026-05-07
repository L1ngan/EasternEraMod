---@class UGroundTruthData : UObject
---@field public bResetGroundTruth boolean
---@field protected ObjectData UObject
local UGroundTruthData = {}

---@param GroundTruth UObject
function UGroundTruthData:SaveObject(GroundTruth) end

function UGroundTruthData:ResetObject() end

---@return UObject
function UGroundTruthData:LoadObject() end

---@return boolean
function UGroundTruthData:CanModify() end

