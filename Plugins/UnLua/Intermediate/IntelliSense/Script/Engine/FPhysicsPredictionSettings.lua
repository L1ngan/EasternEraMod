---Physics Prediction Settings
---@class FPhysicsPredictionSettings
---@field public bEnablePhysicsPrediction boolean @Enable networked physics prediction (experimental) This syncs the physics tick number between client and server and keeps it in sync via time dilation performed on the client, see APlayerController::GetPhysicsTimestamp(). If an AActor::PhysicsReplicationMode is set to use Resimulation this will also enable RewindData to cache physics history on the client which is required by resimulation replication. IMPORTANT: Physics Prediction needs Physics -> Framerate -> Tick Physics Async enabled to function as intended.
---@field public bEnablePhysicsHistoryCapture boolean @Enables FRewindData to cache physics history Note: This is not recommended for networked physics unless developing a custom resimulation solution since this starts caching physics on both client and server,        instead only enable bEnablePhysicsPrediction which will automatically enable FRewindData caching on the client if needed by the chosen replication mode.
---@field public MaxSupportedLatencyPrediction number @Amount of RTT (Round Trip Time) latency for the prediction to support in milliseconds.
---@field public ResimulationSettings FPhysicsReplicationResimulationSettings @Default settings for physics replication using EPhysicsReplicationMode::Resimulation.
---@field public PhysicsReplicationLODSettings FPhysicsReplicationLODSettings @Default settings for physics replication LOD.
local FPhysicsPredictionSettings = {}
