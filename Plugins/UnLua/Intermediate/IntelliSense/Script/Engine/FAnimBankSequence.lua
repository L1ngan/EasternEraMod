---@class FAnimBankSequence
---@field public Sequence UAnimSequence
---@field public bLooping boolean
---@field public bAutoStart boolean
---@field public Position number
---@field public PlayRate number
---@field public BoundsScale number @Scales the bounds of the instances playing this sequence. This is useful when the animation moves the vertices of the mesh outside of its bounds. Warning: Increasing the bounds will reduce performance!
local FAnimBankSequence = {}
