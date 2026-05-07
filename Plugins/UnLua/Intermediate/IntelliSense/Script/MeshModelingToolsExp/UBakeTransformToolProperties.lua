---Standard properties
---@class UBakeTransformToolProperties : UInteractiveToolPropertySet
---@field public bApplyToAllLODs boolean @If checked, the baked transform will be applied to all available LODs. Has no effect on selections without LODs.
---@field public bBakeRotation boolean @Bake rotation
---@field public BakeScale EBakeScaleMethod @Bake scale
---@field public bRecenterPivot boolean @Recenter pivot after baking transform
---@field public bAllowNoScale boolean @This variable is used to enable/disable the "DoNotBakeScale" option in the BakeScale enum It is marked as visible only so that the FBakeTransformToolDetails can read it; it will be hidden by that DetailCustomization
local UBakeTransformToolProperties = {}

