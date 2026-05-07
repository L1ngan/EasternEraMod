---@class FTextureSourceColorSettings
---@field public EncodingOverride ETextureSourceEncoding @Source encoding of the texture, exposing more options than just sRGB.
---@field public ColorSpace ETextureColorSpace @Source color space of the texture.
---@field public RedChromaticityCoordinate FVector2D @Red chromaticity coordinate of the source color space.
---@field public GreenChromaticityCoordinate FVector2D @Green chromaticity coordinate of the source color space.
---@field public BlueChromaticityCoordinate FVector2D @Blue chromaticity coordinate of the source color space.
---@field public WhiteChromaticityCoordinate FVector2D @White chromaticity coordinate of the source color space.
---@field public ChromaticAdaptationMethod ETextureChromaticAdaptationMethod @Chromatic adaption method applied if the source white point differs from the working color space white point.
local FTextureSourceColorSettings = {}
