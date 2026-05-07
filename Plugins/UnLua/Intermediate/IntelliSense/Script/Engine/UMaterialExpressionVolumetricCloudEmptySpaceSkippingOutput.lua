---USed to help the cloud system to fast skip empty space areas when ray marching.
---@class UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput : UMaterialExpressionCustomOutput
---@field public ContainsMatter FExpressionInput @Specify 0 if no matter (cloud or participating media) can be found within the area, otherwise should be set > 0.
local UMaterialExpressionVolumetricCloudEmptySpaceSkippingOutput = {}

