---Structure that defines a shared feature pack resource.
---@class FFeaturePackLevelSet
---@field public DetailLevels TArray<EFeaturePackDetailLevel> @List of shared resource levels for this shared resource.
---@field public MountName string @Mount name for the shared resource - this is the folder the resource will be copied to on project generation as well as the name of the folder that will appear in the content browser.
local FFeaturePackLevelSet = {}
