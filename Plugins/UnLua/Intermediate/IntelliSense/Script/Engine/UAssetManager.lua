---A singleton UObject that is responsible for loading and unloading PrimaryAssets, and maintaining game-specific asset references
---Games should override this class and change the class reference
---@class UAssetManager : UObject
---@field protected ObjectReferenceList TArray<UObject> @List of UObjects that are being kept from being GCd, derived from the asset type map. Arrays are currently more efficient than Sets
---@field protected bIsGlobalAsyncScanEnvironment boolean @True if we are running a build that is already scanning assets globally so we can perhaps avoid scanning paths synchronously
---@field protected bShouldGuessTypeAndName boolean @True if PrimaryAssetType/Name will be implied for loading assets that don't have it saved on disk. Won't work for all projects
---@field protected bShouldUseSynchronousLoad boolean @True if we should always use synchronous loads, this speeds up cooking
---@field protected bIsLoadingFromPakFiles boolean @True if we are loading from pak files
---@field protected bShouldAcquireMissingChunksOnLoad boolean @True if the chunk install interface should be queries before loading assets
---@field protected bOnlyCookProductionAssets boolean @If true, DevelopmentCook assets will error when they are cooked
---@field protected NumBulkScanRequests integer @>0 if we are currently in bulk scanning mode
---@field protected bIsPrimaryAssetDirectoryCurrent boolean @True if asset data is current, if false it will need to rescan before PIE
---@field protected bIsManagementDatabaseCurrent boolean @True if the asset management database is up to date
---@field protected bUpdateManagementDatabaseAfterScan boolean @True if the asset management database should be updated after scan completes
---@field protected bIncludeOnlyOnDiskAssets boolean @True if only on-disk assets should be searched by the asset registry
---@field protected bHasCompletedInitialScan boolean @True if we have passed the initial asset registry/type scan
---@field protected NumberOfSpawnedNotifications integer @Number of notifications seen in this update
local UAssetManager = {}

