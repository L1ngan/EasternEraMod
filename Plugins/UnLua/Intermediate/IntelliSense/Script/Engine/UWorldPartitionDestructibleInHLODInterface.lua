---@class UWorldPartitionDestructibleInHLODInterface : UInterface
local UWorldPartitionDestructibleInHLODInterface = {}

---@param InDestructionTag FWorldPartitionHLODDestructionTag
function UWorldPartitionDestructibleInHLODInterface:SetHLODDestructionTag(InDestructionTag) end

---@return FWorldPartitionHLODDestructionTag
function UWorldPartitionDestructibleInHLODInterface:GetHLODDestructionTag() end

