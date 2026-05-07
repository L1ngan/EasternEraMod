---Editable text box widget
---@class UEditableText : UWidget
---@field public Text string @The text content for this editable text box widget
---@field public TextDelegate Delegate @A bindable delegate to allow logic to drive the text of the widget
---@field public HintText string @Hint text that appears when there is no text in the text box
---@field public HintTextDelegate Delegate @A bindable delegate to allow logic to drive the hint text of the widget
---@field public WidgetStyle FEditableTextStyle @The style
---@field public IsReadOnly boolean @Sets whether this text box can actually be modified interactively by the user
---@field public IsPassword boolean @Sets whether this text box is for storing a password
---@field public MinimumDesiredWidth number @The minimum desired Width for the text
---@field public IsCaretMovedWhenGainFocus boolean @When set to true the caret is moved when gaining focus
---@field public SelectAllTextWhenFocused boolean @Whether to select all text when the user clicks to give focus on the widget
---@field public RevertTextOnEscape boolean @Whether to allow the user to back out of changes when they press the escape key
---@field public ClearKeyboardFocusOnCommit boolean @Whether to clear keyboard focus when pressing enter to commit changes
---@field public SelectAllTextOnCommit boolean @Whether to select all text when pressing enter to commit changes
---@field public AllowContextMenu boolean @Whether the context menu can be opened
---@field public KeyboardType integer @If we're on a platform that requires a virtual keyboard, what kind of keyboard should this widget use?
---@field public VirtualKeyboardOptions FVirtualKeyboardOptions @Additional options for the virtual keyboard
---@field public VirtualKeyboardTrigger EVirtualKeyboardTrigger
---@field public VirtualKeyboardDismissAction EVirtualKeyboardDismissAction @What action should be taken when the virtual keyboard is dismissed?
---@field public Justification integer @How the text should be aligned with the margin.
---@field public OverflowPolicy ETextOverflowPolicy @Sets what happens to text that is clipped and doesn't fit within the clip rect for this widget
---@field public ShapedTextOptions FShapedTextOptions @Controls how the text within this widget should be shaped.
---@field public OnTextChanged MulticastDelegate @Called whenever the text is changed programmatically or interactively by the user
---@field public OnTextCommitted MulticastDelegate @Called whenever the text is committed.  This happens when the user presses enter or the text box loses focus.
---@field private EnableIntegratedKeyboard boolean @Whether the integrated keyboard is enabled for this editable text.
local UEditableText = {}

---@param InOverflowPolicy ETextOverflowPolicy
function UEditableText:SetTextOverflowPolicy(InOverflowPolicy) end

---Directly sets the widget text.
---Warning: This will wipe any binding created for the Text property!
---@param InText string
function UEditableText:SetText(InText) end

---Set the minimum desired width for this text box
---@param InMinDesiredWidth number
function UEditableText:SetMinimumDesiredWidth(InMinDesiredWidth) end

---@param InJustification integer
function UEditableText:SetJustification(InJustification) end

---@param InbIsReadyOnly boolean
function UEditableText:SetIsReadOnly(InbIsReadyOnly) end

---@param InbIsPassword boolean
function UEditableText:SetIsPassword(InbIsPassword) end

---@param InHintText string
function UEditableText:SetHintText(InHintText) end

---@param InMaterial UMaterialInterface
function UEditableText:SetFontOutlineMaterial(InMaterial) end

---@param InMaterial UMaterialInterface
function UEditableText:SetFontMaterial(InMaterial) end

---@param InFontInfo FSlateFontInfo
function UEditableText:SetFont(InFontInfo) end

---@param Text string
---@param CommitMethod integer
function UEditableText:OnEditableTextCommittedEvent__DelegateSignature(Text, CommitMethod) end

---@param Text string
function UEditableText:OnEditableTextChangedEvent__DelegateSignature(Text) end

---Gets the widget text
---@return string
function UEditableText:GetText() end

---@return integer
function UEditableText:GetJustification() end

---Gets the Hint text that appears when there is no text in the text box
---@return string
function UEditableText:GetHintText() end

---@return FSlateFontInfo
function UEditableText:GetFont() end

