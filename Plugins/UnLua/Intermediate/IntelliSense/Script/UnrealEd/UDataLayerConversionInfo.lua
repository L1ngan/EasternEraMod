---@class UDataLayerConversionInfo : UObject
---@field public DataLayerToConvert UDeprecatedDataLayerInstance
---@field public DataLayerAsset UDataLayerAsset
---@field public DataLayerInstance UDataLayerInstanceWithAsset
---@field private PreviousConversionsInfo TArray<TWeakObjectPtr<UDataLayerConversionInfo>>
---@field private CurrentConvertingInfo TWeakObjectPtr<UDataLayerConversionInfo>
local UDataLayerConversionInfo = {}

