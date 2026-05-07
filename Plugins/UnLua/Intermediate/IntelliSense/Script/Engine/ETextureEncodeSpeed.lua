---Certain settings can be changed to facilitate how fast a texture build takes. This
---controls which of those settings is used. It is resolved prior to the settings reaching
---the encoder.
---In many places where this is used, FinalIfAvailable is invalid.
---@class ETextureEncodeSpeed
---@field public Final integer
---@field public FinalIfAvailable integer
---@field public Fast integer
---@field public ETextureEncodeSpeed_MAX integer
local ETextureEncodeSpeed = {}
