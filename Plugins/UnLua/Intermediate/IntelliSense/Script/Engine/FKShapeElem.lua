---Base class of shapes used for collision, such as Sphere, Box, Sphyl, Convex, TaperedCapsule or LevelSet
---@class FKShapeElem
---@field public RestOffset number @Offset used when generating contact points. This allows you to smooth out               the Minkowski sum by radius R. Useful for making objects slide smoothly               on top of irregularities
---@field public bIsGenerated boolean @True when the shape was created by the engine and was not imported.
---@field private Name string @User-defined name for this shape
---@field private bContributeToMass boolean @True if this shape should contribute to the overall mass of the body it               belongs to. This lets you create extra collision volumes which do not affect               the mass properties of an object.
---@field private CollisionEnabled integer @Course per-primitive collision filtering. This allows for individual primitives to               be toggled in and out of sim and query collision without changing filtering details.
local FKShapeElem = {}
