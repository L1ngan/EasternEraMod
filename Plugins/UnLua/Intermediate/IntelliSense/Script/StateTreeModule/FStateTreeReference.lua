---Struct to hold reference to a StateTree asset along with values to parameterized it.
---@class FStateTreeReference
---@field protected StateTree UStateTree
---@field protected Parameters FInstancedPropertyBag
---@field protected PropertyOverrides TArray<FGuid> @Array of overridden properties. Non-overridden properties will inherit the values from the StateTree default parameters.
local FStateTreeReference = {}
