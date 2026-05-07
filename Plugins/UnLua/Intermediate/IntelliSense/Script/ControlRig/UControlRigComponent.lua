---A component that hosts an animation ControlRig, manages control components and marshals data between the two
---@class UControlRigComponent : UPrimitiveComponent
---@field public ControlRigClass TSubclassOf<UControlRig> @The class of control rig to instantiate
---@field public OnPreInitializeDelegate MulticastDelegate @Event fired just before this component's ControlRig is initialized
---@field public OnPostInitializeDelegate MulticastDelegate @Event fired after this component's ControlRig is initialized
---@field public OnPreConstructionDelegate MulticastDelegate @Event fired before this component's ControlRig is setup
---@field public OnPostConstructionDelegate MulticastDelegate @Event fired after this component's ControlRig is setup
---@field public OnPreForwardsSolveDelegate MulticastDelegate @Event fired before this component's ControlRig's forwards solve
---@field public OnPostForwardsSolveDelegate MulticastDelegate @Event fired after this component's ControlRig's forwards solve
---@field public UserDefinedElements TArray<FControlRigComponentMappedElement>
---@field public MappedElements TArray<FControlRigComponentMappedElement>
---@field public bEnableLazyEvaluation boolean @When checked the rig will only run if any of the mapped inputs has changed
---@field public LazyEvaluationPositionThreshold number @The delta threshold for a translation / position difference. 0.0 disables position differences.
---@field public LazyEvaluationRotationThreshold number @The delta threshold for a rotation difference (in degrees). 0.0 disables rotation differences.
---@field public LazyEvaluationScaleThreshold number @The delta threshold for a scale difference. 0.0 disables scale differences.
---@field public bResetTransformBeforeTick boolean @When checked the transforms are reset before a tick / update of the rig
---@field public bResetInitialsBeforeConstruction boolean @When checked the initial transforms on bones, nulls and controls are reset prior to a construction event
---@field public bUpdateRigOnTick boolean @When checked this ensures to run the rig's update on the component's tick automatically
---@field public bUpdateInEditor boolean @When checked the rig is run in the editor viewport without running / simulation the game
---@field public bDrawBones boolean @When checked the rig's bones are drawn using debug drawing similar to the animation editor viewport
---@field public bShowDebugDrawing boolean @When checked the rig's debug drawing instructions are drawn in the viewport
---@field private ControlRig UControlRig
local UControlRigComponent = {}

---Updates and ticks the rig.
---@param DeltaTime number @[opt] 
function UControlRigComponent:Update(DeltaTime) end

---@param InObjectToBind UObject
function UControlRigComponent:SetObjectBinding(InObjectToBind) end

---Replaces the mapped elements on the component with the provided array, should not be used before OnPreInitialize Event
---@param NewMappedElements TArray_FControlRigComponentMappedElement_
function UControlRigComponent:SetMappedElements(NewMappedElements) end

---Sets the transform of the space in the requested space
---@param SpaceName string
---@param InitialTransform FTransform
---@param Space EControlRigComponentSpace @[opt] 
function UControlRigComponent:SetInitialSpaceTransform(SpaceName, InitialTransform, Space) end

---Sets the initial transform of the bone in the requested space
---@param BoneName string
---@param InitialTransform FTransform
---@param Space EControlRigComponentSpace @[opt] 
---@param bPropagateToChildren boolean @[opt] 
function UControlRigComponent:SetInitialBoneTransform(BoneName, InitialTransform, Space, bPropagateToChildren) end

---Sets the value of a vector2D control
---@param ControlName string
---@param Value FVector2D
function UControlRigComponent:SetControlVector2D(ControlName, Value) end

---Sets the value of a transform control
---@param ControlName string
---@param Value FTransform
---@param Space EControlRigComponentSpace @[opt] 
function UControlRigComponent:SetControlTransform(ControlName, Value, Space) end

---Sets the value of a scale control
---@param ControlName string
---@param Value FVector
---@param Space EControlRigComponentSpace @[opt] 
function UControlRigComponent:SetControlScale(ControlName, Value, Space) end

---Sets the value of a rotator control
---@param ControlName string
---@param Value FRotator
---@param Space EControlRigComponentSpace @[opt] 
function UControlRigComponent:SetControlRotator(ControlName, Value, Space) end

---@param InControlRigClass TSubclassOf_UControlRig_
function UControlRigComponent:SetControlRigClass(InControlRigClass) end

---Sets the value of a position control
---@param ControlName string
---@param Value FVector
---@param Space EControlRigComponentSpace @[opt] 
function UControlRigComponent:SetControlPosition(ControlName, Value, Space) end

---Sets the offset transform of a control
---@param ControlName string
---@param OffsetTransform FTransform
---@param Space EControlRigComponentSpace @[opt] 
function UControlRigComponent:SetControlOffset(ControlName, OffsetTransform, Space) end

---Sets the value of an integer control
---@param ControlName string
---@param Value integer
function UControlRigComponent:SetControlInt(ControlName, Value) end

---Sets the value of a float control
---@param ControlName string
---@param Value number
function UControlRigComponent:SetControlFloat(ControlName, Value) end

---Sets the value of a bool control
---@param ControlName string
---@param Value boolean
function UControlRigComponent:SetControlBool(ControlName, Value) end

---Sets the transform of the bone in the requested space
---@param BoneName string
---@param Transform FTransform
---@param Space EControlRigComponentSpace @[opt] 
---@param Weight number @[opt] 
---@param bPropagateToChildren boolean @[opt] 
function UControlRigComponent:SetBoneTransform(BoneName, Transform, Space, Weight, bPropagateToChildren) end

