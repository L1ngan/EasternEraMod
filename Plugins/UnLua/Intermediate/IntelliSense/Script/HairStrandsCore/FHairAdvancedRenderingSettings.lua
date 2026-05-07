---@class FHairAdvancedRenderingSettings
---@field public bUseStableRasterization boolean @Insure the hair does not alias. When enable, group of hairs might appear thicker. Isolated hair should remain thin.
---@field public bScatterSceneLighting boolean @Light hair with the scene color. This is used for vellus/short hair to bring light from the surrounding surface, like skin.
local FHairAdvancedRenderingSettings = {}
