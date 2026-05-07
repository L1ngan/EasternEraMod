---@class URigVMBlueprint : UBlueprint
---@field public FunctionLibraryEdGraph URigVMEdGraph
---@field public RigGraphDisplaySettings FRigVMEdGraphDisplaySettings
---@field public VMRuntimeSettings FRigVMRuntimeSettings
---@field public VMCompileSettings FRigVMCompileSettings
---@field public PythonLogSettings FRigVMPythonSettings
---@field public UserDefinedStructGuidToPathName TMap<string, FSoftObjectPath>
---@field public UserDefinedTypesInUse TSet<UObject>
---@field protected RigVMClient FRigVMClient
---@field protected ReferencedObjectPathsStored boolean
---@field protected ReferencedObjectPaths TArray<FSoftObjectPath>
---@field protected PublicGraphFunctions TArray<FRigVMGraphFunctionHeader> @Asset searchable information about exposed public functions on this rig
---@field protected FunctionReferenceNodeData TArray<FRigVMReferenceNodeData> @Asset searchable information function references in this rig
---@field protected AssetVariant FRigVMVariant @Variant information about this asset
---@field protected TemplateModel URigVMGraph
---@field protected TemplateController URigVMController
---@field public PinToOperandMap TMap<string, FRigVMOperand>
---@field private SupportedEventNames TArray<string> @The event names this rigvm blueprint contains
---@field private bAutoRecompileVM boolean
---@field private bVMRecompilationRequired boolean
---@field private bIsCompiling boolean
---@field private VMRecompilationBracket integer
---@field private bSkipDirtyBlueprintStatus boolean
---@field protected EditorHost URigVMHost @Our currently running rig vm instance
---@field private OldMemoryStorageGeneratorClasses TArray<TSubclassOf<UObject>> @During load, we do not want the GC to destroy the generator classes until all URigVMMemoryStorage objects are loaded, so we need to keep a pointer to the classes. These pointers will be removed on PreSave so that the GC can do its work.
local URigVMBlueprint = {}

---@param bSuspendNotifs boolean
function URigVMBlueprint:SuspendNotifications(bSuspendNotifs) end

---Resets the asset's guid to a new one and splits it from the former variant set
---@return boolean
function URigVMBlueprint:SplitAssetVariant() end

---@param bAutoRecompile boolean
function URigVMBlueprint:SetAutoVMRecompile(bAutoRecompile) end

function URigVMBlueprint:RequestRigVMInit() end

function URigVMBlueprint:RequestAutoVMRecompilation() end

---@param InOldName string
---@param InNewName string
---@return boolean
function URigVMBlueprint:RenameMemberVariable(InOldName, InNewName) end

---@param InName string @[opt] 
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMBlueprint:RemoveModel(InName, bSetupUndoRedo, bPrintPythonCommand) end

---@param InName string
---@return boolean
function URigVMBlueprint:RemoveMemberVariable(InName) end

function URigVMBlueprint:RecompileVMIfRequired() end

function URigVMBlueprint:RecompileVM() end

---Merges the asset's guid with a provided one to join the variant set
---@param InGuid FGuid
---@return boolean
function URigVMBlueprint:JoinAssetVariant(InGuid) end

---@return TSubclassOf_UObject_
function URigVMBlueprint:GetRigVMHostClass() end

---@param bSetupUndoRedo boolean @[opt] 
---@return URigVMFunctionLibrary
function URigVMBlueprint:GetOrCreateLocalFunctionLibrary(bSetupUndoRedo) end

---@param InGraph URigVMGraph @[opt] 
---@return URigVMController
function URigVMBlueprint:GetOrCreateController(InGraph) end

---@param InEdGraph UEdGraph @[opt] 
---@return URigVMGraph
function URigVMBlueprint:GetModel(InEdGraph) end

---@return TArray_FRigVMGraphVariableDescription_
function URigVMBlueprint:GetMemberVariables() end

---@return TArray_FRigVMVariantRef_
function URigVMBlueprint:GetMatchingVariants() end

---@return URigVMFunctionLibrary
function URigVMBlueprint:GetLocalFunctionLibrary() end

---@return URigVMGraph
function URigVMBlueprint:GetFocusedModel() end

---@return URigVMGraph
function URigVMBlueprint:GetDefaultModel() end

---@return URigVMHost
function URigVMBlueprint:GetDebuggedRigVMHost() end

---@param InGraphName string
---@return URigVMController
function URigVMBlueprint:GetControllerByName(InGraphName) end

---@param InGraph URigVMGraph @[opt] 
---@return URigVMController
function URigVMBlueprint:GetController(InGraph) end

---@return TArray_UStruct_
function URigVMBlueprint:GetAvailableRigVMStructs() end

---@return boolean
function URigVMBlueprint:GetAutoVMRecompile() end

---@return FRigVMVariantRef
function URigVMBlueprint:GetAssetVariantRef() end

---@return FRigVMVariant
function URigVMBlueprint:GetAssetVariantBP() end

---@return TArray_URigVMGraph_
function URigVMBlueprint:GetAllModels() end

---@param InNewBlueprintName string
---@return TArray_string_
function URigVMBlueprint:GeneratePythonCommands(InNewBlueprintName) end

---@return URigVMHost
function URigVMBlueprint:CreateRigVMHost() end

---@param InName string
---@param InCPPType string
---@param bIsPublic boolean @[opt] 
---@param bIsReadOnly boolean @[opt] 
---@param InDefaultValue string
---@return boolean
function URigVMBlueprint:ChangeMemberVariableType(InName, InCPPType, bIsPublic, bIsReadOnly, InDefaultValue) end

---@param InName string @[opt] 
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMGraph
function URigVMBlueprint:AddModel(InName, bSetupUndoRedo, bPrintPythonCommand) end

---@param InName string
---@param InCPPType string
---@param bIsPublic boolean @[opt] 
---@param bIsReadOnly boolean @[opt] 
---@param InDefaultValue string
---@return string
function URigVMBlueprint:AddMemberVariable(InName, InCPPType, bIsPublic, bIsReadOnly, InDefaultValue) end

