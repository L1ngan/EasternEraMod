---An audio radial slider widget.
---@class UAudioRadialSlider : UWidget
---@field public Value number @The normalized linear (0 - 1) slider value position.
---@field public ValueDelegate Delegate @A bindable delegate to allow logic to drive the value of the widget
---@field public WidgetLayout integer @The layout of the widget (position of text label).
---@field public CenterBackgroundColor FLinearColor @The color to draw the widget background.
---@field public SliderProgressColor FLinearColor @The color to draw the slider progress bar in.
---@field public SliderBarColor FLinearColor @The color to draw the slider bar in.
---@field public HandStartEndRatio FVector2D @Start and end of the hand as a ratio to the slider radius (so 0.0 to 1.0 is from the slider center to the handle).
---@field public UnitsText string @The text label units
---@field public TextLabelBackgroundColor FLinearColor @The color to draw the text label background.
---@field public ShowLabelOnlyOnHover boolean @If true, show text label only on hover; if false always show label.
---@field public ShowUnitsText boolean @Whether to show the units part of the text label.
---@field public IsUnitsTextReadOnly boolean @Whether to set the units part of the text label read only.
---@field public IsValueTextReadOnly boolean @Whether to set the value part of the text label read only.
---@field public SliderThickness number @The slider thickness.
---@field public OutputRange FVector2D @Output range
---@field public OnValueChanged MulticastDelegate @Called when the value is changed by slider or typing.
local UAudioRadialSlider = {}

---Sets the widget layout
---@param InLayout integer
function UAudioRadialSlider:SetWidgetLayout(InLayout) end

---Sets whether the value text is read only
---@param bIsReadOnly boolean
function UAudioRadialSlider:SetValueTextReadOnly(bIsReadOnly) end

---Sets whether the units text is read only
---@param bIsReadOnly boolean
function UAudioRadialSlider:SetUnitsTextReadOnly(bIsReadOnly) end

---Sets the units text
---@param Units string
function UAudioRadialSlider:SetUnitsText(Units) end

---Sets the label background color
---@param InColor FSlateColor
function UAudioRadialSlider:SetTextLabelBackgroundColor(InColor) end

---Sets the slider thickness
---@param InThickness number
function UAudioRadialSlider:SetSliderThickness(InThickness) end

---Sets the slider progress color
---@param InValue FLinearColor
function UAudioRadialSlider:SetSliderProgressColor(InValue) end

---Sets the slider bar color
---@param InValue FLinearColor
function UAudioRadialSlider:SetSliderBarColor(InValue) end

---Sets whether to show the units text
---@param bShowUnitsText boolean
function UAudioRadialSlider:SetShowUnitsText(bShowUnitsText) end

---If true, show text label only on hover; if false always show label.
---@param bShowLabelOnlyOnHover boolean
function UAudioRadialSlider:SetShowLabelOnlyOnHover(bShowLabelOnlyOnHover) end

---Sets the output range
---@param InOutputRange FVector2D
function UAudioRadialSlider:SetOutputRange(InOutputRange) end

---Sets the start and end of the hand as a ratio to the slider radius (so 0.0 to 1.0 is from the slider center to the handle).
---@param InHandStartEndRatio FVector2D
function UAudioRadialSlider:SetHandStartEndRatio(InHandStartEndRatio) end

---Sets the label background color
---@param InValue FLinearColor
function UAudioRadialSlider:SetCenterBackgroundColor(InValue) end

---Get normalized linear (0 - 1) slider value from output based on internal lin to output mapping.
---@param OutputValue number
---@return number
function UAudioRadialSlider:GetSliderValue(OutputValue) end

---Get output value from normalized linear (0 - 1) based on internal lin to output mapping.
---@param InSliderValue number
---@return number
function UAudioRadialSlider:GetOutputValue(InSliderValue) end

