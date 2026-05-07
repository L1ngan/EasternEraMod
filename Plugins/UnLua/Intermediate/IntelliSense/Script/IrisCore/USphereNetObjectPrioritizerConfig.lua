---@class USphereNetObjectPrioritizerConfig : UNetObjectPrioritizerConfig
---@field public InnerRadius number
---@field public OuterRadius number
---@field public InnerPriority number @Priority for objects inside the inner sphere
---@field public OuterPriority number @Priority at the border of the outer sphere
---@field public OutsidePriority number @Priority outside the sphere
local USphereNetObjectPrioritizerConfig = {}

