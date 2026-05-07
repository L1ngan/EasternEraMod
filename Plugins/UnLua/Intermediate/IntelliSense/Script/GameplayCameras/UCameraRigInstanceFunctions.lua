---Blueprint functions for camera rig instance IDs.
---@class UCameraRigInstanceFunctions : UBlueprintFunctionLibrary
local UCameraRigInstanceFunctions = {}

---Whether the given camera rig instance ID is valid.
---A valid ID doesn't necessarily correspond to a camera rig instance that is still running.
---@param InstanceID FCameraRigInstanceID
---@return boolean
function UCameraRigInstanceFunctions.IsValid(InstanceID) end

