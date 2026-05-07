---Library of synchronous achievement calls
---@class UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary
local UTurnBasedBlueprintLibrary = {}

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param Object UObject
function UTurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject(WorldContextObject, PlayerController, Object) end

---out
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param MatchID string
---@param PlayerIndex integer
---@param PlayerDisplayName string @[out] 
function UTurnBasedBlueprintLibrary.GetPlayerDisplayName(WorldContextObject, PlayerController, MatchID, PlayerIndex, PlayerDisplayName) end

---out
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param MatchID string
---@param PlayerIndex integer @[out] 
function UTurnBasedBlueprintLibrary.GetMyPlayerIndex(WorldContextObject, PlayerController, MatchID, PlayerIndex) end

---out
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param MatchID string
---@param bIsMyTurn boolean @[out] 
function UTurnBasedBlueprintLibrary.GetIsMyTurn(WorldContextObject, PlayerController, MatchID, bIsMyTurn) end

