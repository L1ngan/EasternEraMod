---@class FFoliageVertexColorChannelMask
---@field public UseMask boolean @When checked, foliage will be masked from this mesh using this color channel
---@field public MaskThreshold number @Specifies the threshold value above which the static mesh vertex color value must be, in order for foliage instances to be placed in a specific area
---@field public InvertMask boolean @When unchecked, foliage instances will be placed only when the vertex color in the specified channel(s) is above the threshold amount. When checked, the vertex color must be less than the threshold amount
local FFoliageVertexColorChannelMask = {}
