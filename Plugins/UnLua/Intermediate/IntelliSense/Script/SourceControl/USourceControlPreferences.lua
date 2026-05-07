---Settings for the Source Control Integration
---@class USourceControlPreferences : UDeveloperSettings
---@field public bEnableValidationTag boolean @Adds validation tag to changelist description on submit.
---@field public bShouldDeleteNewFilesOnRevert boolean @Deletes new files when reverted.
---@field public bEnableUncontrolledChangelists boolean @Enables Uncontrolled Changelists features. The editor must be restarted for the change to be fully taken into account.
---@field public CollectionChangelistTags TArray<string> @List of lines to add to any collection on checkin
---@field public SpecificCollectionChangelistTags TMap<string, string> @Map of collection names and additional text to apply to changelist descriptions when checking them in
---@field public bRequiresRevisionControlToRenameLocalizableAssets boolean @If the project uses Localization and its localized content might not be on disk (but still in your Revision Control), then enabling this feature will require a Revision Control Provider to be configured to move/rename/delete files to be sure no localized variants become orphaned. (Works only with Perforce for now)
local USourceControlPreferences = {}

