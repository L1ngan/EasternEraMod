---blackboard entry definition
---@class FBlackboardEntry
---@field public EntryName string
---@field public EntryDescription string @Optional description to explain what this blackboard entry does.
---@field public EntryCategory string
---@field public KeyType UBlackboardKeyType @key type and additional properties
---@field public bInstanceSynced boolean @if set to true then this field will be synchronized across all instances of this blackboard
local FBlackboardEntry = {}
