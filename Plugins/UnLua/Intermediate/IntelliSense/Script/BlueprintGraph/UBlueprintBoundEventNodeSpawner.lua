---Takes care of spawning UK2Node_Event nodes. Acts as the "action" portion of
---certain FBlueprintActionMenuItems. Will not spawn a new event node if one
---associated with the specified function already exits (instead, Invoke() will
---return the existing one). Evolved from FEdGraphSchemaAction_K2AddEvent and
---FEdGraphSchemaAction_K2ViewNode.
---@class UBlueprintBoundEventNodeSpawner : UBlueprintEventNodeSpawner
---@field private EventDelegate Unknown
local UBlueprintBoundEventNodeSpawner = {}

