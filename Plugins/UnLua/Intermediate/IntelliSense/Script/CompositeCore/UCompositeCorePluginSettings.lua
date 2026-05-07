---Settings for the CompositeCore module.
---@class UCompositeCorePluginSettings : UDeveloperSettings
---@field public bApplyPreExposure boolean @When enabled, the scene main render pre-exposure is applied onto the separate composited render. This can be used to match exposure to the scene. (Maps to "CompositeCore.ApplyPreExposure" console variable).
---@field public bApplyFXAA boolean @When enabled, FXAA is applied onto the separate composited render. Quality is controlled with "r.FXAA.Quality". (Maps to "CompositeCore.ApplyFXAA" console variable).
---@field public DisabledPrimitiveClasses TArray<FSoftClassPath> @Primitive component classes that do not support the composite pipeline.
---@field public AllowedComponentClasses TArray<FSoftClassPath> @Allowed component classes for which users will not be warned if associated primitive cannot immediately be found.
---@field public SceneViewExtensionPriority integer @Composite (scene view extension) post-processing priority, which defaults to before OpenColorIO.
local UCompositeCorePluginSettings = {}

