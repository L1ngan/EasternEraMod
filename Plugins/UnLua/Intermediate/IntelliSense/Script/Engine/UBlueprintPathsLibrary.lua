---Function library to expose FPaths to Blueprints and Python
---Function signatures are preserved for the most part with adjustments made to some
---signatures to better match Blueprints / Python workflow
---@class UBlueprintPathsLibrary : UBlueprintFunctionLibrary
local UBlueprintPathsLibrary = {}

---Returns the directory the engine uses to output user requested video capture files.
---@return string
function UBlueprintPathsLibrary.VideoCaptureDir() end

---Validates that the parts that make up the path contain no invalid characters as dictated by the operating system
---Note that this is a different set of restrictions to those imposed by FPackageName
---@param InPath string
---@param bDidSucceed boolean @[out] 
---@param OutReason string @[out] 
function UBlueprintPathsLibrary.ValidatePath(InPath, bDidSucceed, OutReason) end

---Parses a fully qualified or relative filename into its components (filename, path, extension).
---@param InPath string
---@param PathPart string @[out] 
---@param FilenamePart string @[out] 
---@param ExtensionPart string @[out] 
function UBlueprintPathsLibrary.Split(InPath, PathPart, FilenamePart, ExtensionPart) end

---Returns the directory the engine uses to look for the source leaf ini files. This
---can't be an .ini variable for obvious reasons.
---@return string
function UBlueprintPathsLibrary.SourceConfigDir() end

---Should the "saved" directory structures be rooted in the user dir or relative to the "engine/game"
---@return boolean
function UBlueprintPathsLibrary.ShouldSaveToUserDir() end

---Returns the Shader Working Directory
---@return string
function UBlueprintPathsLibrary.ShaderWorkingDir() end

---Sets the path to the project file.
---@param NewGameProjectFilePath string
function UBlueprintPathsLibrary.SetProjectFilePath(NewGameProjectFilePath) end

