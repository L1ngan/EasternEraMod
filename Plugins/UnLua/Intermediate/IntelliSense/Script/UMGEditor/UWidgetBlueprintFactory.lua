---@class UWidgetBlueprintFactory : UFactory
---@field public BlueprintType integer @The type of blueprint that will be created
---@field public ParentClass TSubclassOf<UUserWidget> @The parent class of the created blueprint
---@field private RootWidgetClass TSubclassOf<UObject>
local UWidgetBlueprintFactory = {}

