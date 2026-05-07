---Color state attribute struct
---Stores color state value, whether state is set and whether it overrides child state.
---@class FGizmoElementColorAttribute
---@field public Value FLinearColor @Color value
---@field public bHasValue boolean @True if value has been set.
---@field public bOverridesChildState boolean @True if this attribute overrides child state attributes
local FGizmoElementColorAttribute = {}
