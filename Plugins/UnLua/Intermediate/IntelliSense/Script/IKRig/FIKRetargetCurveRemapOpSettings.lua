---@class FIKRetargetCurveRemapOpSettings : FIKRetargetOpSettingsBase
---@field public bCopyAllSourceCurves boolean @Whether to copy all curves over to the target animation instance NOTE: This setting also applies when exporting retargeted animations. True: all source curves are copied to the target animation instance/asset False: only remapped curves are copied on the target animation instance/asset
---@field public bRemapCurves boolean @Toggle curve remapping on/off
---@field public CurvesToRemap TArray<FCurveRemapPair> @Add pairs of Source/Target curve names to remap. While retargeting, the animation from the source curves will be redirected to the curves on the target skeletal meshes. Can be used to drive, blendshapes or other downstream systems. NOTE: By default the IK Retargeter will automatically copy all equivalently named curves from the source to the target. Remapping is only necessary when the target curve name(s) are different.
local FIKRetargetCurveRemapOpSettings = {}
