---Acts as a game-specific wrapper around the session interface. The game code makes calls to this when it needs to interact with the session interface.
---A game session exists only the server, while running an online game.
---@class AGameSession : AInfo
---@field public MaxSpectators integer @Maximum number of spectators allowed by this server.
---@field public MaxPlayers integer @Maximum number of players allowed by this server.
---@field public MaxPartySize integer @Restrictions on the largest party that can join together
---@field public MaxSplitscreensPerConnection integer @Maximum number of splitscreen players to allow from one connection
---@field public bRequiresPushToTalk boolean @Is voice enabled always or via a push to talk keybinding
---@field public SessionName string @SessionName local copy from PlayerState class.  should really be define in this class, but need to address replication issues
local AGameSession = {}

