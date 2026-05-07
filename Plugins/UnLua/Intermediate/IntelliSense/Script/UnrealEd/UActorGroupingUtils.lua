---Helper class for grouping actors in the level editor
---@class UActorGroupingUtils : UObject
local UActorGroupingUtils = {}

---Unlocks any groups in the current selection
function UActorGroupingUtils:UnlockSelectedGroups() end

---Disbands any groups in the current selection, does not attempt to maintain any hierarchy
function UActorGroupingUtils:UngroupSelected() end

---Disbands any groups that the provided actors belong to, does not attempt to maintain any hierarchy
---@param ActorsToUngroup TArray_AActor_
function UActorGroupingUtils:UngroupActors(ActorsToUngroup) end

---@param bInGroupingActive boolean
function UActorGroupingUtils.SetGroupingActive(bInGroupingActive) end

---Removes any groups or actors in the current selection from their immediate parent.
---If all actors/subgroups are removed, the parent group will be destroyed.
function UActorGroupingUtils:RemoveSelectedFromGroup() end

---Locks any groups in the current selection
function UActorGroupingUtils:LockSelectedGroups() end

---@return boolean
function UActorGroupingUtils.IsGroupingActive() end

---Creates a new group from the current selection removing the actors from any existing groups they are already in
---@return AGroupActor
function UActorGroupingUtils:GroupSelected() end

---Creates a new group from the provided list of actors removing the actors from any existing groups they are already in
---@param ActorsToGroup TArray_AActor_
---@return AGroupActor
function UActorGroupingUtils:GroupActors(ActorsToGroup) end

---Convenience method for accessing grouping utils in a blueprint or script
---@return UActorGroupingUtils
function UActorGroupingUtils.Get() end

---* Check if the currently selected actors can be grouped together
---@return boolean
function UActorGroupingUtils:CanGroupSelectedActors() end

---Check if the provided list of actors can be grouped together
---@param ActorsToGroup TArray_AActor_
---@return boolean
function UActorGroupingUtils:CanGroupActors(ActorsToGroup) end

---Activates "Add to Group" mode which allows the user to select a group to append current selection
function UActorGroupingUtils:AddSelectedToGroup() end

