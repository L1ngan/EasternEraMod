---Settings controlling UGC localization.
---@class UUserGeneratedContentLocalizationSettings : UObject
---@field public CulturesToDisable TArray<string> @List of cultures that should be disabled for UGC localization.
---@field public bCompileDLCLocalizationDuringCook boolean @Should we compile UGC localization (if present) for DLC plugins during cook?
---@field public bValidateDLCLocalizationDuringCook boolean @Should we validate UGC localization (if present) for DLC plugins during cook?
local UUserGeneratedContentLocalizationSettings = {}

