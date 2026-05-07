---@class UUnrealEdOptions : UObject
---@field public EditorCategories TArray<FEditorCommandCategory> @Categories of commands.
---@field public EditorCommands TArray<FEditorCommand> @Commands that can be bound to in the editor.
---@field public EditorKeyBindings UUnrealEdKeyBindings @Pointer to the key bindings object that actually stores key bindings for the editor.
---@field public bExpandClassPickerClassList boolean @If true, the list of classes in the class picker dialog will be expanded
---@field public NewAssetDefaultClasses TArray<FClassPickerDefaults> @The array of default objects in the blueprint class dialog *
local UUnrealEdOptions = {}

