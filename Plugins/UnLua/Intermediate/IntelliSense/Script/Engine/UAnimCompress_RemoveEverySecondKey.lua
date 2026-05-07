---@class UAnimCompress_RemoveEverySecondKey : UAnimCompress
---@field public MinKeys integer @Animations with fewer than MinKeys will not lose any keys.
---@field public bStartAtSecondKey boolean @If bStartAtSecondKey is true, remove keys 1,3,5,etc. If bStartAtSecondKey is false, remove keys 0,2,4,etc.
local UAnimCompress_RemoveEverySecondKey = {}