---Setup the initial transforms / ref pose of the bones based on a skeletal mesh
---@param InSkeletalMesh USkeletalMesh
function UControlRigComponent:SetBoneInitialTransformsFromSkeletalMesh(InSkeletalMesh) end

---@param Component UControlRigComponent
function UControlRigComponent:OnPreInitialize(Component) end

---@param Component UControlRigComponent
function UControlRigComponent:OnPreForwardsSolve(Component) end

---@param Component UControlRigComponent
function UControlRigComponent:OnPreConstruction(Component) end

---@param Component UControlRigComponent
function UControlRigComponent:OnPostInitialize(Component) end

---@param Component UControlRigComponent
function UControlRigComponent:OnPostForwardsSolve(Component) end

---@param Component UControlRigComponent
function UControlRigComponent:OnPostConstruction(Component) end

---Initializes the rig's memory and calls the construction event
function UControlRigComponent:Initialize() end

---Returns the transform of the space in the requested space
---@param SpaceName string
---@param Space EControlRigComponentSpace @[opt] 
---@return FTransform
function UControlRigComponent:GetSpaceTransform(SpaceName, Space) end

---Returns the initial transform of the space in the requested space
---@param SpaceName string
---@param Space EControlRigComponentSpace @[opt] 
---@return FTransform
function UControlRigComponent:GetInitialSpaceTransform(SpaceName, Space) end

---Returns the initial transform of the bone in the requested space
---@param BoneName string
---@param Space EControlRigComponentSpace @[opt] 
---@return FTransform
function UControlRigComponent:GetInitialBoneTransform(BoneName, Space) end

---Returns all of the names for a given element type (Bone, Control, etc)
---@param ElementType ERigElementType @[opt] 
---@return TArray_string_
function UControlRigComponent:GetElementNames(ElementType) end

---Returns the value of a Vector3D control
---@param ControlName string
---@return FVector2D
function UControlRigComponent:GetControlVector2D(ControlName) end

---Returns the value of a transform control
---@param ControlName string
---@param Space EControlRigComponentSpace @[opt] 
---@return FTransform
function UControlRigComponent:GetControlTransform(ControlName, Space) end

---Returns the value of a scale control
---@param ControlName string
---@param Space EControlRigComponentSpace @[opt] 
---@return FVector
function UControlRigComponent:GetControlScale(ControlName, Space) end

---Returns the value of a rotator control
---@param ControlName string
---@param Space EControlRigComponentSpace @[opt] 
---@return FRotator
function UControlRigComponent:GetControlRotator(ControlName, Space) end

---Get the ControlRig hosted by this component
---@return UControlRig
function UControlRigComponent:GetControlRig() end

---Returns the value of a position control
---@param ControlName string
---@param Space EControlRigComponentSpace @[opt] 
---@return FVector
function UControlRigComponent:GetControlPosition(ControlName, Space) end

---Returns the offset transform of a control
---@param ControlName string
---@param Space EControlRigComponentSpace @[opt] 
---@return FTransform
function UControlRigComponent:GetControlOffset(ControlName, Space) end

---Returns the value of an integer control
---@param ControlName string
---@return integer
function UControlRigComponent:GetControlInt(ControlName) end

---Returns the value of a float control
---@param ControlName string
---@return number
function UControlRigComponent:GetControlFloat(ControlName) end

---Returns the value of a bool control
---@param ControlName string
---@return boolean
function UControlRigComponent:GetControlBool(ControlName) end

---Returns the transform of the bone in the requested space
---@param BoneName string
---@param Space EControlRigComponentSpace @[opt] 
---@return FTransform
function UControlRigComponent:GetBoneTransform(BoneName, Space) end

---Get the ControlRig's local time in seconds since its last initialize
---@return number
function UControlRigComponent:GetAbsoluteTime() end

---Returns true if an element given a type and name exists in the rig
---@param Name string
---@param ElementType ERigElementType @[opt] 
---@return boolean
function UControlRigComponent:DoesElementExist(Name, ElementType) end

---Removes all mapped elements from the component
function UControlRigComponent:ClearMappedElements() end

---Returns true if the Component can execute its Control Rig
---@return boolean
function UControlRigComponent:CanExecute() end

---Adds a series of mapped bones to the rig, should not be used before OnPreInitialize Event
---@param SkeletalMeshComponent USkeletalMeshComponent
---@param Bones TArray_FControlRigComponentMappedBone_
---@param Curves TArray_FControlRigComponentMappedCurve_
---@param InDirection EControlRigComponentMapDirection @[opt] 
function UControlRigComponent:AddMappedSkeletalMesh(SkeletalMeshComponent, Bones, Curves, InDirection) end

---Adds the provided mapped elements to the component, should not be used before OnPreInitialize Event
---@param NewMappedElements TArray_FControlRigComponentMappedElement_
function UControlRigComponent:AddMappedElements(NewMappedElements) end

---Adds a series of mapped bones to the rig, should not be used before OnPreInitialize Event
---@param Components TArray_FControlRigComponentMappedComponent_
function UControlRigComponent:AddMappedComponents(Components) end

---Adds all matching bones to the rig, should not be used before OnPreInitialize Event
---@param SkeletalMeshComponent USkeletalMeshComponent
---@param InDirection EControlRigComponentMapDirection @[opt] 
function UControlRigComponent:AddMappedCompleteSkeletalMesh(SkeletalMeshComponent, InDirection) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UControlRigComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UControlRigComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UControlRigComponent:AddAssetUserDataOfClass(InUserDataClass) end

