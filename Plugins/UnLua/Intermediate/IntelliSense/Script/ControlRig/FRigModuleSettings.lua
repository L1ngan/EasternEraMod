---@class FRigModuleSettings
---@field public Identifier FRigModuleIdentifier @The identifier used to retrieve the module in the module library
---@field public Icon FSoftObjectPath @The icon used for the module in the module library
---@field public Category string @The category of the module
---@field public Keywords string @The keywords of the module
---@field public Description string @The description of the module
---@field public ExposedConnectors TArray<FRigModuleConnector>
local FRigModuleSettings = {}
