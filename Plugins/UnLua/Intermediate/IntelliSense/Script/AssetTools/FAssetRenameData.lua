---@class FAssetRenameData
---@field public Asset TWeakObjectPtr<UObject> @Object being renamed
---@field public NewPackagePath string @New path to package without package name, ie /Game/SubDirectory
---@field public NewName string @New package and asset name, new object path will be PackagePath/NewName.NewName
---@field public OldObjectPath FSoftObjectPath @Full path to old name, in form /Game/SubDirectory/OldName.OldName:SubPath
---@field public NewObjectPath FSoftObjectPath @New full path, may be a SubObject
---@field public bOnlyFixSoftReferences boolean @If true, only fix soft references. This will work even if Asset is null because it has already been renamed
---@field public bAlsoRenameLocalizedVariants boolean @If true, will also try to rename all localized variants with corresponding paths
local FAssetRenameData = {}
