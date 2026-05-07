---* A menu customization is a specialization of menu profiles - that allows for advanced behavior such as modifying the order of sections/entries
---* A menu can only have one customization active at a time
---@class FCustomizedToolMenu : FToolMenuProfile
---@field public EntryOrder TMap<string, FCustomizedToolMenuNameArray>
---@field public SectionOrder TArray<string>
local FCustomizedToolMenu = {}
