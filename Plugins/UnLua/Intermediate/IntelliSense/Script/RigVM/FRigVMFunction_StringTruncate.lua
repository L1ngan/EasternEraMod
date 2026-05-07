---Returns the left or right most characters from the string chopping the given number of characters from the start or the end
---@class FRigVMFunction_StringTruncate : FRigVMFunction_StringBase
---@field public Name string
---@field public Count integer @Number of characters to remove from left or right
---@field public FromEnd boolean @if set to true the characters will be removed from the end
---@field public Remainder string @the part of the string without the chopped characters
---@field public Chopped string @the part of the name that has been chopped off
local FRigVMFunction_StringTruncate = {}
