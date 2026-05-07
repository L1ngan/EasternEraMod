---The progress bar widget is a simple bar that fills up that can be restyled to fit any number of uses.
---* No Children
---@class UProgressBar : UWidget
---@field public WidgetStyle FProgressBarStyle @The progress bar style
---@field public Percent number @Used to determine the fill position of the progress bar ranging 0..1
---@field public BarFillType integer @Defines the direction in which the progress bar fills
---@field public BarFillStyle integer @Defines the visual style of the progress bar fill - scale or mask
---@field public bIsMarquee boolean
---@field public BorderPadding FVector2D
---@field public PercentDelegate Delegate @A bindable delegate to allow logic to drive the text of the widget
---@field public FillColorAndOpacity FLinearColor @Fill Color and Opacity
---@field public FillColorAndOpacityDelegate Delegate
local UProgressBar = {}

---Sets the current value of the ProgressBar.
---@param InPercent number
function UProgressBar:SetPercent(InPercent) end

---Sets the progress bar to show as a marquee.
---@param InbIsMarquee boolean
function UProgressBar:SetIsMarquee(InbIsMarquee) end

---Sets the fill color of the progress bar.
---@param InColor FLinearColor
function UProgressBar:SetFillColorAndOpacity(InColor) end

