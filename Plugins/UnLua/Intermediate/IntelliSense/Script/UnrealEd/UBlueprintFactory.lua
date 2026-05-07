---@class UBlueprintFactory : UFactory
---@field public ParentClass TSubclassOf<UObject> @The parent class of the created blueprint
---@field public BlueprintType integer @The type of Blueprint to create in FactoryCreateNew
---@field public bSkipClassPicker boolean @Skips the class choosing dialog and uses the ParentClass as the blueprint base class
local UBlueprintFactory = {}

