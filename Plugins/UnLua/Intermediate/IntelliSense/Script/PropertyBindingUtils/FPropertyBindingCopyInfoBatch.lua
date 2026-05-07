---Describes a batch of property copies from many sources to one target struct.
---Note: The batch is used to reference both bindings and copies (a binding turns into copy when resolved).
---@class FPropertyBindingCopyInfoBatch
---@field public TargetStruct FInstancedStruct @Expected target struct
---@field public BindingsBegin FPropertyBindingIndex16 @Index to first binding/copy.
---@field public BindingsEnd FPropertyBindingIndex16 @Index to one past the last binding/copy.
---@field public PropertyFunctionsBegin FPropertyBindingIndex16 @Index to first property function.
---@field public PropertyFunctionsEnd FPropertyBindingIndex16 @Index to one past the last property function.
local FPropertyBindingCopyInfoBatch = {}
