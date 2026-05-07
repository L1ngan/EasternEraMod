---Container responsible for managing the mute state of a player controller
---at the gameplay level (VoiceInterface handles actual muting)
---@class FPlayerMuteList
---@field public bHasVoiceHandshakeCompleted boolean @Has server and client handshake completed
---@field public VoiceChannelIdx integer
local FPlayerMuteList = {}
