---@class UControlRigBlueprintEditorLibrary : URigVMEditorBlueprintLibrary
local UControlRigBlueprintEditorLibrary = {}

function UControlRigBlueprintEditorLibrary.SetupAllEditorMenus() end

---@param InRigBlueprint UControlRigBlueprint
---@param PreviewMesh USkeletalMesh
---@param bMarkAsDirty boolean @[opt] 
function UControlRigBlueprintEditorLibrary.SetPreviewMesh(InRigBlueprint, PreviewMesh, bMarkAsDirty) end

---@param InRigBlueprint UControlRigBlueprint
function UControlRigBlueprintEditorLibrary.RequestControlRigInit(InRigBlueprint) end

---@param InRigBlueprint UControlRigBlueprint
---@return USkeletalMesh
function UControlRigBlueprintEditorLibrary.GetPreviewMesh(InRigBlueprint) end

---@param InRigBlueprint UControlRigBlueprint
---@return URigHierarchyController
function UControlRigBlueprintEditorLibrary.GetHierarchyController(InRigBlueprint) end

---@param InRigBlueprint UControlRigBlueprint
---@return URigHierarchy
function UControlRigBlueprintEditorLibrary.GetHierarchy(InRigBlueprint) end

---@return TArray_UControlRigBlueprint_
function UControlRigBlueprintEditorLibrary.GetCurrentlyOpenRigBlueprints() end

---@return TArray_UStruct_
function UControlRigBlueprintEditorLibrary.GetAvailableRigUnits() end

---@return TArray_FRigModuleDescription_
function UControlRigBlueprintEditorLibrary.GetAvailableRigModules() end

---@param Object UObject
---@param Branches ECastToControlRigBlueprintCases @[out] 
---@param AsControlRigBlueprint UControlRigBlueprint @[out] 
function UControlRigBlueprintEditorLibrary.CastToControlRigBlueprint(Object, Branches, AsControlRigBlueprint) end