---Sets the extension of the given filename (like ChangeExtension, but also applies the extension if the file doesn't have one)
---@param InPath string
---@param InNewExtension string
---@return string
function UBlueprintPathsLibrary.SetExtension(InPath, InNewExtension) end

---Returns the directory the engine uses to output screenshot files.
---@return string
function UBlueprintPathsLibrary.ScreenShotDir() end

---Returns the directory the engine stores sandbox output
---@return string
function UBlueprintPathsLibrary.SandboxesDir() end

---Returns the root directory of the engine directory tree
---@return string
function UBlueprintPathsLibrary.RootDir() end

---Removes duplicate slashes in paths.
---Assumes all slashes have been converted to TEXT('/').
---For example, takes the string:
---      BaseDirectory/SomeDirectory//SomeOtherDirectory////Filename.ext
---and converts it to:
---      BaseDirectory/SomeDirectory/SomeOtherDirectory/Filename.ext
---@param InPath string
---@param OutPath string @[out] 
function UBlueprintPathsLibrary.RemoveDuplicateSlashes(InPath, OutPath) end

---Returns the root directory for user-specific game files.
---@return string
function UBlueprintPathsLibrary.ProjectUserDir() end

---Returns the saved directory of the current game by looking at FApp::GetProjectName().
---@return string
function UBlueprintPathsLibrary.ProjectSavedDir() end

---Returns the plugins directory of the current game by looking at FApp::GetProjectName().
---@return string
function UBlueprintPathsLibrary.ProjectPluginsDir() end

---* Returns the writable directory for downloaded data that persists across play sessions.
---@return string
function UBlueprintPathsLibrary.ProjectPersistentDownloadDir() end

---Returns the mods directory of the current project by looking at FApp::GetProjectName().
---@return string
function UBlueprintPathsLibrary.ProjectModsDir() end

---Returns the directory the engine uses to output logs. This currently can't
---be an .ini setting as the game starts logging before it can read from .ini
---files.
---@return string
function UBlueprintPathsLibrary.ProjectLogDir() end

---Returns the intermediate directory of the current game by looking at FApp::GetProjectName().
---@return string
function UBlueprintPathsLibrary.ProjectIntermediateDir() end

---Returns the base directory of the current project by looking at FApp::GetProjectName().
---This is usually a subdirectory of the installation
---root directory and can be overridden on the command line to allow self
---contained mod support.
---@return string
function UBlueprintPathsLibrary.ProjectDir() end

---Returns the content directory of the current game by looking at FApp::GetProjectName().
---@return string
function UBlueprintPathsLibrary.ProjectContentDir() end

---Returns the directory the root configuration files are located.
---@return string
function UBlueprintPathsLibrary.ProjectConfigDir() end

---Returns the directory the engine uses to output profiling files.
---@return string
function UBlueprintPathsLibrary.ProfilingDir() end

---Convert all / and \ to TEXT("/")
---@param InPath string
---@param OutPath string @[out] 
function UBlueprintPathsLibrary.NormalizeFilename(InPath, OutPath) end

---Normalize all / and \ to TEXT("/") and remove any trailing TEXT("/") if the character before that is not a TEXT("/") or a colon
---@param InPath string
---@param OutPath string @[out] 
function UBlueprintPathsLibrary.NormalizeDirectoryName(InPath, OutPath) end

---Returns a string that is safe to use as a filename because all items in
---GetInvalidFileSystemChars() are removed
---Optionally specify the character to replace invalid characters with
---@param InString string
---@param InReplacementChar string
---@return string
function UBlueprintPathsLibrary.MakeValidFileName(InString, InReplacementChar) end

---Make fully standard "Unreal" pathname:
---   - Normalizes path separators [NormalizeFilename]
---   - Removes extraneous separators  [NormalizeDirectoryName, as well removing adjacent separators]
---   - Collapses internal ..'s
---   - Makes relative to Engine\Binaries\<Platform> (will ALWAYS start with ..\..\..)
---@param InPath string
---@param OutPath string @[out] 
function UBlueprintPathsLibrary.MakeStandardFilename(InPath, OutPath) end

---Takes an "Unreal" pathname and converts it to a platform filename.
---@param InPath string
---@param OutPath string @[out] 
function UBlueprintPathsLibrary.MakePlatformFilename(InPath, OutPath) end

---Assuming both paths (or filenames) are relative to the same base dir, converts InPath to be relative to InRelativeTo
---@param InPath string
---@param InRelativeTo string
---@param OutPath string @[out] 
---@return boolean
function UBlueprintPathsLibrary.MakePathRelativeTo(InPath, InRelativeTo, OutPath) end

---Returns the directory the application was launched from (useful for commandline utilities)
---@return string
function UBlueprintPathsLibrary.LaunchDir() end

---Checks if two paths are the same.
---@param PathA string
---@param PathB string
---@return boolean
function UBlueprintPathsLibrary.IsSamePath(PathA, PathB) end

---Determines if supplied path uses a restricted/internal subdirectory.  Note that slashes are normalized and character case is ignored for the comparison.
---@param InPath string
---@return boolean
function UBlueprintPathsLibrary.IsRestrictedPath(InPath) end

---Returns true if this path is relative to another path
---@param InPath string
---@return boolean
function UBlueprintPathsLibrary.IsRelative(InPath) end

---Checks whether the path to the project file, if any, is set.
---@return boolean
function UBlueprintPathsLibrary.IsProjectFilePathSet() end

---Returns true if this path represents a root drive or volume
---@param InPath string
---@return boolean
function UBlueprintPathsLibrary.IsDrive(InPath) end

---* Returns true if a writable directory for downloaded data that persists across play sessions is available
---@return boolean
function UBlueprintPathsLibrary.HasProjectPersistentDownloadDir() end

---Returns a list of tool tip localization paths
---@return TArray_string_
function UBlueprintPathsLibrary.GetToolTipLocalizationPaths() end

---Returns a list of restricted/internal folder names (without any slashes) which may be tested against full paths to determine if a path is restricted or not.
---@return TArray_string_
function UBlueprintPathsLibrary.GetRestrictedFolderNames() end

---Gets the relative path to get from BaseDir to RootDirectory
---@return string
function UBlueprintPathsLibrary.GetRelativePathToRoot() end

---Returns a list of property name localization paths
---@return TArray_string_
function UBlueprintPathsLibrary.GetPropertyNameLocalizationPaths() end

---Gets the path to the project file.
---@return string
function UBlueprintPathsLibrary.GetProjectFilePath() end

---Returns the path in front of the filename
---@param InPath string
---@return string
function UBlueprintPathsLibrary.GetPath(InPath) end

---Returns a string containing all invalid characters as dictated by the operating system
---@return string
function UBlueprintPathsLibrary.GetInvalidFileSystemChars() end

---Returns a list of game-specific localization paths
---@return TArray_string_
function UBlueprintPathsLibrary.GetGameLocalizationPaths() end

---Gets the extension for this filename.
---@param InPath string
---@param bIncludeDot boolean @[opt] 
---@return string
function UBlueprintPathsLibrary.GetExtension(InPath, bIncludeDot) end

---Returns a list of engine-specific localization paths
---@return TArray_string_
function UBlueprintPathsLibrary.GetEngineLocalizationPaths() end

---Returns a list of editor-specific localization paths
---@return TArray_string_
function UBlueprintPathsLibrary.GetEditorLocalizationPaths() end

---Returns the filename (with extension), minus any path information.
---@param InPath string
---@return string
function UBlueprintPathsLibrary.GetCleanFilename(InPath) end

---Returns the same thing as GetCleanFilename, but without the extension
---@param InPath string
---@param bRemovePath boolean @[opt] 
---@return string
function UBlueprintPathsLibrary.GetBaseFilename(InPath, bRemovePath) end

---Returns the directory the engine saves generated config files.
---@return string
function UBlueprintPathsLibrary.GeneratedConfigDir() end

---Returns the directory that contains developer-specific content for the current user
---@return string
function UBlueprintPathsLibrary.GameUserDeveloperDir() end

---Returns the directory where game source code files are kept
---@return string
function UBlueprintPathsLibrary.GameSourceDir() end

---Returns the directory that contains subfolders for developer-specific content
---@return string
function UBlueprintPathsLibrary.GameDevelopersDir() end

---Returns the saved directory that is not game specific. This is usually the same as
---EngineSavedDir().
---@return string
function UBlueprintPathsLibrary.GameAgnosticSavedDir() end

---Returns true if this file was found, false otherwise
---@param InPath string
---@return boolean
function UBlueprintPathsLibrary.FileExists(InPath) end

---Returns the directory where feature packs are kept
---@return string
function UBlueprintPathsLibrary.FeaturePackDir() end

---Returns the enterprise plugins directory
---@return string
function UBlueprintPathsLibrary.EnterprisePluginsDir() end

---Returns the enterprise FeaturePack directory
---@return string
function UBlueprintPathsLibrary.EnterpriseFeaturePackDir() end

---Returns the base directory enterprise directory.
---@return string
function UBlueprintPathsLibrary.EnterpriseDir() end

---Returns the root directory for user-specific engine files which can be shared between versions. Always writable.
---@return string
function UBlueprintPathsLibrary.EngineVersionAgnosticUserDir() end

---Returns the root directory for user-specific engine files. Always writable.
---@return string
function UBlueprintPathsLibrary.EngineUserDir() end

---Returns the directory where engine source code files are kept
---@return string
function UBlueprintPathsLibrary.EngineSourceDir() end

---Returns the saved directory of the engine
---@return string
function UBlueprintPathsLibrary.EngineSavedDir() end

---Returns the plugins directory of the engine
---@return string
function UBlueprintPathsLibrary.EnginePluginsDir() end

---Returns the intermediate directory of the engine
---@return string
function UBlueprintPathsLibrary.EngineIntermediateDir() end

---Returns the base directory of the "core" engine that can be shared across
---several games or across games & mods. Shaders and base localization files
---e.g. reside in the engine directory.
---@return string
function UBlueprintPathsLibrary.EngineDir() end

---Returns the content directory of the "core" engine that can be shared across
---several games or across games & mods.
---@return string
function UBlueprintPathsLibrary.EngineContentDir() end

---Returns the directory the root configuration files are located.
---@return string
function UBlueprintPathsLibrary.EngineConfigDir() end

---Returns true if this directory was found, false otherwise
---@param InPath string
---@return boolean
function UBlueprintPathsLibrary.DirectoryExists(InPath) end

---Returns the directory for temp files used for diffing
---@return string
function UBlueprintPathsLibrary.DiffDir() end

---Creates a temporary filename with the specified prefix.
---@param Path string
---@param Prefix string
---@param Extension string @[opt] 
---@return string
function UBlueprintPathsLibrary.CreateTempFilename(Path, Prefix, Extension) end

---Converts a normal path to a sandbox path (in Saved/Sandboxes).
---@param InPath string
---@param InSandboxName string
---@return string
function UBlueprintPathsLibrary.ConvertToSandboxPath(InPath, InSandboxName) end

---Converts a relative path name to a fully qualified name relative to the specified BasePath.
---BasePath will be the process BaseDir() if not BasePath is given
---@param InPath string
---@param InBasePath string
---@return string
function UBlueprintPathsLibrary.ConvertRelativePathToFull(InPath, InBasePath) end

---Converts a sandbox (in Saved/Sandboxes) path to a normal path.
---@param InPath string
---@param InSandboxName string
---@return string
function UBlueprintPathsLibrary.ConvertFromSandboxPath(InPath, InSandboxName) end

---Combine two or more Paths into one single Path
---@param InPaths TArray_string_
---@return string
function UBlueprintPathsLibrary.Combine(InPaths) end

---Takes a fully pathed string and eliminates relative pathing (eg: annihilates ".." with the adjacent directory).
---Assumes all slashes have been converted to TEXT('/').
---For example, takes the string:
---      BaseDirectory/SomeDirectory/../SomeOtherDirectory/Filename.ext
---and converts it to:
---      BaseDirectory/SomeOtherDirectory/Filename.ext
---@param InPath string
---@param OutPath string @[out] 
---@return boolean
function UBlueprintPathsLibrary.CollapseRelativeDirectories(InPath, OutPath) end

---Returns the directory for local files used in cloud emulation or support
---@return string
function UBlueprintPathsLibrary.CloudDir() end

---Changes the extension of the given filename (does nothing if the file has no extension)
---@param InPath string
---@param InNewExtension string
---@return string
function UBlueprintPathsLibrary.ChangeExtension(InPath, InNewExtension) end

---Returns the directory the engine uses to output BugIt files.
---@return string
function UBlueprintPathsLibrary.BugItDir() end

---Returns the directory for automation save files that are meant to be deleted every run
---@return string
function UBlueprintPathsLibrary.AutomationTransientDir() end

---Returns the directory for automation log files
---@return string
function UBlueprintPathsLibrary.AutomationLogDir() end

---Returns the directory for automation save files
---@return string
function UBlueprintPathsLibrary.AutomationDir() end

