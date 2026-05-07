---Setup login credentials for the Play In Editor (PIE) feature
---@class UOnlinePIESettings : UDeveloperSettings
---@field public bOnlinePIEEnabled boolean @Attempt to login with user credentials on a backend service before launching the PIE instance.
---@field public Logins TArray<FOnlineAccountStoredCredentials> @Login credentials, at least one for each instance of PIE that is intended to be run
local UOnlinePIESettings = {}

