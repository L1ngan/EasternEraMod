---Class representing some source for inclusion in a UComputeKernel.
---We derive from this for each authoring mechanism. (HLSL text, VPL graph, ML Meta Lang, etc.)
---@class UComputeSource : UObject
---@field public AdditionalSources TArray<UComputeSource> @Array of additional source objects. This allows us to specify source dependencies.
local UComputeSource = {}

