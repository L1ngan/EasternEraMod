---The combobox allows you to display a list of options to the user in a dropdown menu for them to select one.
---@class UComboBox : UWidget
---@field public ScrollBarStyle FScrollBarStyle
---@field public Items TArray<UObject> @The list of items to be displayed on the combobox.
---@field public OnGenerateWidgetEvent Delegate @Called when the widget is needed for the item.
---@field public bIsFocusable boolean
local UComboBox = {}

