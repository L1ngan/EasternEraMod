---@class URigHierarchyController : UObject
---@field public bReportWarningsAndErrors boolean
local URigHierarchyController = {}

---Sets the selection based on a list of element keys
---@param InKeys TArray_FRigElementKey_
---@param bPrintPythonCommand boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@return boolean
function URigHierarchyController:SetSelection(InKeys, bPrintPythonCommand, bSetupUndo) end

---Sets a new parent to an element. For elements that allow more than one parent the parent list will be replaced.
---@param InChild FRigElementKey
---@param InParent FRigElementKey
---@param bMaintainGlobalTransform boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigHierarchyController:SetParent(InChild, InParent, bMaintainGlobalTransform, bSetupUndo, bPrintPythonCommand) end

---Sets the selection based on a list of component keys
---@param InKeys TArray_FRigHierarchyKey_
---@param bPrintPythonCommand boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@return boolean
function URigHierarchyController:SetHierarchySelection(InKeys, bPrintPythonCommand, bSetupUndo) end

---Sets the hierarchy currently linked to this controller
---@param InHierarchy URigHierarchy
function URigHierarchyController:SetHierarchy(InHierarchy) end

---Sets the display name on a control
---@param InControl FRigElementKey
---@param InDisplayName string
---@param bRenameElement boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return string
function URigHierarchyController:SetDisplayName(InControl, InDisplayName, bRenameElement, bSetupUndo, bPrintPythonCommand) end

---Sets a control's settings given a control key
---@param InKey FRigElementKey
---@param InSettings FRigControlSettings
---@param bSetupUndo boolean @[opt] 
---@return boolean
function URigHierarchyController:SetControlSettings(InKey, InSettings, bSetupUndo) end

---Sets the selection based on a list of component keys
---@param InKeys TArray_FRigComponentKey_
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigHierarchyController:SetComponentSelection(InKeys, bPrintPythonCommand) end

---Updates the content of a component in the hierarchy
---@param InComponent FRigComponentKey
---@param InContent string
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigHierarchyController:SetComponentContent(InComponent, InContent, bSetupUndo, bPrintPythonCommand) end

---Updates the label on an available space
---@param InControl FRigElementKey
---@param InSpace FRigElementKey
---@param InDisplayLabel string
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigHierarchyController:SetAvailableSpaceLabel(InControl, InSpace, InDisplayLabel, bSetupUndo, bPrintPythonCommand) end

---Reorders an available space for the given control
---@param InControl FRigElementKey
---@param InSpace FRigElementKey
---@param InIndex integer
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigHierarchyController:SetAvailableSpaceIndex(InControl, InSpace, InIndex, bSetupUndo, bPrintPythonCommand) end

---Selects or deselects a component or an element in the hierarchy
---@param InKey FRigHierarchyKey
---@param bSelect boolean @[opt] 
---@param bClearSelection boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@return boolean
function URigHierarchyController:SelectHierarchyKey(InKey, bSelect, bClearSelection, bSetupUndo) end

---Selects or deselects an element in the hierarchy
---@param InKey FRigElementKey
---@param bSelect boolean @[opt] 
---@param bClearSelection boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@return boolean
function URigHierarchyController:SelectElement(InKey, bSelect, bClearSelection, bSetupUndo) end

---Selects or deselects a component in the hierarchy
---@param InKey FRigComponentKey
---@param bSelect boolean @[opt] 
---@param bClearSelection boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@return boolean
function URigHierarchyController:SelectComponent(InKey, bSelect, bClearSelection, bSetupUndo) end

---Reparents an existing component in the hierarchy
---@param InComponentKey FRigComponentKey
---@param InParentElementKey FRigElementKey
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@param bClearSelection boolean @[opt] 
---@return FRigComponentKey
function URigHierarchyController:ReparentComponent(InComponentKey, InParentElementKey, bSetupUndo, bPrintPythonCommand, bClearSelection) end

