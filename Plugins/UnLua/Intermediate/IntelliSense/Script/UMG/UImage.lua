---The image widget allows you to display a Slate Brush, or texture or material in the UI.
---* No Children
---@class UImage : UWidget
---@field public Brush FSlateBrush @Image to draw
---@field public BrushDelegate Delegate @A bindable delegate for the Image.
---@field public ColorAndOpacity FLinearColor @Color and opacity
---@field public ColorAndOpacityDelegate Delegate @A bindable delegate for the ColorAndOpacity.
---@field public bFlipForRightToLeftFlowDirection boolean @Flips the image if the localization's flow direction is RightToLeft
---@field public OnMouseButtonDownEvent Delegate
local UImage = {}

---@param InOpacity number
function UImage:SetOpacity(InOpacity) end

---@param DesiredSize FVector2D
function UImage:SetDesiredSizeOverride(DesiredSize) end

---@param InColorAndOpacity FLinearColor
function UImage:SetColorAndOpacity(InColorAndOpacity) end

---@param TintColor FSlateColor
function UImage:SetBrushTintColor(TintColor) end

---@param ResourceObject UObject
function UImage:SetBrushResourceObject(ResourceObject) end

---Sets the Brush to the specified Dynamic Texture.
---  @@param Texture Dynamic Texture to use to set on Brush.
---      @@param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size.
---@param Texture UTexture2DDynamic
---@param bMatchSize boolean @[opt] 
function UImage:SetBrushFromTextureDynamic(Texture, bMatchSize) end

---Sets the Brush to the specified Texture.
---  @@param Texture Texture to use to set on Brush.
---      @@param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size.
---@param Texture UTexture2D
---@param bMatchSize boolean @[opt] 
function UImage:SetBrushFromTexture(Texture, bMatchSize) end

---Sets the Brush to the specified Soft Texture.
---  @@param SoftTexture Soft Texture to use to set on Brush.
---      @@param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size.
---@param SoftTexture TSoftObjectPtr_UTexture2D_
---@param bMatchSize boolean @[opt] 
function UImage:SetBrushFromSoftTexture(SoftTexture, bMatchSize) end

---@param SoftMaterial TSoftObjectPtr_UMaterialInterface_
function UImage:SetBrushFromSoftMaterial(SoftMaterial) end

---@param Material UMaterialInterface
function UImage:SetBrushFromMaterial(Material) end

---Sets the Brush to the specified Atlas Region.
---  @@param AtlasRegion Region of the Atlas to use to set on Brush.
---      @@param bMatchSize If true, image will change its size to atlas region size. If false, atlas region will be stretched to image size.
---@param AtlasRegion TScriptInterface_USlateTextureAtlasInterface_
---@param bMatchSize boolean @[opt] 
function UImage:SetBrushFromAtlasInterface(AtlasRegion, bMatchSize) end

---@param Asset USlateBrushAsset
function UImage:SetBrushFromAsset(Asset) end

---@param InBrush FSlateBrush
function UImage:SetBrush(InBrush) end

---@return UMaterialInstanceDynamic
function UImage:GetDynamicMaterial() end

