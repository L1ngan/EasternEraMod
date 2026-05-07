---A widget for selecting a single key or a single key with a modifier.
---@class UInputKeySelector : UWidget
---@field public WidgetStyle FButtonStyle @The button style used at runtime
---@field public TextStyle FTextBlockStyle @The button style used at runtime
---@field public SelectedKey FInputChord @The currently selected key chord.
---@field public Margin FMargin @The amount of blank space around the text used to display the currently selected key.
---@field public KeySelectionText string @Sets the text which is displayed while selecting keys.
---@field public NoKeySpecifiedText string @Sets the text to display when no key text is available or not selecting a key.
---@field public bAllowModifierKeys boolean @When true modifier keys such as control and alt are allowed in the input chord representing the selected key, if false modifier keys are ignored.
---@field public bAllowGamepadKeys boolean @When true gamepad keys are allowed in the input chord representing the selected key, otherwise they are ignored.
---@field public EscapeKeys TArray<FKey> @When true gamepad keys are allowed in the input chord representing the selected key, otherwise they are ignored.
---@field public OnKeySelected MulticastDelegate @Called whenever a new key is selected by the user.
---@field public OnIsSelectingKeyChanged MulticastDelegate @Called whenever the key selection mode starts or stops.
local UInputKeySelector = {}

---Sets the visibility of the text block.
---@param InVisibility ESlateVisibility
function UInputKeySelector:SetTextBlockVisibility(InVisibility) end

---Sets the currently selected key.
---@param InSelectedKey FInputChord
function UInputKeySelector:SetSelectedKey(InSelectedKey) end

---Sets the text to display when no key text is available or not selecting a key.
---@param InNoKeySpecifiedText string
function UInputKeySelector:SetNoKeySpecifiedText(InNoKeySpecifiedText) end

---Sets the text which is displayed while selecting keys.
---@param InKeySelectionText string
function UInputKeySelector:SetKeySelectionText(InKeySelectionText) end

---Sets escape keys.
---@param InKeys TArray_FKey_
function UInputKeySelector:SetEscapeKeys(InKeys) end

---Sets whether or not modifier keys are allowed in the selected key.
---@param bInAllowModifierKeys boolean
function UInputKeySelector:SetAllowModifierKeys(bInAllowModifierKeys) end

---Sets whether or not gamepad keys are allowed in the selected key.
---@param bInAllowGamepadKeys boolean
function UInputKeySelector:SetAllowGamepadKeys(bInAllowGamepadKeys) end

---@param SelectedKey FInputChord
function UInputKeySelector:OnKeySelected__DelegateSignature(SelectedKey) end

function UInputKeySelector:OnIsSelectingKeyChanged__DelegateSignature() end

---Returns true if the widget is currently selecting a key, otherwise returns false.
---@return boolean
function UInputKeySelector:GetIsSelectingKey() end

