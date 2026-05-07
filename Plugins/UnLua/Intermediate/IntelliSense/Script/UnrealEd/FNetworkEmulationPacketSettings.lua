---@class FNetworkEmulationPacketSettings
---@field public MinLatency integer @Minimum latency to add to packets
---@field public MaxLatency integer @Maximum latency to add to packets. We use a random value between the minimum and maximum (when 0 = always the minimum value)
---@field public PacketLossPercentage integer @Ratio of packets to randomly drop (0 = none, 100 = all)
local FNetworkEmulationPacketSettings = {}
