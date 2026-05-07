---This represents the tickability of a widget computed at compile time
---It is designed as a hint so the runtime can determine if ticking needs to be enabled
---A lot of widgets set to WillTick means you might have a performance problem
---@class EWidgetCompileTimeTickPrediction
---@field public WontTick integer
---@field public OnDemand integer
---@field public WillTick integer
---@field public EWidgetCompileTimeTickPrediction_MAX integer
local EWidgetCompileTimeTickPrediction = {}
