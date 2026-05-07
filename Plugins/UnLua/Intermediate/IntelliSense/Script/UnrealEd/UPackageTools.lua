---@class UPackageTools : UObject
local UPackageTools = {}

---Replaces all invalid package name characters with _
---@param InPackageName string
---@return string
function UPackageTools.SanitizePackageName(InPackageName) end

---Converts a long package name to a file name.
---This can be called on package paths as well, provide no extension in that case.
---Will return an empty string if it fails.
---@param PackageName string
---@param Extension string
---@return string
function UPackageTools.PackageNameToFilename(PackageName, Extension) end

---Tries to convert a given relative or absolute filename to a long package name or path starting with a root like /Game
---This works on both package names and directories, and it does not validate that it actually exists on disk.
---@param Filename string
---@return string
function UPackageTools.FilenameToPackageName(Filename) end

