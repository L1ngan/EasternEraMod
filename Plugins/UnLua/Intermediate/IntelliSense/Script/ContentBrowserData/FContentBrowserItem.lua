---Representation of a Content Browser item.
---FContentBrowserItem is potentially a composite of multiple internal items (eg, combining equivalent folder items from different data sources),
---and defers back to these internal items to provide its functionality (via the data source that owns each internal item).
---@class FContentBrowserItem
local FContentBrowserItem = {}
