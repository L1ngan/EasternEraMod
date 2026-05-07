---Struct that encompasses the most common types of data. This is the data payload
---of PlatformInterfaceDelegateResult.
---@class FPlatformInterfaceData
---@field public DataName string @An optional tag for this data
---@field public Type integer @Specifies which value is valid for this structure
---@field public IntValue integer @Various typed result values
---@field public FloatValue number
---@field public StringValue string
---@field public ObjectValue UObject
local FPlatformInterfaceData = {}
