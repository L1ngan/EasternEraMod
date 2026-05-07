---A node spawner which will check if there is already adebug key event node (UInputDebugKeyEventNodeSpawner)
---before spawning a new one in the graph. This makes the behavior of debug key nodes the same as other
---event nodes.
---@class UInputDebugKeyEventNodeSpawner : UBlueprintNodeSpawner
---@field private DebugKey FKey
local UInputDebugKeyEventNodeSpawner = {}

