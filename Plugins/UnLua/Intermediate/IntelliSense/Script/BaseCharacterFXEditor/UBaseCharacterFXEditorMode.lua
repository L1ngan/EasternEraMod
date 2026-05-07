---The CharacterFX EditorMode stores much of the inter-tool state, including ToolTargets.
---@class UBaseCharacterFXEditorMode : UEdMode
---@field protected OriginalObjectsToEdit TArray<UObject> @Stores original input objects
---@field protected ToolTargets TArray<UToolTarget> @Tool targets created from OriginalObjectsToEdit (and 1:1 with that array) that provide us with dynamic meshes
local UBaseCharacterFXEditorMode = {}

