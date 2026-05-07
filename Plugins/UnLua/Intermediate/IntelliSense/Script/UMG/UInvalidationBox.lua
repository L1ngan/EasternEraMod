---Invalidate
---* Single Child
---* Caching / Performance
---@class UInvalidationBox : UContentWidget
---@field protected bCanCache boolean @Should the invalidation panel cache the widgets?  Making this false makes it so the invalidation panel stops acting like an invalidation panel, just becomes a simple container widget.
local UInvalidationBox = {}

---Tell the InvalidationBox to use the invalidation process.
---@param CanCache boolean
function UInvalidationBox:SetCanCache(CanCache) end

function UInvalidationBox:InvalidateCache() end

---
---The widgets will be updated only if they get invalidated.
---@return boolean
function UInvalidationBox:GetCanCache() end

