---Trigger events are the Action's interpretation of all Trigger State transitions that occurred for the action in the last tick
---@class ETriggerEvent
---@field public None integer
---@field public Triggered integer
---@field public Started integer
---@field public Ongoing integer
---@field public Canceled integer
---@field public Completed integer
---@field public ETriggerEvent_MAX integer
local ETriggerEvent = {}
