---A lightweight actor that can be used to own a cluster union component.
---@class AClusterUnionActor : AActor
---@field protected ClusterUnion UClusterUnionComponent @The pivot used while building.
local AClusterUnionActor = {}

---@return UClusterUnionComponent
function AClusterUnionActor:GetClusterUnionComponent() end

