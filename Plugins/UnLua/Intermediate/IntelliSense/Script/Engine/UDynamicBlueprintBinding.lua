---Used to tie events to delegates at runtime
---To use, override 'K2Node::GetDynamicBindingClass' to specify a child of this class.
---Additionally, override 'K2Node::RegisterDynamicBinding'. During compilation, your node
---will be given an instance of the specified binding class to use for binding delegates.
---@class UDynamicBlueprintBinding : UObject
local UDynamicBlueprintBinding = {}

