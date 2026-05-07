---@class UPendingNetGame : UObject
---@field public NetDriver UNetDriver @Net driver created for contacting the new server Transferred to world on successful connection
---@field private DemoNetDriver UDemoNetDriver @Demo Net driver created for loading demos, but we need to go through pending net game Transferred to world on successful connection
local UPendingNetGame = {}

