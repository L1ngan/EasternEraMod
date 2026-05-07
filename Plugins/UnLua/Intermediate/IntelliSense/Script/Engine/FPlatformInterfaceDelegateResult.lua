---Generic structure for returning most any kind of data from C++ to delegate functions
---@class FPlatformInterfaceDelegateResult
---@field public bSuccessful boolean @This is always usable, no matter the type
---@field public Data FPlatformInterfaceData @The result actual data
local FPlatformInterfaceDelegateResult = {}
