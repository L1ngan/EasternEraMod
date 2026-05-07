---Implements a message for responding to a request to discover engine instances on the network.
---@class FEngineServicePong
---@field public CurrentLevel string @Holds the name of the currently loaded level, if any.
---@field public EngineVersion integer @Holds the engine version.
---@field public HasBegunPlay boolean @Holds a flag indicating whether game play has begun.
---@field public InstanceId FGuid @Holds the instance identifier.
---@field public InstanceType string @Holds the type of the engine instance.
---@field public SessionId FGuid @Holds the identifier of the session that the application belongs to.
---@field public WorldTimeSeconds number @Holds the time in seconds since the world was loaded.
local FEngineServicePong = {}
