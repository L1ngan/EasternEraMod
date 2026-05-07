---Handles animation of skeletal mesh actors using animation ControlRigs
---@class UMovieSceneControlRigParameterTrack : UMovieSceneNameableTrack
---@field private SectionToKeyPerControl TMap<string, TWeakObjectPtr<UMovieSceneSection>>
---@field private ControlRig UControlRig @Control Rig we control
---@field private SectionToKey UMovieSceneSection @Section we should Key
---@field private Sections TArray<UMovieSceneSection> @The sections owned by this track .
---@field private TrackName string @Unique Name
---@field private ControlsRotationOrder TMap<string, FControlRotationOrder> @Uses Rotation Order
---@field private PriorityOrder integer
---@field private ControlRigSettingsOverrides FInstancedPropertyBag @Stores control rig public variable overrides, will switch to the same override system that rig module uses in the future
---@field private GameWorldControlRigs TMap<TWeakObjectPtr<UWorld>, UControlRig> @copy of the controlled control rig that we use in the game world so editor control rig doesn't conflict
local UMovieSceneControlRigParameterTrack = {}

