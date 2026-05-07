---Defines how a sound loops; either indefinitely, or for a set number of times.
---Note: The Looping node should only be used for logical or procedural looping such as introducing a delay.
---These sounds will not be played seamlessly. If you want a sound to loop seamlessly and indefinitely,
---use the Looping flag on the Wave Player node for that sound.
---@class USoundNodeLooping : USoundNode
---@field public LoopCount integer @The amount of times to loop
---@field public bLoopIndefinitely boolean @If enabled, the node will continue to loop indefinitely regardless of the Loop Count value.
local USoundNodeLooping = {}

