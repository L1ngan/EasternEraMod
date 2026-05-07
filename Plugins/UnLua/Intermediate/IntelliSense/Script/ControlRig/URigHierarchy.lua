---@class URigHierarchy : UObject
---@field private ModifiedEventDynamic MulticastDelegate
---@field private TopologyVersion integer @The topology version of the hierarchy changes when elements are added, removed, re-parented or renamed.
---@field private MetadataVersion integer @The metadata version of the hierarchy changes when metadata is being created or removed (not when the metadata values changes)
---@field private MetadataTagVersion integer @The metadata version of the hierarchy changes when metadata is being created or removed (not when the metadata values changes)
---@field private bEnableDirtyPropagation boolean @If set to false the dirty flag propagation will be disabled
---@field private TransformStackIndex integer @The index identifying where we stand with the stack
---@field private HierarchyController URigHierarchyController
---@field private RuleManager UModularRigRuleManager
---@field protected HierarchyForCacheValidation URigHierarchy
local URigHierarchy = {}

---Sets a curve's value given its index
---@param InElementIndex integer
---@param bSetupUndo boolean @[opt] 
function URigHierarchy:UnsetCurveValueByIndex(InElementIndex, bSetupUndo) end

---Sets a curve's value given its key
---@param InKey FRigElementKey
---@param bSetupUndo boolean @[opt] 
function URigHierarchy:UnsetCurveValue(InKey, bSetupUndo) end

---Switches a multi parent element to world space.
---This injects a world space reference.
---@param InChild FRigElementKey
---@param bInitial boolean @[opt] 
---@param bAffectChildren boolean @[opt] 
---@return boolean
function URigHierarchy:SwitchToWorldSpace(InChild, bInitial, bAffectChildren) end

---Switches a multi parent element to a single parent.
---This sets the new parent's weight to 1.0 and disables
---weights for all other potential parents.
---@param InChild FRigElementKey
---@param InParent FRigElementKey
---@param bInitial boolean @[opt] 
---@param bAffectChildren boolean @[opt] 
---@return boolean
function URigHierarchy:SwitchToParent(InChild, InParent, bInitial, bAffectChildren) end

---Switches a multi parent element to its first parent
---@param InChild FRigElementKey
---@param bInitial boolean @[opt] 
---@param bAffectChildren boolean @[opt] 
---@return boolean
function URigHierarchy:SwitchToDefaultParent(InChild, bInitial, bAffectChildren) end

---Sorts the input key list by traversing the hierarchy
---@param InKeys TArray_FRigElementKey_
---@return TArray_FRigElementKey_
function URigHierarchy:SortKeys(InKeys) end

---Sets the metadata to a FVector value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue FVector
---@return boolean
function URigHierarchy:SetVectorMetadata(InItem, InMetadataName, InValue) end

---Sets the metadata to a FVector array value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue TArray_FVector_
---@return boolean
function URigHierarchy:SetVectorArrayMetadata(InItem, InMetadataName, InValue) end

---Sets the metadata to a FTransform value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue FTransform
---@return boolean
function URigHierarchy:SetTransformMetadata(InItem, InMetadataName, InValue) end

---Sets the metadata to a FTransform array value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue TArray_FTransform_
---@return boolean
function URigHierarchy:SetTransformArrayMetadata(InItem, InMetadataName, InValue) end

---* Sets a tag on an element in the hierarchy
---* @@param InItem The item to set the tag for
---* @@param InTag The tag to set
---@param InItem FRigElementKey
---@param InTag string
---@return boolean
function URigHierarchy:SetTag(InItem, InTag) end

---Sets the metadata to a FRotator value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue FRotator
---@return boolean
function URigHierarchy:SetRotatorMetadata(InItem, InMetadataName, InValue) end

---Sets the metadata to a FRotator array value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue TArray_FRotator_
---@return boolean
function URigHierarchy:SetRotatorArrayMetadata(InItem, InMetadataName, InValue) end

---Sets the metadata to a FRigElementKey value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue FRigElementKey
---@return boolean
function URigHierarchy:SetRigElementKeyMetadata(InItem, InMetadataName, InValue) end

---Sets the metadata to a FRigElementKey array value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue TArray_FRigElementKey_
---@return boolean
function URigHierarchy:SetRigElementKeyArrayMetadata(InItem, InMetadataName, InValue) end

---Sets the metadata to a FQuat value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue FQuat
---@return boolean
function URigHierarchy:SetQuatMetadata(InItem, InMetadataName, InValue) end

---Sets the metadata to a FQuat array value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue TArray_FQuat_
---@return boolean
function URigHierarchy:SetQuatArrayMetadata(InItem, InMetadataName, InValue) end

---Sets the current / initial pose of the hierarchy
---@param InPose FRigPose
function URigHierarchy:SetPose_ForBlueprint(InPose) end

---Sets the all of the weights of the parents of a multi parent element
---@param InChild FRigElementKey
---@param InWeights TArray_FRigElementWeight_
---@param bInitial boolean @[opt] 
---@param bAffectChildren boolean @[opt] 
---@return boolean
function URigHierarchy:SetParentWeightArray(InChild, InWeights, bInitial, bAffectChildren) end

