---@class UOptimusDeformerInstanceSettings : UMeshDeformerInstanceSettings
---@field private Deformer TWeakObjectPtr<UOptimusDeformer> @Stored weak pointer to a deformer. This is only required by the details customization for resolving binding class types.
---@field private Bindings TArray<FOptimusDeformerInstanceComponentBinding> @Array of binding descriptions. This is fixed and used by GetComponentBindings() to resolve final bindings for a given context.
local UOptimusDeformerInstanceSettings = {}

