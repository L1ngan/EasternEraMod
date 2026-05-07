---@class UK2Node_MakeStateTreeReference : UK2Node
---@field private ShowPinForProperties TArray<FOptionalPinFromProperty> @Created pins from the state tree properties
---@field private StateTree UStateTree @State tree asset set in the pin and saved here to rebuild the property pins.
local UK2Node_MakeStateTreeReference = {}

