---@class USlateBlueprintLibrary : UBlueprintFunctionLibrary
local USlateBlueprintLibrary = {}

---Transforms a vector from local space to absolute space
---@param Geometry FGeometry
---@param LocalVector FVector2D
---@return FVector2D
function USlateBlueprintLibrary.Vector_LocalToAbsolute(Geometry, LocalVector) end

---Transforms a vector from absolute space to local space
---@param Geometry FGeometry
---@param AbsoluteVector FVector2D
---@return FVector2D
function USlateBlueprintLibrary.Vector_AbsoluteToLocal(Geometry, AbsoluteVector) end

---@param Geometry FGeometry
---@param LocalVector FVector2D
---@return FVector2D
function USlateBlueprintLibrary.TransformVectorLocalToAbsolute(Geometry, LocalVector) end

---@param Geometry FGeometry
---@param AbsoluteVector FVector2D
---@return FVector2D
function USlateBlueprintLibrary.TransformVectorAbsoluteToLocal(Geometry, AbsoluteVector) end

---@param Geometry FGeometry
---@param LocalScalar number
---@return number
function USlateBlueprintLibrary.TransformScalarLocalToAbsolute(Geometry, LocalScalar) end

---@param Geometry FGeometry
---@param AbsoluteScalar number
---@return number
function USlateBlueprintLibrary.TransformScalarAbsoluteToLocal(Geometry, AbsoluteScalar) end

---Translates a screen position in pixels into the local space of a widget with the given geometry.
---If bIncludeWindowPosition is true, then this method will also remove the game window's position (useful when in windowed mode).
---@param WorldContextObject UObject
---@param Geometry FGeometry
---@param ScreenPosition FVector2D
---@param LocalCoordinate FVector2D @[out] 
---@param bIncludeWindowPosition boolean @[opt] 
function USlateBlueprintLibrary.ScreenToWidgetLocal(WorldContextObject, Geometry, ScreenPosition, LocalCoordinate, bIncludeWindowPosition) end

---Translates a screen position in pixels into absolute application coordinates.
---If bIncludeWindowPosition is true, then this method will also remove the game window's position (useful when in windowed mode).
---@param WorldContextObject UObject
---@param ScreenPosition FVector2D
---@param AbsoluteCoordinate FVector2D @[out] 
---@param bIncludeWindowPosition boolean @[opt] 
function USlateBlueprintLibrary.ScreenToWidgetAbsolute(WorldContextObject, ScreenPosition, AbsoluteCoordinate, bIncludeWindowPosition) end

---Translates a screen position in pixels into the local space of the viewport widget.
---@param WorldContextObject UObject
---@param ScreenPosition FVector2D
---@param ViewportPosition FVector2D @[out] 
function USlateBlueprintLibrary.ScreenToViewport(WorldContextObject, ScreenPosition, ViewportPosition) end

---Transforms a scalar from local space to absolute space
---@param Geometry FGeometry
---@param LocalScalar number
---@return number
function USlateBlueprintLibrary.Scalar_LocalToAbsolute(Geometry, LocalScalar) end

---Transforms a scalar from absolute space to local space
---@param Geometry FGeometry
---@param AbsoluteScalar number
---@return number
function USlateBlueprintLibrary.Scalar_AbsoluteToLocal(Geometry, AbsoluteScalar) end

---Translates local coordinate of the geometry provided into local viewport coordinates.
---other uses where you need a coordinate in the space of viewport resolution units.
---to add another widget to the viewport at the same position in viewport space as this location, this is
---what you would use.
---@param WorldContextObject UObject
---@param Geometry FGeometry
---@param LocalCoordinate FVector2D
---@param PixelPosition FVector2D @[out] 
---@param ViewportPosition FVector2D @[out] 
function USlateBlueprintLibrary.LocalToViewport(WorldContextObject, Geometry, LocalCoordinate, PixelPosition, ViewportPosition) end

---Transforms local coordinates into absolute coordinates
---Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.
---@param Geometry FGeometry
---@param LocalCoordinate FVector2D
---@return FVector2D
function USlateBlueprintLibrary.LocalToAbsolute(Geometry, LocalCoordinate) end

---Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.
---@param Geometry FGeometry
---@param AbsoluteCoordinate FVector2D
---@return boolean
function USlateBlueprintLibrary.IsUnderLocation(Geometry, AbsoluteCoordinate) end

---Returns the local top/left of the geometry in local space.
---@param Geometry FGeometry
---@return FVector2D
function USlateBlueprintLibrary.GetLocalTopLeft(Geometry) end

---Returns the size of the geometry in local space.
---@param Geometry FGeometry
---@return FVector2D
function USlateBlueprintLibrary.GetLocalSize(Geometry) end

---Returns the size of the geometry in absolute space.
---@param Geometry FGeometry
---@return FVector2D
function USlateBlueprintLibrary.GetAbsoluteSize(Geometry) end

---Returns whether brushes A and B are identical.
---@param A FSlateBrush
---@param B FSlateBrush
---@return boolean
function USlateBlueprintLibrary.EqualEqual_SlateBrush(A, B) end

---Translates absolute coordinate in desktop space of the geometry provided into local viewport coordinates.
---other uses where you need a coordinate in the space of viewport resolution units.
---to add another widget to the viewport at the same position in viewport space as this location, this is
---what you would use.
---@param WorldContextObject UObject
---@param AbsoluteDesktopCoordinate FVector2D
---@param PixelPosition FVector2D @[out] 
---@param ViewportPosition FVector2D @[out] 
function USlateBlueprintLibrary.AbsoluteToViewport(WorldContextObject, AbsoluteDesktopCoordinate, PixelPosition, ViewportPosition) end

---Transforms absolute coordinates into local coordinates
---Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.
---@param Geometry FGeometry
---@param AbsoluteCoordinate FVector2D
---@return FVector2D
function USlateBlueprintLibrary.AbsoluteToLocal(Geometry, AbsoluteCoordinate) end

