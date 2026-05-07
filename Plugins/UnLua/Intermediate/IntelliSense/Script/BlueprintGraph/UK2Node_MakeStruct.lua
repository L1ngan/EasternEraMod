---Pure kismet node that creates a struct with specified values for each member
---@class UK2Node_MakeStruct : UK2Node_StructMemberSet
---@field public bMadeAfterOverridePinRemoval boolean @Helper property to handle upgrades from an old system of displaying pins for     the override values that properties referenced as a conditional of being set in a struct
local UK2Node_MakeStruct = {}

