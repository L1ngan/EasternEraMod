---* A menu profile is a way for systems to modify instances of a menu by showing/hiding specific items. You can have multiple profiles active on
---* a single menu at the same time.
---@class FToolMenuProfile
---@field public Name string
---@field public Entries TMap<string, FCustomizedToolMenuEntry>
---@field public Sections TMap<string, FCustomizedToolMenuSection>
---@field public SuppressExtenders TArray<string>
local FToolMenuProfile = {}
