---A border is a container widget that can contain one child widget, providing an opportunity
---to surround it with a background image and adjustable padding.
---* Single Child
---* Image
---@class UBorder : UContentWidget
---@field public HorizontalAlignment integer @The alignment of the content horizontally.
---@field public VerticalAlignment integer @The alignment of the content vertically.
---@field public bShowEffectWhenDisabled boolean @Whether or not to show the disabled effect when this border is disabled
---@field public ContentColorAndOpacity FLinearColor @Color and opacity multiplier of content in the border
---@field public ContentColorAndOpacityDelegate Delegate @A bindable delegate for the ContentColorAndOpacity.
---@field public Padding FMargin @The padding area between the slot and the content it contains.
---@field public Background FSlateBrush @Brush to drag as the background
---@field public BackgroundDelegate Delegate @A bindable delegate for the Brush.
---@field public BrushColor FLinearColor @Color and opacity of the actual border image
---@field public BrushColorDelegate Delegate @A bindable delegate for the BrushColor.
---@field public DesiredSizeScale FVector2D @Scales the computed desired size of this border and its contents. Useful for making things that slide open without having to hard-code their size. Note: if the parent widget is set up to ignore this widget's desired size, then changing this value will have no effect.
---@field public bFlipForRightToLeftFlowDirection boolean @Flips the background image if the localization's flow direction is RightToLeft
---@field public OnMouseButtonDownEvent Delegate
---@field public OnMouseButtonUpEvent Delegate
---@field public OnMouseMoveEvent Delegate
---@field public OnMouseDoubleClickEvent Delegate
local UBorder = {}

---@param InVerticalAlignment integer
function UBorder:SetVerticalAlignment(InVerticalAlignment) end

---@param bInShowEffectWhenDisabled boolean
function UBorder:SetShowEffectWhenDisabled(bInShowEffectWhenDisabled) end

---@param InPadding FMargin
function UBorder:SetPadding(InPadding) end

---@param InHorizontalAlignment integer
function UBorder:SetHorizontalAlignment(InHorizontalAlignment) end

---Sets the DesiredSizeScale of this border.
---@param InScale FVector2D
function UBorder:SetDesiredSizeScale(InScale) end

---@param InContentColorAndOpacity FLinearColor
function UBorder:SetContentColorAndOpacity(InContentColorAndOpacity) end

---@param Texture UTexture2D
function UBorder:SetBrushFromTexture(Texture) end

---@param Material UMaterialInterface
function UBorder:SetBrushFromMaterial(Material) end

---@param Asset USlateBrushAsset
function UBorder:SetBrushFromAsset(Asset) end

---@param InBrushColor FLinearColor
function UBorder:SetBrushColor(InBrushColor) end

---@param InBrush FSlateBrush
function UBorder:SetBrush(InBrush) end

---@return UMaterialInstanceDynamic
function UBorder:GetDynamicMaterial() end

