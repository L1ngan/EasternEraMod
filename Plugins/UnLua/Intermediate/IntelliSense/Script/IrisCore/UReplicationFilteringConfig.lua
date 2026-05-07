---Object scope hysteresis support. Keep dynamically filtered out objects around for a specified amount of frames.
---Configure behavior via hysteresis profiles that determine the frame timeout per class.
---The filter config for a specific class can then mention the hysteresis profile in order to get the appropriate behavior.
---Example:
---[/Script/IrisCore.ReplicationFilteringConfig]
---bEnableObjectScopeHysteresis=true
---DefaultHysteresisFrameCount=4
---HysteresisUpdateConnectionThrottling=4
---!HysteresisProfiles=ClearArray
---+FilterProfiles=(FilterProfileName=PawnFilterProfile, HysteresisFrameCount=30)
---[/Script/ IrisCore.ObjectReplicationBridgeConfig]
---+FilterConfigs=(ClassName=/Script/Engine.Pawn, DynamicFilterName=Spatial, FilterProfile=PawnFilterProfile)
---@class UReplicationFilteringConfig : UObject
---@field private bEnableObjectScopeHysteresis boolean @If enabled a dynamically filtered out object will not be considered out of scope for a particular number of frames.
---@field private DefaultHysteresisFrameCount integer @How many frames a dynamically filtered out object should still be considered in scope by default. Can be overridden with HysteresisClassConfigs.
---@field private HysteresisUpdateConnectionThrottling integer @Update every Nth connection each frame. If 1 then every connection will be updated every frame, if 2 then half of the connections will be updated per frame and so on. Keep this number low. The value will be clamped to 128. Due to the nature of the throttling objects may linger for N-1 extra frames before considered out of scope.
---@field private HysteresisProfiles TArray<FObjectScopeHysteresisProfile> @Specialized configuration profiles
local UReplicationFilteringConfig = {}

