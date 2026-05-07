---@class FSoundGroup
---@field public SoundGroup integer @The sound group enumeration we are setting values for
---@field public DisplayName string @An override display name for custom game sound groups
---@field public bAlwaysDecompressOnLoad boolean @Whether sounds in this group should always decompress on load
---@field public DecompressedDuration number @Sound duration in seconds below which sounds are entirely expanded to PCM at load time Disregarded if bAlwaysDecompressOnLoad is true
local FSoundGroup = {}