---Sets the weight of a parent below a multi parent element
---@param InChild FRigElementKey
---@param InParent FRigElementKey
---@param InWeight FRigElementWeight
---@param bInitial boolean @[opt] 
---@param bAffectChildren boolean @[opt] 
---@return boolean
function URigHierarchy:SetParentWeight(InChild, InParent, InWeight, bInitial, bAffectChildren) end

---Sets the metadata to a FName value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue string
---@return boolean
function URigHierarchy:SetNameMetadata(InItem, InMetadataName, InValue) end

---Sets the metadata to a FName array value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue TArray_string_
---@return boolean
function URigHierarchy:SetNameArrayMetadata(InItem, InMetadataName, InValue) end

---Sets the local current or initial transform for a given element index.
---@param InElementIndex integer
---@param InTransform FTransform
---@param bInitial boolean @[opt] 
---@param bAffectChildren boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommands boolean @[opt] 
function URigHierarchy:SetLocalTransformByIndex(InElementIndex, InTransform, bInitial, bAffectChildren, bSetupUndo, bPrintPythonCommands) end

---Sets the local current or initial transform for a given key.
---@param InKey FRigElementKey
---@param InTransform FTransform
---@param bInitial boolean @[opt] 
---@param bAffectChildren boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommands boolean @[opt] 
function URigHierarchy:SetLocalTransform(InKey, InTransform, bInitial, bAffectChildren, bSetupUndo, bPrintPythonCommands) end

---Sets the metadata to a FLinearColor value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue FLinearColor
---@return boolean
function URigHierarchy:SetLinearColorMetadata(InItem, InMetadataName, InValue) end

---Sets the metadata to a FLinearColor array value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue TArray_FLinearColor_
---@return boolean
function URigHierarchy:SetLinearColorArrayMetadata(InItem, InMetadataName, InValue) end

---Sets the metadata to a int32 value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue integer
---@return boolean
function URigHierarchy:SetInt32Metadata(InItem, InMetadataName, InValue) end

---Sets the metadata to a int32 array value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue TArray_integer_
---@return boolean
function URigHierarchy:SetInt32ArrayMetadata(InItem, InMetadataName, InValue) end

---Sets the global current or initial transform for a given element index.
---@param InElementIndex integer
---@param InTransform FTransform
---@param bInitial boolean @[opt] 
---@param bAffectChildren boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
function URigHierarchy:SetGlobalTransformByIndex(InElementIndex, InTransform, bInitial, bAffectChildren, bSetupUndo, bPrintPythonCommand) end

---Sets the global current or initial transform for a given key.
---@param InKey FRigElementKey
---@param InTransform FTransform
---@param bInitial boolean @[opt] 
---@param bAffectChildren boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
function URigHierarchy:SetGlobalTransform(InKey, InTransform, bInitial, bAffectChildren, bSetupUndo, bPrintPythonCommand) end

---Sets the metadata to a float value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue number
---@return boolean
function URigHierarchy:SetFloatMetadata(InItem, InMetadataName, InValue) end

---Sets the metadata to a float array value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue TArray_number_
---@return boolean
function URigHierarchy:SetFloatArrayMetadata(InItem, InMetadataName, InValue) end

---Sets a curve's value given its index
---@param InElementIndex integer
---@param InValue number
---@param bSetupUndo boolean @[opt] 
function URigHierarchy:SetCurveValueByIndex(InElementIndex, InValue, bSetupUndo) end

---Sets a curve's value given its key
---@param InKey FRigElementKey
---@param InValue number
---@param bSetupUndo boolean @[opt] 
function URigHierarchy:SetCurveValue(InKey, InValue, bSetupUndo) end

---Sets a control's current visibility based on a key
---@param InElementIndex integer
---@param bVisibility boolean
function URigHierarchy:SetControlVisibilityByIndex(InElementIndex, bVisibility) end

---Sets a control's current visibility based on a key
---@param InKey FRigElementKey
---@param bVisibility boolean
function URigHierarchy:SetControlVisibility(InKey, bVisibility) end

---Sets a control's current value given its index
---@param InElementIndex integer
---@param InValue FRigControlValue
---@param InValueType ERigControlValueType @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommands boolean @[opt] 
function URigHierarchy:SetControlValueByIndex(InElementIndex, InValue, InValueType, bSetupUndo, bPrintPythonCommands) end

---Sets a control's current value given its key
---@param InKey FRigElementKey
---@param InValue FRigControlValue
---@param InValueType ERigControlValueType @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommands boolean @[opt] 
function URigHierarchy:SetControlValue(InKey, InValue, InValueType, bSetupUndo, bPrintPythonCommands) end

---Sets the local shape transform for a given control element by index
---@param InElementIndex integer
---@param InTransform FTransform
---@param bInitial boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
function URigHierarchy:SetControlShapeTransformByIndex(InElementIndex, InTransform, bInitial, bSetupUndo) end

---Sets the shape transform for a given control element by key
---@param InKey FRigElementKey
---@param InTransform FTransform
---@param bInitial boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
function URigHierarchy:SetControlShapeTransform(InKey, InTransform, bInitial, bSetupUndo) end

