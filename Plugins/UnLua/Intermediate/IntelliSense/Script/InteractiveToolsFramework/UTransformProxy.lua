---UTransformProxy is used to transform a set of sub-objects. An internal
---FTransform is generated based on the sub-object set, and the relative
---FTransform of each sub-object is stored. Then as this main transform
---is updated, the sub-objects are also updated.
---Currently only USceneComponent sub-objects are supported.
---If only one sub-object is set, the main transform is the sub-object transform.
---Otherwise the main transform is centered at the average origin and
---has no rotation.
---@class UTransformProxy : UObject
---@field public bRotatePerObject boolean @If true, relative rotation of shared transform is applied to objects before relative translation (ie they rotate in place)
---@field public bSetPivotMode boolean @If true, then on SetTransform() the components are not moved, and their local transforms are recalculated
---@field protected SharedTransform FTransform @The main transform
---@field protected InitialSharedTransform FTransform @The main transform
local UTransformProxy = {}

