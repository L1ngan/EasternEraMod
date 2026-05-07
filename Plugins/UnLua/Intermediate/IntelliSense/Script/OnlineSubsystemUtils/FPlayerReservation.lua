---A single player reservation
---@class FPlayerReservation
---@field public UniqueId FUniqueNetIdRepl @Unique id for this reservation
---@field public ValidationStr string @Info needed to validate user credentials when joining a server
---@field public Platform string @Platform this user is on
---@field public bAllowCrossplay boolean @Does this player opt in to crossplay
---@field public ElapsedTime number @Elapsed time since player made reservation and was last seen
local FPlayerReservation = {}
