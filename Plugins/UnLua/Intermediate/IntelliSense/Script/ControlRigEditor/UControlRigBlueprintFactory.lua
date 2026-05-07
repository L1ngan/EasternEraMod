---@class UControlRigBlueprintFactory : UFactory
---@field public ParentClass TSubclassOf<UControlRig> @The parent class of the created blueprint
local UControlRigBlueprintFactory = {}

---Create a new control rig asset within the contents space of the project.
---@param InDesiredPackagePath string
---@param bModularRig boolean @[opt] 
---@return UControlRigBlueprint
function UControlRigBlueprintFactory.CreateNewControlRigAsset(InDesiredPackagePath, bModularRig) end

---Create a new control rig asset within the contents space of the project
---based on a skeletal mesh or skeleton object.
---@param InSelectedObject UObject
---@param bModularRig boolean @[opt] 
---@return UControlRigBlueprint
function UControlRigBlueprintFactory.CreateControlRigFromSkeletalMeshOrSkeleton(InSelectedObject, bModularRig) end

