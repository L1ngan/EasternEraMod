---A background blur is a container widget that can contain one child widget, providing an opportunity
---to surround it with adjustable padding and apply a post-process Gaussian blur to all content beneath the widget.
---* Single Child
---* Blur Effect
---@class UBackgroundBlur : UContentWidget
---@field public Padding FMargin @The padding area between the slot and the content it contains.
---@field public HorizontalAlignment integer @The alignment of the content horizontally.
---@field public VerticalAlignment integer @The alignment of the content vertically.
---@field public bApplyAlphaToBlur boolean @True to modulate the strength of the blur based on the widget alpha.
---@field public BlurStrength number @How blurry the background is.  Larger numbers mean more blurry but will result in larger runtime cost on the GPU.
---@field public bOverrideAutoRadiusCalculation boolean @When OverrideAutoRadiusCalculation is set to true, BlurRadius is used for the radius of the blur. When false, it's automatically calculated using the BlurStength value.
---@field public BlurRadius integer @This is the number of pixels which will be weighted in each direction from any given pixel when computing the blur A larger value is more costly but allows for stronger blurs.
---@field public CornerRadius FVector4 @Radius in Slate Units applied to the blur widget at each corner. X = Top Left, Y = Top Right, Z = Bottom Right, W = Bottom Left
---@field public LowQualityFallbackBrush FSlateBrush @An image to draw instead of applying a blur when low quality override mode is enabled. You can enable low quality mode for background blurs by setting the cvar Slate.ForceBackgroundBlurLowQualityOverride to 1. This is usually done in the project's scalability settings
local UBackgroundBlur = {}

---@param InVerticalAlignment integer
function UBackgroundBlur:SetVerticalAlignment(InVerticalAlignment) end

---@param InPadding FMargin
function UBackgroundBlur:SetPadding(InPadding) end

---@param InBrush FSlateBrush
function UBackgroundBlur:SetLowQualityFallbackBrush(InBrush) end

---@param InHorizontalAlignment integer
function UBackgroundBlur:SetHorizontalAlignment(InHorizontalAlignment) end

---@param InCornerRadius FVector4
function UBackgroundBlur:SetCornerRadius(InCornerRadius) end

---@param InStrength number
function UBackgroundBlur:SetBlurStrength(InStrength) end

---@param InBlurRadius integer
function UBackgroundBlur:SetBlurRadius(InBlurRadius) end

---@param bInApplyAlphaToBlur boolean
function UBackgroundBlur:SetApplyAlphaToBlur(bInApplyAlphaToBlur) end

