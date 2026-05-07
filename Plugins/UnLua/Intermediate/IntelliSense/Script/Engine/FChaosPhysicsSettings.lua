---Settings container for Chaos physics engine settings, accessed in Chaos through a setting provider interface.
---See: IChaosSettingsProvider
---@class FChaosPhysicsSettings
---@field public DefaultThreadingModel EChaosThreadingMode @Default threading model to use on module initialisation. Can be switched at runtime using p.Chaos.ThreadingModel
---@field public DedicatedThreadTickMode EChaosSolverTickMode @The framerate/timestep ticking mode when running with a dedicated thread
---@field public DedicatedThreadBufferMode EChaosBufferMode @The buffering mode to use when running with a dedicated thread
local FChaosPhysicsSettings = {}
