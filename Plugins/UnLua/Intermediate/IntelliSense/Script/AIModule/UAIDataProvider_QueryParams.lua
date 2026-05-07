---AIDataProvider_QueryParams is used with environment queries
---It allows defining simple parameters for running query,
---which are not tied to any specific pawn, but defined
---for every query execution.
---@class UAIDataProvider_QueryParams : UAIDataProvider
---@field public ParamName string @Arbitrary name this query parameter will be exposed as to outside world (like BT nodes)
---@field public FloatValue number
---@field public IntValue integer
---@field public BoolValue boolean
local UAIDataProvider_QueryParams = {}

