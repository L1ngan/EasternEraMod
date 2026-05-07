---A simple widget that shows a sliding bar with a handle that allows you to control the value in a user define range (between 0..1 by default).
---* No Children
---@class USlider : UWidget
---@field public Value number @The volume value to display.
---@field public ValueDelegate Delegate @A bindable delegate to allow logic to drive the value of the widget
---@field public MinValue number @The minimum value the slider can be set to.
---@field public MaxValue number @The maximum value the slider can be set to.
---@field public WidgetStyle FSliderStyle @The progress bar style
---@field public Orientation integer @The slider's orientation.
---@field public SliderBarColor FLinearColor @The color to draw the slider bar in.
---@field public SliderHandleColor FLinearColor @The color to draw the slider handle in.
---@field public IndentHandle boolean @Whether the slidable area should be indented to fit the handle.
---@field public Locked boolean @Whether the handle is interactive or fixed.
---@field public MouseUsesStep boolean @Sets new value if mouse position is greater/less than half the step size.
---@field public RequiresControllerLock boolean @Sets whether we have to lock input to change the slider value.
---@field public StepSize number @The amount to adjust the value by, when using a controller or keyboard
---@field public IsFocusable boolean @Should the slider be focusable?
---@field public bPreventThrottling boolean @If refresh requests for the viewport should happen for all value changes *
---@field public OnMouseCaptureBegin MulticastDelegate @Invoked when the mouse is pressed and a capture begins.
---@field public OnMouseCaptureEnd MulticastDelegate @Invoked when the mouse is released and a capture ends.
---@field public OnControllerCaptureBegin MulticastDelegate @Invoked when the controller capture begins.
---@field public OnControllerCaptureEnd MulticastDelegate @Invoked when the controller capture ends.
---@field public OnValueChanged MulticastDelegate @Called when the value is changed by slider or typing.
local USlider = {}

---Sets the current value of the slider.
---@param InValue number
function USlider:SetValue(InValue) end

---Sets the amount to adjust the value by, when using a controller or keyboard.
---@param InValue number
function USlider:SetStepSize(InValue) end

---Sets the color of the handle bar
---@param InValue FLinearColor
function USlider:SetSliderHandleColor(InValue) end

---Sets the color of the slider bar.
---@param InValue FLinearColor
function USlider:SetSliderBarColor(InValue) end

---Sets the minimum value of the slider.
---@param InValue number
function USlider:SetMinValue(InValue) end

---Sets the maximum value of the slider.
---@param InValue number
function USlider:SetMaxValue(InValue) end

---Sets the handle to be interactive or fixed.
---@param InValue boolean
function USlider:SetLocked(InValue) end

---Sets if the slidable area should be indented to fit the handle.
---@param InValue boolean
function USlider:SetIndentHandle(InValue) end

---Gets the current value of the slider.
---@return number
function USlider:GetValue() end

---Get the current value scaled from 0 to 1
---@return number
function USlider:GetNormalizedValue() end

