---@class FAINoiseEvent
---@field public NoiseLocation FVector @if not set Instigator's location will be used
---@field public Loudness number @Loudness modifier of the sound. If MaxRange is non-zero, this modifies the range (by multiplication). If there is no MaxRange, then if Square(DistanceToSound) <= Square(HearingRange * Loudness), the sound is heard, false otherwise.
---@field public MaxRange number @Max range at which the sound can be heard. Multiplied by Loudness. A value of 0 indicates that there is no range limit, though listeners are still limited by their own hearing range.
---@field public Instigator AActor @Actor triggering the sound.
---@field public Tag string @Named identifier for the noise.
local FAINoiseEvent = {}
