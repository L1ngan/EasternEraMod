---Stores a color with 8 bits of precision per channel. (BGRA).
---@class FColor
---@field public B integer
---@field public G integer
---@field public R integer
---@field public A integer
local FColor = {}
---@param P0 FColor 
function FColor:Add(P0) end
---@return FLinearColor
function FColor:ToLinearColor() end
