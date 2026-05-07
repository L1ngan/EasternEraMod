---Runs logic for mapping input data to transforms (the "Rig")
---@class UControlRig : URigVMHost
---@field private OverrideAssets TArray<UControlRigOverrideAsset>
---@field public ExecutionType ERigExecutionType
---@field public HierarchySettings FRigHierarchySettings
---@field protected ControlCustomizations TMap<FRigElementKey, FRigControlElementCustomization>
---@field protected DynamicHierarchy URigHierarchy
---@field protected ShapeLibraries TArray<TSoftObjectPtr<UControlRigShapeLibrary>>
---@field protected ShapeLibraryNameMap TMap<string, string>
---@field private RigVMExtendedExecuteContext FRigVMExtendedExecuteContext
---@field private DataSourceRegistry UAnimationDataSourceRegistry @The registry to access data source
---@field protected Influences FRigInfluenceMapPerEvent
---@field protected ExternalVariableDataAssetLinks TMap<string, UDataAssetLink>
---@field protected OnControlSelected_BP MulticastDelegate
---@field private bControlsVisible boolean @Whether controls are visible
---@field protected bIsAdditive boolean @An additive control rig runs a backwards solve before applying additive control values and running the forward solve
---@field private RigModuleSettings FRigModuleSettings
---@field private RigModulePrefix string
local UControlRig = {}

---Contains a backwards solve event
---@return boolean
function UControlRig:SupportsBackwardsSolve() end

---@param InInteractionRigClass TSubclassOf_UControlRig_
function UControlRig:SetInteractionRigClass(InInteractionRigClass) end

---@param InInteractionRig UControlRig
function UControlRig:SetInteractionRig(InInteractionRig) end

---Selects or deselects an element in the hierarchy
---@param InControlName string
---@param bSelect boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
function UControlRig:SelectControl(InControlName, bSelect, bSetupUndo) end

---Requests to perform construction during the next execution
function UControlRig:RequestConstruction() end

---To support Blueprints/scripting, we need a different delegate type (a 'Dynamic' delegate) which supports looser style UFunction binding (using names).
---@param Rig UControlRig
---@param Control FRigControlElement
---@param bSelected boolean
function UControlRig:OnControlSelectedBP__DelegateSignature(Rig, Control, bSelected) end

---@param InControlName string
---@return boolean
function UControlRig:IsControlSelected(InControlName) end

---@return TSubclassOf_UControlRig_
function UControlRig:GetInteractionRigClass() end

---@return UControlRig
function UControlRig:GetInteractionRig() end

---Find the actor the rig is bound to, if any
---@return AActor
function UControlRig:GetHostingActor() end

---@return URigHierarchy
function UControlRig:GetHierarchy() end

---@param Outer UObject
---@param OptionalClass TSubclassOf_UControlRig_
---@return TArray_UControlRig_
function UControlRig.FindControlRigs(Outer, OptionalClass) end

---@return TArray_string_
function UControlRig:CurrentControlSelection() end

---Creates a transformable control handle for the specified control to be used by the constraints system. Should use the UObject from
---      ConstraintsScriptingLibrary::GetManager(UWorld* InWorld)
---@param ControlName string
---@return UTransformableControlHandle
function UControlRig:CreateTransformableControlHandle(ControlName) end

---
---@param bSetupUndo boolean @[opt] 
---@return boolean
function UControlRig:ClearControlSelection(bSetupUndo) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UControlRig:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UControlRig:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UControlRig:AddAssetUserDataOfClass(InUserDataClass) end