---Sets the control settings for a given control element by index
---@param InElementIndex integer
---@param InSettings FRigControlSettings
---@param bSetupUndo boolean @[opt] 
---@param bForce boolean @[opt] 
---@param bPrintPythonCommands boolean @[opt] 
function URigHierarchy:SetControlSettingsByIndex(InElementIndex, InSettings, bSetupUndo, bForce, bPrintPythonCommands) end

---Sets the control settings for a given control element by key
---@param InKey FRigElementKey
---@param InSettings FRigControlSettings
---@param bSetupUndo boolean @[opt] 
---@param bForce boolean @[opt] 
---@param bPrintPythonCommands boolean @[opt] 
function URigHierarchy:SetControlSettings(InKey, InSettings, bSetupUndo, bForce, bPrintPythonCommands) end

---Sets a control's preferred rotator (local transform rotation)
---@param InElementIndex integer
---@param InRotator FRotator
---@param bInitial boolean @[opt] 
---@param bFixEulerFlips boolean @[opt] 
function URigHierarchy:SetControlPreferredRotatorByIndex(InElementIndex, InRotator, bInitial, bFixEulerFlips) end

---Sets a control's preferred rotator (local transform rotation)
---@param InKey FRigElementKey
---@param InRotator FRotator
---@param bInitial boolean @[opt] 
---@param bFixEulerFlips boolean @[opt] 
function URigHierarchy:SetControlPreferredRotator(InKey, InRotator, bInitial, bFixEulerFlips) end

---Sets a control's preferred euler rotation order
---@param InElementIndex integer
---@param InRotationOrder EEulerRotationOrder
function URigHierarchy:SetControlPreferredRotationOrderByIndex(InElementIndex, InRotationOrder) end

---Sets a control's preferred euler rotation order
---@param InKey FRigElementKey
---@param InRotationOrder EEulerRotationOrder
function URigHierarchy:SetControlPreferredRotationOrder(InKey, InRotationOrder) end

---Sets a control's preferred euler angles (local transform rotation)
---@param InElementIndex integer
---@param InEulerAngles FVector
---@param InRotationOrder EEulerRotationOrder
---@param bInitial boolean @[opt] 
---@param bFixEulerFlips boolean @[opt] 
function URigHierarchy:SetControlPreferredEulerAnglesByIndex(InElementIndex, InEulerAngles, InRotationOrder, bInitial, bFixEulerFlips) end

---Sets a control's preferred euler angles (local transform rotation)
---@param InKey FRigElementKey
---@param InEulerAngles FVector
---@param InRotationOrder EEulerRotationOrder
---@param bInitial boolean @[opt] 
---@param bFixEulerFlips boolean @[opt] 
function URigHierarchy:SetControlPreferredEulerAngles(InKey, InEulerAngles, InRotationOrder, bInitial, bFixEulerFlips) end

---Sets the local offset transform for a given control element by index
---@param InElementIndex integer
---@param InTransform FTransform
---@param bInitial boolean @[opt] 
---@param bAffectChildren boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommands boolean @[opt] 
function URigHierarchy:SetControlOffsetTransformByIndex(InElementIndex, InTransform, bInitial, bAffectChildren, bSetupUndo, bPrintPythonCommands) end

---Sets the offset transform for a given control element by key
---@param InKey FRigElementKey
---@param InTransform FTransform
---@param bInitial boolean @[opt] 
---@param bAffectChildren boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommands boolean @[opt] 
function URigHierarchy:SetControlOffsetTransform(InKey, InTransform, bInitial, bAffectChildren, bSetupUndo, bPrintPythonCommands) end

---Sets the connector settings for a given connector element by index
---@param InElementIndex integer
---@param InSettings FRigConnectorSettings
---@param bSetupUndo boolean @[opt] 
---@param bForce boolean @[opt] 
---@param bPrintPythonCommands boolean @[opt] 
function URigHierarchy:SetConnectorSettingsByIndex(InElementIndex, InSettings, bSetupUndo, bForce, bPrintPythonCommands) end

---Sets the connector settings for a given connector element by key
---@param InKey FRigElementKey
---@param InSettings FRigConnectorSettings
---@param bSetupUndo boolean @[opt] 
---@param bForce boolean @[opt] 
---@param bPrintPythonCommands boolean @[opt] 
function URigHierarchy:SetConnectorSettings(InKey, InSettings, bSetupUndo, bForce, bPrintPythonCommands) end

---Sets the metadata to a bool value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue boolean
---@return boolean
function URigHierarchy:SetBoolMetadata(InItem, InMetadataName, InValue) end

---Sets the metadata to a bool array value
---@param InItem FRigElementKey
---@param InMetadataName string
---@param InValue TArray_boolean_
---@return boolean
function URigHierarchy:SetBoolArrayMetadata(InItem, InMetadataName, InValue) end

---Sends an autokey event from the hierarchy to the world
---@param InElement FRigElementKey
---@param InOffsetInSeconds number @[opt] 
---@param bAsynchronous boolean @[opt] 
function URigHierarchy:SendAutoKeyEvent(InElement, InOffsetInSeconds, bAsynchronous) end

