---@class UEnvQueryTest_Volume : UEnvQueryTest
---@field private VolumeContext TSubclassOf<UEnvQueryContext> @Context that populates a list of Actors derived from AVolume to test against
---@field private VolumeClass TSubclassOf<AVolume> @If VolumeContext is null, AVolume Class will be used to populate a list of AVolume to test against
---@field private bDoComplexVolumeTest boolean @If bDoComplexVolumeTest is set, it will use a full volume physic test (not only a bounding box test)
---@field private bSkipTestIfNoVolumes boolean @If no volumes are returned to evaluate the points against then just ignore the test rather than failing each item
local UEnvQueryTest_Volume = {}

