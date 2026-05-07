---Contains information about a watched pin in a Blueprint graph for local settings data.
---@class FBlueprintWatchedPin
---@field private OwningNode TSoftObjectPtr<UEdGraphNode> @Node that owns the pin that the watch is placed on
---@field private PinId FGuid @Unique ID of the pin that the watch is placed on
---@field private PathToProperty TArray<string> @Path from the pin to a nested property, empty if just watching the Pin NOTE: each segment of the path is Property->GetAuthoredName
local FBlueprintWatchedPin = {}
