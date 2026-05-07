---Action to add an 'add component' node to the graph
---@class FEdGraphSchemaAction_K2AddComponent : FEdGraphSchemaAction_K2NewNode
---@field public ComponentClass TSubclassOf<UActorComponent> @Class of component we want to add
---@field public ComponentAsset UObject @Option asset to assign to newly created component
local FEdGraphSchemaAction_K2AddComponent = {}
