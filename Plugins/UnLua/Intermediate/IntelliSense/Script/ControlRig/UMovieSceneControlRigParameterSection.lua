---Movie scene section that controls animation controller animation
---@class UMovieSceneControlRigParameterSection : UMovieSceneParameterSection
---@field private ControlRig UControlRig @Control Rig that controls us
---@field public ControlRigClass TSubclassOf<UControlRig> @The class of control rig to instantiate
---@field public ControlsMask TArray<boolean> @Deprecrated, use ControlNameMask
---@field public ControlNameMask TSet<string> @Names of Controls that are masked out on this section
---@field public TransformMask FMovieSceneTransformMask @Mask for Transform Mask
---@field public Weight FMovieSceneFloatChannel @The weight curve for this animation controller section
---@field public ControlChannelMap TMap<string, FChannelMapInfo> @Map from the control name to where it starts as a channel
---@field protected EnumParameterNamesAndCurves TArray<FEnumParameterNameAndCurve> @Enum Curves
---@field protected IntegerParameterNamesAndCurves TArray<FIntegerParameterNameAndCurve> @Integer Curves
---@field protected SpaceChannels TArray<FSpaceControlNameAndChannel> @Space Channels
---@field protected ConstraintsChannels TArray<FConstraintAndActiveChannel> @Space Channels
---@field protected OverrideAssets TArray<TSoftObjectPtr<UControlRigOverrideAsset>>
local UMovieSceneControlRigParameterSection = {}

