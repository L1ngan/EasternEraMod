---Allows a user to enter multiple lines of text
---@class UMultiLineEditableTextBox : UTextLayoutWidget
---@field public Text string @The text content for this editable text box widget
---@field public HintText string @Hint text that appears when there is no text in the text box
---@field public HintTextDelegate Delegate @A bindable delegate to allow logic to drive the hint text of the widget
---@field public WidgetStyle FEditableTextBoxStyle @The style
---@field public bIsReadOnly boolean @Sets the Text as Readonly to prevent it from being modified interactively by the user
---@field public AllowContextMenu boolean @Whether the context menu can be opened
---@field public VirtualKeyboardOptions FVirtualKeyboardOptions @Additional options to be used by the virtual keyboard summoned from this widget
---@field public VirtualKeyboardDismissAction EVirtualKeyboardDismissAction @What action should be taken when the virtual keyboard is dismissed?
---@field public OnTextChanged MulticastDelegate @Called whenever the text is changed programmatically or interactively by the user
---@field public OnTextCommitted MulticastDelegate @Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus.
---@field private bIsFontDeprecationDone boolean
local UMultiLineEditableTextBox = {}

---@param InTextStyle FTextBlockStyle
function UMultiLineEditableTextBox:SetTextStyle(InTextStyle) end

---Directly sets the widget text.
---Warning: This will wipe any binding created for the Text property!
---@param InText string
function UMultiLineEditableTextBox:SetText(InText) end

---Sets the Text as Readonly to prevent it from being modified interactively by the user
---@param bReadOnly boolean
function UMultiLineEditableTextBox:SetIsReadOnly(bReadOnly) end

---Sets the Hint text that appears when there is no text in the text box
---@param InHintText string
function UMultiLineEditableTextBox:SetHintText(InHintText) end

---@param color FLinearColor
function UMultiLineEditableTextBox:SetForegroundColor(color) end

---@param InError string
function UMultiLineEditableTextBox:SetError(InError) end

---@param Text string
---@param CommitMethod integer
function UMultiLineEditableTextBox:OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(Text, CommitMethod) end

---@param Text string
function UMultiLineEditableTextBox:OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(Text) end

---Gets the widget text
---@return string
function UMultiLineEditableTextBox:GetText() end

---Returns the Hint text that appears when there is no text in the text box
---@return string
function UMultiLineEditableTextBox:GetHintText() end

