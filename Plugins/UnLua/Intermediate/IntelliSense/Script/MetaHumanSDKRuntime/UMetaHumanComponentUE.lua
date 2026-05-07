---@class UMetaHumanComponentUE : UMetaHumanComponentBase
---@field private PostProcessAnimBP TSoftClassPtr<UAnimInstance> @The post-processing AnimBP to use for the body parts when either the physics asset or the control rig are set. Use the ABP_Clothing_PostProcess shipped along with MetaHumans. The MetaHuman component will control given variables to e.g. set the LOD thresholds.
local UMetaHumanComponentUE = {}

