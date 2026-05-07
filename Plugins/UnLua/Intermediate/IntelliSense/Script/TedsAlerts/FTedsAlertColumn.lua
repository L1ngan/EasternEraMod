---Column containing information a user needs to be alerted of.
---@class FTedsAlertColumn : FEditorDataStorageColumn
---@field public Message string
---@field public Name string @Unique name to identify the message with.
---@field public AlertType FTedsAlertColumnType @The type of alert. This is used for ordering and to show appropriate icons.
---@field public Priority integer @A chain of priorities is sorted by errors, then warnings. If either group has multiple alerts, alerts are sorted by priority with the lowest value (0) given the later location and higher value (up to 255) the earlier locations in the chain.
local FTedsAlertColumn = {}
