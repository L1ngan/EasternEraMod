---Structure storing user facing properties, and is used to identify profiles at the SkeletalMesh level
---@class FSkinWeightProfileInfo
---@field public Name string @Name of the Skin Weight Profile
---@field public DefaultProfile FPerPlatformBool @Whether or not this Profile should be considered the Default loaded for specific LODs rather than the original Skin Weights of the Skeletal Mesh
---@field public DefaultProfileFromLODIndex FPerPlatformInt @When DefaultProfile is set any LOD below this LOD Index will override the Skin Weights of the Skeletal Mesh with the Skin Weights from this Profile
---@field public PerLODSourceFiles TMap<integer, string>
local FSkinWeightProfileInfo = {}
