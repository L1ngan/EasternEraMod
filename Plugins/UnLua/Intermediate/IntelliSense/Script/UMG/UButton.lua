---The button is a click-able primitive widget to enable basic interaction, you
---can place any other widget inside a button to make a more complex and
---interesting click-able element in your UI.
---* Single Child
---* Clickable
---@class UButton : UContentWidget
---@field public WidgetStyle FButtonStyle @The button style used at runtime
---@field public ColorAndOpacity FLinearColor @The color multiplier for the button content
---@field public BackgroundColor FLinearColor @The color multiplier for the button background
---@field public ClickMethod integer @The type of mouse action required by the user to trigger the buttons 'Click'
---@field public TouchMethod integer @The type of touch action required by the user to trigger the buttons 'Click'
---@field public PressMethod integer @The type of keyboard/gamepad button press action required by the user to trigger the buttons 'Click'
---@field public IsFocusable boolean @Sometimes a button should only be mouse-clickable and never keyboard focusable.
---@field public OnClicked MulticastDelegate @Called when the button is clicked
---@field public OnPressed MulticastDelegate @Called when the button is pressed
---@field public OnReleased MulticastDelegate @Called when the button is released
---@field public OnHovered MulticastDelegate
---@field public OnUnhovered MulticastDelegate
local UButton = {}

---@param InTouchMethod integer
function UButton:SetTouchMethod(InTouchMethod) end

---Sets the color multiplier for the button background
---@param InStyle FButtonStyle
function UButton:SetStyle(InStyle) end

---@param InPressMethod integer
function UButton:SetPressMethod(InPressMethod) end

---Sets the color multiplier for the button content
---@param InColorAndOpacity FLinearColor
function UButton:SetColorAndOpacity(InColorAndOpacity) end

---@param InClickMethod integer
function UButton:SetClickMethod(InClickMethod) end

---Sets the color multiplier for the button background
---@param InBackgroundColor FLinearColor
function UButton:SetBackgroundColor(InBackgroundColor) end

---Returns true if the user is actively pressing the button.  Do not use this for detecting 'Clicks', use the OnClicked event instead.
---@return boolean
function UButton:IsPressed() end

