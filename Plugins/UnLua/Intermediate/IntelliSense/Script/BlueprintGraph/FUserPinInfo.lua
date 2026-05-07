---@class FUserPinInfo
---@field public PinName string @The name of the pin, as defined by the user
---@field public PinType FEdGraphPinType @Type info for the pin
---@field public DesiredPinDirection integer @Desired direction for the pin. The direction will be forced to work with the node if necessary
---@field public PinDefaultValue string @The default value of the pin
local FUserPinInfo = {}
