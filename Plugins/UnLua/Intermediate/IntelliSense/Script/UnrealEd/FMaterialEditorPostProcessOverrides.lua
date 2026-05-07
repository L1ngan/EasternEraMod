---@class FMaterialEditorPostProcessOverrides
---@field public bIsOverrideable boolean @Tracks if this is a material where post process overrides can be applied (MaterialDomain == MD_PostProcess, BlendableLocation != BL_ReplacingTonemapper)
---@field public bOverrideBlendableLocation boolean
---@field public bOverrideBlendablePriority boolean
---@field public BlendableLocationOverride integer
---@field public BlendablePriorityOverride integer
---@field public UserSceneTextureInputs TArray<FEditorUserSceneTextureOverride> @Overrides for user scene texture inputs
---@field public UserSceneTextureOutput string @Override for user scene texture output
local FMaterialEditorPostProcessOverrides = {}
