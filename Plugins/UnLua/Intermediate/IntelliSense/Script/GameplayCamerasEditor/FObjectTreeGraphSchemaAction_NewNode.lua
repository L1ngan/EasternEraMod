---Graph action to create a new object (and corresponding graph node) of a given class.
---@class FObjectTreeGraphSchemaAction_NewNode : FEdGraphSchemaAction
---@field public ObjectOuter UObject @The outer for the new object. Defaults to the root object's package.
---@field public ObjectClass TSubclassOf<UObject> @The class of the new object.
local FObjectTreeGraphSchemaAction_NewNode = {}
