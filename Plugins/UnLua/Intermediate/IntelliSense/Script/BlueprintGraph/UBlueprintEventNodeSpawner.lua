---Takes care of spawning UK2Node_Event nodes. Acts as the "action" portion of
---certain FBlueprintActionMenuItems. Will not spawn a new event node if one
---associated with the specified function already exits (instead, Invoke() will
---return the existing one). Evolved from FEdGraphSchemaAction_K2AddEvent and
---FEdGraphSchemaAction_K2ViewNode.
---@class UBlueprintEventNodeSpawner : UBlueprintNodeSpawner
---@field protected EventFunc UFunction @The function to configure new nodes with.
---@field protected CustomEventName string @The custom name to configure new event nodes with.
local UBlueprintEventNodeSpawner = {}

