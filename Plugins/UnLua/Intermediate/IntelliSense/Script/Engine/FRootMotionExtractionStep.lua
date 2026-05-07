---Struct defining a RootMotionExtractionStep.
---When extracting RootMotion we can encounter looping animations (wrap around), or different animations.
---We break those up into different steps, to help with RootMotion extraction,
---as we can only extract a contiguous range per AnimSequence.
---@class FRootMotionExtractionStep
---@field public AnimSequence UAnimSequence @AnimSequence ref
---@field public StartPosition number @Start position to extract root motion from.
---@field public EndPosition number @End position to extract root motion to.
local FRootMotionExtractionStep = {}
