---The widget tree manages the collection of widgets in a blueprint widget.
---@class UWidgetTree : UObject
---@field public RootWidget UWidget @The root widget of the tree
---@field public NamedSlotBindings TMap<string, UWidget> @Stores the widgets being assigned to named slots, these widgets will be slotted into the named slots of the user widget that owns this widget tree after the user widget is constructed.  This is how we store the template content in order to have named slot inheritance, and merging widget trees.
---@field protected AllWidgets TArray<UWidget>
local UWidgetTree = {}