---Changes the element's index within its default parent (or the top level)
---@param InElement FRigElementKey
---@param InIndex integer
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigHierarchyController:ReorderElement(InElement, InIndex, bSetupUndo, bPrintPythonCommand) end

---Renames an existing element in the hierarchy
---@param InElement FRigElementKey
---@param InName string
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@param bClearSelection boolean @[opt] 
---@return FRigElementKey
function URigHierarchyController:RenameElement(InElement, InName, bSetupUndo, bPrintPythonCommand, bClearSelection) end

---Renames an existing component in the hierarchy
---@param InComponent FRigComponentKey
---@param InName string
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@param bClearSelection boolean @[opt] 
---@return FRigComponentKey
function URigHierarchyController:RenameComponent(InComponent, InName, bSetupUndo, bPrintPythonCommand, bClearSelection) end

---Removes an existing parent from an element in the hierarchy. For elements that allow only one parent the element will be unparented (same as ::RemoveAllParents)
---@param InChild FRigElementKey
---@param InParent FRigElementKey
---@param bMaintainGlobalTransform boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigHierarchyController:RemoveParent(InChild, InParent, bMaintainGlobalTransform, bSetupUndo, bPrintPythonCommand) end

---Removes an existing element from the hierarchy
---@param InElement FRigElementKey
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigHierarchyController:RemoveElement(InElement, bSetupUndo, bPrintPythonCommand) end

---Removes a component from the hierarchy
---@param InComponent FRigComponentKey
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigHierarchyController:RemoveComponent(InComponent, bSetupUndo, bPrintPythonCommand) end

---Removes an channel host from the animation channel
---@param InChannel FRigElementKey
---@param InHost FRigElementKey
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigHierarchyController:RemoveChannelHost(InChannel, InHost, bSetupUndo, bPrintPythonCommand) end

---Removes an available space from the given control
---@param InControl FRigElementKey
---@param InSpace FRigElementKey
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigHierarchyController:RemoveAvailableSpace(InControl, InSpace, bSetupUndo, bPrintPythonCommand) end

---Removes all parents from an element in the hierarchy.
---@param InChild FRigElementKey
---@param bMaintainGlobalTransform boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigHierarchyController:RemoveAllParents(InChild, bMaintainGlobalTransform, bSetupUndo, bPrintPythonCommand) end

---Mirrors the given elements
---@param InKeys TArray_FRigElementKey_
---@param InSettings FRigVMMirrorSettings
---@param bSelectNewElements boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommands boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchyController:MirrorElements(InKeys, InSettings, bSelectNewElements, bSetupUndo, bPrintPythonCommands) end

---Imports the sockets from existing skeleton to the hierarchy as nulls
---@param InSkeletalMesh USkeletalMesh
---@param InNameSpace string
---@param bReplaceExistingSockets boolean @[opt] 
---@param bRemoveObsoleteSockets boolean @[opt] 
---@param bSelectSockets boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchyController:ImportSocketsFromSkeletalMesh(InSkeletalMesh, InNameSpace, bReplaceExistingSockets, bRemoveObsoleteSockets, bSelectSockets, bSetupUndo, bPrintPythonCommand) end

---Imports all bones from a preview skeletal mesh. Used for rig modules and their preview skeleton
---@param InSkeletalMesh USkeletalMesh
---@param bReplaceExistingBones boolean @[opt] 
---@param bRemoveObsoleteBones boolean @[opt] 
---@param bSelectBones boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchyController:ImportPreviewSkeletalMesh(InSkeletalMesh, bReplaceExistingBones, bRemoveObsoleteBones, bSelectBones, bSetupUndo) end

---Imports the content of a text buffer to the hierarchy
---@param InContent string
---@param bReplaceExistingElements boolean @[opt] 
---@param bSelectNewElements boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommands boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchyController:ImportFromText(InContent, bReplaceExistingElements, bSelectNewElements, bSetupUndo, bPrintPythonCommands) end

