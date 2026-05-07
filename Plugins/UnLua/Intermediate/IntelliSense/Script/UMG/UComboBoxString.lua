---The combobox allows you to display a list of options to the user in a dropdown menu for them to select one.
---@class UComboBoxString : UWidget
---@field private DefaultOptions TArray<string> @The default list of items to be displayed on the combobox.
---@field private SelectedOption string @The item in the combobox to select by default
---@field public WidgetStyle FComboBoxStyle @The style.
---@field public ItemStyle FTableRowStyle @The item row style.
---@field public ScrollBarStyle FScrollBarStyle @The scroll bar style.
---@field public ContentPadding FMargin
---@field public MaxListHeight number @The max height of the combobox list that opens
---@field public HasDownArrow boolean @When false, the down arrow is not generated and it is up to the API consumer to make their own visual hint that this is a drop down.
---@field public EnableGamepadNavigationMode boolean @When false, directional keys will change the selection. When true, ComboBox must be activated and will only capture arrow input while activated.
---@field public Font FSlateFontInfo @The default font to use in the combobox, only applies if you're not implementing OnGenerateWidgetEvent to factory each new entry.
---@field public ForegroundColor FSlateColor @The foreground color to pass through the hierarchy.
---@field public bIsFocusable boolean
---@field public OnGenerateWidgetEvent Delegate @Called when the widget is needed for the item.
---@field public OnSelectionChanged MulticastDelegate @Called when a new item is selected in the combobox.
---@field public OnOpening MulticastDelegate @Called when the combobox is opening
local UComboBoxString = {}

---@param Option string
function UComboBoxString:SetSelectedOption(Option) end

---@param Index integer
function UComboBoxString:SetSelectedIndex(Index) end

---@param Option string
---@return boolean
function UComboBoxString:RemoveOption(Option) end

---Refreshes the list of options.  If you added new ones, and want to update the list even if it's
---currently being displayed use this.
function UComboBoxString:RefreshOptions() end

---@param SelectedItem string
---@param SelectionType integer
function UComboBoxString:OnSelectionChangedEvent__DelegateSignature(SelectedItem, SelectionType) end

function UComboBoxString:OnOpeningEvent__DelegateSignature() end

---@return boolean
function UComboBoxString:IsOpen() end

---@return string
function UComboBoxString:GetSelectedOption() end

---@return integer
function UComboBoxString:GetSelectedIndex() end

---Returns the number of options
---@return integer
function UComboBoxString:GetOptionCount() end

---@param Index integer
---@return string
function UComboBoxString:GetOptionAtIndex(Index) end

---@param Option string
---@return integer
function UComboBoxString:FindOptionIndex(Option) end

function UComboBoxString:ClearSelection() end

function UComboBoxString:ClearOptions() end

---@param Option string
function UComboBoxString:AddOption(Option) end

