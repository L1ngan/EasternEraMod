---A node spawner which will check if there is already an enhanced input event node (UK2Node_EnhancedInputAction)
---before spawning a new one in the graph. This makes the behavior of enhanced input action nodes the same as other
---event nodes.
---@class UInputActionEventNodeSpawner : UBlueprintNodeSpawner
---@field private WeakActionPtr TWeakObjectPtr<UInputAction> @We don't want references to node spawners to be keeping any input action assets from GC if you unload a plugin for example, so we keep it as a weak pointer.
local UInputActionEventNodeSpawner = {}

