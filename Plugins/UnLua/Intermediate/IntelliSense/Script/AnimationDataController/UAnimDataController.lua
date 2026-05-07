---@class UAnimDataController : UObject
---@field private Model TWeakObjectPtr<UAnimDataModel>
---@field private ModelInterface TScriptInterface<UAnimationDataModel>
local UAnimDataController = {}

---@param Skeleton USkeleton
---@param SupportedCurveType ERawCurveTrackTypes
---@param bShouldTransact boolean @[opt] 
function UAnimDataController:UpdateCurveNamesFromSkeleton(Skeleton, SupportedCurveType, bShouldTransact) end

---Replace the keys for the transform curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.
---@param CurveId FAnimationCurveIdentifier
---@param TransformValues TArray_FTransform_
---@param TimeKeys TArray_number_
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:SetTransformCurveKeys(CurveId, TransformValues, TimeKeys, bShouldTransact) end

---Sets a single key for the transform curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.
---In case a key for any of the individual transform channel curves already exists the value is replaced.
---@param CurveId FAnimationCurveIdentifier
---@param Time number
---@param Value FTransform
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:SetTransformCurveKey(CurveId, Time, Value, bShouldTransact) end

---@param Length number
---@param bShouldTransact boolean @[opt] 
function UAnimDataController:SetPlayLength(Length, bShouldTransact) end

---Sets the total play-able length in seconds. Broadcasts a EAnimDataModelNotifyType::SequenceLengthChanged notify if successful.
---The number of frames and keys for the provided length is recalculated according to the current value of UAnimDataModel::FrameRate.
---@param NewLengthInFrames FFrameNumber
---@param bShouldTransact boolean @[opt] 
function UAnimDataController:SetNumberOfFrames(NewLengthInFrames, bShouldTransact) end

---Sets the AnimDataModel instance this controller is supposed to be targeting
---@param InModel TScriptInterface_UAnimationDataModel_
function UAnimDataController:SetModel(InModel) end

---Sets the frame rate according to which the bone animation is expected to be sampled. Broadcasts a EAnimDataModelNotifyType::FrameRateChanged notify if successful.
---The number of frames and keys for the provided frame rate is recalculated according to the current value of UAnimDataModel::PlayLength.
---@param FrameRate FFrameRate
---@param bShouldTransact boolean @[opt] 
function UAnimDataController:SetFrameRate(FrameRate, bShouldTransact) end

---Replace the keys for the curve with provided identifier and name. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.
---@param CurveId FAnimationCurveIdentifier
---@param CurveKeys TArray_FRichCurveKey_
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:SetCurveKeys(CurveId, CurveKeys, bShouldTransact) end

---Sets a single key for the curve with provided identifier and name. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.
---In case a key for the provided key time already exists the key is replaced.
---@param CurveId FAnimationCurveIdentifier
---@param Key FRichCurveKey
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:SetCurveKey(CurveId, Key, bShouldTransact) end

---Replace the flags for the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveFlagsChanged notify if successful.
---@param CurveId FAnimationCurveIdentifier
---@param Flags integer
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:SetCurveFlags(CurveId, Flags, bShouldTransact) end

---Set an individual flag for the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveFlagsChanged notify if successful.
---@param CurveId FAnimationCurveIdentifier
---@param Flag integer
---@param bState boolean @[opt] 
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:SetCurveFlag(CurveId, Flag, bState, bShouldTransact) end

---Changes the comment of the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveCommentChanged notify if successful.
---Currently changing curve comments is only supported for float curves.
---@param CurveId FAnimationCurveIdentifier
---@param Comment string
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:SetCurveComment(CurveId, Comment, bShouldTransact) end

---Changes the color of the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveColorChanged notify if successful.
---Currently changing curve colors is only supported for float curves.
---@param CurveId FAnimationCurveIdentifier
---@param Color FLinearColor
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:SetCurveColor(CurveId, Color, bShouldTransact) end

---Removes an existing bone animation track with the provided name. Broadcasts a EAnimDataModelNotifyType::TrackChanged notify if successful.
---The provided number of keys provided is expected to match for each component, and be non-zero.
---@param BoneName string
---@param PositionalKeys TArray_FVector_
---@param RotationalKeys TArray_FQuat_
---@param ScalingKeys TArray_FVector_
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:SetBoneTrackKeys(BoneName, PositionalKeys, RotationalKeys, ScalingKeys, bShouldTransact) end

