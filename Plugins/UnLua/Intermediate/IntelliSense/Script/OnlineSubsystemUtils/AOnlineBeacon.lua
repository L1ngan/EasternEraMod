---Base class for beacon communication (Unreal Networking, but outside normal gameplay traffic)
---@class AOnlineBeacon : AActor
---@field protected BeaconConnectionInitialTimeout number @Time beacon will wait to establish a connection with the beacon host
---@field protected BeaconConnectionTimeout number @Time beacon will wait for packets after establishing a connection before giving up
---@field protected NetDriver UNetDriver @Net driver routing network traffic
local AOnlineBeacon = {}

