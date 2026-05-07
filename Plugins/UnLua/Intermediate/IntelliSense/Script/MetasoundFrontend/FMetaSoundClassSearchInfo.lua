---Condensed set of class metadata that is serialized to editor-only asset
---tag data, allowing editor scripts and code to search and display MetaSounds
---without loading in asset selection contexts without loading them in entirety.
---@class FMetaSoundClassSearchInfo
---@field public ClassDisplayName string @Human readable DisplayName of Class (optional, overrides the package name in the editor if specified by MetaSound Asset Author).
---@field public ClassDescription string
---@field public Hierarchy TArray<string>
---@field public Keywords TArray<string>
local FMetaSoundClassSearchInfo = {}
