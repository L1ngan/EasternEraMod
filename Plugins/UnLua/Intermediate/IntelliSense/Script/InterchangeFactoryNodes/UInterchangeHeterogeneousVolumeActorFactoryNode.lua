---@class UInterchangeHeterogeneousVolumeActorFactoryNode : UInterchangeActorFactoryNode
local UInterchangeHeterogeneousVolumeActorFactoryNode = {}

---Sets the Uid of the material that should be assigned to the spawned HeterogeneousVolumeActor at its single material slot
---@param MaterialFactoryNodeUid string
---@return boolean
function UInterchangeHeterogeneousVolumeActorFactoryNode:SetCustomVolumetricMaterialUid(MaterialFactoryNodeUid) end

---Gets the Uid of the material that should be assigned to the spawned HeterogeneousVolumeActor at its single material slot
---@param MaterialFactoryNodeUid string @[out] 
---@return boolean
function UInterchangeHeterogeneousVolumeActorFactoryNode:GetCustomVolumetricMaterialUid(MaterialFactoryNodeUid) end

