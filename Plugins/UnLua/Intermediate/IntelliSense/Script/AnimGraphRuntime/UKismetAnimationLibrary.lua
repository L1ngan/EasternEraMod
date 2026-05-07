---A library of the most common animation blueprint functions.
---@class UKismetAnimationLibrary : UBlueprintFunctionLibrary
local UKismetAnimationLibrary = {}

---Computes the transform for two bones using inverse kinematics.
---@param RootPos FVector
---@param JointPos FVector
---@param EndPos FVector
---@param JointTarget FVector
---@param Effector FVector
---@param OutJointPos FVector @[out] 
---@param OutEndPos FVector @[out] 
---@param bAllowStretching boolean
---@param StartStretchRatio number
---@param MaxStretchScale number
function UKismetAnimationLibrary.K2_TwoBoneIK(RootPos, JointPos, EndPos, JointTarget, Effector, OutJointPos, OutEndPos, bAllowStretching, StartStretchRatio, MaxStretchScale) end

---This function starts measuring the time for a profiling bracket
function UKismetAnimationLibrary.K2_StartProfilingTimer() end

---This function creates perlin noise from input X, Y, Z, and then range map to RangeOut, and out put to OutX, OutY, OutZ
---@param X number
---@param Y number
---@param Z number
---@param RangeOutMinX number
---@param RangeOutMaxX number
---@param RangeOutMinY number
---@param RangeOutMaxY number
---@param RangeOutMinZ number
---@param RangeOutMaxZ number
---@return FVector
function UKismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap(X, Y, Z, RangeOutMinX, RangeOutMaxX, RangeOutMinY, RangeOutMaxY, RangeOutMinZ, RangeOutMaxZ) end

---This function creates perlin noise for a single float and then range map to RangeOut
---@param Value number
---@param RangeOutMin number
---@param RangeOutMax number
---@return number
function UKismetAnimationLibrary.K2_MakePerlinNoiseAndRemap(Value, RangeOutMin, RangeOutMax) end

---Computes the transform which is "looking" at target position with a local axis.
---@param CurrentTransform FTransform
---@param TargetPosition FVector
---@param LookAtVector FVector
---@param bUseUpVector boolean
---@param UpVector FVector
---@param ClampConeInDegree number
---@return FTransform
function UKismetAnimationLibrary.K2_LookAt(CurrentTransform, TargetPosition, LookAtVector, bUseUpVector, UpVector, ClampConeInDegree) end

---This function ends measuring a profiling bracket and optionally logs the result
---@param bLog boolean @[opt] 
---@param LogPrefix string
---@return number
function UKismetAnimationLibrary.K2_EndProfilingTimer(bLog, LogPrefix) end

---Computes the distance between two bones / sockets and can remap the range.
---@param Component USkeletalMeshComponent
---@param SocketOrBoneNameA string
---@param SocketSpaceA integer
---@param SocketOrBoneNameB string
---@param SocketSpaceB integer
---@param bRemapRange boolean
---@param InRangeMin number
---@param InRangeMax number
---@param OutRangeMin number
---@param OutRangeMax number
---@return number
function UKismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange(Component, SocketOrBoneNameA, SocketSpaceA, SocketOrBoneNameB, SocketSpaceB, bRemapRange, InRangeMin, InRangeMax, OutRangeMin, OutRangeMax) end

---Computes the direction between two bones / sockets.
---@param Component USkeletalMeshComponent
---@param SocketOrBoneNameFrom string
---@param SocketOrBoneNameTo string
---@return FVector
function UKismetAnimationLibrary.K2_DirectionBetweenSockets(Component, SocketOrBoneNameFrom, SocketOrBoneNameTo) end

---This function calculates the velocity of an offset position on a bone / socket over time.
---The bone's / socket's motion can be expressed within a reference frame (another bone / socket).
---You need to hook up a valid PositionHistory variable to this for storage.
---@param DeltaSeconds number
---@param Component USkeletalMeshComponent
---@param SocketOrBoneName string
---@param ReferenceSocketOrBone string
---@param SocketSpace integer
---@param OffsetInBoneSpace FVector
---@param History FPositionHistory @[out] 
---@param NumberOfSamples integer
---@param VelocityMin number
---@param VelocityMax number
---@param EasingType EEasingFuncType
---@param CustomCurve FRuntimeFloatCurve
---@return number
function UKismetAnimationLibrary.K2_CalculateVelocityFromSockets(DeltaSeconds, Component, SocketOrBoneName, ReferenceSocketOrBone, SocketSpace, OffsetInBoneSpace, History, NumberOfSamples, VelocityMin, VelocityMax, EasingType, CustomCurve) end

---This function calculates the velocity of a position changing over time.
---You need to hook up a valid PositionHistory variable to this for storage.
---@param DeltaSeconds number
---@param Position FVector
---@param History FPositionHistory @[out] 
---@param NumberOfSamples integer
---@param VelocityMin number
---@param VelocityMax number
---@return number
function UKismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory(DeltaSeconds, Position, History, NumberOfSamples, VelocityMin, VelocityMax) end

---Returns degree of the angle between Velocity and Rotation forward vector
---The range of return will be from [-180, 180]. Useful for feeding directional blendspaces.
---@param Velocity FVector
---@param BaseRotation FRotator
---@return number
function UKismetAnimationLibrary.CalculateDirection(Velocity, BaseRotation) end

