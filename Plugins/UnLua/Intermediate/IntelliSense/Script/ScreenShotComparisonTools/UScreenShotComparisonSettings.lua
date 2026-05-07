---@class UScreenShotComparisonSettings : UObject
---@field public bUseConfidentialPlatformPathsForSavedResults boolean @If true, any checked-in test results for confidential platforms will be put under <ProjectDir>/Platforms/<Platform>/Test instead of <ProjectDir>/Test
---@field public ScreenshotFallbackPlatforms TArray<FScreenshotFallbackEntry> @An array of entries that describe other platforms we can use for fallbacks when comparing screenshots
local UScreenShotComparisonSettings = {}

