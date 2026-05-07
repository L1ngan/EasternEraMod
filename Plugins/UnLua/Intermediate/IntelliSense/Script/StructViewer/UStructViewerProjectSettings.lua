---Implements the settings for the Struct Viewer Project Settings
---@class UStructViewerProjectSettings : UObject
---@field public InternalOnlyPaths TArray<FDirectoryPath> @The base directories to be considered Internal Only for the struct picker.
---@field public InternalOnlyStructs TArray<TSoftObjectPtr<UScriptStruct>> @The base classes to be considered Internal Only for the struct picker.
local UStructViewerProjectSettings = {}

