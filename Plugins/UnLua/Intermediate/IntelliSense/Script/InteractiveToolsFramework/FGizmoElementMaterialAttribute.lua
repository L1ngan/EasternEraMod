---Material state attribute struct
---Stores material state value, whether state is set and whether it overrides child state.
---@class FGizmoElementMaterialAttribute
---@field public Value TWeakObjectPtr<UMaterialInterface> @Material value
---@field public bOverridesChildState boolean @True if this attribute overrides child state attributes
local FGizmoElementMaterialAttribute = {}
