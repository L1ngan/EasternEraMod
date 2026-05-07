---This wraps the variable overrides
---This is also separate from FDataflowInstance to allow for customization to display override checkboxes in front of each  variable property
---( see DataflowDetails.h )
---@class FDataflowVariableOverrides
---@field private Variables FInstancedPropertyBag @Variables to override
---@field private OverriddenVariableGuids TArray<FGuid> @Array of overridden variable GUIDs. Non-overridden properties will inherit the values from the DataflowAsset default parameters.
local FDataflowVariableOverrides = {}
