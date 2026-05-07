---@class FRigUnit_ChainInfo_Segment
---@field public StartItem FCachedRigElement @* Start item of the chain segment
---@field public StartItemIndex integer @* Start item index of the chain segment
---@field public EndItem FCachedRigElement @* Emd item of the chain segment
---@field public EndItemIndex integer @* Emd item index of the chain segment
---@field public InitialLength number @* Initial length of segment
---@field public InitialCumLength number @* Inclusive initial length of all previous segments and this one
---@field public Length number @* Length of segment
---@field public CumLength number @* Inclusive length of all previous segments and this one
local FRigUnit_ChainInfo_Segment = {}
