---A simple widget that shows a button
---Button is rendered by using material instead of texture.
---* No Children
---@class UAudioMaterialButton : UWidget
---@field public WidgetStyle FAudioMaterialButtonStyle @The button's style
---@field public OnButtonPressedChangedEvent MulticastDelegate @Called when the value is changed by button.
---@field private bIsPressed boolean @Default Value of the button
local UAudioMaterialButton = {}

---Sets the current value of the slider. InValue is Clamped between 0.f - 1.f
---@param InPressed boolean
function UAudioMaterialButton:SetIsPressed(InPressed) end

---Gets the current value of the slider.
---@return boolean
function UAudioMaterialButton:GetIsPressed() end