---Imports all curves from a skeletalmesh to the hierarchy
---@param InSkeletalMesh USkeletalMesh
---@param InNameSpace string @[opt] 
---@param bSelectCurves boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchyController:ImportCurvesFromSkeletalMesh(InSkeletalMesh, InNameSpace, bSelectCurves, bSetupUndo, bPrintPythonCommand) end

---Imports all curves from a skeleton to the hierarchy
---@param InAssetPath string
---@param InNameSpace string @[opt] 
---@param bSelectCurves boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchyController:ImportCurvesFromAsset(InAssetPath, InNameSpace, bSelectCurves, bSetupUndo) end

---Imports all curves from a skeleton to the hierarchy
---@param InSkeleton USkeleton
---@param InNameSpace string @[opt] 
---@param bSelectCurves boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchyController:ImportCurves(InSkeleton, InNameSpace, bSelectCurves, bSetupUndo, bPrintPythonCommand) end

---Imports an existing skeleton to the hierarchy, restricting the bone list to the ones that exist in the provided Skeletal Mesh
---@param InSkeletalMesh USkeletalMesh
---@param InNameSpace string
---@param bReplaceExistingBones boolean @[opt] 
---@param bRemoveObsoleteBones boolean @[opt] 
---@param bSelectBones boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchyController:ImportBonesFromSkeletalMesh(InSkeletalMesh, InNameSpace, bReplaceExistingBones, bRemoveObsoleteBones, bSelectBones, bSetupUndo, bPrintPythonCommand) end

---Imports an existing skeleton to the hierarchy
---@param InAssetPath string
---@param InNameSpace string @[opt] 
---@param bReplaceExistingBones boolean @[opt] 
---@param bRemoveObsoleteBones boolean @[opt] 
---@param bSelectBones boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchyController:ImportBonesFromAsset(InAssetPath, InNameSpace, bReplaceExistingBones, bRemoveObsoleteBones, bSelectBones, bSetupUndo) end

---Imports an existing skeleton to the hierarchy
---@param InSkeleton USkeleton
---@param InNameSpace string @[opt] 
---@param bReplaceExistingBones boolean @[opt] 
---@param bRemoveObsoleteBones boolean @[opt] 
---@param bSelectBones boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchyController:ImportBones(InSkeleton, InNameSpace, bReplaceExistingBones, bRemoveObsoleteBones, bSelectBones, bSetupUndo, bPrintPythonCommand) end

---Returns the hierarchy currently linked to this controller
---@return URigHierarchy
function URigHierarchyController:GetHierarchy() end

---Returns the control settings of a given control
---@param InKey FRigElementKey
---@return FRigControlSettings
function URigHierarchyController:GetControlSettings(InKey) end

---@return TArray_string_
function URigHierarchyController:GeneratePythonCommands() end

---Exports a list of items to text
---@param InKeys TArray_FRigElementKey_
---@return string
function URigHierarchyController:ExportToText(InKeys) end

---Exports the selected items to text
---@return string
function URigHierarchyController:ExportSelectionToText() end

---Duplicate the given elements
---@param InKeys TArray_FRigElementKey_
---@param bSelectNewElements boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommands boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchyController:DuplicateElements(InKeys, bSelectNewElements, bSetupUndo, bPrintPythonCommands) end

---Deselects or deselects a component or an element in the hierarchy
---@param InKey FRigHierarchyKey
---@param bSetupUndo boolean @[opt] 
---@return boolean
function URigHierarchyController:DeselectHierarchyKey(InKey, bSetupUndo) end

---Deselects or deselects an element in the hierarchy
---@param InKey FRigElementKey
---@return boolean
function URigHierarchyController:DeselectElement(InKey) end

---Deselects or deselects a component in the hierarchy
---@param InKey FRigComponentKey
---@return boolean
function URigHierarchyController:DeselectComponent(InKey) end

---Clears the selection
---@param bSetupUndo boolean @[opt] 
---@return boolean
function URigHierarchyController:ClearSelection(bSetupUndo) end

