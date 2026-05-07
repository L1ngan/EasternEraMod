---Takes care of spawning variable getter/setter nodes. Serves as the "action"
---portion for certain FBlueprintActionMenuItems. Evolved from
---FEdGraphSchemaAction_K2Var, and can spawn nodes for both member-variables and
---local function variables.
---@class UBlueprintVariableNodeSpawner : UBlueprintFieldNodeSpawner
---@field private LocalVarOuter UEdGraph @The graph that the local variable belongs to (if this is a local variable spawner).
---@field private LocalVarDesc FBPVariableDescription
local UBlueprintVariableNodeSpawner = {}

