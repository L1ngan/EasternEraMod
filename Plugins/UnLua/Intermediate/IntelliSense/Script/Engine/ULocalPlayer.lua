---Each player that is active on the current client/listen server has a LocalPlayer.
---It stays active across maps, and there may be several spawned in the case of splitscreen/coop.
---There will be 0 spawned on dedicated servers.
---@class ULocalPlayer : UPlayer
---@field public ViewportClient UGameViewportClient @The primary viewport containing this player's view.
---@field public AspectRatioAxisConstraint integer @How to constrain perspective viewport FOV
---@field public PendingLevelPlayerControllerClass TSubclassOf<APlayerController> @The class of PlayerController to spawn for players logging in.
---@field public bSentSplitJoin boolean @set when we've sent a split join request
---@field private ControllerId integer @The controller ID which this player accepts input from.
local ULocalPlayer = {}

