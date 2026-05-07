---Base type for editing simple structs as pin default values, by displaying a nested version of a struct customization.
---To make this work, create an inherited USTRUCT that includes a copy of the struct to be edited and overrides the functions.
---Then, pass in StructName::StaticStruct() when creating SGraphPinStructInstance from a pin factory
---@class FPinStructEditWrapper
local FPinStructEditWrapper = {}
