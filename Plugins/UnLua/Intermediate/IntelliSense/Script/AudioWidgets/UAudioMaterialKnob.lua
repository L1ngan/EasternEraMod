---A simple widget that shows a turning Knob that allows you to control the value between 0..1.
---Knob is rendered by using material instead of texture.
---* No Children
---@class UAudioMaterialKnob : UWidget
---@field public WidgetStyle FAudioMaterialKnobStyle @The button's style
---@field public OnKnobValueChanged MulticastDelegate @Called when the value is changed by knob.
---@field private Value number @Default Value of the Knob
---@field private TuneSpeed number @The tune speed of the knob
---@field private FineTuneSpeed number @The tune speed when fine-tuning the knob
---@field private bLocked boolean @Whether the knob is interactive or fixed.
---@field private bMouseUsesStep boolean @Sets new value if mouse position is greater/less than half the step size.
---@field private StepSize number @The amount to adjust the value by, when using steps
local UAudioMaterialKnob = {}

---Set the current value of the knob. InValue is Clamped between 0.f - 1.f
---@param InValue number
function UAudioMaterialKnob:SetValue(InValue) end

---Set the knobs tune speed. InValue is Clamped between 0.f - 1.f
---@param InValue number
function UAudioMaterialKnob:SetTuneSpeed(InValue) end

---Set the amount to adjust the value when using steps
---@param InValue number
function UAudioMaterialKnob:SetStepSize(InValue) end

---Set the knob to use steps when turning On Mouse move
---@param InUsesStep boolean
function UAudioMaterialKnob:SetMouseUsesStep(InUsesStep) end

---Set the knob to be interactive or fixed
---@param InLocked boolean
function UAudioMaterialKnob:SetLocked(InLocked) end

---Set the knobs fine-tune speed. InValue is Clamped between 0.f - 1.f
---@param InValue number
function UAudioMaterialKnob:SetFineTuneSpeed(InValue) end

---Get the current value of the knob.
---@return number
function UAudioMaterialKnob:GetValue() end

---Get the Knobs tune speed
---@return number
function UAudioMaterialKnob:GetTuneSpeed() end

---Get Step Size
---@return number
function UAudioMaterialKnob:GetStepSize() end

---Get whether the knob uses steps when tuning On Mouse move
---@return boolean
function UAudioMaterialKnob:GetMouseUsesStep() end

---Get whether the knob is interactive or fixed.
---@return boolean
function UAudioMaterialKnob:GetIsLocked() end

---Get the Knobs fine-tune speed
---@return number
function UAudioMaterialKnob:GetFineTuneSpeed() end

