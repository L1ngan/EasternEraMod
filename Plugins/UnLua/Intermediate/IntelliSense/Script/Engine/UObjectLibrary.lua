---Class that holds a library of Objects
---@class UObjectLibrary : UObject
---@field public ObjectBaseClass TSubclassOf<UObject> @Class that Objects must be of. If ContainsBlueprints is true, this is the native class that the blueprints are instances of and not UClass
---@field public bHasBlueprintClasses boolean @True if this library holds blueprint classes, false if it holds other objects
---@field protected Objects TArray<UObject> @List of Objects in library
---@field protected WeakObjects TArray<TWeakObjectPtr<UObject>> @Weak pointers to objects
---@field protected bUseWeakReferences boolean @If this library should use weak pointers
---@field protected bIsFullyLoaded boolean @True if we've already fully loaded this library, can't do it twice
local UObjectLibrary = {}

