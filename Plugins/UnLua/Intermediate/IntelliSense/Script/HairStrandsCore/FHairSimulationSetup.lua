---@class FHairSimulationSetup
---@field public bResetSimulation boolean @Boolean to control if we want to reset trhe simulation at some point in time
---@field public bDebugSimulation boolean @Boolean to make the simulation strands visible
---@field public bLocalSimulation boolean @Strands simulation is done in local space
---@field public LinearVelocityScale number @The amount of linear velocities sent to the local groom space from the reference bone
---@field public AngularVelocityScale number @The amount of angular velocities sent to the local groom space from the reference bone
---@field public LocalBone string @Bone used for the simulation local space
---@field public TeleportDistance number @Teleport distance threshold to reset the simulation
local FHairSimulationSetup = {}
