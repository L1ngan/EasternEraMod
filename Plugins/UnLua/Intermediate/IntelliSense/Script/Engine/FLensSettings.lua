---@class FLensSettings
---@field public Bloom FLensBloomSettings
---@field public Imperfections FLensImperfectionSettings
---@field public ChromaticAberration number @in percent, Scene chromatic aberration / color fringe (camera imperfection) to simulate an artifact that happens in real-world lens, mostly visible in the image corners.
local FLensSettings = {}
