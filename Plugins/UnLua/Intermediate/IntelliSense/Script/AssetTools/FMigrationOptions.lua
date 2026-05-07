---@class FMigrationOptions
---@field public bPrompt boolean @Prompt user for confirmation (always false through scripting)
---@field public bIgnoreDependencies boolean @Ignore dependencies of assets, only migrate the given assets. usefull for automation. This will not migrate the actors of a OFPA (one file per actor) level
---@field public AssetConflict EAssetMigrationConflict @What to do when Assets are conflicting on the destination
---@field public OrphanFolder string @Destination for assets that don't have a corresponding content folder. If left empty those assets are not migrated. (Not used by the new migration)
local FMigrationOptions = {}
