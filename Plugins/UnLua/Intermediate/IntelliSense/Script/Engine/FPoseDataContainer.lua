---Pose data container
---Contains animation and curve for all poses
---@class FPoseDataContainer
---@field private PoseFNames TArray<string> @pose names - horizontal data
---@field private Tracks TArray<string> @this is list of tracks - vertical data
---@field private TrackBoneIndices TArray<integer> @cache containting the skeleton indices for FName in Tracks array
---@field private TrackPoseInfluenceIndices TArray<FPoseAssetInfluences>
---@field private Poses TArray<FPoseData> @this is list of poses
---@field private Curves TArray<FAnimCurveBase> @curve meta data # of Curve UIDs should match with Poses.CurveValues.Num
local FPoseDataContainer = {}
