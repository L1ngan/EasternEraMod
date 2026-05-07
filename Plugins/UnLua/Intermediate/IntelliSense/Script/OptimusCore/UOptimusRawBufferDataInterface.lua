---@class UOptimusRawBufferDataInterface : UOptimusComputeDataInterface
---@field public ValueType FShaderValueTypeHandle @The value type we should be allocating elements for
---@field public DataDomain FOptimusDataDomain @The data domain this buffer covers
---@field public ComponentSourceBinding TWeakObjectPtr<UOptimusComponentSourceBinding> @The component source to query component domain validity and sizing
local UOptimusRawBufferDataInterface = {}

