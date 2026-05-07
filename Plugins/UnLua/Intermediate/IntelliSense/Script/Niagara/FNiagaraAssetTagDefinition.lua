---An Asset Tag Definition defines a tag that can be added to various Niagara assets for sorting & filtering purposes.
---@class FNiagaraAssetTagDefinition
---@field public AssetTag string @The Display Name used for this tag.
---@field public AssetFlags integer @Select the asset types this tag can apply to. This is used to hide tags that can never apply for a given type.
---@field public Description string @Further explanation of what this tag is about.
---@field public DisplayType ENiagaraAssetTagDefinitionImportance @Whether this tag should be shown directly or in the drop down for additional filters.
---@field public Color FLinearColor @The color used in UI to represent this tag.
---@field public TagGuid FGuid @The Tag Guid identifies this tag. This makes it possible to change the AssetTag name without it affecting functionality.
local FNiagaraAssetTagDefinition = {}
