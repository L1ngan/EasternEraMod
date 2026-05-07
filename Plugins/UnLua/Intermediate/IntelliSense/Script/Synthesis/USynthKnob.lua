---A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.
---* No Children
---@class USynthKnob : UWidget
---@field public Value number @The volume value to display.
---@field public StepSize number @The amount to adjust the value by, when using a controller or keyboard
---@field public MouseSpeed number @The speed of the mouse knob control
---@field public MouseFineTuneSpeed number @The speed of the mouse knob control when fine-tuning the knob
---@field public ShowTooltipInfo boolean @Enable tool tip window to show parameter information while knob turns
---@field public ParameterName string @The name of the pararameter. Will show when knob turns.
---@field public ParameterUnits string @The parameter units (e.g. hz). Will append to synth tooltip info.
---@field public ValueDelegate Delegate @A bindable delegate to allow logic to drive the value of the widget
---@field public WidgetStyle FSynthKnobStyle @The synth knob style
---@field public Locked boolean @Whether the handle is interactive or fixed.
---@field public IsFocusable boolean @Should the slider be focusable?
---@field public OnMouseCaptureBegin MulticastDelegate @Invoked when the mouse is pressed and a capture begins.
---@field public OnMouseCaptureEnd MulticastDelegate @Invoked when the mouse is released and a capture ends.
---@field public OnControllerCaptureBegin MulticastDelegate @Invoked when the controller capture begins.
---@field public OnControllerCaptureEnd MulticastDelegate @Invoked when the controller capture ends.
---@field public OnValueChanged MulticastDelegate @Called when the value is changed by slider or typing.
local USynthKnob = {}

---Sets the current value of the slider.
---@param InValue number
function USynthKnob:SetValue(InValue) end

---Sets the amount to adjust the value by, when using a controller or keyboard
---@param InValue number
function USynthKnob:SetStepSize(InValue) end

---Sets the handle to be interactive or fixed
---@param InValue boolean
function USynthKnob:SetLocked(InValue) end

---Gets the current value of the slider.
---@return number
function USynthKnob:GetValue() end

