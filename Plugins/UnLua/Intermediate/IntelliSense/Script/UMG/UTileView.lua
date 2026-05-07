---A ListView that presents the contents as a set of tiles all uniformly sized.
---To make a widget usable as an entry in a TileView, it must inherit from the IUserObjectListEntry interface.
---@class UTileView : UListView
---@field protected EntryHeight number @The height of each tile
---@field protected EntryWidth number @The width of each tile
---@field protected TileAlignment EListItemAlignment @The method by which to align the tile entries in the available space for the tile view
---@field protected bWrapHorizontalNavigation boolean @True to allow left/right navigation to wrap back to the tile on the opposite edge
---@field protected ScrollbarDisabledVisibility ESlateVisibility @Set the visibility of the Scrollbar when it's not needed
---@field private bEntrySizeIncludesEntrySpacing boolean @True if entry dimensions should be the sum of the entry widget dimensions and the spacing. This means the size of the entry widget will be adjusted so that the summation of the widget size and entry spacing always equals entry size.
local UTileView = {}

---Sets the width of every tile entry
---@param NewWidth number
function UTileView:SetEntryWidth(NewWidth) end

---Sets the height of every tile entry
---@param NewHeight number
function UTileView:SetEntryHeight(NewHeight) end

---Returns whether the TileView is left, right or center aligned.
---@return boolean
function UTileView:IsAligned() end

---Gets the width of tile entries
---@return number
function UTileView:GetEntryWidth() end

---Gets the height of tile entries
---@return number
function UTileView:GetEntryHeight() end