---Scales the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveScaled notify if successful.
---@param CurveId FAnimationCurveIdentifier
---@param Origin number
---@param Factor number
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:ScaleCurve(CurveId, Origin, Factor, bShouldTransact) end

---@param NewLength number
---@param T0 number
---@param T1 number
---@param bShouldTransact boolean @[opt] 
function UAnimDataController:ResizePlayLength(NewLength, T0, T1, bShouldTransact) end

---Sets the total play-able length in seconds. Broadcasts a EAnimDataModelNotifyType::SequenceLengthChanged notify if successful.
---T0 and T1 are expected to represent the window of time that was either added or removed. E.g. for insertion T0 indicates the time
---at which additional time starts and T1 were it ends. For removal T0 indicates the time at which time should be started to remove, and T1 indicates the end. Giving a total of T1 - T0 added or removed length.
---The number of frames and keys for the provided length is recalculated according to the current value of UAnimDataModel::FrameRate.
---@param NewLengthInFrames FFrameNumber
---@param T0 FFrameNumber
---@param T1 FFrameNumber
---@param bShouldTransact boolean @[opt] 
function UAnimDataController:ResizeNumberOfFrames(NewLengthInFrames, T0, T1, bShouldTransact) end

---Sets the total play-able length in seconds and resizes curves. Broadcasts EAnimDataModelNotifyType::SequenceLengthChanged
---and EAnimDataModelNotifyType::CurveChanged notifies if successful.
---T0 and T1 are expected to represent the window of time that was either added or removed. E.g. for insertion T0 indicates the time
---at which additional time starts and T1 were it ends. For removal T0 indicates the time at which time should be started to remove, and T1 indicates the end. Giving a total of T1 - T0 added or removed length.
---The number of frames and keys for the provided length is recalculated according to the current value of UAnimDataModel::FrameRate.
---@param NewLengthInFrames FFrameNumber
---@param T0 FFrameNumber
---@param T1 FFrameNumber
---@param bShouldTransact boolean @[opt] 
function UAnimDataController:ResizeInFrames(NewLengthInFrames, T0, T1, bShouldTransact) end

---@param Length number
---@param T0 number
---@param T1 number
---@param bShouldTransact boolean @[opt] 
function UAnimDataController:Resize(Length, T0, T1, bShouldTransact) end

---Renames the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveRenamed notify if successful.
---@param CurveToRenameId FAnimationCurveIdentifier
---@param NewCurveId FAnimationCurveIdentifier
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:RenameCurve(CurveToRenameId, NewCurveId, bShouldTransact) end

---Removes a single key for the transform curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.
---@param CurveId FAnimationCurveIdentifier
---@param Time number
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:RemoveTransformCurveKey(CurveId, Time, bShouldTransact) end

---Remove a single key from the curve with provided identifier and name. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.
---@param CurveId FAnimationCurveIdentifier
---@param Time number
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:RemoveCurveKey(CurveId, Time, bShouldTransact) end

---Remove the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveRemoved notify if successful.
---@param CurveId FAnimationCurveIdentifier
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:RemoveCurve(CurveId, bShouldTransact) end

---Removes an existing bone animation track with the provided name. Broadcasts a EAnimDataModelNotifyType::TrackRemoved notify if successful.
---@param BoneName string
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:RemoveBoneTrack(BoneName, bShouldTransact) end

---Remove a single key from the attribute with provided identifier. Broadcasts a EAnimDataModelNotifyType::AttributeChanged notify if successful.
---@param AttributeIdentifier FAnimationAttributeIdentifier
---@param Time number
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:RemoveAttributeKey(AttributeIdentifier, Time, bShouldTransact) end

---Removes an attribute, if found, with the provided information. Broadcasts a EAnimDataModelNotifyType::AttributeRemoved notify if successful.
---@param AttributeIdentifier FAnimationAttributeIdentifier
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:RemoveAttribute(AttributeIdentifier, bShouldTransact) end

