---Struct holding the a minimum amount of data about a Implicit object to be shown in the details panel
---@class FChaosVDImplicitObjectBasicView
---@field public ImplicitObjectType string @Geometry type name
---@field public ShapeInstanceIndex integer @Index of the Shape Instance data for this geometry in the Shape Instance data array
---@field public bIsRootObject boolean @True if this is the root implicit object
---@field public RelativeTransform FTransform @If this is a transformed implicit, this will contain the recorded relative transform
local FChaosVDImplicitObjectBasicView = {}
