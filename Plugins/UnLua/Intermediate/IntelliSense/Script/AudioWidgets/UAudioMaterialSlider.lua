---A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.
---Slider is rendered by using material instead of texture.
---* No Children
---@class UAudioMaterialSlider : UWidget
---@field public WidgetStyle FAudioMaterialSliderStyle @The slider's style
---@field public OnValueChanged MulticastDelegate @Called when the value is changed by slider.
---@field private Value number @Default Value of the slider
---@field private Orientation integer @Orientation of the slider
---@field private TuneSpeed number @The tune speed of the slider On Mouse move
---@field private FineTuneSpeed number @The tune speed of the slider when fine-tuning the slider On Mouse move && Left-Shift pressed
---@field private bLocked boolean @Whether the slider is interactive or fixed.
---@field private bMouseUsesStep boolean @Sets new value if mouse position is greater/less than half the step size.
---@field private StepSize number @The amount to adjust the value by, when using steps
local UAudioMaterialSlider = {}

---Sets the current value of the slider. InValue is Clamped between 0.f - 1.f
---@param InValue number
function UAudioMaterialSlider:SetValue(InValue) end

---Set the tune speed of the slider. InValue is Clamped between 0.f - 1.f
---@param InValue number
function UAudioMaterialSlider:SetTuneSpeed(InValue) end

---Sets the amount to adjust the value when using steps
---@param InValue number
function UAudioMaterialSlider:SetStepSize(InValue) end

---Sets the slider to use steps when turning On Mouse move
---@param bInUsesStep boolean
function UAudioMaterialSlider:SetMouseUsesStep(bInUsesStep) end

---Set the slider to be interactive or fixed
---@param bInLocked boolean
function UAudioMaterialSlider:SetLocked(bInLocked) end

---Set the fine-tune speed of the slider. InValue is Clamped between 0.f - 1.f
---@param InValue number
function UAudioMaterialSlider:SetFineTuneSpeed(InValue) end

---Gets the current value of the slider.
---@return number
function UAudioMaterialSlider:GetValue() end

---Get slider tune speed
---@return number
function UAudioMaterialSlider:GetTuneSpeed() end

---Get Step Size
---@return number
function UAudioMaterialSlider:GetStepSize() end

---Get whether the slider uses steps when turning On Mouse move
---@return boolean
function UAudioMaterialSlider:GetMouseUsesStep() end

---Get whether the slider is interactive or fixed.
---@return boolean
function UAudioMaterialSlider:GetIsLocked() end

---Get slider fine-tune speed
---@return number
function UAudioMaterialSlider:GetFineTuneSpeed() end

