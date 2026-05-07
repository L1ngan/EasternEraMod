---@class ULevelInstanceSettings : UObject
---@field protected PropertyOverridePolicyClass string @Keep out of WITH_EDITORONLY_DATA so that it can be properly set in -game
---@field protected PropertyOverridePolicy ULevelInstancePropertyOverridePolicy
---@field protected bIsLevelInstanceDisabled boolean
local ULevelInstanceSettings = {}

