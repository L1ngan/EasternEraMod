---NOTE: This type has been replaced with FIKRetargetCurveRemapOp.
---@class UPinBoneOp : URetargetOpBase
---@field public BonesToPin TArray<FPinBoneData> @~END UObject interface
---@field public PinTo ERetargetSourceOrTarget
---@field public bCopyTranslation boolean
---@field public bCopyRotation boolean
---@field public bCopyScale boolean
---@field public TranslationMode EPinBoneTranslationMode
---@field public RotationMode EPinBoneRotationMode
---@field public GlobalOffset FTransform
---@field public LocalOffset FTransform
local UPinBoneOp = {}

