---A linear, 32-bit/component floating point RGBA color.
---@class FLinearColor
---@field public R number
---@field public G number
---@field public B number
---@field public A number
local FLinearColor = {}
---@param P0 boolean 
---@return FColor
function FLinearColor:ToFColor(P0) end
---@param P0 number 
---@param P1 number 
---@return FLinearColor
function FLinearColor:Clamp(P0, P1) end
