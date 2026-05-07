---Stores if the user is wearing the HMD or not. For HMDs without a sensor to detect the user wearing it, the state defaults to Unknown.
---@class EHMDWornState
---@field public Unknown integer
---@field public Worn integer
---@field public NotWorn integer
---@field public EHMDWornState_MAX integer
local EHMDWornState = {}
