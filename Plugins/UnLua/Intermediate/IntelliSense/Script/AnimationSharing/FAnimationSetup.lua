---@class FAnimationSetup
---@field public AnimSequence UAnimSequence @Animation Sequence to play for this particular setup
---@field public AnimBlueprint TSubclassOf<UAnimSharingStateInstance> @Animation blueprint to use for playing back the Animation Sequence
---@field public NumRandomizedInstances FPerPlatformInt @The number of randomized instances created from this setup, it will create instance with different start time offsets (Length / Number of Instance) * InstanceIndex
---@field public Enabled FPerPlatformBool @Whether or not this setup is enabled for specific platforms
local FAnimationSetup = {}