---Try to restore the sockets from the state structs
---@param InStates TArray_FRigSocketState_
---@param bSetupUndoRedo boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchy:RestoreSocketsFromStates(InStates, bSetupUndoRedo) end

---Try to restore the connectors from the state structs
---@param InStates TArray_FRigConnectorState_
---@param bSetupUndoRedo boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchy:RestoreConnectorsFromStates(InStates, bSetupUndoRedo) end

---Resets the hierarchy to the state of its default. This refers to the
---hierarchy on the default object.
function URigHierarchy:ResetToDefault() end

---Resets the current pose of a filtered list of elements to the initial / ref pose.
---@param InTypeFilter ERigElementType
function URigHierarchy:ResetPoseToInitial(InTypeFilter) end

---Resets all curves to 0.0
function URigHierarchy:ResetCurveValues() end

---Clears the whole hierarchy and removes all elements.
function URigHierarchy:Reset() end

---Removes the metadata under a given element
---@param InItem FRigElementKey
---@param InMetadataName string
---@return boolean
function URigHierarchy:RemoveMetadata(InItem, InMetadataName) end

---Removes all of the metadata under a given item
---@param InItem FRigElementKey
---@return boolean
function URigHierarchy:RemoveAllMetadata(InItem) end

---@return integer
function URigHierarchy:NumTopLevelComponents() end

---@param InElement FRigElementKey
---@return integer
function URigHierarchy:NumComponents(InElement) end

---Returns the number of elements in the Hierarchy.
---@return integer
function URigHierarchy:Num() end

---Creates a rig control value from a FVector2D value
---@param InValue FVector2D
---@return FRigControlValue
function URigHierarchy.MakeControlValueFromVector2D(InValue) end

---Creates a rig control value from a FVector value
---@param InValue FVector
---@return FRigControlValue
function URigHierarchy.MakeControlValueFromVector(InValue) end

---Creates a rig control value from a FTransformNoScale value
---@param InValue FTransformNoScale
---@return FRigControlValue
function URigHierarchy.MakeControlValueFromTransformNoScale(InValue) end

---Creates a rig control value from a FTransform value
---@param InValue FTransform
---@return FRigControlValue
function URigHierarchy.MakeControlValueFromTransform(InValue) end

---Creates a rig control value from a FRotator value
---@param InValue FRotator
---@return FRigControlValue
function URigHierarchy.MakeControlValueFromRotator(InValue) end

---Creates a rig control value from a int32 value
---@param InValue integer
---@return FRigControlValue
function URigHierarchy.MakeControlValueFromInt(InValue) end

---Creates a rig control value from a float value
---@param InValue number
---@return FRigControlValue
function URigHierarchy.MakeControlValueFromFloat(InValue) end

---Creates a rig control value from a FEulerTransform value
---@param InValue FEulerTransform
---@return FRigControlValue
function URigHierarchy.MakeControlValueFromEulerTransform(InValue) end

---Creates a rig control value from a bool value
---@param InValue boolean
---@return FRigControlValue
function URigHierarchy.MakeControlValueFromBool(InValue) end

---Returns true if the provided element index is valid
---@param InElementIndex integer
---@return boolean
function URigHierarchy:IsValidIndex(InElementIndex) end

---Returns true if a given element is selected
---@param InIndex integer
---@return boolean
function URigHierarchy:IsSelectedByIndex(InIndex) end

---Returns true if a given element is selected
---@param InKey FRigElementKey
---@return boolean
function URigHierarchy:IsSelected(InKey) end

---Returns true if the provided element is procedural.
---@param InKey FRigElementKey
---@return boolean
function URigHierarchy:IsProcedural(InKey) end

---Returns true if an element is parented to another element
---@param InChild FRigElementKey
---@param InParent FRigElementKey
---@return boolean
function URigHierarchy:IsParentedTo(InChild, InParent) end

---Returns a curve's value given its index
---@param InElementIndex integer
---@return boolean
function URigHierarchy:IsCurveValueSetByIndex(InElementIndex) end

---Returns whether a curve's value is set, given its key
---@param InKey FRigElementKey
---@return boolean
function URigHierarchy:IsCurveValueSet(InKey) end

---Returns true if the hierarchy controller is currently available
---The controller may not be available during certain events.
---If the controller is not available then GetController() will return nullptr.
---@return boolean
function URigHierarchy:IsControllerAvailable() end

---Returns true if a given component is selected
---@param InKey FRigComponentKey
---@return boolean
function URigHierarchy:IsComponentSelected(InKey) end

---* Returns true if a given item has a certain tag
---* @@param InItem The item to return the tags for
---* @@param InTag The tag to check
---@param InItem FRigElementKey
---@param InTag string
---@return boolean
function URigHierarchy:HasTag(InItem, InTag) end

---Queries and returns the value of FVector metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@param DefaultValue FVector
---@return FVector
function URigHierarchy:GetVectorMetadata(InItem, InMetadataName, DefaultValue) end

