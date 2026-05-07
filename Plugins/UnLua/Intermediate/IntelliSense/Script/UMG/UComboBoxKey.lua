---The combobox allows you to display a list of options to the user in a dropdown menu for them to select one.
---Use OnGenerateConentWidgetEvent to return a custom built widget.
---@class UComboBoxKey : UWidget
---@field private Options TArray<string>
---@field private SelectedOption string
---@field public WidgetStyle FComboBoxStyle @The combobox style.
---@field public ItemStyle FTableRowStyle @The item row style.
---@field public ScrollBarStyle FScrollBarStyle @The scroll bar style.
---@field public ForegroundColor FSlateColor @The foreground color to pass through the hierarchy.
---@field public ContentPadding FMargin
---@field public MaxListHeight number @The max height of the combobox list that opens
---@field public bHasDownArrow boolean @When false, the down arrow is not generated and it is up to the API consumer to make their own visual hint that this is a drop down.
---@field public bEnableGamepadNavigationMode boolean @When false, directional keys will change the selection. When true, ComboBox must be activated and will only capture arrow input while activated.
---@field public bIsFocusable boolean @When true, allows the combo box to receive keyboard focus
---@field public OnGenerateContentWidget Delegate @Called when the widget is needed for the content.
---@field public OnGenerateItemWidget Delegate @Called when the widget is needed for the item.
---@field public OnSelectionChanged MulticastDelegate @Called when a new item is selected in the combobox.
---@field public OnOpening MulticastDelegate @Called when the combobox is opening
local UComboBoxKey = {}

---Set the current selected option.
---@param Option string
function UComboBoxKey:SetSelectedOption(Option) end

---Remove an element to the option list.
---@param Option string
---@return boolean
function UComboBoxKey:RemoveOption(Option) end

---@param SelectedItem string
---@param SelectionType integer
function UComboBoxKey:OnSelectionChangedEvent__DelegateSignature(SelectedItem, SelectionType) end

function UComboBoxKey:OnOpeningEvent__DelegateSignature() end

---Is the combobox menu opened.
---@return boolean
function UComboBoxKey:IsOpen() end

---Get the current selected option
---@return string
function UComboBoxKey:GetSelectedOption() end

---@param Item string
---@return UWidget
function UComboBoxKey:GenerateWidgetEvent__DelegateSignature(Item) end

---Clear the current selection.
function UComboBoxKey:ClearSelection() end

---Remove all the elements of the option list.
function UComboBoxKey:ClearOptions() end

---Add an element to the option list.
---@param Option string
function UComboBoxKey:AddOption(Option) end

