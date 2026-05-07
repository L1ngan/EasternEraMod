---A material expression that outputs a grayscale image containing the luminance of the incoming RGB color in all color channels;
---    the alpha channel is left unchanged if present.
---@class EMaterialXLuminanceMode
---@field public ACEScg integer
---@field public Rec709 integer
---@field public Rec2020 integer
---@field public Rec2100 integer
---@field public Custom integer
---@field public EMaterialXLuminanceMode_MAX integer
local EMaterialXLuminanceMode = {}