---Returns the contained FVector value from a a Rig Control Value
---@param InValue FRigControlValue
---@return FVector
function URigHierarchy.GetVectorFromControlValue(InValue) end

---Queries and returns the value of FVector array metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@return TArray_FVector_
function URigHierarchy:GetVectorArrayMetadata(InItem, InMetadataName) end

---Returns the contained FVector2D value from a a Rig Control Value
---@param InValue FRigControlValue
---@return FVector2D
function URigHierarchy.GetVector2DFromControlValue(InValue) end

---Returns the contained FTransformNoScale value from a a Rig Control Value
---@param InValue FRigControlValue
---@return FTransformNoScale
function URigHierarchy.GetTransformNoScaleFromControlValue(InValue) end

---Queries and returns the value of FTransform metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@param DefaultValue FTransform
---@return FTransform
function URigHierarchy:GetTransformMetadata(InItem, InMetadataName, DefaultValue) end

---Returns the contained FTransform value from a a Rig Control Value
---@param InValue FRigControlValue
---@return FTransform
function URigHierarchy.GetTransformFromControlValue(InValue) end

---Queries and returns the value of FTransform array metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@return TArray_FTransform_
function URigHierarchy:GetTransformArrayMetadata(InItem, InMetadataName) end

---@param InTopLevelComponentIndex integer
---@return UScriptStruct
function URigHierarchy:GetTopLevelComponentType(InTopLevelComponentIndex) end

---@param InTopLevelComponentIndex integer
---@return string
function URigHierarchy:GetTopLevelComponentName(InTopLevelComponentIndex) end

---@return TArray_FRigComponentKey_
function URigHierarchy:GetTopLevelComponentKeys() end

---@param InTopLevelComponentIndex integer
---@return FRigComponentKey
function URigHierarchy:GetTopLevelComponentKey(InTopLevelComponentIndex) end

---@param InTopLevelComponentIndex integer
---@return string
function URigHierarchy:GetTopLevelComponentContent(InTopLevelComponentIndex) end

---* Returns the tags for a given item
---* @@param InItem The item to return the tags for
---@param InItem FRigElementKey
---@return TArray_string_
function URigHierarchy:GetTags(InItem) end

---Returns all of the sockets' state
---@return TArray_FRigSocketState_
function URigHierarchy:GetSocketStates() end

---Returns all Socket elements
---@param bTraverse boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchy:GetSocketKeys(bTraverse) end

---Returns the keys of selected elements
---@param InTypeFilter ERigElementType @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchy:GetSelectedKeys(InTypeFilter) end

---Returns the keys of selected elements and components
---@return TArray_FRigHierarchyKey_
function URigHierarchy:GetSelectedHierarchyKeys_ForBlueprint() end

---Returns a rule manager for this hierarchy
---Note: If the manager is not available this will return nullptr
---even if the bCreateIfNeeded flag is set to true.
---@param bCreateIfNeeded boolean @[opt] 
---@return UModularRigRuleManager
function URigHierarchy:GetRuleManager(bCreateIfNeeded) end

---Queries and returns the value of FRotator metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@param DefaultValue FRotator
---@return FRotator
function URigHierarchy:GetRotatorMetadata(InItem, InMetadataName, DefaultValue) end

---Returns the contained FRotator value from a a Rig Control Value
---@param InValue FRigControlValue
---@return FRotator
function URigHierarchy.GetRotatorFromControlValue(InValue) end

---Queries and returns the value of FRotator array metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@return TArray_FRotator_
function URigHierarchy:GetRotatorArrayMetadata(InItem, InMetadataName) end

---Returns all root element keys
---@return TArray_FRigElementKey_
function URigHierarchy:GetRootElementKeys() end

---Queries and returns the value of FRigElementKey metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@param DefaultValue FRigElementKey
---@return FRigElementKey
function URigHierarchy:GetRigElementKeyMetadata(InItem, InMetadataName, DefaultValue) end

---Queries and returns the value of FRigElementKey array metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@return TArray_FRigElementKey_
function URigHierarchy:GetRigElementKeyArrayMetadata(InItem, InMetadataName) end

---Returns all references
---@param bTraverse boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchy:GetReferenceKeys(bTraverse) end

---Queries and returns the value of FQuat metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@param DefaultValue FQuat
---@return FQuat
function URigHierarchy:GetQuatMetadata(InItem, InMetadataName, DefaultValue) end

---Queries and returns the value of FQuat array metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@return TArray_FQuat_
function URigHierarchy:GetQuatArrayMetadata(InItem, InMetadataName) end

---Returns the previous parent of an element prior to a reparent operation
---@param InKey FRigElementKey
---@return FRigElementKey
function URigHierarchy:GetPreviousParent(InKey) end

---Returns the previous name of an element prior to a rename operation
---@param InKey FRigElementKey
---@return string
function URigHierarchy:GetPreviousName(InKey) end

---Returns the previous parent of an element or a component prior to a reparent operation
---@param InKey FRigHierarchyKey
---@return FRigHierarchyKey
function URigHierarchy:GetPreviousHierarchyParent(InKey) end

