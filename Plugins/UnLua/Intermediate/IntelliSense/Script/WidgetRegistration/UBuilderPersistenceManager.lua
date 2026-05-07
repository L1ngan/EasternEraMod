---The Builder Persistence Manager handles persistence for Builders through use of FBuilderKeys
---@class UBuilderPersistenceManager : UEditorConfigBase
---@field private SavedNameToPersistedFNameArrayMap TMap<string, FPersistedNameArray>
---@field private SavedNameToPersistedBoolMap TMap<string, FPersistedBool>
local UBuilderPersistenceManager = {}

