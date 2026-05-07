---A special box panel that auto-generates its entries at both design-time and runtime.
---Useful for cases where you can have a varying number of entries, but it isn't worth the effort or conceptual overhead to set up a list/tile view.
---Note that entries here are *not* virtualized as they are in the list views, so generally this should be avoided if you intend to scroll through lots of items.
---No children can be manually added in the designer - all are auto-generated based on the given entry class.
---@class UDynamicEntryBox : UDynamicEntryBoxBase
---@field public NumDesignerPreviewEntries integer
---@field private EntryWidgetClass TSubclassOf<UUserWidget> @The class of widget to create entries of. If natively binding this widget, use the EntryClass UPROPERTY metadata to specify the desired entry widget base class.
local UDynamicEntryBox = {}

---Clear out the box entries, optionally deleting the underlying Slate widgets entirely as well.
---@param bDeleteWidgets boolean @[opt] 
function UDynamicEntryBox:Reset(bDeleteWidgets) end

---@param EntryWidget UUserWidget
function UDynamicEntryBox:RemoveEntry(EntryWidget) end

---Creates and establishes a new dynamic entry in the box using the specified class instead of the default.
---@param EntryClass TSubclassOf_UUserWidget_
---@return UUserWidget
function UDynamicEntryBox:BP_CreateEntryOfClass(EntryClass) end

---Creates and establishes a new dynamic entry in the box
---@return UUserWidget
function UDynamicEntryBox:BP_CreateEntry() end