---Returns the previous name of an element or a component prior to a rename operation
---@param InKey FRigHierarchyKey
---@return string
function URigHierarchy:GetPreviousHierarchyName(InKey) end

---Returns the current / initial pose of the hierarchy
---@param bInitial boolean @[opt] 
---@param bIncludeTransientControls boolean @[opt] 
---@return FRigPose
function URigHierarchy:GetPose(bInitial, bIncludeTransientControls) end

---Returns the weights of all parents below a multi parent element
---@param InChild FRigElementKey
---@param bInitial boolean @[opt] 
---@return TArray_FRigElementWeight_
function URigHierarchy:GetParentWeightArray(InChild, bInitial) end

---Returns the weight of a parent below a multi parent element
---@param InChild FRigElementKey
---@param InParent FRigElementKey
---@param bInitial boolean @[opt] 
---@return FRigElementWeight
function URigHierarchy:GetParentWeight(InChild, InParent, bInitial) end

---Returns the global current or initial value for a given element index.
---If the element does not have a parent FTransform::Identity will be returned.
---@param InElementIndex integer
---@param bInitial boolean @[opt] 
---@return FTransform
function URigHierarchy:GetParentTransformByIndex(InElementIndex, bInitial) end

---Returns the global current or initial value for a given key.
---If the element does not have a parent FTransform::Identity will be returned.
---@param InKey FRigElementKey
---@param bInitial boolean @[opt] 
---@return FTransform
function URigHierarchy:GetParentTransform(InKey, bInitial) end

---Returns the parent elements of a given element key
---@param InKey FRigElementKey
---@param bRecursive boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchy:GetParents(InKey, bRecursive) end

---Returns the number of parents of an element
---@param InKey FRigElementKey
---@return integer
function URigHierarchy:GetNumberOfParents(InKey) end

---Returns all Null elements
---@param bTraverse boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchy:GetNullKeys(bTraverse) end

