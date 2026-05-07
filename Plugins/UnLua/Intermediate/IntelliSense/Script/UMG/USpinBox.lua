---A numerical entry box that allows for direct entry of the number or allows the user to click and slide the number.
---@class USpinBox : UWidget
---@field public Value number @Value stored in this spin box
---@field public ValueDelegate Delegate @A bindable delegate to allow logic to drive the value of the widget
---@field public WidgetStyle FSpinBoxStyle @The Style
---@field public MinFractionalDigits integer @The minimum required fractional digits - default 1
---@field public MaxFractionalDigits integer @The maximum required fractional digits - default 6
---@field public bAlwaysUsesDeltaSnap boolean @Whether this spin box should use the delta snapping logic for typed values - default false
---@field public bEnableSlider boolean @Whether this spin box should have slider feature enabled
---@field public Delta number @The amount by which to change the spin box value as the slider moves.
---@field public SliderExponent number @The exponent by which to increase the delta as the mouse moves. 1 is constant (never increases the delta).
---@field public Font FSlateFontInfo @Font color and opacity (overrides style)
---@field public Justification integer @The justification the value text should appear as.
---@field public MinDesiredWidth number @The minimum width of the spin box
---@field public KeyboardType integer @If we're on a platform that requires a virtual keyboard, what kind of keyboard should this widget use?
---@field public ClearKeyboardFocusOnCommit boolean @Whether to remove the keyboard focus from the spin box when the value is committed
---@field public SelectAllTextOnCommit boolean @Whether to select the text in the spin box when the value is committed
---@field public ForegroundColor FSlateColor
---@field public OnValueChanged MulticastDelegate @Called when the value is changed interactively by the user
---@field public OnValueCommitted MulticastDelegate @Called when the value is committed. Occurs when the user presses Enter or the text box loses focus.
---@field public OnBeginSliderMovement MulticastDelegate @Called right before the slider begins to move
---@field public OnEndSliderMovement MulticastDelegate @Called right after the slider handle is released by the user
---@field protected bOverride_MinValue boolean @Whether the optional MinValue attribute of the widget is set
---@field protected bOverride_MaxValue boolean @Whether the optional MaxValue attribute of the widget is set
---@field protected bOverride_MinSliderValue boolean @Whether the optional MinSliderValue attribute of the widget is set
---@field protected bOverride_MaxSliderValue boolean @Whether the optional MaxSliderValue attribute of the widget is set
---@field protected MinValue number @The minimum allowable value that can be manually entered into the spin box
---@field protected MaxValue number @The maximum allowable value that can be manually entered into the spin box
---@field protected MinSliderValue number @The minimum allowable value that can be specified using the slider
---@field protected MaxSliderValue number @The maximum allowable value that can be specified using the slider
local USpinBox = {}

---Set the value of the spin box.
---@param NewValue number
function USpinBox:SetValue(NewValue) end

---Set the minimum value that can be manually set in the spin box.
---@param NewValue number
function USpinBox:SetMinValue(NewValue) end

---Set the minimum value that can be specified using the slider.
---@param NewValue number
function USpinBox:SetMinSliderValue(NewValue) end

---Set the Min Fractional Digits for the spin box.
---@param NewValue integer
function USpinBox:SetMinFractionalDigits(NewValue) end

---Set the maximum value that can be manually set in the spin box.
---@param NewValue number
function USpinBox:SetMaxValue(NewValue) end

---Set the maximum value that can be specified using the slider.
---@param NewValue number
function USpinBox:SetMaxSliderValue(NewValue) end

---Set the Max Fractional Digits for the spin box.
---@param NewValue integer
function USpinBox:SetMaxFractionalDigits(NewValue) end

---@param InForegroundColor FSlateColor
function USpinBox:SetForegroundColor(InForegroundColor) end

---Set the delta for the spin box.
---@param NewValue number
function USpinBox:SetDelta(NewValue) end

---Set whether the spin box uses delta snap on type.
---@param bNewValue boolean
function USpinBox:SetAlwaysUsesDeltaSnap(bNewValue) end

---@param InValue number
---@param CommitMethod integer
function USpinBox:OnSpinBoxValueCommittedEvent__DelegateSignature(InValue, CommitMethod) end

---@param InValue number
function USpinBox:OnSpinBoxValueChangedEvent__DelegateSignature(InValue) end

function USpinBox:OnSpinBoxBeginSliderMovement__DelegateSignature() end

---Get the current value of the spin box.
---@return number
function USpinBox:GetValue() end

---Get the current minimum value that can be manually set in the spin box.
---@return number
function USpinBox:GetMinValue() end

---Get the current minimum value that can be specified using the slider.
---@return number
function USpinBox:GetMinSliderValue() end

---Get the current Min Fractional Digits for the spin box.
---@return integer
function USpinBox:GetMinFractionalDigits() end

---Get the current maximum value that can be manually set in the spin box.
---@return number
function USpinBox:GetMaxValue() end

---Get the current maximum value that can be specified using the slider.
---@return number
function USpinBox:GetMaxSliderValue() end

---Get the current Max Fractional Digits for the spin box.
---@return integer
function USpinBox:GetMaxFractionalDigits() end

---Get the current delta for the spin box.
---@return number
function USpinBox:GetDelta() end

---Get whether the spin box uses delta snap on type.
---@return boolean
function USpinBox:GetAlwaysUsesDeltaSnap() end

---Clear the minimum value that can be manually set in the spin box.
function USpinBox:ClearMinValue() end

---Clear the minimum value that can be specified using the slider.
function USpinBox:ClearMinSliderValue() end

---Clear the maximum value that can be manually set in the spin box.
function USpinBox:ClearMaxValue() end

---Clear the maximum value that can be specified using the slider.
function USpinBox:ClearMaxSliderValue() end

