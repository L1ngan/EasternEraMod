---Abstract Base class for all tick functions.
---@class FTickFunction
---@field public TickGroup integer @Defines the minimum tick group for this tick function. These groups determine the relative order of when objects tick during a frame update. Given prerequisites, the tick may be delayed.
---@field public EndTickGroup integer @Defines the tick group that this tick function must finish in. These groups determine the relative order of when objects tick during a frame update.
---@field public bTickEvenWhenPaused boolean @Bool indicating that this function should execute even if the game is paused. Pause ticks are very limited in capabilities. *
---@field public bCanEverTick boolean @If false, this tick function will never be registered and will never tick. Only settable in defaults.
---@field public bStartWithTickEnabled boolean @If true, this tick function will start enabled, but can be disabled later on.
---@field public bAllowTickOnDedicatedServer boolean @If we allow this tick to run on a dedicated server
---@field public TickInterval number @The frequency in seconds at which this tick function will be executed.  If less than or equal to 0 then it will tick every frame
local FTickFunction = {}