---Returns the namespace of an element belong to (or NAME_None in case the element doesn't belong to a module / namespace)
---@param InItem FRigElementKey
---@return string
function URigHierarchy:GetNameSpaceFName(InItem) end

---Returns the namespace of an element belong to (or an empty string in case the element doesn't belong to a module / namespace)
---@param InItem FRigElementKey
---@return string
function URigHierarchy:GetNameSpace(InItem) end

---Queries and returns the value of FName metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@param DefaultValue string
---@return string
function URigHierarchy:GetNameMetadata(InItem, InMetadataName, DefaultValue) end

---Queries and returns the value of FName array metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@return TArray_string_
function URigHierarchy:GetNameArrayMetadata(InItem, InMetadataName) end

---Returns the prefix of the module an element belong to (or an empty string in case the element doesn't belong to a module)
---@param InItem FRigElementKey
---@return string
function URigHierarchy:GetModulePrefix(InItem) end

---Returns the path of the module an element belong to (or NAME_None in case the element doesn't belong to a module)
---@param InItem FRigElementKey
---@return string
function URigHierarchy:GetModulePathFName(InItem) end

---Returns the path of the module an element belong to (or an empty string in case the element doesn't belong to a module)
---@param InItem FRigElementKey
---@return string
function URigHierarchy:GetModulePath(InItem) end

---Returns the name of the module an element belong to (or an empty string in case the element doesn't belong to a module)
---@param InItem FRigElementKey
---@return string
function URigHierarchy:GetModuleName(InItem) end

---Returns the name of the module an element belong to (or NAME_None in case the element doesn't belong to a module)
---@param InItem FRigElementKey
---@return string
function URigHierarchy:GetModuleFName(InItem) end

---Returns the type of metadata given its name the item it is stored under
---@param InItem FRigElementKey
---@param InMetadataName string
---@return ERigMetadataType
function URigHierarchy:GetMetadataType(InItem, InMetadataName) end

---Returns the name of metadata for a given element
---@param InItem FRigElementKey
---@return TArray_string_
function URigHierarchy:GetMetadataNames(InItem) end

---Returns the local current or initial value for a element index.
---If the index is invalid FTransform::Identity will be returned.
---@param InElementIndex integer
---@param bInitial boolean @[opt] 
---@return FTransform
function URigHierarchy:GetLocalTransformByIndex(InElementIndex, bInitial) end

---Returns the local current or initial value for a given key.
---If the key is invalid FTransform::Identity will be returned.
---@param InKey FRigElementKey
---@param bInitial boolean @[opt] 
---@return FTransform
function URigHierarchy:GetLocalTransform(InKey, bInitial) end

---Returns the index of an element given its key within its default parent (or root)
---@param InKey FRigElementKey
---@return integer
function URigHierarchy:GetLocalIndex_ForBlueprint(InKey) end

---Returns the local shape transform for a given control element.
---@param InElementIndex integer
---@param bInitial boolean @[opt] 
---@return FTransform
function URigHierarchy:GetLocalControlShapeTransformByIndex(InElementIndex, bInitial) end

---Returns the local shape transform for a given control element.
---@param InKey FRigElementKey
---@param bInitial boolean @[opt] 
---@return FTransform
function URigHierarchy:GetLocalControlShapeTransform(InKey, bInitial) end

---Queries and returns the value of FLinearColor metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@param DefaultValue FLinearColor
---@return FLinearColor
function URigHierarchy:GetLinearColorMetadata(InItem, InMetadataName, DefaultValue) end

---Queries and returns the value of FLinearColor array metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@return TArray_FLinearColor_
function URigHierarchy:GetLinearColorArrayMetadata(InItem, InMetadataName) end

---Returns the keys of an array of indices
---@param InElementIndices TArray_integer_
---@return TArray_FRigElementKey_
function URigHierarchy:GetKeys(InElementIndices) end

---Returns the key of an element given its index
---@param InElementIndex integer
---@return FRigElementKey
function URigHierarchy:GetKey(InElementIndex) end

---Returns the contained int32 value from a a Rig Control Value
---@param InValue FRigControlValue
---@return integer
function URigHierarchy.GetIntFromControlValue(InValue) end

---Queries and returns the value of int32 metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@param DefaultValue integer
---@return integer
function URigHierarchy:GetInt32Metadata(InItem, InMetadataName, DefaultValue) end

---Queries and returns the value of int32 array metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@return TArray_integer_
function URigHierarchy:GetInt32ArrayMetadata(InItem, InMetadataName) end

---Returns the index of an element given its key
---@param InKey FRigElementKey
---@return integer
function URigHierarchy:GetIndex_ForBlueprint(InKey) end

---Returns the global current or initial value for a element index.
---If the index is invalid FTransform::Identity will be returned.
---@param InElementIndex integer
---@param bInitial boolean @[opt] 
---@return FTransform
function URigHierarchy:GetGlobalTransformByIndex(InElementIndex, bInitial) end

---Returns the global current or initial value for a given key.
---If the key is invalid FTransform::Identity will be returned.
---@param InKey FRigElementKey
---@param bInitial boolean @[opt] 
---@return FTransform
function URigHierarchy:GetGlobalTransform(InKey, bInitial) end

---Returns the global shape transform for a given control element.
---@param InElementIndex integer
---@param bInitial boolean @[opt] 
---@return FTransform
function URigHierarchy:GetGlobalControlShapeTransformByIndex(InElementIndex, bInitial) end

---Returns the global shape transform for a given control element.
---@param InKey FRigElementKey
---@param bInitial boolean @[opt] 
---@return FTransform
function URigHierarchy:GetGlobalControlShapeTransform(InKey, bInitial) end

---Returns the global offset transform for a given control element.
---@param InElementIndex integer
---@param bInitial boolean @[opt] 
---@return FTransform
function URigHierarchy:GetGlobalControlOffsetTransformByIndex(InElementIndex, bInitial) end

---Returns the global offset transform for a given control element.
---@param InKey FRigElementKey
---@param bInitial boolean @[opt] 
---@return FTransform
function URigHierarchy:GetGlobalControlOffsetTransform(InKey, bInitial) end

---Queries and returns the value of float metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@param DefaultValue number
---@return number
function URigHierarchy:GetFloatMetadata(InItem, InMetadataName, DefaultValue) end

---Returns the contained float value from a a Rig Control Value
---@param InValue FRigControlValue
---@return number
function URigHierarchy.GetFloatFromControlValue(InValue) end

---Queries and returns the value of float array metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@return TArray_number_
function URigHierarchy:GetFloatArrayMetadata(InItem, InMetadataName) end

---Returns the first parent element of a given element key
---@param InKey FRigElementKey
---@return FRigElementKey
function URigHierarchy:GetFirstParent(InKey) end

---Returns the contained FEulerTransform value from a a Rig Control Value
---@param InValue FRigControlValue
---@return FEulerTransform
function URigHierarchy.GetEulerTransformFromControlValue(InValue) end

---Returns the default parent element's key of a given child key
---@param InKey FRigElementKey
---@return FRigElementKey
function URigHierarchy:GetDefaultParent(InKey) end

---Returns a curve's value given its index
---@param InElementIndex integer
---@return number
function URigHierarchy:GetCurveValueByIndex(InElementIndex) end

---Returns a curve's value given its key
---@param InKey FRigElementKey
---@return number
function URigHierarchy:GetCurveValue(InKey) end

---Returns all Curve elements
---@return TArray_FRigElementKey_
function URigHierarchy:GetCurveKeys() end

---Returns a control's current value given its index
---@param InElementIndex integer
---@param InValueType ERigControlValueType @[opt] 
---@return FRigControlValue
function URigHierarchy:GetControlValueByIndex(InElementIndex, InValueType) end

---Returns a control's current value given its key
---@param InKey FRigElementKey
---@param InValueType ERigControlValueType @[opt] 
---@return FRigControlValue
function URigHierarchy:GetControlValue(InKey, InValueType) end

---Returns a control's preferred rotator (local transform rotation)
---@param InElementIndex integer
---@param bInitial boolean @[opt] 
---@return FRotator
function URigHierarchy:GetControlPreferredRotatorByIndex(InElementIndex, bInitial) end

---Returns a control's preferred rotator (local transform rotation)
---@param InKey FRigElementKey
---@param bInitial boolean @[opt] 
---@return FRotator
function URigHierarchy:GetControlPreferredRotator(InKey, bInitial) end

---Returns a control's preferred euler rotation order
---@param InElementIndex integer
---@param bFromSettings boolean @[opt] 
---@return EEulerRotationOrder
function URigHierarchy:GetControlPreferredEulerRotationOrderByIndex(InElementIndex, bFromSettings) end

---Returns a control's preferred euler rotation order
---@param InKey FRigElementKey
---@param bFromSettings boolean @[opt] 
---@return EEulerRotationOrder
function URigHierarchy:GetControlPreferredEulerRotationOrder(InKey, bFromSettings) end

---Returns a control's preferred euler angles (local transform rotation)
---@param InElementIndex integer
---@param InRotationOrder EEulerRotationOrder
---@param bInitial boolean @[opt] 
---@return FVector
function URigHierarchy:GetControlPreferredEulerAnglesByIndex(InElementIndex, InRotationOrder, bInitial) end

---Returns a control's preferred euler angles (local transform rotation)
---@param InKey FRigElementKey
---@param InRotationOrder EEulerRotationOrder
---@param bInitial boolean @[opt] 
---@return FVector
function URigHierarchy:GetControlPreferredEulerAngles(InKey, InRotationOrder, bInitial) end

---Returns a controller for this hierarchy.
---Note: If the controller is not available this will return nullptr
---even if the bCreateIfNeeded flag is set to true. You can check the
---controller's availability with IsControllerAvailable().
---@param bCreateIfNeeded boolean @[opt] 
---@return URigHierarchyController
function URigHierarchy:GetController(bCreateIfNeeded) end

---Returns all Control elements
---@param bTraverse boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchy:GetControlKeys(bTraverse) end

---Returns all of the connectors' state
---@return TArray_FRigConnectorState_
function URigHierarchy:GetConnectorStates() end

---Returns all Connector elements
---@param bTraverse boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchy:GetConnectorKeys(bTraverse) end

---@param InElement FRigElementKey
---@param InComponentIndex integer
---@return UScriptStruct
function URigHierarchy:GetComponentType(InElement, InComponentIndex) end

---@param InElement FRigElementKey
---@param InComponentIndex integer
---@return string
function URigHierarchy:GetComponentName(InElement, InComponentIndex) end

---@param InElement FRigElementKey
---@return TArray_FRigComponentKey_
function URigHierarchy:GetComponentKeys(InElement) end

---@param InElement FRigElementKey
---@param InComponentIndex integer
---@return FRigComponentKey
function URigHierarchy:GetComponentKey(InElement, InComponentIndex) end

---@param InElement FRigElementKey
---@param InComponentIndex integer
---@return string
function URigHierarchy:GetComponentContent(InElement, InComponentIndex) end

---Returns the child elements of a given element key
---@param InKey FRigElementKey
---@param bRecursive boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchy:GetChildren(InKey, bRecursive) end

---Queries and returns the value of bool metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@param DefaultValue boolean
---@return boolean
function URigHierarchy:GetBoolMetadata(InItem, InMetadataName, DefaultValue) end

---Queries and returns the value of bool array metadata
---@param InItem FRigElementKey
---@param InMetadataName string
---@return TArray_boolean_
function URigHierarchy:GetBoolArrayMetadata(InItem, InMetadataName) end

---Returns all Bone elements
---@param bTraverse boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchy:GetBoneKeys(bTraverse) end

---Returns all element keys of this hierarchy
---@param bTraverse boolean @[opt] 
---@return TArray_FRigElementKey_
function URigHierarchy:GetAllKeys_ForBlueprint(bTraverse) end

---@return TArray_FRigComponentKey_
function URigHierarchy:GetAllComponentKeys() end

---Returns null element for a given key, for scripting purpose only, for cpp usage, use Find<FRigControlElement>()
---@param InKey FRigElementKey
---@return FRigNullElement
function URigHierarchy:FindNull_ForBlueprintOnly(InKey) end

---Returns control element for a given key, for scripting purpose only, for cpp usage, use Find<FRigControlElement>()
---@param InKey FRigElementKey
---@return FRigControlElement
function URigHierarchy:FindControl_ForBlueprintOnly(InKey) end

---Returns bone element for a given key, for scripting purpose only, for cpp usage, use Find<FRigBoneElement>()
---@param InKey FRigElementKey
---@return FRigBoneElement
function URigHierarchy:FindBone_ForBlueprintOnly(InKey) end

---Copies the contents of a hierarchy onto this one
---@param InHierarchy URigHierarchy
---@param bCurrent boolean
---@param bInitial boolean
---@param bWeights boolean
---@param bMatchPoseInGlobalIfNeeded boolean @[opt] 
function URigHierarchy:CopyPose(InHierarchy, bCurrent, bInitial, bWeights, bMatchPoseInGlobalIfNeeded) end

---Copies the contents of a hierarchy onto this one
---@param InHierarchy URigHierarchy
function URigHierarchy:CopyHierarchy(InHierarchy) end

---Returns true if the provided element key is valid
---@param InKey FRigElementKey
---@return boolean
function URigHierarchy:Contains_ForBlueprint(InKey) end

