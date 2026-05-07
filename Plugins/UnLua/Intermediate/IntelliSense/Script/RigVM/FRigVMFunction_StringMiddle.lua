---Returns the middle section of a string
---@class FRigVMFunction_StringMiddle : FRigVMFunction_StringBase
---@field public Value string
---@field public Start integer @the index of the first character
---@field public Count integer @if count is set to -1 all character from Start will be returned
---@field public Result string
local FRigVMFunction_StringMiddle = {}
