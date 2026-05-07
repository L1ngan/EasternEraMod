---Function library containing methods that should be hoisted onto UMovieSceneFolders for scripting
---@class UMovieSceneFolderExtensions : UBlueprintFunctionLibrary
local UMovieSceneFolderExtensions = {}

---Set the name of the given folder
---@param Folder UMovieSceneFolder
---@param InFolderName string
---@return boolean
function UMovieSceneFolderExtensions.SetFolderName(Folder, InFolderName) end

---Set the display color of the given folder
---@param Folder UMovieSceneFolder
---@param InFolderColor FColor
---@return boolean
function UMovieSceneFolderExtensions.SetFolderColor(Folder, InFolderColor) end

---Remove a track from the given folder
---@param Folder UMovieSceneFolder
---@param InTrack UMovieSceneTrack
---@return boolean
function UMovieSceneFolderExtensions.RemoveChildTrack(Folder, InTrack) end

---Remove an object binding from the given folder
---@param Folder UMovieSceneFolder
---@param InObjectBinding FMovieSceneBindingProxy
---@return boolean
function UMovieSceneFolderExtensions.RemoveChildObjectBinding(Folder, InObjectBinding) end

---Remove a child folder from the given folder
---@param TargetFolder UMovieSceneFolder
---@param FolderToRemove UMovieSceneFolder
---@return boolean
function UMovieSceneFolderExtensions.RemoveChildFolder(TargetFolder, FolderToRemove) end

---Get the given folder's display name
---@param Folder UMovieSceneFolder
---@return string
function UMovieSceneFolderExtensions.GetFolderName(Folder) end

---Get the display color of the given folder
---@param Folder UMovieSceneFolder
---@return FColor
function UMovieSceneFolderExtensions.GetFolderColor(Folder) end

---Get the tracks contained by this folder
---@param Folder UMovieSceneFolder
---@return TArray_UMovieSceneTrack_
function UMovieSceneFolderExtensions.GetChildTracks(Folder) end

---Get the object bindings contained by this folder
---@param Folder UMovieSceneFolder
---@return TArray_FMovieSceneBindingProxy_
function UMovieSceneFolderExtensions.GetChildObjectBindings(Folder) end

---Get the child folders of a given folder
---@param Folder UMovieSceneFolder
---@return TArray_UMovieSceneFolder_
function UMovieSceneFolderExtensions.GetChildFolders(Folder) end

---Add a track to this folder
---@param Folder UMovieSceneFolder
---@param InTrack UMovieSceneTrack
---@return boolean
function UMovieSceneFolderExtensions.AddChildTrack(Folder, InTrack) end

---Add a guid for an object binding to this folder
---@param Folder UMovieSceneFolder
---@param InObjectBinding FMovieSceneBindingProxy
---@return boolean
function UMovieSceneFolderExtensions.AddChildObjectBinding(Folder, InObjectBinding) end

---Add a child folder to the target folder
---@param TargetFolder UMovieSceneFolder
---@param FolderToAdd UMovieSceneFolder
---@return boolean
function UMovieSceneFolderExtensions.AddChildFolder(TargetFolder, FolderToAdd) end

