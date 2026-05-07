---AIDataProvider is an object that can provide collection of properties
---associated with bound pawn owner or request Id.
---Editable properties are used to set up provider instance,
---creating additional filters or ways of accessing data (e.g. gameplay tag of ability)
---Non editable properties are holding data
---@class FAIDataProviderValue
---@field public DataBinding UAIDataProvider @(optional) provider for dynamic data binding
---@field public DataField string @name of provider's value property
local FAIDataProviderValue = {}
