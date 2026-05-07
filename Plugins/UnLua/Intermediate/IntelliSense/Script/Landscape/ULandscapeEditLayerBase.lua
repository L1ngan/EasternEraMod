---Base class for all landscape edit layers. By implementing the various virtual functions, we are able to customize the behavior of the edit layer
--- wrt the landscape tools in a generic way (e.g. does it support sculpting tools? painting tools? can it be collapsed?, etc.)
---@class ULandscapeEditLayerBase : UObject
---@field protected Guid FGuid
---@field protected LayerName string
---@field protected bVisible boolean
---@field protected bLocked boolean
---@field protected HeightmapAlpha number
---@field protected WeightmapAlpha number
---@field protected OwningLandscape TWeakObjectPtr<ALandscape> @TODO: This might be removed once more things are moved from FLandscapeLayer to ULandscapeLayer
---@field private WeightmapLayerAllocationBlend TMap<ULandscapeLayerInfoObject, boolean>
local ULandscapeEditLayerBase = {}

