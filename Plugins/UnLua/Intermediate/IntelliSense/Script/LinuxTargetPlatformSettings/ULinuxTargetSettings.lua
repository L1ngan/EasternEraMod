---Implements the settings for the Linux target platform.
---@class ULinuxTargetSettings : UObject
---@field public SpatializationPlugin string @Which of the currently enabled spatialization plugins to use.
---@field public SourceDataOverridePlugin string @Which of the currently enabled source data override plugins to use.
---@field public ReverbPlugin string @Which of the currently enabled reverb plugins to use.
---@field public OcclusionPlugin string @Which of the currently enabled occlusion plugins to use.
---@field public SoundCueCookQualityIndex integer @Quality Level to COOK SoundCues at (if set, all other levels will be stripped by the cooker).
---@field public TargetedRHIs TArray<string> @The collection of RHI's we want to support on this platform. This is not always the full list of RHI we can support.
---@field public bGenerateNaniteFallbackMeshes boolean @Whether to include Nanite Fallback Meshes in cooked builds for Linux. Can be overriden for specific assets in Static Mesh Editor.
local ULinuxTargetSettings = {}

