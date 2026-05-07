---Method of virtualization when a sound is stopped due to playback constraints
---(i.e. by concurrency, priority, and/or MaxChannelCount)
---for a given sound.
---@class EVirtualizationMode
---@field public Disabled integer
---@field public PlayWhenSilent integer
---@field public Restart integer
---@field public SeekRestart integer
---@field public EVirtualizationMode_MAX integer
local EVirtualizationMode = {}
