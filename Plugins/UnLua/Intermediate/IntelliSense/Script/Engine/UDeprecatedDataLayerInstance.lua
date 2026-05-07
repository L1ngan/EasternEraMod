---Class used for Runtime Conversion of the Deprecated UDataLayer Class to UDataLayerInstance + UDataLayerAsset.
---This class is not to be inherited. It is solely used by AWorldDatalayers to convert UDataLayers to UDataLayerInstances on Level Boot.
---You will need to run the DataLayerToAsset CommandLet to convert the deprecated datalayers to UDataLayerAssets and UDataLayerInstanceWithAsset.
---@class UDeprecatedDataLayerInstance : UDataLayerInstance
---@field private Label string
---@field private DeprecatedDataLayerFName string
---@field private DataLayerType EDataLayerType
---@field private DebugColor FColor
local UDeprecatedDataLayerInstance = {}

