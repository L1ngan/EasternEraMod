---Tool Properties for a brush alpha mask
---@class UVertexBrushAlphaProperties : UInteractiveToolPropertySet
---@field public Alpha UTexture2D @Alpha mask applied to brush stamp. Red channel is used.
---@field public RotationAngle number @Alpha is rotated by this angle, inside the brush stamp frame (vertically aligned)
---@field public bRandomize boolean @If true, a random angle in +/- RandomRange is added to Rotation angle for each stamp
---@field public RandomRange number @Bounds of random generation (positive and negative) for randomized stamps
---@field public Tool TWeakObjectPtr<UMeshVertexSculptTool> @parent ref required for details customization
local UVertexBrushAlphaProperties = {}

