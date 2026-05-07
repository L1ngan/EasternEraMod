---A struct that contains a string reference to an object, either a top level asset or a subobject.
---@class FSoftObjectPath
---@field public AssetPath FTopLevelAssetPath @Asset path, patch to a top level object in a package
---@field public SubPathString Unknown @Optional FString for subobject within an asset
local FSoftObjectPath = {}
