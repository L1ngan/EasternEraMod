---@class FRootPrePullSettings
---@field public RotationAlpha number @Range 0-1, default is 0. Apply a large scale rotation offset to the entire body prior to constraint solving.
---@field public RotationAlphaX number @Range 0-1, default is 1. Blend contribution to rotation offset in the X axis in component space.
---@field public RotationAlphaY number @Range 0-1, default is 1. Blend contribution to rotation offset in the Y axis in component space.
---@field public RotationAlphaZ number @Range 0-1, default is 1. Blend contribution to rotation offset in the Z axis in component space.
---@field public PositionAlpha number @Range 0-1, default is 1. Apply a large scale position offset to the entire body prior to constraint solving.
---@field public PositionAlphaX number @Range 0-1, default is 1. Blend contribution to position offset in the X axis in component space.
---@field public PositionAlphaY number @Range 0-1, default is 1. Blend contribution to position offset in the Y axis in component space.
---@field public PositionAlphaZ number @Range 0-1, default is 1. Blend contribution to position offset in the Z axis in component space.
local FRootPrePullSettings = {}
