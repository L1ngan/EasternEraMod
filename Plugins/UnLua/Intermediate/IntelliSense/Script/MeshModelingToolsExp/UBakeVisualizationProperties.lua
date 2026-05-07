---@class UBakeVisualizationProperties : UInteractiveToolPropertySet
---@field public bPreviewAsMaterial boolean @Preview the texture as an input to the respective material parameter (ex. Normal, Ambient Occlusion)
---@field public Brightness number @Adjust the brightness of the preview material; does not affect results stored in textures
---@field public AOMultiplier number @Ambient Occlusion multiplier in the viewport; does not affect results stored in textures
local UBakeVisualizationProperties = {}

