---Structure to represent a single property the user wants to bake out for a given set of materials
---@class FPropertyEntry
---@field public Property integer @Property which should be baked out
---@field public bUseCustomSize boolean @Whether or not to use the value of custom size for the output texture
---@field public CustomSize FIntPoint @Defines the size of the output textures for the baked out material properties
---@field public bUseConstantValue boolean @Wheter or not to use Constant Value as the final 'baked out' value for the this property
---@field public ConstantValue number @Defines the value representing this property in the final proxy material
local FPropertyEntry = {}
