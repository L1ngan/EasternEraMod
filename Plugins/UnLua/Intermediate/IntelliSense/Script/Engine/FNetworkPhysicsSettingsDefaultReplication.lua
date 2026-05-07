---@class FNetworkPhysicsSettingsDefaultReplication
---@field public bOverrideMaxLinearHardSnapDistance boolean
---@field public MaxLinearHardSnapDistance number @Overrides CVar: p.MaxLinearHardSnapDistance -- Hardsnap if distance between current position and extrapolated target position is larger than this value.
---@field public bOverrideDefaultLegacyHardsnapInPT boolean
---@field public bHardsnapInPhysicsThread boolean @Overrides CVar: p.DefaultReplication.Legacy.HardsnapInPT -- If default replication is used and it's running the legacy flow through Game Thread, allow hardsnapping to be performed on Physics Thread if async physics is enabled.
---@field public bOverrideCorrectConnectedBodies boolean
---@field public bCorrectConnectedBodies boolean @Overrides CVar: p.DefaultReplication.CorrectConnectedBodies -- When true, transform corrections will also apply to any connected physics object.
---@field public bOverrideCorrectConnectedBodiesFriction boolean
---@field public bCorrectConnectedBodiesFriction boolean @Overrides CVar: p.DefaultReplication.CorrectConnectedBodiesFriction -- When true, transform correction on any connected physics object will also recalculate their friction.
local FNetworkPhysicsSettingsDefaultReplication = {}
