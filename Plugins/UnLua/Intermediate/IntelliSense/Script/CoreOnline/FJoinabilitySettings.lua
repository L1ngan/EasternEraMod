---Maximum players supported on a given platform
---@class FJoinabilitySettings
---@field public SessionName string @Name of session these settings affect
---@field public bPublicSearchable boolean @Is this session now publicly searchable
---@field public bAllowInvites boolean @Does this session allow invites
---@field public bJoinViaPresence boolean @Does this session allow public join via presence
---@field public bJoinViaPresenceFriendsOnly boolean @Does this session allow friends to join via presence
---@field public MaxPlayers integer @Current max players in this session
---@field public MaxPartySize integer @Current max party size in this session
local FJoinabilitySettings = {}
