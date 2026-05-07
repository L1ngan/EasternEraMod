---@class APrecomputedVisibilityOverrideVolume : AVolume
---@field public OverrideVisibleActors TArray<AActor> @Array of actors that will always be considered visible by Precomputed Visibility when viewed from inside this volume.
---@field public OverrideInvisibleActors TArray<AActor> @Array of actors that will always be considered invisible by Precomputed Visibility when viewed from inside this volume.
---@field public OverrideInvisibleLevels TArray<string> @Array of level names whose actors will always be considered invisible by Precomputed Visibility when viewed from inside this volume.
local APrecomputedVisibilityOverrideVolume = {}

