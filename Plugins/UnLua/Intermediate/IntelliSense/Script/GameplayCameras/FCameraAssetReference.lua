---A structure holding a reference to a camera asset, along with the interface parameter
---override values for any of its camera rigs.
---@class FCameraAssetReference
---@field private CameraAsset UCameraAsset @The referenced camera asset.
---@field private Parameters FInstancedPropertyBag @The camera asset's parameters.
---@field private ParameterOverrideGuids TArray<FGuid> @The list of camera rig parameters with override values.
---@field private ParameterAnimatedGuids TArray<FGuid>
local FCameraAssetReference = {}
