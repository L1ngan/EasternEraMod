---This widget can be given an asset and it will render its thumbnail. Editor-only.
---@class UAssetThumbnailWidget : UWidget
---@field private AssetToShow FAssetData @The asset of which to show the thumbnail.
---@field private Resolution FIntPoint @Desired size of the thumbnail
---@field private ThumbnailSettings FAssetThumbnailWidgetSettings @Behaviour and style of the widget
local UAssetThumbnailWidget = {}

---@param InThumbnailSettings FAssetThumbnailWidgetSettings
function UAssetThumbnailWidget:SetThumbnailSettings(InThumbnailSettings) end

---Sets the resolution for the rendered thumbnail.
---@param InResolution FIntPoint
function UAssetThumbnailWidget:SetResolution(InResolution) end

---@param Object UObject
function UAssetThumbnailWidget:SetAssetByObject(Object) end

---@param AssetData FAssetData
function UAssetThumbnailWidget:SetAsset(AssetData) end

---Gets the resolution of the rendered thumbnail.
---@return FIntPoint
function UAssetThumbnailWidget:GetResolution() end

