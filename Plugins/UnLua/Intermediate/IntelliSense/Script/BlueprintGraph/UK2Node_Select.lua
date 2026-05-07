---@class UK2Node_Select : UK2Node
---@field private NumOptionPins integer @The number of selectable options this node currently has
---@field private IndexPinType FEdGraphPinType @The pin type of the index pin
---@field private Enum UEnum @Name of the enum being switched on
---@field private EnumEntries TArray<string> @List of the current entries in the enum (Pin Names)
---@field private EnumEntryFriendlyNames TArray<string> @List of the current entries in the enum (Pin Friendly Names)
---@field private bReconstructNode boolean @Whether we need to reconstruct the node after the pins have changed
local UK2Node_Select = {}

