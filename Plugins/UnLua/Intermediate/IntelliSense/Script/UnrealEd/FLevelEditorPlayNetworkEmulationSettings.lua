---@class FLevelEditorPlayNetworkEmulationSettings
---@field public bIsNetworkEmulationEnabled boolean @When true will apply the emulation settings when launching the game
---@field public EmulationTarget NetworkEmulationTarget
---@field public CurrentProfile string @The profile name of the settings currently applied
---@field public OutPackets FNetworkEmulationPacketSettings @Settings that add latency and packet loss to all outgoing packets
---@field public InPackets FNetworkEmulationPacketSettings @Settings that add latency and packet loss to all incoming packets
local FLevelEditorPlayNetworkEmulationSettings = {}
