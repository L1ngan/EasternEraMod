---The checkbox widget allows you to display a toggled state of 'unchecked', 'checked' and
---'indeterminable.  You can use the checkbox for a classic checkbox, or as a toggle button,
---or as radio buttons.
---* Single Child
---* Toggle
---@class UCheckBox : UContentWidget
---@field public CheckedState ECheckBoxState @Whether the check box is currently in a checked state
---@field public CheckedStateDelegate Delegate @A bindable delegate for the IsChecked.
---@field public WidgetStyle FCheckBoxStyle @The checkbox bar style
---@field public HorizontalAlignment integer @How the content of the toggle button should align within the given space
---@field public ClickMethod integer @The type of mouse action required by the user to trigger the buttons 'Click'
---@field public TouchMethod integer @The type of touch action required by the user to trigger the buttons 'Click'
---@field public PressMethod integer @The type of keyboard/gamepad button press action required by the user to trigger the buttons 'Click'
---@field public IsFocusable boolean @Sometimes a button should only be mouse-clickable and never keyboard focusable.
---@field public OnCheckStateChanged MulticastDelegate @Called when the checked state has changed
local UCheckBox = {}

---Sets the touch method.
---@param InTouchMethod integer
function UCheckBox:SetTouchMethod(InTouchMethod) end

---Sets the press method.
---@param InPressMethod integer
function UCheckBox:SetPressMethod(InPressMethod) end

---Sets the checked state.
---@param InIsChecked boolean
function UCheckBox:SetIsChecked(InIsChecked) end

---Sets the click method.
---@param InClickMethod integer
function UCheckBox:SetClickMethod(InClickMethod) end

---Sets the checked state.
---@param InCheckedState ECheckBoxState
function UCheckBox:SetCheckedState(InCheckedState) end

---Returns true if this button is currently pressed
---@return boolean
function UCheckBox:IsPressed() end

---Returns true if the checkbox is currently checked
---@return boolean
function UCheckBox:IsChecked() end

---Returns the full current checked state.
---@return ECheckBoxState
function UCheckBox:GetCheckedState() end

