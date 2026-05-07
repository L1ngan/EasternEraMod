---@class FEdGraphPinReference
---@field private OwningNode TWeakObjectPtr<UEdGraphNode> @The node that owns the pin referred to by this struct. Updated at Set and Save time.
---@field private PinId FGuid @The pin's unique ID. Updated at Set and Save time.
local FEdGraphPinReference = {}
