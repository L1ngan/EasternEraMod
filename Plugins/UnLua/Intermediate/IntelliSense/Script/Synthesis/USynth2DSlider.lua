---A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.
---* No Children
---@class USynth2DSlider : UWidget
---@field public ValueX number
---@field public ValueY number
---@field public ValueXDelegate Delegate @A bindable delegate to allow logic to drive the value of the widget
---@field public ValueYDelegate Delegate @A bindable delegate to allow logic to drive the value of the widget
---@field public WidgetStyle FSynth2DSliderStyle @The progress bar style
---@field public SliderHandleColor FLinearColor @The color to draw the slider handle in.
---@field public IndentHandle boolean @Whether the slidable area should be indented to fit the handle.
---@field public Locked boolean @Whether the handle is interactive or fixed.
---@field public StepSize number @The amount to adjust the value by, when using a controller or keyboard
---@field public IsFocusable boolean @Should the slider be focusable?
---@field public OnMouseCaptureBegin MulticastDelegate @Invoked when the mouse is pressed and a capture begins.
---@field public OnMouseCaptureEnd MulticastDelegate @Invoked when the mouse is released and a capture ends.
---@field public OnControllerCaptureBegin MulticastDelegate @Invoked when the controller capture begins.
---@field public OnControllerCaptureEnd MulticastDelegate @Invoked when the controller capture ends.
---@field public OnValueChangedX MulticastDelegate @Called when the value is changed by slider or typing.
---@field public OnValueChangedY MulticastDelegate @Called when the value is changed by slider or typing.
local USynth2DSlider = {}

---Sets the current value of the slider.
---@param InValue FVector2D
function USynth2DSlider:SetValue(InValue) end

---Sets the amount to adjust the value by, when using a controller or keyboard
---@param InValue number
function USynth2DSlider:SetStepSize(InValue) end

---Sets the color of the handle bar
---@param InValue FLinearColor
function USynth2DSlider:SetSliderHandleColor(InValue) end

---Sets the handle to be interactive or fixed
---@param InValue boolean
function USynth2DSlider:SetLocked(InValue) end

---Sets if the slidable area should be indented to fit the handle
---@param InValue boolean
function USynth2DSlider:SetIndentHandle(InValue) end

---Gets the current value of the slider.
---@return FVector2D
function USynth2DSlider:GetValue() end

