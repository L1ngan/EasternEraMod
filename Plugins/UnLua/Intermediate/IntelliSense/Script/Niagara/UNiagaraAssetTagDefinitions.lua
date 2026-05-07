---An Asset Tag Definition defines a tag that can be added to various Niagara assets for sorting & filtering purposes.
---For example, custom tags will show up in the Create Niagara System dialog to filter available emitters.
---They can also be used to filter assets in the content browser, when used with the custom filter option.
---You can modify asset tags in the content browser by right-clicking on a Niagara asset, then use the "Manage Tags" submenu to add or remove them.
---@class UNiagaraAssetTagDefinitions : UObject
---@field private DisplayName string @The display name to use when listing this asset in the Niagara Asset Browser
---@field private Description string @A description for this group of tags. Used for tooltips.
---@field private TagDefinitions TArray<FNiagaraAssetTagDefinition>
---@field private bDisplayTagsAsFlatList boolean @If true, no 'parent' entry for this asset will be displayed in the Niagara Asset Browser. Instead a flat list of the contained tags will be added.
---@field private SortOrder integer @Tags are sorted by asset sort order first, then individually. That means tags of asset with sort order [0] come before tags of asset with sort order [1].
local UNiagaraAssetTagDefinitions = {}

