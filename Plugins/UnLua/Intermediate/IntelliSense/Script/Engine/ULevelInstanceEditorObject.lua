---@class ULevelInstanceEditorObject : UObject
---@field public bMovedActors boolean @If current Level edit has moved actors in/out of the level
---@field public OtherPackagesToSave TArray<TWeakObjectPtr<UPackage>> @List of packages to save when committing level
local ULevelInstanceEditorObject = {}

