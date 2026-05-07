---A struct to hold onto a single-level domain for controlling a kernel's execution domain.
---The reason it's in a struct is so that we can apply a property panel customization for it
---to make it easier to select from a pre-defined list of execution domains.
---@class FOptimusExecutionDomain
---@field private Type EOptimusExecutionDomainType
---@field private Name string @The name of the execution domain that this kernel operates on.
---@field private Expression string
local FOptimusExecutionDomain = {}
