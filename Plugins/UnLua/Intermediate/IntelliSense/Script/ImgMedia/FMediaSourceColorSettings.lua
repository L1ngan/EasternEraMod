---Manual definition of media source color space & encoding.
---@class FMediaSourceColorSettings
---@field public EncodingOverride EMediaSourceEncoding @Source encoding of the media.
---@field public ColorSpaceOverride ETextureColorSpace @Source color space of the media.
---@field public RedChromaticityCoordinate FVector2D @Red chromaticity coordinate of the source color space.
---@field public GreenChromaticityCoordinate FVector2D @Green chromaticity coordinate of the source color space.
---@field public BlueChromaticityCoordinate FVector2D @Blue chromaticity coordinate of the source color space.
---@field public WhiteChromaticityCoordinate FVector2D @White chromaticity coordinate of the source color space.
---@field public ChromaticAdaptationMethod ETextureChromaticAdaptationMethod @Chromatic adaption method applied if the source white point differs from the working color space white point.
local FMediaSourceColorSettings = {}