---Removes all the curves of the provided type. Broadcasts a EAnimDataModelNotifyType::CurveRemoved for each removed curve, wrapped within BracketOpened/BracketClosed notifies.
---@param SupportedCurveType ERawCurveTrackTypes
---@param bShouldTransact boolean @[opt] 
function UAnimDataController:RemoveAllCurvesOfType(SupportedCurveType, bShouldTransact) end

---Removes all existing Bone Animation tracks. Broadcasts a EAnimDataModelNotifyType::TrackRemoved for each removed track, wrapped within BracketOpened/BracketClosed notifies.
---@param bShouldTransact boolean @[opt] 
function UAnimDataController:RemoveAllBoneTracks(bShouldTransact) end

---Removes all attributes for the specified bone name, if any. Broadcasts a EAnimDataModelNotifyType::AttributeRemoved notify for each removed attribute.
---@param BoneName string
---@param bShouldTransact boolean @[opt] 
---@return integer
function UAnimDataController:RemoveAllAttributesForBone(BoneName, bShouldTransact) end

---Removes all stored attributes. Broadcasts a EAnimDataModelNotifyType::AttributeRemoved notify for each removed attribute.
---@param bShouldTransact boolean @[opt] 
---@return integer
function UAnimDataController:RemoveAllAttributes(bShouldTransact) end

---Opens an interaction bracket, used for combining a set of controller actions. Broadcasts a EAnimDataModelNotifyType::BracketOpened notify,
---this can be used by any Views or dependent systems to halt any unnecessary or invalid operations until the (last) bracket is closed.
---@param InTitle string
---@param bShouldTransact boolean @[opt] 
function UAnimDataController:OpenBracket(InTitle, bShouldTransact) end

---@param BoneName string
---@param DesiredIndex integer
---@param bShouldTransact boolean @[opt] 
---@return integer
function UAnimDataController:InsertBoneTrack(BoneName, DesiredIndex, bShouldTransact) end

---
---@return TScriptInterface_UAnimationDataModel_
function UAnimDataController:GetModelInterface() end

---@param Skeleton USkeleton
---@param SupportedCurveType ERawCurveTrackTypes
---@param bShouldTransact boolean @[opt] 
function UAnimDataController:FindOrAddCurveNamesOnSkeleton(Skeleton, SupportedCurveType, bShouldTransact) end

---Duplicated the curve with the identifier. Broadcasts a EAnimDataModelNotifyType::CurveAdded notify if successful.
---@param CopyCurveId FAnimationCurveIdentifier
---@param NewCurveId FAnimationCurveIdentifier
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:DuplicateCurve(CopyCurveId, NewCurveId, bShouldTransact) end

---Duplicated the attribute (curve) with the identifier. Broadcasts a EAnimDataModelNotifyType::AttributeAdded notify if successful.
---@param AttributeIdentifier FAnimationAttributeIdentifier
---@param NewAttributeIdentifier FAnimationAttributeIdentifier
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:DuplicateAttribute(AttributeIdentifier, NewAttributeIdentifier, bShouldTransact) end

---Closes a previously opened interaction bracket, used for combining a set of controller actions. Broadcasts a EAnimDataModelNotifyType::BracketClosed notify.
---@param bShouldTransact boolean @[opt] 
function UAnimDataController:CloseBracket(bShouldTransact) end

---Adds a new curve with the provided information. Broadcasts a EAnimDataModelNotifyType::CurveAdded notify if successful.
---@param CurveId FAnimationCurveIdentifier
---@param CurveFlags integer @[opt] 
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:AddCurve(CurveId, CurveFlags, bShouldTransact) end

---@param BoneName string
---@param bShouldTransact boolean @[opt] 
---@return integer
function UAnimDataController:AddBoneTrack(BoneName, bShouldTransact) end

---@param BoneName string
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:AddBoneCurve(BoneName, bShouldTransact) end

---Adds a new attribute with the provided information. Broadcasts a EAnimDataModelNotifyType::AttributeAdded notify if successful.
---@param AttributeIdentifier FAnimationAttributeIdentifier
---@param bShouldTransact boolean @[opt] 
---@return boolean
function UAnimDataController:AddAttribute(AttributeIdentifier, bShouldTransact) end

