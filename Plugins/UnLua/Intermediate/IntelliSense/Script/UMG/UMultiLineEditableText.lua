---Editable text box widget
---@class UMultiLineEditableText : UTextLayoutWidget
---@field public Text string @The text content for this editable text box widget
---@field public HintText string @Hint text that appears when there is no text in the text box
---@field public HintTextDelegate Delegate @A bindable delegate to allow logic to drive the hint text of the widget
---@field public WidgetStyle FTextBlockStyle @The style
---@field public bIsReadOnly boolean @Sets the Text as Readonly to prevent it from being modified interactively by the user
---@field public SelectAllTextWhenFocused boolean @Whether to select all text when the user clicks to give focus on the widget
---@field public ClearTextSelectionOnFocusLoss boolean @Whether to clear text selection when focus is lost
---@field public RevertTextOnEscape boolean @Whether to allow the user to back out of changes when they press the escape key
---@field public ClearKeyboardFocusOnCommit boolean @Whether to clear keyboard focus when pressing enter to commit changes
---@field public AllowContextMenu boolean @Whether the context menu can be opened
---@field public VirtualKeyboardOptions FVirtualKeyboardOptions @Additional options for the virtual keyboard
---@field public VirtualKeyboardDismissAction EVirtualKeyboardDismissAction @What action should be taken when the virtual keyboard is dismissed?
---@field public OnTextChanged MulticastDelegate @Called whenever the text is changed programmatically or interactively by the user
---@field public OnTextCommitted MulticastDelegate @Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus.
local UMultiLineEditableText = {}

---@param InWidgetStyle FTextBlockStyle
function UMultiLineEditableText:SetWidgetStyle(InWidgetStyle) end

---Directly sets the widget text.
---@param InText string
function UMultiLineEditableText:SetText(InText) end

---Sets the Text as Readonly to prevent it from being modified interactively by the user
---@param bReadOnly boolean
function UMultiLineEditableText:SetIsReadOnly(bReadOnly) end

---Sets the Hint text that appears when there is no text in the text box
---@param InHintText string
function UMultiLineEditableText:SetHintText(InHintText) end

---@param InMaterial UMaterialInterface
function UMultiLineEditableText:SetFontOutlineMaterial(InMaterial) end

---@param InMaterial UMaterialInterface
function UMultiLineEditableText:SetFontMaterial(InMaterial) end

---@param InFontInfo FSlateFontInfo
function UMultiLineEditableText:SetFont(InFontInfo) end

---@param Text string
---@param CommitMethod integer
function UMultiLineEditableText:OnMultiLineEditableTextCommittedEvent__DelegateSignature(Text, CommitMethod) end

---@param Text string
function UMultiLineEditableText:OnMultiLineEditableTextChangedEvent__DelegateSignature(Text) end

---Gets the widget text
---@return string
function UMultiLineEditableText:GetText() end

---Returns the Hint text that appears when there is no text in the text box
---@return string
function UMultiLineEditableText:GetHintText() end

---@return FSlateFontInfo
function UMultiLineEditableText:GetFont() end

