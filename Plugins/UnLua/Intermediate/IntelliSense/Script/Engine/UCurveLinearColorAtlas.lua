---Manages gradient LUT textures for registered actors and assigns them to the corresponding materials on the actor
---@class UCurveLinearColorAtlas : UTexture2D
---@field public bIsDirty boolean
---@field public TextureSize integer
---@field public bSquareResolution boolean @Set texture height equal to texture width.
---@field public TextureHeight integer
---@field public GradientCurves TArray<UCurveLinearColor> @Height of the lookup textures
---@field public bDisableAllAdjustments boolean @Disable all color adjustments to preserve negative values in curves. Color adjustments clamp to 0 when enabled.
---@field public bHasCachedColorAdjustments boolean
---@field public CachedColorAdjustments FCurveAtlasColorAdjustments
local UCurveLinearColorAtlas = {}

---@param InCurve UCurveLinearColor
---@param Position number @[out] 
---@return boolean
function UCurveLinearColorAtlas:GetCurvePosition(InCurve, Position) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCurveLinearColorAtlas:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UCurveLinearColorAtlas:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCurveLinearColorAtlas:AddAssetUserDataOfClass(InUserDataClass) end

