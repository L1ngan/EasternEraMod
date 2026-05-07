---@class UEditorSettings : UObject
---@field public GlobalLocalDDCPath FDirectoryPath @Adjusts the Local Cache location. This affects every project on your computer that uses the UE-LocalDataCachePath environment variable override. This is usually the first location to query for previously built data.
---@field public GlobalSharedDDCPath FDirectoryPath @Adjusts the Shared cache location. This affects every project on your computer that uses the UE-SharedDataCachePath environment variable override. The Shared Cache location is usually queried if we don't find previously built data in the Local cache. Colleagues should point to the same shared location so that work can be distributed.
---@field public LocalDerivedDataCache FDirectoryPath @Project specific override for the Local Cache location. The editor must be restarted for changes to take effect. This will override the 'Global Local DDC Path'.
---@field public SharedDerivedDataCache FDirectoryPath @Project specific override for the Shared Cache location. The editor must be restarted for changes to take effect. This will override the 'Global Shared DDC Path'.
---@field public bEnableDDCNotifications boolean @Whether to enable any DDC Notifications
---@field public bNotifyUseUnrealCloudDDC boolean @Whether to enable the Unreal Cloud DDC notification
---@field public bNotifySetupDDCPath boolean @Whether to enable the DDC path notification
---@field public bNotifyEnableS3DD boolean @Whether to enable the DDC path notification
---@field public bEnableS3DDC boolean @Whether to enable the S3 derived data cache backend
---@field public GlobalS3DDCPath FDirectoryPath @Adjusts the Local Cache location for AWS/S3 downloaded package bundles. This affects every project on your computer that uses the UE-S3DataCachePath environment variable override.
---@field public HordeUrl string @URL of the Horde server
---@field public bLoadTheMostRecentlyLoadedProjectAtStartup boolean @When checked, the most recently loaded project will be auto-loaded at editor startup if no other project was specified on the command line
---@field public RecentlyOpenedProjectFiles TArray<FRecentProjectFile> @Game project files that were recently opened in the editor
---@field public CreatedProjectPaths TArray<string> @The paths of projects created with the new project wizard. This is used to populate the "Path" field of the new project dialog.
---@field public CompletedSurveys TArray<FGuid> @The id's of the surveys completed
---@field public InProgressSurveys TArray<FGuid> @The id's of the surveys currently in-progress
---@field public AutoScalabilityWorkScaleAmount number
local UEditorSettings = {}

