---Default dynamic binding resolver library, with several basic resolver functions.
---@class UBuiltInDynamicBindingResolverLibrary : UBlueprintFunctionLibrary
local UBuiltInDynamicBindingResolverLibrary = {}

---Resolve the bound object to the player's pawn
---@param WorldContextObject UObject
---@param PlayerControllerIndex integer @[opt] 
---@return FMovieSceneDynamicBindingResolveResult
function UBuiltInDynamicBindingResolverLibrary.ResolveToPlayerPawn(WorldContextObject, PlayerControllerIndex) end

