---Skeleton Data Interface provides data related to skinning.
---@class UOptimusAdvancedSkeletonDataInterface : UOptimusComputeDataInterface
---@field public SkinWeightProfile string
---@field public bEnableLayeredSkinning boolean @If turned on, another set of bone matrices are computed per-frame to allow for layered skinning. It is typically used with a secondary skin weight profile storing the weights of a subset of bones like tweaker bones. The bind matrices for these bones are dynamic and computed based on their parent's current transform instead of initial transform
---@field public AttributeBufferArray FOptimusAnimAttributeBufferArray @Per-bone animation attributes, allows for custom bone data to be used in kernels, one of the places you can create animation attributes is Control Rig
local UOptimusAdvancedSkeletonDataInterface = {}

