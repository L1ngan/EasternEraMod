---@class UOptimusNode_CustomComputeKernel : UOptimusNode_ComputeKernelBase
---@field public Category string @FIXME: Use drop-down with a preset list + allow custom entry.
---@field public KernelName FOptimusValidatedName @Name of kernel. This is also used as the entry point function name in generated code.
---@field public ExecutionDomain FOptimusExecutionDomain @The execution domain that this kernel operates on. The size of the domain is governed by the component binding that flows into the primary input group of this kernel.
---@field public GroupSize FIntVector @Number of threads in a thread group. Thread groups have 3 dimensions. It's better to have the total threads (X*Y*Z) be a value divisible by 32.
---@field public InputBindingArray FOptimusParameterBindingArray @Input bindings. Each one is a function that should be connected to an implementation in a data interface.
---@field public OutputBindingArray FOptimusParameterBindingArray @Output bindings. Each one is a function that should be connected to an implementation in a data interface.
---@field public SecondaryInputBindingGroups TArray<FOptimusSecondaryInputBindingsGroup> @Secondary bindings.
---@field public AdditionalSources TArray<UComputeSource> @Additional source includes.
---@field public ShaderSource FOptimusShaderText @The kernel source code. If the code contains more than just the kernel entry function, then place the kernel entry function inside a KERNEL {} block.
local UOptimusNode_CustomComputeKernel = {}

