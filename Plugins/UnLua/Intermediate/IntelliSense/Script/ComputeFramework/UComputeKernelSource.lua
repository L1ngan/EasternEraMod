---Class representing the source for a UComputeKernel
---We derive from this for each authoring mechanism. (HLSL text, VPL graph, ML Meta Lang, etc.)
---@class UComputeKernelSource : UObject
---@field public EntryPoint string @Kernel entry point.
---@field public GroupSize FIntVector @Kernel group size.
---@field public PermutationSet FComputeKernelPermutationSet @Base permutations exposed by the kernel. These will be extended by further permutations declared in any linked data providers.
---@field public DefinitionsSet FComputeKernelDefinitionSet @Base environment defines for kernel compilation. These will be extended by further defines declared in any linked data providers.
---@field public AdditionalSources TArray<UComputeSource> @An array of additional independent source assets that the kernel source depends on.
---@field public ExternalInputs TArray<FShaderFunctionDefinition> @Named external inputs for the kernel. These must be fulfilled by linked data providers.
---@field public ExternalOutputs TArray<FShaderFunctionDefinition> @Named external outputs for the kernel. These must be fulfilled by linked data providers.
local UComputeKernelSource = {}

