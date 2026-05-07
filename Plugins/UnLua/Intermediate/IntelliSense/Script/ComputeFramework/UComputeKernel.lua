---Base class representing a kernel that will be run as a shader on the GPU.
---@class UComputeKernel : UObject
---@field public KernelSource UComputeKernelSource @The compute kernel source asset. A kernel's source may be authored by different mechanisms; e.g. HLSL text, VPL graph, ML Meta Lang, etc
---@field public KernelFlags integer @Specifying certain memory access flags allows for optimizations such as kernel fusing.
local UComputeKernel = {}

