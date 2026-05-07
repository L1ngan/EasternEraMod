---Takes care of spawning various field related nodes (nodes associated with
---functions, enums, structs, properties, etc.). Acts as the "action" portion
---for certain FBlueprintActionMenuItems.
---@class UBlueprintFieldNodeSpawner : UBlueprintNodeSpawner
---@field protected OwnerClass TSubclassOf<UObject> @The owning class to configure new nodes with.
---@field private Field UField @The field to configure new nodes with.
---@field private Property Unknown
local UBlueprintFieldNodeSpawner = {}

