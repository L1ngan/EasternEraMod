---@class UBakeRenderCaptureVisualizationProperties : UInteractiveToolPropertySet
---@field public bPreviewAsMaterial boolean @If true  preview results by connecting them to corresponding material inputs If false connect the selected preview output as the Base Color input and use empty maps for other material inputs
---@field public Brightness number @Adjust the brightness of the Base Color material input; does not affect results stored in textures
---@field public SSBrightness number @Adjust the brightness of the Subsurface Color material input; does not affect results stored in textures
---@field public EmissiveScale number @Adjust the brightness of the Emissive Color material input; does not affect results stored in textures
local UBakeRenderCaptureVisualizationProperties = {}

