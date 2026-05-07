---Takes care of spawning UK2Node_AddComponent nodes. Acts as the "action"
---portion of certain FBlueprintActionMenuItems. Evolved from
---FEdGraphSchemaAction_K2AddComponent.
---@class UBlueprintComponentNodeSpawner : UBlueprintNodeSpawner
---@field private ComponentClass TSubclassOf<UActorComponent> @The component class to configure new nodes with.
---@field private ComponentName string @The name of the component class to configure new nodes with.
---@field private ComponentAssetName string @The name of the asset name that needs to be loaded
local UBlueprintComponentNodeSpawner = {}

