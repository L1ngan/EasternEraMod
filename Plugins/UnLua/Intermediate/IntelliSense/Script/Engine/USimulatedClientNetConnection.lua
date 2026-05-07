---A fake connection that will absorb traffic and auto ack every packet. Useful for testing scaling. Use net.SimulateConnections command to add at runtime.
---@class USimulatedClientNetConnection : UNetConnection
local USimulatedClientNetConnection = {}

