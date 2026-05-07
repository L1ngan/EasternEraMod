---@class FOptimusAnimAttributeDescription
---@field public Name string
---@field public BoneName string @Used to look for attributes associated with a specific bone. Default to use the root bone
---@field public DataType FOptimusDataTypeRef
---@field public DefaultValueStruct FOptimusValueContainerStruct @Default value if the animation attribute is not found
---@field public HlslId string
---@field public PinName string
local FOptimusAnimAttributeDescription = {}
