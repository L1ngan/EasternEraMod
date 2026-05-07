---A Deformer Graph is an asset that is used to create and control custom deformations on
---skeletal meshes.
---@class UOptimusDeformer : UMeshDeformer
---@field public Mesh USkeletalMesh
---@field protected ComputeGraphs TArray<FOptimusComputeGraphInfo> @The compute graphs to execute.
---@field protected DataInterfacePropertyOverrideMap TMap<TWeakObjectPtr<UComputeDataInterface>, FOptimusDataInterfacePropertyOverrideInfo>
---@field protected ValueMap TMap<FOptimusValueIdentifier, FOptimusValueDescription>
---@field private ActionStack UOptimusActionStack
---@field private Status EOptimusDeformerStatus
---@field private Graphs TArray<UOptimusNodeGraph>
---@field private Bindings UOptimusComponentSourceBindingContainer
---@field private Variables UOptimusVariableContainer
---@field private Resources UOptimusResourceContainer
local UOptimusDeformer = {}

---@return TArray_UOptimusVariableDescription_
function UOptimusDeformer:GetVariables() end

---@return TArray_UOptimusResourceDescription_
function UOptimusDeformer:GetResources() end

---@return UOptimusComponentSourceBinding
function UOptimusDeformer:GetPrimaryComponentBinding() end

---@return TArray_UOptimusComponentSourceBinding_
function UOptimusDeformer:GetComponentBindings() end

