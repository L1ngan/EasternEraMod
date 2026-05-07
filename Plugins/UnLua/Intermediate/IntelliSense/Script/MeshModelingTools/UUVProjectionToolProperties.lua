---Standard properties
---@class UUVProjectionToolProperties : UInteractiveToolPropertySet
---@field public ProjectionType EUVProjectionMethod @Shape and/or algorithm to use for UV projection
---@field public Dimensions FVector @Width, length, and height of the projection shape before rotation
---@field public bProportionalDimensions boolean @If true, changes to Dimensions result in all components be changed proportionally
---@field public Initialization EUVProjectionToolInitializationMode @Determines how projection settings will be initialized; this only takes effect if the projection shape dimensions or position are unchanged
---@field public CylinderSplitAngle number @Angle in degrees to determine whether faces should be assigned to the cylinder or the flat end caps
---@field public ExpMapNormalBlending number @Blend between surface normals and projection normal; ExpMap projection becomes Plane projection when this value is 1
---@field public ExpMapSmoothingSteps integer @Number of smoothing steps to apply; this slightly increases distortion but produces more stable results.
---@field public ExpMapSmoothingAlpha number @Smoothing parameter; larger values result in faster smoothing in each step.
---@field public Rotation number @Rotation in degrees applied after computing projection
---@field public Scale FVector2D @Scaling applied after computing projection
---@field public Translation FVector2D @Translation applied after computing projection
---@field public SavedDimensions FVector @Saved State. These are used internally to support UsePrevious initialization mode
---@field public bSavedProportionalDimensions boolean
---@field public SavedTransform FTransform
local UUVProjectionToolProperties = {}

