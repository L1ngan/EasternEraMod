---@class UEngineMessage : ULocalMessage
---@field public FailedPlaceMessage string @Message displayed in message dialog when player pawn fails to spawn because no playerstart was available.
---@field public MaxedOutMessage string @Message when player join attempt is refused because the server is at capacity.
---@field public EnteredMessage string @Message when a new player enters the game.
---@field public LeftMessage string @Message when a player leaves the game.
---@field public GlobalNameChange string @Message when a player changes their name.
---@field public SpecEnteredMessage string @Message when a new spectator enters the server (if spectator has a player name).
---@field public NewPlayerMessage string @Message when a new player enters the server (if player is unnamed).
---@field public NewSpecMessage string @Message when a new spectator enters the server (if spectator is unnamed).
local UEngineMessage = {}

