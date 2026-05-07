---A cheat manager extension can extend the main cheat manager in a modular way, being enabled or disabled when the system associated with the cheats is enabled or disabled
---@class UCheatManagerExtension : UObject
local UCheatManagerExtension = {}

function UCheatManagerExtension:RemovedFromCheatManager() end

---@return APlayerController
function UCheatManagerExtension:GetPlayerController() end

function UCheatManagerExtension:AddedToCheatManager() end

