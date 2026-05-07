---Represents a folder used for organizing objects in tracks in a movie scene.
---@class UMovieSceneFolder : UObject
---@field private FolderName string @The name of this folder.
---@field private ChildFolders TArray<UMovieSceneFolder> @The folders contained by this folder.
---@field private ChildTracks TArray<UMovieSceneTrack> @The tracks contained by this folder.
---@field private ChildObjectBindingStrings TArray<string> @The guid strings used to serialize the guids for the object bindings contained by this folder.
---@field private FolderColor FColor @This folder's color
---@field private SortingOrder integer @This folder's desired sorting order
local UMovieSceneFolder = {}

