---World Bookmarks are assets that stores the state of the editor world.
---@class UWorldBookmark : UBookmarkBase
---@field private EditorState FEditorStateCollection @State of the editor.
---@field private CategoryGuid FGuid
---@field private BookmarkGuid FGuid @BookmarkGuid is our key to fetch the user settings for this bookmark in the Bookmarks.ini config file. It will remain unique even if redirectors are created for the world or the bookmark itself.
---@field private LastLoadedTimeStampUTC FDateTime @Last loaded time (UTC)
---@field private bFavorite boolean @User favorite
---@field private BookmarkAssetPath string @Unused - The sole purpose of this property is to help users who would want to investigate/make changes to the ini themselves, as GUIDs are pretty opaque.
local UWorldBookmark = {}

