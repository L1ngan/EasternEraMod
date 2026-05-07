---An audio slider widget.
---@class UAudioSliderBase : UWidget
---@field public Value number @The normalized linear (0 - 1) slider value.
---@field public UnitsText string @The text label units
---@field public TextLabelBackgroundColor FLinearColor @The color to draw the text label background.
---@field public TextLabelBackgroundColorDelegate Delegate @A bindable delegate for the TextLabelBackgroundColor.
---@field public ShowLabelOnlyOnHover boolean @If true, show text label only on hover; if false always show label.
---@field public ShowUnitsText boolean @Whether to show the units part of the text label.
---@field public IsUnitsTextReadOnly boolean @Whether to set the units part of the text label read only.
---@field public IsValueTextReadOnly boolean @Whether to set the value part of the text label read only.
---@field public ValueDelegate Delegate @A bindable delegate to allow logic to drive the value of the widget
---@field public SliderBackgroundColor FLinearColor @The color to draw the slider background.
---@field public SliderBackgroundColorDelegate Delegate @A bindable delegate for the SliderBackgroundColor.
---@field public SliderBarColor FLinearColor @The color to draw the slider bar.
---@field public SliderBarColorDelegate Delegate @A bindable delegate for the SliderBarColor.
---@field public SliderThumbColor FLinearColor @The color to draw the slider thumb.
---@field public SliderThumbColorDelegate Delegate @A bindable delegate for the SliderThumbColor.
---@field public WidgetBackgroundColor FLinearColor @The color to draw the widget background.
---@field public WidgetBackgroundColorDelegate Delegate @A bindable delegate for the WidgetBackgroundColor.
---@field public Orientation integer @The slider's orientation.
---@field public OnValueChanged MulticastDelegate @Called when the value is changed by slider or typing.
local UAudioSliderBase = {}

---Sets the widget background color
---@param InValue FLinearColor
function UAudioSliderBase:SetWidgetBackgroundColor(InValue) end

---Sets whether the value text is read only
---@param bIsReadOnly boolean
function UAudioSliderBase:SetValueTextReadOnly(bIsReadOnly) end

---Sets whether the units text is read only
---@param bIsReadOnly boolean
function UAudioSliderBase:SetUnitsTextReadOnly(bIsReadOnly) end

---Sets the units text
---@param Units string
function UAudioSliderBase:SetUnitsText(Units) end

---Sets the label background color
---@param InColor FSlateColor
function UAudioSliderBase:SetTextLabelBackgroundColor(InColor) end

---Sets the slider thumb color
---@param InValue FLinearColor
function UAudioSliderBase:SetSliderThumbColor(InValue) end

---Sets the slider bar color
---@param InValue FLinearColor
function UAudioSliderBase:SetSliderBarColor(InValue) end

---Sets the slider background color
---@param InValue FLinearColor
function UAudioSliderBase:SetSliderBackgroundColor(InValue) end

---Sets whether to show the units text
---@param bShowUnitsText boolean
function UAudioSliderBase:SetShowUnitsText(bShowUnitsText) end

---If true, show text label only on hover; if false always show label.
---@param bShowLabelOnlyOnHover boolean
function UAudioSliderBase:SetShowLabelOnlyOnHover(bShowLabelOnlyOnHover) end

---Get normalized linear (0 - 1) slider value from output based on internal lin to output mapping.
---@param OutputValue number
---@return number
function UAudioSliderBase:GetSliderValue(OutputValue) end

---Get output value from normalized linear (0 - 1) based on internal lin to output mapping.
---@param InSliderValue number
---@return number
function UAudioSliderBase:GetOutputValue(InSliderValue) end

---Get normalized linear (0 - 1) value from output based on internal lin to output mapping.
---@param OutputValue number
---@return number
function UAudioSliderBase:GetLinValue(OutputValue) end

