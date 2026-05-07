---@class FRigVMTrait_OptimusDeformerSettings : FRigVMTrait
---@field public ExecutionPhase EOptimusDeformerExecutionPhase
---@field public ExecutionGroup integer @Deformers are first sorted by execution group index, then by the order in which they are added
---@field public DeformChildComponents boolean @Whether to apply the deformer to all child components as well
---@field public ExcludeChildComponentsWithTag string @Deformer won't be applied to child components that have the specified component tag
local FRigVMTrait_OptimusDeformerSettings = {}