---Adds a component to the hierarchy top level of the hierarchy
---@param InComponentStruct UScriptStruct
---@param InName string
---@param InContent string
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return FRigComponentKey
function URigHierarchyController:AddTopLevelComponent(InComponentStruct, InName, InContent, bSetupUndo, bPrintPythonCommand) end

---Adds a socket to the hierarchy
---@param InName string
---@param InParent FRigElementKey
---@param InTransform FTransform
---@param bTransformInGlobal boolean @[opt] 
---@param InColor FLinearColor @[opt] 
---@param InDescription string
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return FRigElementKey
function URigHierarchyController:AddSocket(InName, InParent, InTransform, bTransformInGlobal, InColor, InDescription, bSetupUndo, bPrintPythonCommand) end

---Adds a new parent to an element. For elements that allow only one parent the parent will be replaced (Same as ::SetParent).
---@param InChild FRigElementKey
---@param InParent FRigElementKey
---@param InWeight number @[opt] 
---@param bMaintainGlobalTransform boolean @[opt] 
---@param InDisplayLabel string @[opt] 
---@param bSetupUndo boolean @[opt] 
---@return boolean
function URigHierarchyController:AddParent(InChild, InParent, InWeight, bMaintainGlobalTransform, InDisplayLabel, bSetupUndo) end

---Adds a null to the hierarchy
---@param InName string
---@param InParent FRigElementKey
---@param InTransform FTransform
---@param bTransformInGlobal boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return FRigElementKey
function URigHierarchyController:AddNull(InName, InParent, InTransform, bTransformInGlobal, bSetupUndo, bPrintPythonCommand) end

---Adds a curve to the hierarchy
---@param InName string
---@param InValue number @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return FRigElementKey
function URigHierarchyController:AddCurve(InName, InValue, bSetupUndo, bPrintPythonCommand) end

---Adds a control to the hierarchy
---@param InName string
---@param InParent FRigElementKey
---@param InSettings FRigControlSettings
---@param InValue FRigControlValue
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return FRigElementKey
function URigHierarchyController:AddControl_ForBlueprint(InName, InParent, InSettings, InValue, bSetupUndo, bPrintPythonCommand) end

---Adds a connector to the hierarchy
---@param InName string
---@param InSettings FRigConnectorSettings @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return FRigElementKey
function URigHierarchyController:AddConnector(InName, InSettings, bSetupUndo, bPrintPythonCommand) end

---Adds a component to the hierarchy
---@param InComponentStruct UScriptStruct
---@param InName string
---@param InElement FRigElementKey
---@param InContent string
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return FRigComponentKey
function URigHierarchyController:AddComponent(InComponentStruct, InName, InElement, InContent, bSetupUndo, bPrintPythonCommand) end

---Adds a new channel host to the animation channel
---@param InChannel FRigElementKey
---@param InHost FRigElementKey
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigHierarchyController:AddChannelHost(InChannel, InHost, bSetupUndo, bPrintPythonCommand) end

---Adds a bone to the hierarchy
---@param InName string
---@param InParent FRigElementKey
---@param InTransform FTransform
---@param bTransformInGlobal boolean @[opt] 
---@param InBoneType ERigBoneType @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return FRigElementKey
function URigHierarchyController:AddBone(InName, InParent, InTransform, bTransformInGlobal, InBoneType, bSetupUndo, bPrintPythonCommand) end

---Adds a new available space to the given control
---@param InControl FRigElementKey
---@param InSpace FRigElementKey
---@param InDisplayLabel string @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigHierarchyController:AddAvailableSpace(InControl, InSpace, InDisplayLabel, bSetupUndo, bPrintPythonCommand) end

---Adds a control to the hierarchy
---@param InName string
---@param InParentControl FRigElementKey
---@param InSettings FRigControlSettings
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return FRigElementKey
function URigHierarchyController:AddAnimationChannel_ForBlueprint(InName, InParentControl, InSettings, bSetupUndo, bPrintPythonCommand) end

