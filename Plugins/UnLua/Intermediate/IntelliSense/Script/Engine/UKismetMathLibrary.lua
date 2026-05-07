---@class UKismetMathLibrary : UBlueprintFunctionLibrary
local UKismetMathLibrary = {}

---Bitwise XOR (A ^ B)
---@param A integer
---@param B integer
---@return integer
function UKismetMathLibrary.Xor_IntInt(A, B) end

---Bitwise XOR (A ^ B)
---@param A integer
---@param B integer
---@return integer
function UKismetMathLibrary.Xor_Int64Int64(A, B) end

---Returns Value between A and B (inclusive) that wraps around
---@param Value integer
---@param Min integer
---@param Max integer
---@return integer
function UKismetMathLibrary.Wrap(Value, Min, Max) end

---Calculates the new value in a weighted moving average series using the previous value and the weight
---@param CurrentSample FVector
---@param PreviousSample FVector
---@param Weight number
---@return FVector
function UKismetMathLibrary.WeightedMovingAverage_FVector(CurrentSample, PreviousSample, Weight) end

---Calculates the new value in a weighted moving average series using the previous value and the weight
---@param CurrentSample FRotator
---@param PreviousSample FRotator
---@param Weight number
---@return FRotator
function UKismetMathLibrary.WeightedMovingAverage_FRotator(CurrentSample, PreviousSample, Weight) end

---Calculates the new value in a weighted moving average series using the previous value and the weight
---@param CurrentSample number
---@param PreviousSample number
---@param Weight number
---@return number
function UKismetMathLibrary.WeightedMovingAverage_Float(CurrentSample, PreviousSample, Weight) end

---Returns the squared length of the vector's XY components.
---@param A FVector
---@return number
function UKismetMathLibrary.VSizeXYSquared(A) end

---Returns the length of the vector's XY components.
---@param A FVector
---@return number
function UKismetMathLibrary.VSizeXY(A) end

---Returns the squared length of the vector
---@param A FVector
---@return number
function UKismetMathLibrary.VSizeSquared(A) end

---Returns the squared length of a 2D Vector.
---@param A FVector2D
---@return number
function UKismetMathLibrary.VSize2DSquared(A) end

---Returns the length of a 2D Vector.
---@param A FVector2D
---@return number
function UKismetMathLibrary.VSize2D(A) end

---Returns the length of the vector
---@param A FVector
---@return number
function UKismetMathLibrary.VSize(A) end

---Linearly interpolates between A and B based on Alpha (100% of A when Alpha=0 and 100% of B when Alpha=1)
---@param A FVector
---@param B FVector
---@param Alpha number
---@return FVector
function UKismetMathLibrary.VLerp(A, B, Alpha) end

---Tries to reach Target at a constant rate.
---@param Current FVector
---@param Target FVector
---@param DeltaTime number
---@param InterpSpeed number
---@return FVector
function UKismetMathLibrary.VInterpTo_Constant(Current, Target, DeltaTime, InterpSpeed) end

---Tries to reach Target based on distance from Current position, giving a nice smooth feeling when tracking a position.
---@param Current FVector
---@param Target FVector
---@param DeltaTime number
---@param InterpSpeed number
---@return FVector
function UKismetMathLibrary.VInterpTo(Current, Target, DeltaTime, InterpSpeed) end

---Uses a simple spring model to interpolate a vector from Current to Target.
---@param Current FVector
---@param Target FVector
---@param SpringState FVectorSpringState @[out] 
---@param Stiffness number
---@param CriticalDampingFactor number
---@param DeltaTime number
---@param Mass number @[opt] 
---@param TargetVelocityAmount number @[opt] 
---@param bClamp boolean @[opt] 
---@param MinValue FVector @[opt] 
---@param MaxValue FVector @[opt] 
---@param bInitializeFromTarget boolean @[opt] 
---@return FVector
function UKismetMathLibrary.VectorSpringInterp(Current, Target, SpringState, Stiffness, CriticalDampingFactor, DeltaTime, Mass, TargetVelocityAmount, bClamp, MinValue, MaxValue, bInitializeFromTarget) end

---3D vector zero constant (0,0,0)
---@return FVector
function UKismetMathLibrary.Vector_Zero() end

---3D vector Unreal up direction constant (0,0,1)
---@return FVector
function UKismetMathLibrary.Vector_Up() end

---When this vector contains Euler angles (degrees), ensure that angles are between +/-180
---@param A FVector @[out] 
function UKismetMathLibrary.Vector_UnwindEuler(A) end

---Converts a Cartesian unit vector into spherical coordinates on the unit sphere.
---@param A FVector
---@return FVector2D
function UKismetMathLibrary.Vector_UnitCartesianToSpherical(A) end

---Converts a vector containing degree values to a vector containing radian values.
---@param A FVector
---@return FVector
function UKismetMathLibrary.Vector_ToRadians(A) end

---Converts a vector containing radian values to a vector containing degree values.
---@param A FVector
---@return FVector
function UKismetMathLibrary.Vector_ToDegrees(A) end

---Gets a copy of this vector snapped to a grid.
---@param InVect FVector
---@param InGridSize number
---@return FVector
function UKismetMathLibrary.Vector_SnappedToGrid(InVect, InGridSize) end

---Interpolate from a vector to the direction of another vector along a spherical path.
---@param Vector FVector
---@param Direction FVector
---@param Alpha number
---@return FVector
function UKismetMathLibrary.Vector_SlerpVectorToDirection(Vector, Direction, Alpha) end

---Interpolate from normalized vector A to normalized vector B along a spherical path.
---@param NormalA FVector
---@param NormalB FVector
---@param Alpha number
---@return FVector
function UKismetMathLibrary.Vector_SlerpNormals(NormalA, NormalB, Alpha) end

---Set the values of the vector directly.
---@param A FVector @[out] 
---@param X number
---@param Y number
---@param Z number
function UKismetMathLibrary.Vector_Set(A, X, Y, Z) end

---3D vector Unreal right direction constant (0,1,0)
---@return FVector
function UKismetMathLibrary.Vector_Right() end

---Gets the reciprocal of this vector, avoiding division by zero.
---Zero components are set to BIG_NUMBER.
---@param A FVector
---@return FVector
function UKismetMathLibrary.Vector_Reciprocal(A) end

---Gets a copy of this vector projected onto the input vector, which is assumed to be unit length.
---@param V FVector
---@param InNormal FVector
---@return FVector
function UKismetMathLibrary.Vector_ProjectOnToNormal(V, InNormal) end

---3D vector one constant (1,1,1)
---@return FVector
function UKismetMathLibrary.Vector_One() end

---Calculates normalized unit version of vector without checking for zero length.
---@param A FVector
---@return FVector
function UKismetMathLibrary.Vector_NormalUnsafe(A) end

---Normalize this vector in-place if it is large enough or set it to (0,0,0) otherwise.
---@param A FVector @[out] 
---@param Tolerance number @[opt] 
function UKismetMathLibrary.Vector_Normalize(A, Tolerance) end

---Gets a normalized unit copy of the 2D components of the vector, ensuring it is safe to do so. Z is set to zero.
---Returns zero vector if vector length is too small to normalize.
---@param A FVector
---@param Tolerance number @[opt] 
---@return FVector
function UKismetMathLibrary.Vector_Normal2D(A, Tolerance) end

---Mirrors a vector about a plane.
---@param A FVector
---@param InPlane FPlane
---@return FVector
function UKismetMathLibrary.Vector_MirrorByPlane(A, InPlane) end

---3D vector Unreal left direction constant (0,-1,0)
---@return FVector
function UKismetMathLibrary.Vector_Left() end

---Checks whether all components of the vector are exactly zero.
---@param A FVector
---@return boolean
function UKismetMathLibrary.Vector_IsZero(A) end

---Determines if vector is normalized / unit (length 1) within specified squared tolerance.
---@param A FVector
---@param SquaredLenthTolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.Vector_IsUnit(A, SquaredLenthTolerance) end

---Checks whether all components of this vector are the same, within a tolerance.
---@param A FVector
---@param Tolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.Vector_IsUniform(A, Tolerance) end

---Determines if vector is normalized / unit (length 1).
---@param A FVector
---@return boolean
function UKismetMathLibrary.Vector_IsNormal(A) end

---Checks whether vector is near to zero within a specified tolerance.
---@param A FVector
---@param Tolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.Vector_IsNearlyZero(A, Tolerance) end

---Determines if any component is not a number (NAN)
---@param A FVector
---@return boolean
function UKismetMathLibrary.Vector_IsNAN(A) end

---Convert a direction vector into a 'heading' angle.
---@param A FVector
---@return number
function UKismetMathLibrary.Vector_HeadingAngle(A) end

---Get a copy of the vector as sign only.
---Each component is set to +1 or -1, with the sign of zero treated as +1.
---@param A FVector
---@return FVector
function UKismetMathLibrary.Vector_GetSignVector(A) end

---Projects 2D components of vector based on Z.
---@param A FVector
---@return FVector
function UKismetMathLibrary.Vector_GetProjection(A) end

---Find the minimum absolute element (abs(X), abs(Y) or abs(Z)) of a vector
---@param A FVector
---@return number
function UKismetMathLibrary.Vector_GetAbsMin(A) end

---Find the maximum absolute element (abs(X), abs(Y) or abs(Z)) of a vector
---@param A FVector
---@return number
function UKismetMathLibrary.Vector_GetAbsMax(A) end

---Get a copy of this vector with absolute value of each component.
---@param A FVector
---@return FVector
function UKismetMathLibrary.Vector_GetAbs(A) end

---3D vector Unreal forward direction constant (1,0,0)
---@return FVector
function UKismetMathLibrary.Vector_Forward() end

---3D vector Unreal down direction constant (0,0,-1)
---@return FVector
function UKismetMathLibrary.Vector_Down() end

---Squared distance between two points.
---@param V1 FVector
---@param V2 FVector
---@return number
function UKismetMathLibrary.Vector_DistanceSquared(V1, V2) end

---Squared euclidean distance between two points in the XY plane (ignoring Z).
---@param V1 FVector
---@param V2 FVector
---@return number
function UKismetMathLibrary.Vector_Distance2DSquared(V1, V2) end

---Euclidean distance between two points in the XY plane (ignoring Z).
---@param V1 FVector
---@param V2 FVector
---@return number
function UKismetMathLibrary.Vector_Distance2D(V1, V2) end

---Distance between two points.
---@param V1 FVector
---@param V2 FVector
---@return number
function UKismetMathLibrary.Vector_Distance(V1, V2) end

---Returns the cosine of the angle between this vector and another projected onto the XY plane (no Z).
---@param A FVector
---@param B FVector
---@return number
function UKismetMathLibrary.Vector_CosineAngle2D(A, B) end

---Find the minimum elements (X, Y and Z) between the two vector's components
---@param A FVector
---@param B FVector
---@return FVector
function UKismetMathLibrary.Vector_ComponentMin(A, B) end

---Find the maximum elements (X, Y and Z) between the two vector's components
---@param A FVector
---@param B FVector
---@return FVector
function UKismetMathLibrary.Vector_ComponentMax(A, B) end

---Create a copy of this vector, with the maximum 2D magnitude/size/length clamped to MaxSize. Z is unchanged.
---@param A FVector
---@param Max number
---@return FVector
function UKismetMathLibrary.Vector_ClampSizeMax2D(A, Max) end

---Create a copy of this vector, with its maximum magnitude/size/length clamped to MaxSize.
---@param A FVector
---@param Max number
---@return FVector
function UKismetMathLibrary.Vector_ClampSizeMax(A, Max) end

---Create a copy of this vector, with the 2D magnitude/size/length clamped between Min and Max. Z is unchanged.
---@param A FVector
---@param Min number
---@param Max number
---@return FVector
function UKismetMathLibrary.Vector_ClampSize2D(A, Min, Max) end

---Get a copy of this vector, clamped inside of an axis aligned cube centered at the origin.
---@param InVect FVector
---@param InRadius number
---@return FVector
function UKismetMathLibrary.Vector_BoundedToCube(InVect, InRadius) end

---Get a copy of this vector, clamped inside of the specified axis aligned cube.
---@param InVect FVector
---@param InBoxMin FVector
---@param InBoxMax FVector
---@return FVector
function UKismetMathLibrary.Vector_BoundedToBox(InVect, InBoxMin, InBoxMax) end

---3D vector Unreal backward direction constant (-1,0,0)
---@return FVector
function UKismetMathLibrary.Vector_Backward() end

---Assign the values of the supplied vector.
---@param A FVector @[out] 
---@param InVector FVector
function UKismetMathLibrary.Vector_Assign(A, InVector) end

---Add a vector to this and clamp the result to an axis aligned cube centered at the origin.
---@param A FVector @[out] 
---@param InAddVect FVector
---@param InRadius number
function UKismetMathLibrary.Vector_AddBounded(A, InAddVect, InRadius) end

---4D vector zero constant (0,0,0)
---@return FVector4
function UKismetMathLibrary.Vector4_Zero() end

---Returns the squared length of the vector. The W element is ignored.
---@param A FVector4
---@return number
function UKismetMathLibrary.Vector4_SizeSquared3(A) end

---Returns the squared length of the vector.
---@param A FVector4
---@return number
function UKismetMathLibrary.Vector4_SizeSquared(A) end

---Returns the length of the vector. The W element is ignored.
---@param A FVector4
---@return number
function UKismetMathLibrary.Vector4_Size3(A) end

---Returns the length of the vector.
---@param A FVector4
---@return number
function UKismetMathLibrary.Vector4_Size(A) end

---Set the values of the vector directly.
---@param A FVector4 @[out] 
---@param X number
---@param Y number
---@param Z number
---@param W number
function UKismetMathLibrary.Vector4_Set(A, X, Y, Z, W) end

---Calculates normalized unit version of vector without checking for zero length. The W element is ignored and the returned vector has W=0.
---@param A FVector4
---@return FVector4
function UKismetMathLibrary.Vector4_NormalUnsafe3(A) end

---Normalize this vector in-place if it is large enough or set it to (0,0,0,0) otherwise. The W element is ignored and the returned vector has W=0.
---@param A FVector4 @[out] 
---@param Tolerance number @[opt] 
function UKismetMathLibrary.Vector4_Normalize3(A, Tolerance) end

---Gets a normalized unit copy of the vector, ensuring it is safe to do so based on the length. The W element is ignored and the returned vector has W=0.
---Returns zero vector if vector length is too small to safely normalize.
---@param A FVector4
---@param Tolerance number @[opt] 
---@return FVector4
function UKismetMathLibrary.Vector4_Normal3(A, Tolerance) end

---Gets a negated copy of the vector. Equivalent to -Vector for scripts.
---@param A FVector4
---@return FVector4
function UKismetMathLibrary.Vector4_Negated(A) end

---Given a direction vector and a surface normal, returns the vector reflected across the surface normal.
---Produces a result like shining a laser at a mirror!
---The W element is ignored.
---@param Direction FVector4
---@param SurfaceNormal FVector4
---@return FVector4
function UKismetMathLibrary.Vector4_MirrorByVector3(Direction, SurfaceNormal) end

---Checks whether all components of the vector are exactly zero.
---@param A FVector4
---@return boolean
function UKismetMathLibrary.Vector4_IsZero(A) end

---Determines if vector is normalized / unit (length 1) within specified squared tolerance. The W element is ignored.
---@param A FVector4
---@param SquaredLenthTolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.Vector4_IsUnit3(A, SquaredLenthTolerance) end

---Determines if vector is normalized / unit (length 1). The W element is ignored.
---@param A FVector4
---@return boolean
function UKismetMathLibrary.Vector4_IsNormal3(A) end

---Checks whether vector is near to zero within a specified tolerance. The W element is ignored.
---@param A FVector4
---@param Tolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.Vector4_IsNearlyZero3(A, Tolerance) end

---Determines if any component is not a number (NAN)
---@param A FVector4
---@return boolean
function UKismetMathLibrary.Vector4_IsNAN(A) end

---Returns the dot product of two vectors - see http://mathworld.wolfram.com/DotProduct.html The W element is ignored.
---@param A FVector4
---@param B FVector4
---@return number
function UKismetMathLibrary.Vector4_DotProduct3(A, B) end

---Returns the dot product of two vectors - see http://mathworld.wolfram.com/DotProduct.html
---@param A FVector4
---@param B FVector4
---@return number
function UKismetMathLibrary.Vector4_DotProduct(A, B) end

---Returns the cross product of two vectors - see  http://mathworld.wolfram.com/CrossProduct.html
---@param A FVector4
---@param B FVector4
---@return FVector4
function UKismetMathLibrary.Vector4_CrossProduct3(A, B) end

---Assign the values of the supplied vector.
---@param A FVector4 @[out] 
---@param InVector FVector4
function UKismetMathLibrary.Vector4_Assign(A, InVector) end

---Tries to reach Target at a constant rate.
---@param Current FVector2D
---@param Target FVector2D
---@param DeltaTime number
---@param InterpSpeed number
---@return FVector2D
function UKismetMathLibrary.Vector2DInterpTo_Constant(Current, Target, DeltaTime, InterpSpeed) end

---Tries to reach Target based on distance from Current position, giving a nice smooth feeling when tracking a position.
---@param Current FVector2D
---@param Target FVector2D
---@param DeltaTime number
---@param InterpSpeed number
---@return FVector2D
function UKismetMathLibrary.Vector2DInterpTo(Current, Target, DeltaTime, InterpSpeed) end

---2D zero vector constant (0,0)
---@return FVector2D
function UKismetMathLibrary.Vector2D_Zero() end

---2D unit vector constant along the 45 degree angle or symmetrical positive axes (sqrt(.5),sqrt(.5)) or (.707,.707). https://en.wikipedia.org/wiki/Unit_vector
---@return FVector2D
function UKismetMathLibrary.Vector2D_Unit45Deg() end

---2D one vector constant (1,1)
---@return FVector2D
function UKismetMathLibrary.Vector2D_One() end

---Easing between A and B using a specified easing function
---@param A FVector
---@param B FVector
---@param Alpha number
---@param EasingFunc integer
---@param BlendExp number @[opt] 
---@param Steps integer @[opt] 
---@return FVector
function UKismetMathLibrary.VEase(A, B, Alpha, EasingFunc, BlendExp, Steps) end

---Returns the UTC date and time on this computer
---@return FDateTime
function UKismetMathLibrary.UtcNow() end

---Transform the input vector4 by a provided matrix4x4 and returns the resulting vector4.
---@param Matrix FMatrix
---@param Vec4 FVector4
---@return FVector4
function UKismetMathLibrary.TransformVector4(Matrix, Vec4) end

---Transform a rotator by the supplied transform.
---For example, if T was an object's transform, this would transform a rotation from local space to world space.
---@param T FTransform
---@param Rotation FRotator
---@return FRotator
function UKismetMathLibrary.TransformRotation(T, Rotation) end

---Transform a position by the supplied transform.
---For example, if T was an object's transform, this would transform a position from local space to world space.
---@param T FTransform
---@param Location FVector
---@return FVector
function UKismetMathLibrary.TransformLocation(T, Location) end

---Transform a direction vector by the supplied transform - will not change its length.
---For example, if T was an object's transform, this would transform a direction from local space to world space.
---@param T FTransform
---@param Direction FVector
---@return FVector
function UKismetMathLibrary.TransformDirection(T, Direction) end

---Calculates the determinant of the transform (converts to FMatrix internally)
---@param Transform FTransform
---@return number
function UKismetMathLibrary.Transform_Determinant(Transform) end

---Returns this date as the number of seconds since the Unix Epoch (January 1st of 1970).
---@param Time FDateTime
---@return number
function UKismetMathLibrary.ToUnixTimestampDouble(Time) end

---Returns this date as the number of seconds since the Unix Epoch (January 1st of 1970).
---@param Time FDateTime
---@return integer
function UKismetMathLibrary.ToUnixTimestamp(Time) end

---Get a copy of the vector as sign only.
---Each component is set to +1 or -1, with the sign of zero treated as +1.
---@param A FVector2D
---@return FVector2D
function UKismetMathLibrary.ToSign2D(A) end

---Get this vector as a vector where each component has been rounded to the nearest int.
---@param A FVector2D
---@return FVector2D
function UKismetMathLibrary.ToRounded2D(A) end

---Converts this color value to a hexadecimal string. The format of the string is RRGGBBAA.
---@param InColor FLinearColor
---@return string
function UKismetMathLibrary.ToHex_LinearColor(InColor) end

---Util to convert this vector into a unit direction vector and its original length.
---@param A FVector2D
---@param OutDir FVector2D @[out] 
---@param OutLength number @[out] 
function UKismetMathLibrary.ToDirectionAndLength2D(A, OutDir, OutLength) end

---Returns the local date on this computer
---@return FDateTime
function UKismetMathLibrary.Today() end

---Linearly interpolates between A and B based on Alpha (100% of A when Alpha=0 and 100% of B when Alpha=1).
---@param A FTransform
---@param B FTransform
---@param Alpha number
---@param InterpMode integer @[opt] 
---@return FTransform
function UKismetMathLibrary.TLerp(A, B, Alpha, InterpMode) end

---Tries to reach Target transform based on distance from Current position, giving a nice smooth feeling when tracking a position.
---@param Current FTransform
---@param Target FTransform
---@param DeltaTime number
---@param InterpSpeed number
---@return FTransform
function UKismetMathLibrary.TInterpTo(Current, Target, DeltaTime, InterpSpeed) end

---Returns a zero time span value
---@return FTimespan
function UKismetMathLibrary.TimespanZeroValue() end

---Returns the ratio between two time spans (A / B), handles zero values
---@param A FTimespan
---@param B FTimespan
---@return number
function UKismetMathLibrary.TimespanRatio(A, B) end

---Returns the minimum time span value
---@return FTimespan
function UKismetMathLibrary.TimespanMinValue() end

---Returns the maximum time span value
---@return FTimespan
function UKismetMathLibrary.TimespanMaxValue() end

---Converts a time span string to a Timespan object
---@param TimespanString string
---@param Result FTimespan @[out] 
---@return boolean
function UKismetMathLibrary.TimespanFromString(TimespanString, Result) end

---Ease between A and B using a specified easing function.
---@param A FTransform
---@param B FTransform
---@param Alpha number
---@param EasingFunc integer
---@param BlendExp number @[opt] 
---@param Steps integer @[opt] 
---@return FTransform
function UKismetMathLibrary.TEase(A, B, Alpha, EasingFunc, BlendExp, Steps) end

---Returns the tan of A (expects Radians)
---@param A number
---@return number
function UKismetMathLibrary.Tan(A) end

---Vector subtraction
---@param A FVector
---@param B FVector
---@return FVector
function UKismetMathLibrary.Subtract_VectorVector(A, B) end

---Subtracts an integer from each component of a vector
---@param A FVector
---@param B integer
---@return FVector
function UKismetMathLibrary.Subtract_VectorInt(A, B) end

---Subtracts a float from each component of a vector
---@param A FVector
---@param B number
---@return FVector
function UKismetMathLibrary.Subtract_VectorFloat(A, B) end

---Returns subtraction of Vector B from Vector A (A - B)
---@param A FVector4
---@param B FVector4
---@return FVector4
function UKismetMathLibrary.Subtract_Vector4Vector4(A, B) end

---Returns subtraction of Vector B from Vector A (A - B)
---@param A FVector2D
---@param B FVector2D
---@return FVector2D
function UKismetMathLibrary.Subtract_Vector2DVector2D(A, B) end

---Returns Vector A subtracted by B
---@param A FVector2D
---@param B number
---@return FVector2D
function UKismetMathLibrary.Subtract_Vector2DFloat(A, B) end

---Subtraction (A - B)
---@param A FTimespan
---@param B FTimespan
---@return FTimespan
function UKismetMathLibrary.Subtract_TimespanTimespan(A, B) end

---Returns subtraction of Vector B from Vector A (A - B)
---@param A FQuat
---@param B FQuat
---@return FQuat
function UKismetMathLibrary.Subtract_QuatQuat(A, B) end

---Element-wise subtraction of two linear colors (R-R, G-G, B-B, A-A)
---@param A FLinearColor
---@param B FLinearColor
---@return FLinearColor
function UKismetMathLibrary.Subtract_LinearColorLinearColor(A, B) end

---Returns IntPoint A subtracted by B
---@param A FIntPoint
---@param B FIntPoint
---@return FIntPoint
function UKismetMathLibrary.Subtract_IntPointIntPoint(A, B) end

---Subtraction (A - B)
---@param A FIntPoint
---@param B integer
---@return FIntPoint
function UKismetMathLibrary.Subtract_IntPointInt(A, B) end

---Subtraction (A - B)
---@param A integer
---@param B integer @[opt] 
---@return integer
function UKismetMathLibrary.Subtract_IntInt(A, B) end

---Subtraction (A - B)
---@param A integer
---@param B integer @[opt] 
---@return integer
function UKismetMathLibrary.Subtract_Int64Int64(A, B) end

---Subtraction (A - B)
---@param A number
---@param B number @[opt] 
---@return number
function UKismetMathLibrary.Subtract_DoubleDouble(A, B) end

---Subtraction (A - B)
---@param A FDateTime
---@param B FTimespan
---@return FDateTime
function UKismetMathLibrary.Subtract_DateTimeTimespan(A, B) end

---Subtraction (A - B)
---@param A FDateTime
---@param B FDateTime
---@return FTimespan
function UKismetMathLibrary.Subtract_DateTimeDateTime(A, B) end

---Subtraction (A - B)
---@param A integer
---@param B integer @[opt] 
---@return integer
function UKismetMathLibrary.Subtract_ByteByte(A, B) end

---Returns square of A (A*A)
---@param A number
---@return number
function UKismetMathLibrary.Square(A) end

---Returns square root of A
---@param A number
---@return number
function UKismetMathLibrary.Sqrt(A) end

---Converts spherical coordinates on the unit sphere into a Cartesian unit length vector.
---@param A FVector2D
---@return FVector
function UKismetMathLibrary.Spherical2DToUnitCartesian(A) end

---Returns the sine of A (expects Radians)
---@param A number
---@return number
function UKismetMathLibrary.Sin(A) end

---Sign (integer64, returns -1 if A < 0, 0 if A is zero, and +1 if A > 0)
---@param A integer
---@return integer
function UKismetMathLibrary.SignOfInteger64(A) end

---Sign (integer, returns -1 if A < 0, 0 if A is zero, and +1 if A > 0)
---@param A integer
---@return integer
function UKismetMathLibrary.SignOfInteger(A) end

---Sign (float, returns -1 if A < 0, 0 if A is zero, and +1 if A > 0)
---@param A number
---@return number
function UKismetMathLibrary.SignOfFloat(A) end

---Sets the state velocity of a vector spring
---@param SpringState FVectorSpringState @[out] 
---@param Velocity FVector
function UKismetMathLibrary.SetVectorSpringStateVelocity(SpringState, Velocity) end

---Set the seed of a random stream to a specific number
---@param Stream FRandomStream @[out] 
---@param NewSeed integer
function UKismetMathLibrary.SetRandomStreamSeed(Stream, NewSeed) end

---Sets the state angular velocity of a quaternion spring
---@param SpringState FQuaternionSpringState @[out] 
---@param AngularVelocity FVector
function UKismetMathLibrary.SetQuaternionSpringStateAngularVelocity(SpringState, AngularVelocity) end

---Sets the state velocity of a float spring
---@param SpringState FFloatSpringState @[out] 
---@param Velocity number
function UKismetMathLibrary.SetFloatSpringStateVelocity(SpringState, Velocity) end

---Set the values of the vector directly.
---@param A FVector2D @[out] 
---@param X number
---@param Y number
function UKismetMathLibrary.Set2D(A, X, Y) end

---If bPickA is true, A is returned, otherwise B is
---@param A FVector
---@param B FVector
---@param bPickA boolean
---@return FVector
function UKismetMathLibrary.SelectVector(A, B, bPickA) end

---If bPickA is true, A is returned, otherwise B is
---@param A FTransform
---@param B FTransform
---@param bPickA boolean
---@return FTransform
function UKismetMathLibrary.SelectTransform(A, B, bPickA) end

---If bPickA is true, A is returned, otherwise B is
---@param A string
---@param B string
---@param bPickA boolean
---@return string
function UKismetMathLibrary.SelectText(A, B, bPickA) end

---If bPickA is true, A is returned, otherwise B is
---@param A string
---@param B string
---@param bPickA boolean
---@return string
function UKismetMathLibrary.SelectString(A, B, bPickA) end

---If bPickA is true, A is returned, otherwise B is
---@param A FRotator
---@param B FRotator
---@param bPickA boolean
---@return FRotator
function UKismetMathLibrary.SelectRotator(A, B, bPickA) end

---If bPickA is true, A is returned, otherwise B is
---@param A UObject
---@param B UObject
---@param bSelectA boolean
---@return UObject
function UKismetMathLibrary.SelectObject(A, B, bSelectA) end

---If bPickA is true, A is returned, otherwise B is
---@param A string
---@param B string
---@param bPickA boolean
---@return string
function UKismetMathLibrary.SelectName(A, B, bPickA) end

---If bPickA is true, A is returned, otherwise B is
---@param A integer
---@param B integer
---@param bPickA boolean
---@return integer
function UKismetMathLibrary.SelectInt(A, B, bPickA) end

---If bPickA is true, A is returned, otherwise B is
---@param A number
---@param B number
---@param bPickA boolean
---@return number
function UKismetMathLibrary.SelectFloat(A, B, bPickA) end

---If bPickA is true, A is returned, otherwise B is
---@param A FLinearColor
---@param B FLinearColor
---@param bPickA boolean
---@return FLinearColor
function UKismetMathLibrary.SelectColor(A, B, bPickA) end

---If bPickA is true, A is returned, otherwise B is
---@param A TSubclassOf_UObject_
---@param B TSubclassOf_UObject_
---@param bSelectA boolean
---@return TSubclassOf_UObject_
function UKismetMathLibrary.SelectClass(A, B, bSelectA) end

---Create a new random seed for a random stream
---@param Stream FRandomStream @[out] 
function UKismetMathLibrary.SeedRandomStream(Stream) end

---This functions returns 0 if B (the denominator) is zero
---@param A number
---@param B number
---@return number
function UKismetMathLibrary.SafeDivide(A, B) end

---Rounds A to the nearest integer (e.g., -1.6 becomes -2 and 1.6 becomes 2)
---@param A number
---@return integer
function UKismetMathLibrary.Round64(A) end

---Rounds A to the nearest integer (e.g., -1.6 becomes -2 and 1.6 becomes 2)
---@param A number
---@return integer
function UKismetMathLibrary.Round(A) end

---Create a rotation from an axis and supplied angle (in degrees)
---@param Axis FVector
---@param Angle number
---@return FRotator
function UKismetMathLibrary.RotatorFromAxisAndAngle(Axis, Angle) end

---Returns result of vector A rotated by AngleDeg around Axis
---@param InVect FVector
---@param AngleDeg number
---@param Axis FVector
---@return FVector
function UKismetMathLibrary.RotateAngleAxis(InVect, AngleDeg, Axis) end

---Linearly interpolates between A and B based on Alpha (100% of A when Alpha=0 and 100% of B when Alpha=1)
---@param A FRotator
---@param B FRotator
---@param Alpha number
---@param bShortestPath boolean
---@return FRotator
function UKismetMathLibrary.RLerp(A, B, Alpha, bShortestPath) end

---Tries to reach Target rotation at a constant rate.
---@param Current FRotator
---@param Target FRotator
---@param DeltaTime number
---@param InterpSpeed number
---@return FRotator
function UKismetMathLibrary.RInterpTo_Constant(Current, Target, DeltaTime, InterpSpeed) end

---Tries to reach Target rotation based on Current rotation, giving a nice smooth feeling when rotating to Target rotation.
---@param Current FRotator
---@param Target FRotator
---@param DeltaTime number
---@param InterpSpeed number
---@return FRotator
function UKismetMathLibrary.RInterpTo(Current, Target, DeltaTime, InterpSpeed) end

---Converts a RGB linear color to HSV (where H is in R (0..360), S is in G (0..1), and V is in B (0..1))
---@param RGB FLinearColor
---@param HSV FLinearColor @[out] 
function UKismetMathLibrary.RGBToHSV_Vector(RGB, HSV) end

---Breaks apart a color into individual HSV components (as well as alpha) (Hue is [0..360) while Saturation and Value are 0..1)
---@param InColor FLinearColor
---@param H number @[out] 
---@param S number @[out] 
---@param V number @[out] 
---@param A number @[out] 
function UKismetMathLibrary.RGBToHSV(InColor, H, S, V, A) end

---Converts a RGB linear color to HSV (where H is in R, S is in G, and V is in B)
---@param RGB FLinearColor
---@return FLinearColor
function UKismetMathLibrary.RGBLinearToHSV(RGB) end

---Resets the state of a vector spring
---@param SpringState FVectorSpringState @[out] 
function UKismetMathLibrary.ResetVectorSpringState(SpringState) end

---Reset a random stream
---@param Stream FRandomStream
function UKismetMathLibrary.ResetRandomStream(Stream) end

---Resets the state of a quaternion spring
---@param SpringState FQuaternionSpringState @[out] 
function UKismetMathLibrary.ResetQuaternionSpringState(SpringState) end

---Resets the state of a float spring
---@param SpringState FFloatSpringState @[out] 
function UKismetMathLibrary.ResetFloatSpringState(SpringState) end

---Easing between A and B using a specified easing function
---@param A FRotator
---@param B FRotator
---@param Alpha number
---@param bShortestPath boolean
---@param EasingFunc integer
---@param BlendExp number @[opt] 
---@param Steps integer @[opt] 
---@return FRotator
function UKismetMathLibrary.REase(A, B, Alpha, bShortestPath, EasingFunc, BlendExp, Steps) end

---Returns a random vector with length of 1, within the specified cone, with uniform random distribution.
---The shape of the cone can be modified according to the yaw and pitch angles.
---@param Stream FRandomStream
---@param ConeDir FVector
---@param MaxYawInRadians number
---@param MaxPitchInRadians number
---@return FVector
function UKismetMathLibrary.RandomUnitVectorInEllipticalConeInRadiansFromStream(Stream, ConeDir, MaxYawInRadians, MaxPitchInRadians) end

---Returns a random vector with length of 1, within the specified cone, with uniform random distribution.
---The shape of the cone can be modified according to the yaw and pitch angles.
---@param ConeDir FVector
---@param MaxYawInRadians number
---@param MaxPitchInRadians number
---@return FVector
function UKismetMathLibrary.RandomUnitVectorInEllipticalConeInRadians(ConeDir, MaxYawInRadians, MaxPitchInRadians) end

---Returns a random vector with length of 1, within the specified cone, with uniform random distribution.
---The shape of the cone can be modified according to the yaw and pitch angles.
---@param Stream FRandomStream
---@param ConeDir FVector
---@param MaxYawInDegrees number
---@param MaxPitchInDegrees number
---@return FVector
function UKismetMathLibrary.RandomUnitVectorInEllipticalConeInDegreesFromStream(Stream, ConeDir, MaxYawInDegrees, MaxPitchInDegrees) end

---Returns a random vector with length of 1, within the specified cone, with uniform random distribution.
---The shape of the cone can be modified according to the yaw and pitch angles.
---@param ConeDir FVector
---@param MaxYawInDegrees number
---@param MaxPitchInDegrees number
---@return FVector
function UKismetMathLibrary.RandomUnitVectorInEllipticalConeInDegrees(ConeDir, MaxYawInDegrees, MaxPitchInDegrees) end

---Returns a random vector with length of 1, within the specified cone, with uniform random distribution.
---@param Stream FRandomStream
---@param ConeDir FVector
---@param ConeHalfAngleInRadians number
---@return FVector
function UKismetMathLibrary.RandomUnitVectorInConeInRadiansFromStream(Stream, ConeDir, ConeHalfAngleInRadians) end

---Returns a random vector with length of 1, within the specified cone, with uniform random distribution.
---@param ConeDir FVector
---@param ConeHalfAngleInRadians number
---@return FVector
function UKismetMathLibrary.RandomUnitVectorInConeInRadians(ConeDir, ConeHalfAngleInRadians) end

---Returns a random vector with length of 1, within the specified cone, with uniform random distribution.
---@param Stream FRandomStream
---@param ConeDir FVector
---@param ConeHalfAngleInDegrees number
---@return FVector
function UKismetMathLibrary.RandomUnitVectorInConeInDegreesFromStream(Stream, ConeDir, ConeHalfAngleInDegrees) end

---Returns a random vector with length of 1, within the specified cone, with uniform random distribution.
---@param ConeDir FVector
---@param ConeHalfAngleInDegrees number
---@return FVector
function UKismetMathLibrary.RandomUnitVectorInConeInDegrees(ConeDir, ConeHalfAngleInDegrees) end

---Returns a random vector with length of 1.0
---@param Stream FRandomStream
---@return FVector
function UKismetMathLibrary.RandomUnitVectorFromStream(Stream) end

---Returns a random vector with length of 1
---@return FVector
function UKismetMathLibrary.RandomUnitVector() end

---Create a random rotation
---@param Stream FRandomStream
---@param bRoll boolean
---@return FRotator
function UKismetMathLibrary.RandomRotatorFromStream(Stream, bRoll) end

---Generates a random rotation, with optional random roll.
---@param bRoll boolean @[opt] 
---@return FRotator
function UKismetMathLibrary.RandomRotator(bRoll) end

---Returns a random point within the specified bounding box.
---@param Stream FRandomStream
---@param Box FBox
---@return FVector
function UKismetMathLibrary.RandomPointInBoundingBoxFromStream_Box(Stream, Box) end

---Returns a random point within the specified bounding box using the first vector as an origin and the second as the half size of the AABB.
---@param Stream FRandomStream
---@param Center FVector
---@param HalfSize FVector
---@return FVector
function UKismetMathLibrary.RandomPointInBoundingBoxFromStream(Stream, Center, HalfSize) end

---Returns a random point within the specified bounding box.
---@param Box FBox
---@return FVector
function UKismetMathLibrary.RandomPointInBoundingBox_Box(Box) end

---Returns a random point within the specified bounding box using the first vector as an origin and the second as the box extents.
---@param Center FVector
---@param HalfSize FVector
---@return FVector
function UKismetMathLibrary.RandomPointInBoundingBox(Center, HalfSize) end

---Return a random integer between Min and Max (>= Min and <= Max)
---@param Stream FRandomStream
---@param Min integer
---@param Max integer
---@return integer
function UKismetMathLibrary.RandomIntegerInRangeFromStream(Stream, Min, Max) end

---Return a random integer between Min and Max (>= Min and <= Max)
---@param Min integer
---@param Max integer
---@return integer
function UKismetMathLibrary.RandomIntegerInRange(Min, Max) end

---Returns a uniformly distributed random number between 0 and Max - 1
---@param Stream FRandomStream
---@param Max integer
---@return integer
function UKismetMathLibrary.RandomIntegerFromStream(Stream, Max) end

---Return a random integer64 between Min and Max (>= Min and <= Max)
---@param Min integer
---@param Max integer
---@return integer
function UKismetMathLibrary.RandomInteger64InRange(Min, Max) end

---Returns a uniformly distributed random number between 0 and Max - 1
---@param Max integer
---@return integer
function UKismetMathLibrary.RandomInteger64(Max) end

---Returns a uniformly distributed random number between 0 and Max - 1
---@param Max integer
---@return integer
function UKismetMathLibrary.RandomInteger(Max) end

---Generate a random number between Min and Max
---@param Stream FRandomStream
---@param Min number
---@param Max number
---@return number
function UKismetMathLibrary.RandomFloatInRangeFromStream(Stream, Min, Max) end

---Generate a random number between Min and Max
---@param Min number
---@param Max number
---@return number
function UKismetMathLibrary.RandomFloatInRange(Min, Max) end

---Returns a random float between 0 and 1
---@param Stream FRandomStream
---@return number
function UKismetMathLibrary.RandomFloatFromStream(Stream) end

---Returns a random float between 0 and 1
---@return number
function UKismetMathLibrary.RandomFloat() end

---Get a random chance with the specified weight. Range of weight is 0.0 - 1.0 E.g.,
---              Weight = .6 return value = True 60% of the time
---@param RandomStream FRandomStream
---@param Weight number
---@return boolean
function UKismetMathLibrary.RandomBoolWithWeightFromStream(RandomStream, Weight) end

---Get a random chance with the specified weight. Range of weight is 0.0 - 1.0 E.g.,
---             Weight = .6 return value = True 60% of the time
---@param Weight number
---@return boolean
function UKismetMathLibrary.RandomBoolWithWeight(Weight) end

---Returns a random bool
---@param Stream FRandomStream
---@return boolean
function UKismetMathLibrary.RandomBoolFromStream(Stream) end

---Returns a uniformly distributed random bool
---@return boolean
function UKismetMathLibrary.RandomBool() end

---Returns degrees value based on the input radians
---@param A number
---@return number
function UKismetMathLibrary.RadiansToDegrees(A) end

---Uses a simple spring model to interpolate a quaternion from Current to Target.
---@param Current FQuat
---@param Target FQuat
---@param SpringState FQuaternionSpringState @[out] 
---@param Stiffness number
---@param CriticalDampingFactor number
---@param DeltaTime number
---@param Mass number @[opt] 
---@param TargetVelocityAmount number @[opt] 
---@param bInitializeFromTarget boolean @[opt] 
---@return FQuat
function UKismetMathLibrary.QuaternionSpringInterp(Current, Target, SpringState, Stiffness, CriticalDampingFactor, DeltaTime, Mass, TargetVelocityAmount, bInitializeFromTarget) end

---Get the up direction (Z axis) after it has been rotated by this Quaternion.
---@param Q FQuat
---@return FVector
function UKismetMathLibrary.Quat_VectorUp(Q) end

---Get the right direction (Y axis) after it has been rotated by this Quaternion.
---@param Q FQuat
---@return FVector
function UKismetMathLibrary.Quat_VectorRight(Q) end

---Get the forward direction (X axis) after it has been rotated by this Quaternion.
---@param Q FQuat
---@return FVector
function UKismetMathLibrary.Quat_VectorForward(Q) end

---Rotate a vector by the inverse of this quaternion.
---@param Q FQuat
---@param V FVector
---@return FVector
function UKismetMathLibrary.Quat_UnrotateVector(Q, V) end

---Spherical interpolation between Quaternions. Result is normalized.
---@param A FQuat
---@param B FQuat
---@param Alpha number
---@return FQuat
function UKismetMathLibrary.Quat_Slerp(A, B, Alpha) end

---Get the squared length of the quaternion.
---@param Q FQuat
---@return number
function UKismetMathLibrary.Quat_SizeSquared(Q) end

---Get the length of the quaternion.
---@param Q FQuat
---@return number
function UKismetMathLibrary.Quat_Size(Q) end

---Convert a vector of floating-point Euler angles (in degrees) into a Quaternion.
---@param Q FQuat @[out] 
---@param Euler FVector
function UKismetMathLibrary.Quat_SetFromEuler(Q, Euler) end

---Set X, Y, Z, W components of Quaternion.
---@param Q FQuat @[out] 
---@param X number
---@param Y number
---@param Z number
---@param W number
function UKismetMathLibrary.Quat_SetComponents(Q, X, Y, Z, W) end

---Converts to Rotator representation of this Quaternion.
---@param Q FQuat
---@return FRotator
function UKismetMathLibrary.Quat_Rotator(Q) end

---Rotate a vector by this quaternion.
---@param Q FQuat
---@param V FVector
---@return FVector
function UKismetMathLibrary.Quat_RotateVector(Q, V) end

---Get a normalized copy of this quaternion.
---If it is too small, returns an identity quaternion.
---@param Q FQuat
---@param Tolerance number @[opt] 
---@return FQuat
function UKismetMathLibrary.Quat_Normalized(Q, Tolerance) end

---Normalize this quaternion if it is large enough as compared to the supplied tolerance.
---If it is too small then set it to the identity quaternion.
---@param Q FQuat @[out] 
---@param Tolerance number @[opt] 
function UKismetMathLibrary.Quat_Normalize(Q, Tolerance) end

---Convert a vector of floating-point Euler angles (in degrees) into a Quaternion.
---@param Euler FVector
---@return FQuat
function UKismetMathLibrary.Quat_MakeFromEuler(Euler) end

---Quaternion with W=0 and V=theta*v. Used in combination with Exp().
---@param Q FQuat
---@return FQuat
function UKismetMathLibrary.Quat_Log(Q) end

---Return true if this quaternion is normalized
---@param Q FQuat
---@return boolean
function UKismetMathLibrary.Quat_IsNormalized(Q) end

---Determine if there are any non-finite values (NaN or Inf) in this Quat.
---@param Q FQuat
---@return boolean
function UKismetMathLibrary.Quat_IsNonFinite(Q) end

---Checks whether this Quaternion is an Identity Quaternion.
---Assumes Quaternion tested is normalized.
---@param Q FQuat
---@param Tolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.Quat_IsIdentity(Q, Tolerance) end

---Determine if all the values  are finite (not NaN nor Inf) in this Quat.
---@param Q FQuat
---@return boolean
function UKismetMathLibrary.Quat_IsFinite(Q) end

---Return an inversed copy of this quaternion.
---@param Q FQuat
---@return FQuat
function UKismetMathLibrary.Quat_Inversed(Q) end

---Identity quaternion constant
---@return FQuat
function UKismetMathLibrary.Quat_Identity() end

---Get the axis of rotation of the Quaternion.
---This is the axis around which rotation occurs to transform the canonical coordinate system to the target orientation.
---For the identity Quaternion which has no such rotation, FVector(1,0,0) is returned.
---@param Q FQuat
---@return FVector
function UKismetMathLibrary.Quat_GetRotationAxis(Q) end

---Get the up direction (Z axis) after it has been rotated by this Quaternion.
---@param Q FQuat
---@return FVector
function UKismetMathLibrary.Quat_GetAxisZ(Q) end

---Get the right direction (Y axis) after it has been rotated by this Quaternion.
---@param Q FQuat
---@return FVector
function UKismetMathLibrary.Quat_GetAxisY(Q) end

---Get the forward direction (X axis) after it has been rotated by this Quaternion.
---@param Q FQuat
---@return FVector
function UKismetMathLibrary.Quat_GetAxisX(Q) end

---Get the angle of this quaternion
---@param Q FQuat
---@return number
function UKismetMathLibrary.Quat_GetAngle(Q) end

---Generates the 'smallest' (geodesic) rotation around a sphere between two vectors of arbitrary length.
---@param Start FVector
---@param End FVector
---@return FQuat
function UKismetMathLibrary.Quat_FindBetweenVectors(Start, End) end

---Generates the 'smallest' (geodesic) rotation around a sphere between two normals (assumed to be unit length).
---@param StartNormal FVector
---@param EndNormal FVector
---@return FQuat
function UKismetMathLibrary.Quat_FindBetweenNormals(StartNormal, EndNormal) end

---Used in combination with Log().
---Assumes a quaternion with W=0 and V=theta*v (where |v| = 1).
---Exp(q) = (sin(theta)*v, cos(theta))
---@param Q FQuat
---@return FQuat
function UKismetMathLibrary.Quat_Exp(Q) end

---Convert a Quaternion into floating-point Euler angles (in degrees).
---@param Q FQuat
---@return FVector
function UKismetMathLibrary.Quat_Euler(Q) end

---Modify the quaternion to ensure that the delta between it and B represents the shortest possible rotation angle.
---@param A FQuat @[out] 
---@param B FQuat
function UKismetMathLibrary.Quat_EnforceShortestArcWith(A, B) end

---Find the angular distance/difference between two rotation quaternions.
---@param A FQuat
---@param B FQuat
---@return number
function UKismetMathLibrary.Quat_AngularDistance(A, B) end

---Projects one vector (V) onto another (Target) and returns the projected vector.
---If Target is nearly zero in length, returns the zero vector.
---@param V FVector
---@param Target FVector
---@return FVector
function UKismetMathLibrary.ProjectVectorOnToVector(V, Target) end

---Projects a vector onto a plane defined by a normalized vector (PlaneNormal).
---@param V FVector
---@param PlaneNormal FVector
---@return FVector
function UKismetMathLibrary.ProjectVectorOnToPlane(V, PlaneNormal) end

---Projects/snaps a point onto a plane defined by a point on the plane and a plane normal.
---@param Point FVector
---@param PlaneBase FVector
---@param PlaneNormal FVector
---@return FVector
function UKismetMathLibrary.ProjectPointOnToPlane(Point, PlaneBase, PlaneNormal) end

---Determines whether a given set of points are coplanar, with a tolerance. Any three points or less are always coplanar.
---@param Points TArray_FVector_
---@param Tolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.PointsAreCoplanar(Points, Tolerance) end

---Generates a 1D Perlin noise from the given value.  Returns a continuous random value between -1.0 and 1.0.
---@param Value number
---@return number
function UKismetMathLibrary.PerlinNoise1D(Value) end

---Modulo (A % B)
---@param A integer
---@param B integer @[opt] 
---@return integer
function UKismetMathLibrary.Percent_IntInt(A, B) end

---Modulo (A % B)
---@param A integer
---@param B integer @[opt] 
---@return integer
function UKismetMathLibrary.Percent_Int64Int64(A, B) end

---Modulo (A % B)
---@param A number
---@param B number @[opt] 
---@return number
function UKismetMathLibrary.Percent_FloatFloat(A, B) end

---Modulo (A % B)
---@param A integer
---@param B integer @[opt] 
---@return integer
function UKismetMathLibrary.Percent_ByteByte(A, B) end

---Bitwise OR (A | B)
---@param A integer
---@param B integer
---@return integer
function UKismetMathLibrary.Or_IntInt(A, B) end

---Bitwise OR (A | B)
---@param A integer
---@param B integer
---@return integer
function UKismetMathLibrary.Or_Int64Int64(A, B) end

---Returns the local date and time on this computer
---@return FDateTime
function UKismetMathLibrary.Now() end

---Returns true if vector A is not equal to vector B (A != B)
---@param A FVector
---@param B FVector
---@return boolean
function UKismetMathLibrary.NotEqualExactly_VectorVector(A, B) end

---Returns true if vector A is not equal to vector B (A != B) within a specified error tolerance
---@param A FVector4
---@param B FVector4
---@return boolean
function UKismetMathLibrary.NotEqualExactly_Vector4Vector4(A, B) end

---Returns true if vector2D A is not equal to vector2D B (A != B) within a specified error tolerance
---@param A FVector2D
---@param B FVector2D
---@return boolean
function UKismetMathLibrary.NotEqualExactly_Vector2DVector2D(A, B) end

---Returns true if vector A is not equal to vector B (A != B) within a specified error tolerance
---@param A FVector
---@param B FVector
---@param ErrorTolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.NotEqual_VectorVector(A, B, ErrorTolerance) end

---Returns true if vector A is not equal to vector B (A != B) within a specified error tolerance
---@param A FVector4
---@param B FVector4
---@param ErrorTolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.NotEqual_Vector4Vector4(A, B, ErrorTolerance) end

---Returns true if vector2D A is not equal to vector2D B (A != B) within a specified error tolerance
---@param A FVector2D
---@param B FVector2D
---@param ErrorTolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.NotEqual_Vector2DVector2D(A, B, ErrorTolerance) end

---Returns true if the values are not equal (A != B)
---@param A FTimespan
---@param B FTimespan
---@return boolean
function UKismetMathLibrary.NotEqual_TimespanTimespan(A, B) end

---Returns true if rotator A is not equal to rotator B (A != B) within a specified error tolerance
---@param A FRotator
---@param B FRotator
---@param ErrorTolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.NotEqual_RotatorRotator(A, B, ErrorTolerance) end

---Returns true if Quat A is not equal to Quat B (A != B) within a specified error tolerance
---@param A FQuat
---@param B FQuat
---@param ErrorTolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.NotEqual_QuatQuat(A, B, ErrorTolerance) end

---Returns true if A and B are not equal (A != B)
---@param A UObject
---@param B UObject
---@return boolean
function UKismetMathLibrary.NotEqual_ObjectObject(A, B) end

---Returns true if A and B are not equal (A != B)
---@param A string
---@param B string
---@return boolean
function UKismetMathLibrary.NotEqual_NameName(A, B) end

---Checks whether another Matrix is not equal to this, within specified tolerance.
---@param A FMatrix
---@param B FMatrix
---@param Tolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.NotEqual_MatrixMatrix(A, B, Tolerance) end

---Returns true if linear color A is not equal to linear color B (A != B) within a specified error tolerance
---@param A FLinearColor
---@param B FLinearColor
---@return boolean
function UKismetMathLibrary.NotEqual_LinearColorLinearColor(A, B) end

---Returns true if IntPoint A is NOT equal to IntPoint B (A != B)
---@param A FIntPoint
---@param B FIntPoint
---@return boolean
function UKismetMathLibrary.NotEqual_IntPointIntPoint(A, B) end

---Returns true if A is not equal to B (A != B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.NotEqual_IntInt(A, B) end

---Returns true if A is not equal to B (A != B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.NotEqual_Int64Int64(A, B) end

---Returns true if A does not equal B (A != B)
---@param A number
---@param B number
---@return boolean
function UKismetMathLibrary.NotEqual_DoubleDouble(A, B) end

---Returns true if the values are not equal (A != B)
---@param A FDateTime
---@param B FDateTime
---@return boolean
function UKismetMathLibrary.NotEqual_DateTimeDateTime(A, B) end

---Returns true if A and B are not equal (A != B)
---@param A TSubclassOf_UObject_
---@param B TSubclassOf_UObject_
---@return boolean
function UKismetMathLibrary.NotEqual_ClassClass(A, B) end

---Returns true if A is not equal to B (A != B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.NotEqual_ByteByte(A, B) end

---Returns true if the values are not equal (A != B)
---@param A boolean
---@param B boolean
---@return boolean
function UKismetMathLibrary.NotEqual_BoolBool(A, B) end

---Returns the logical complement of the Boolean value (NOT A)
---@param A boolean
---@return boolean
function UKismetMathLibrary.Not_PreBool(A) end

---Bitwise NOT (~A)
---@param A integer
---@return integer
function UKismetMathLibrary.Not_Int64(A) end

---Bitwise NOT (~A)
---@param A integer
---@return integer
function UKismetMathLibrary.Not_Int(A) end

---Gets a normalized copy of the vector, checking it is safe to do so based on the length.
---Returns zero vector if vector length is too small to safely normalize.
---@param A FVector2D
---@param Tolerance number @[opt] 
---@return FVector2D
function UKismetMathLibrary.NormalSafe2D(A, Tolerance) end

---Returns Value normalized to the given range.  (e.g. 20 normalized to the range 10->50 would result in 0.25)
---@param Value number
---@param RangeMin number
---@param RangeMax number
---@return number
function UKismetMathLibrary.NormalizeToRange(Value, RangeMin, RangeMax) end

---Normalized A-B
---@param A FRotator
---@param B FRotator
---@return FRotator
function UKismetMathLibrary.NormalizedDeltaRotator(A, B) end

---Clamps an angle to the range of [-180, 180].
---@param Angle number
---@return number
function UKismetMathLibrary.NormalizeAxis(Angle) end

---Normalize this vector in-place if it is large enough, set it to (0,0) otherwise.
---@param A FVector2D @[out] 
---@param Tolerance number @[opt] 
function UKismetMathLibrary.Normalize2D(A, Tolerance) end

---Returns a unit normal version of the 2D vector
---@param A FVector2D
---@return FVector2D
function UKismetMathLibrary.Normal2D(A) end

---Gets a normalized unit copy of the vector, ensuring it is safe to do so based on the length.
---Returns zero vector if vector length is too small to safely normalize.
---@param A FVector
---@param Tolerance number @[opt] 
---@return FVector
function UKismetMathLibrary.Normal(A, Tolerance) end

---Negate a vector.
---@param A FVector
---@return FVector
function UKismetMathLibrary.NegateVector(A) end

---Negate a rotator
---@param A FRotator
---@return FRotator
function UKismetMathLibrary.NegateRotator(A) end

---Gets a negated copy of the vector.
---@param A FVector2D
---@return FVector2D
function UKismetMathLibrary.Negated2D(A) end

---Returns true if transform A is nearly equal to B
---@param A FTransform
---@param B FTransform
---@param LocationTolerance number @[opt] 
---@param RotationTolerance number @[opt] 
---@param Scale3DTolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.NearlyEqual_TransformTransform(A, B, LocationTolerance, RotationTolerance, Scale3DTolerance) end

---Returns true if A is nearly equal to B (|A - B| < ErrorTolerance)
---@param A number
---@param B number
---@param ErrorTolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.NearlyEqual_FloatFloat(A, B, ErrorTolerance) end

---Power (Base to the Exp-th power)
---@param Base number
---@param Exp number
---@return number
function UKismetMathLibrary.MultiplyMultiply_FloatFloat(Base, Exp) end

---Multiplies the input value by pi.
---@param Value number
---@return number
function UKismetMathLibrary.MultiplyByPi(Value) end

---Element-wise Vector multiplication (Result = {A.x*B.x, A.y*B.y, A.z*B.z})
---@param A FVector
---@param B FVector
---@return FVector
function UKismetMathLibrary.Multiply_VectorVector(A, B) end

---Scales Vector A by B
---@param A FVector
---@param B integer
---@return FVector
function UKismetMathLibrary.Multiply_VectorInt(A, B) end

---Scales Vector A by B
---@param A FVector
---@param B number
---@return FVector
function UKismetMathLibrary.Multiply_VectorFloat(A, B) end

---Element-wise Vector multiplication (Result = {A.x*B.x, A.y*B.y, A.z*B.z, A.w*B.w})
---@param A FVector4
---@param B FVector4
---@return FVector4
function UKismetMathLibrary.Multiply_Vector4Vector4(A, B) end

---Element-wise Vector multiplication (Result = {A.x*B.x, A.y*B.y})
---@param A FVector2D
---@param B FVector2D
---@return FVector2D
function UKismetMathLibrary.Multiply_Vector2DVector2D(A, B) end

---Returns Vector A scaled by B
---@param A FVector2D
---@param B number
---@return FVector2D
function UKismetMathLibrary.Multiply_Vector2DFloat(A, B) end

---Scalar multiplication (A * s)
---@param A FTimespan
---@param Scalar number
---@return FTimespan
function UKismetMathLibrary.Multiply_TimespanFloat(A, Scalar) end

---Returns rotator representing rotator A scaled by B
---@param A FRotator
---@param B integer
---@return FRotator
function UKismetMathLibrary.Multiply_RotatorInt(A, B) end

---Returns rotator representing rotator A scaled by B
---@param A FRotator
---@param B number
---@return FRotator
function UKismetMathLibrary.Multiply_RotatorFloat(A, B) end

---Gets the result of multiplying two quaternions (A * B).
---Order matters when composing quaternions: C = A * B will yield a quaternion C that logically
---first applies B then A to any subsequent transformation (right first, then left).
---@param A FQuat
---@param B FQuat
---@return FQuat
function UKismetMathLibrary.Multiply_QuatQuat(A, B) end

---Gets the result of multiplying a Matrix to this.
---@param A FMatrix
---@param B FMatrix
---@return FMatrix
function UKismetMathLibrary.Multiply_MatrixMatrix(A, B) end

---Multiplies all values of the matrix by a float.
---If your Matrix represents a Transform that you wish to scale you should use Apply Scale instead
---@param A FMatrix
---@param B number
---@return FMatrix
function UKismetMathLibrary.Multiply_MatrixFloat(A, B) end

---Element-wise multiplication of two linear colors (R*R, G*G, B*B, A*A)
---@param A FLinearColor
---@param B FLinearColor
---@return FLinearColor
function UKismetMathLibrary.Multiply_LinearColorLinearColor(A, B) end

---Element-wise multiplication of a linear color by a float (F*R, F*G, F*B, F*A)
---@param A FLinearColor
---@param B number
---@return FLinearColor
function UKismetMathLibrary.Multiply_LinearColorFloat(A, B) end

---Returns IntPoint A multiplied by B
---@param A FIntPoint
---@param B FIntPoint
---@return FIntPoint
function UKismetMathLibrary.Multiply_IntPointIntPoint(A, B) end

---Multiplication (A * B)
---@param A FIntPoint
---@param B integer
---@return FIntPoint
function UKismetMathLibrary.Multiply_IntPointInt(A, B) end

---Multiplication (A * B)
---@param A integer
---@param B integer
---@return integer
function UKismetMathLibrary.Multiply_IntInt(A, B) end

---Multiplication (A * B)
---@param A integer
---@param B number
---@return number
function UKismetMathLibrary.Multiply_IntFloat(A, B) end

---Multiplication (A * B)
---@param A integer
---@param B integer
---@return integer
function UKismetMathLibrary.Multiply_Int64Int64(A, B) end

---Multiplication (A * B)
---@param A number
---@param B number
---@return number
function UKismetMathLibrary.Multiply_DoubleDouble(A, B) end

---Multiplication (A * B)
---@param A integer
---@param B integer
---@return integer
function UKismetMathLibrary.Multiply_ByteByte(A, B) end

---Given a direction vector and a surface normal, returns the vector reflected across the surface normal.
---Produces a result like shining a laser at a mirror!
---@param InVect FVector
---@param InNormal FVector
---@return FVector
function UKismetMathLibrary.MirrorVectorByNormal(InVect, InNormal) end

---Returns min of all array entries and the index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty.
---@param IntArray TArray_integer_
---@param IndexOfMinValue integer @[out] 
---@param MinValue integer @[out] 
function UKismetMathLibrary.MinOfIntArray(IntArray, IndexOfMinValue, MinValue) end

---Returns min of all array entries and the index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty.
---@param FloatArray TArray_number_
---@param IndexOfMinValue integer @[out] 
---@param MinValue number @[out] 
function UKismetMathLibrary.MinOfFloatArray(FloatArray, IndexOfMinValue, MinValue) end

---Returns min of all array entries and the index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty.
---@param ByteArray TArray_integer_
---@param IndexOfMinValue integer @[out] 
---@param MinValue integer @[out] 
function UKismetMathLibrary.MinOfByteArray(ByteArray, IndexOfMinValue, MinValue) end

---Returns the minimum value of A and B
---@param A integer
---@param B integer
---@return integer
function UKismetMathLibrary.MinInt64(A, B) end

---Finds the minimum area rectangle that encloses a set of coplanar points.
---Uses the exhaustive search algorithm in http://www.geometrictools.com/Documentation/MinimumAreaRectangle.pdf
---@param WorldContextObject UObject
---@param InPoints TArray_FVector_
---@param SampleSurfaceNormal FVector
---@param OutRectCenter FVector @[out] 
---@param OutRectRotation FRotator @[out] 
---@param OutRectLengthX number @[out] 
---@param OutRectLengthY number @[out] 
---@param bDebugDraw boolean @[opt] 
function UKismetMathLibrary.MinAreaRectangle(WorldContextObject, InPoints, SampleSurfaceNormal, OutRectCenter, OutRectRotation, OutRectLengthX, OutRectLengthY, bDebugDraw) end

---Returns the minimum value of A and B
---@param A integer
---@param B integer
---@return integer
function UKismetMathLibrary.Min(A, B) end

---Returns median of all array entries. Returns value of 0 if the supplied array is empty.
---@param IntArray TArray_integer_
---@param MedianValue number @[out] 
function UKismetMathLibrary.MedianOfIntArray(IntArray, MedianValue) end

---Returns max of all array entries and the index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty.
---@param IntArray TArray_integer_
---@param IndexOfMaxValue integer @[out] 
---@param MaxValue integer @[out] 
function UKismetMathLibrary.MaxOfIntArray(IntArray, IndexOfMaxValue, MaxValue) end

---Returns max of all array entries and the index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty.
---@param FloatArray TArray_number_
---@param IndexOfMaxValue integer @[out] 
---@param MaxValue number @[out] 
function UKismetMathLibrary.MaxOfFloatArray(FloatArray, IndexOfMaxValue, MaxValue) end

---Returns max of all array entries and the index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty.
---@param ByteArray TArray_integer_
---@param IndexOfMaxValue integer @[out] 
---@param MaxValue integer @[out] 
function UKismetMathLibrary.MaxOfByteArray(ByteArray, IndexOfMaxValue, MaxValue) end

---Returns the maximum value of A and B
---@param A integer
---@param B integer
---@return integer
function UKismetMathLibrary.MaxInt64(A, B) end

---Returns the maximum value of A and B
---@param A integer
---@param B integer
---@return integer
function UKismetMathLibrary.Max(A, B) end

---Transform a vector by the matrix.
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@param V FVector4
---@return FVector4
function UKismetMathLibrary.Matrix_TransformVector4(M, V) end

---Transform a direction vector - will not take into account translation part of the FMatrix.
---If you want to transform a surface normal (or plane) and correctly account for non-uniform scaling you should use TransformByUsingAdjointT.
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@param V FVector
---@return FVector4
function UKismetMathLibrary.Matrix_TransformVector(M, V) end

---Transform a location - will take into account translation part of the FMatrix.
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@param V FVector
---@return FVector4
function UKismetMathLibrary.Matrix_TransformPosition(M, V) end

---Transform a rotation matrix into a quaternion.
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@return FQuat
function UKismetMathLibrary.Matrix_ToQuat(M) end

---Set the origin of the coordinate system to the given vector
---(Assumes Matrix represents a transform)
---@param M FMatrix @[out] 
---@param NewOrigin FVector
function UKismetMathLibrary.Matrix_SetOrigin(M, NewOrigin) end

---@param M FMatrix @[out] 
---@param Column integer
---@param Value FVector
function UKismetMathLibrary.Matrix_SetColumn(M, Column, Value) end

---set an axis of this matrix
---(Assumes Matrix represents a transform)
---@param M FMatrix @[out] 
---@param Axis integer
---@param AxisVector FVector
function UKismetMathLibrary.Matrix_SetAxis(M, Axis, AxisVector) end

---Scale the translation part of the matrix by the supplied vector.
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@param Scale3D FVector
---@return FMatrix
function UKismetMathLibrary.Matrix_ScaleTranslation(M, Scale3D) end

---Remove any translation from this matrix
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@return FMatrix
function UKismetMathLibrary.Matrix_RemoveTranslation(M) end

---Remove any scaling from this matrix (ie magnitude of each row is 1) with error Tolerance
---(Assumes Matrix represents a transform)
---@param M FMatrix @[out] 
---@param Tolerance number @[opt] 
function UKismetMathLibrary.Matrix_RemoveScaling(M, Tolerance) end

---Utility for mirroring this transform across a certain plane, and flipping one of the axis as well.
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@param MirrorAxis integer
---@param FlipAxis integer
---@return FMatrix
function UKismetMathLibrary.Matrix_Mirror(M, MirrorAxis, FlipAxis) end

---Transform a direction vector by the inverse of this matrix - will not take into account translation part.
---If you want to transform a surface normal (or plane) and correctly account for non-uniform scaling you should use TransformByUsingAdjointT with adjoint of matrix inverse.
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@param V FVector
---@return FVector
function UKismetMathLibrary.Matrix_InverseTransformVector(M, V) end

---Inverts the matrix and then transforms V - correctly handles scaling in this matrix.
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@param V FVector
---@return FVector
function UKismetMathLibrary.Matrix_InverseTransformPosition(M, V) end

---Identity matrix
---@return FMatrix
function UKismetMathLibrary.Matrix_Identity() end

---get unit length axis of this matrix
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@param Axis integer
---@return FVector
function UKismetMathLibrary.Matrix_GetUnitAxis(M, Axis) end

---get unit length axes of this matrix
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@param X FVector @[out] 
---@param Y FVector @[out] 
---@param Z FVector @[out] 
function UKismetMathLibrary.Matrix_GetUnitAxes(M, X, Y, Z) end

---Transpose.
---@param M FMatrix
---@return FMatrix
function UKismetMathLibrary.Matrix_GetTransposed(M) end

---Get the Transose Adjoint of the Matrix.
---@param M FMatrix
---@return FMatrix
function UKismetMathLibrary.Matrix_GetTransposeAdjoint(M) end

---return a 3D scale vector calculated from this matrix (where each component is the magnitude of a row vector) with error Tolerance.
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@param Tolerance number @[opt] 
---@return FVector
function UKismetMathLibrary.Matrix_GetScaleVector(M, Tolerance) end

---get axis of this matrix scaled by the scale of the matrix
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@param Axis integer
---@return FVector
function UKismetMathLibrary.Matrix_GetScaledAxis(M, Axis) end

---get axes of this matrix scaled by the scale of the matrix
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@param X FVector @[out] 
---@param Y FVector @[out] 
---@param Z FVector @[out] 
function UKismetMathLibrary.Matrix_GetScaledAxes(M, X, Y, Z) end

---
---(Assumes Top Left 3x3 Submatrix represents a Rotation)
---@param M FMatrix
---@return number
function UKismetMathLibrary.Matrix_GetRotDeterminant(M) end

---Get the rotator representation of this matrix
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@return FRotator
function UKismetMathLibrary.Matrix_GetRotator(M) end

---Get the origin of the co-ordinate system
---(Assumes Matrix represents a transform)
---@param InMatrix FMatrix
---@return FVector
function UKismetMathLibrary.Matrix_GetOrigin(InMatrix) end

---
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@return number
function UKismetMathLibrary.Matrix_GetMaximumAxisScale(M) end

---Returns matrix after RemoveScaling with error Tolerance
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@param Tolerance number @[opt] 
---@return FMatrix
function UKismetMathLibrary.Matrix_GetMatrixWithoutScale(M, Tolerance) end

---Get the inverse of the Matrix. Handles nil matrices.
---@param M FMatrix
---@return FMatrix
function UKismetMathLibrary.Matrix_GetInverse(M) end

---Get the top plane of the Frustum of this matrix
---(Assumes Matrix represents a View Projection Matrix)
---@param M FMatrix
---@param OutPlane FPlane @[out] 
---@return boolean
function UKismetMathLibrary.Matrix_GetFrustumTopPlane(M, OutPlane) end

---Get the right plane of the Frustum of this matrix
---(Assumes Matrix represents a View Projection Matrix)
---@param M FMatrix
---@param OutPlane FPlane @[out] 
---@return boolean
function UKismetMathLibrary.Matrix_GetFrustumRightPlane(M, OutPlane) end

---Get the near plane of the Frustum of this matrix
---(Assumes Matrix represents a View Projection Matrix)
---@param M FMatrix
---@param OutPlane FPlane @[out] 
---@return boolean
function UKismetMathLibrary.Matrix_GetFrustumNearPlane(M, OutPlane) end

---Get the left plane of the Frustum of this matrix
---(Assumes Matrix represents a View Projection Matrix)
---@param M FMatrix
---@param OutPlane FPlane @[out] 
---@return boolean
function UKismetMathLibrary.Matrix_GetFrustumLeftPlane(M, OutPlane) end

---Get the far plane of the Frustum of this matrix
---(Assumes Matrix represents a View Projection Matrix)
---@param M FMatrix
---@param OutPlane FPlane @[out] 
---@return boolean
function UKismetMathLibrary.Matrix_GetFrustumFarPlane(M, OutPlane) end

---Get the bottom plane of the Frustum of this matrix
---(Assumes Matrix represents a View Projection Matrix)
---@param M FMatrix
---@param OutPlane FPlane @[out] 
---@return boolean
function UKismetMathLibrary.Matrix_GetFrustumBottomPlane(M, OutPlane) end

---
---@param M FMatrix
---@return number
function UKismetMathLibrary.Matrix_GetDeterminant(M) end

---get a column of this matrix
---@param M FMatrix
---@param Column integer
---@return FVector
function UKismetMathLibrary.Matrix_GetColumn(M, Column) end

---Returns true if any element of this matrix is NaN
---@param M FMatrix
---@return boolean
function UKismetMathLibrary.Matrix_ContainsNaN(M) end

---Returns a matrix with an additional translation concatenated.
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@param Translation FVector
---@return FMatrix
function UKismetMathLibrary.Matrix_ConcatenateTranslation(M, Translation) end

---Apply Scale to this matrix
---(Assumes Matrix represents a transform)
---@param M FMatrix
---@param Scale number
---@return FMatrix
function UKismetMathLibrary.Matrix_ApplyScale(M, Scale) end

---Returns Value mapped from one range into another.  (e.g. 20 normalized from the range 10->50 to 20->40 would result in 25)
---@param Value number
---@param InRangeA number
---@param InRangeB number
---@param OutRangeA number
---@param OutRangeB number
---@return number
function UKismetMathLibrary.MapRangeUnclamped(Value, InRangeA, InRangeB, OutRangeA, OutRangeB) end

---Returns Value mapped from one range into another where the Value is clamped to the Input Range.  (e.g. 0.5 normalized from the range 0->1 to 0->50 would result in 25)
---@param Value number
---@param InRangeA number
---@param InRangeB number
---@param OutRangeA number
---@param OutRangeB number
---@return number
function UKismetMathLibrary.MapRangeClamped(Value, InRangeA, InRangeB, OutRangeA, OutRangeB) end

---@param X number
---@param Y number
---@param Z number
---@return FVector_NetQuantizeNormal
function UKismetMathLibrary.MakeVector_NetQuantizeNormal(X, Y, Z) end

---@param X number
---@param Y number
---@param Z number
---@return FVector_NetQuantize100
function UKismetMathLibrary.MakeVector_NetQuantize100(X, Y, Z) end

---@param X number
---@param Y number
---@param Z number
---@return FVector_NetQuantize10
function UKismetMathLibrary.MakeVector_NetQuantize10(X, Y, Z) end

---NetQuantized vector make/breaks
---@param X number
---@param Y number
---@param Z number
---@return FVector_NetQuantize
function UKismetMathLibrary.MakeVector_NetQuantize(X, Y, Z) end

---Makes a 4D vector {X, Y, Z, W}
---@param X number
---@param Y number
---@param Z number
---@param W number
---@return FVector4
function UKismetMathLibrary.MakeVector4(X, Y, Z, W) end

---Makes a 2d vector {X, Y}
---@param X number
---@param Y number
---@return FVector2D
function UKismetMathLibrary.MakeVector2D(X, Y) end

---Makes a vector {X, Y, Z}
---@param X number
---@param Y number
---@param Z number
---@return FVector
function UKismetMathLibrary.MakeVector(X, Y, Z) end

---Make a transform from location, rotation and scale
---@param Location FVector
---@param Rotation FRotator
---@param Scale FVector @[opt] 
---@return FTransform
function UKismetMathLibrary.MakeTransform(Location, Rotation, Scale) end

---Makes a Timespan struct
---@param Days integer
---@param Hours integer
---@param Minutes integer
---@param Seconds integer
---@param FractionNano integer
---@return FTimespan
function UKismetMathLibrary.MakeTimespan2(Days, Hours, Minutes, Seconds, FractionNano) end

---Makes a Timespan struct
---@param Days integer
---@param Hours integer
---@param Minutes integer
---@param Seconds integer
---@param Milliseconds integer
---@return FTimespan
function UKismetMathLibrary.MakeTimespan(Days, Hours, Minutes, Seconds, Milliseconds) end

---Builds a matrix with given Z and Y axes. Z will remain fixed, Y may be changed minimally to enforce orthogonality. X will be computed. Inputs need not be normalized.
---@param Z FVector
---@param Y FVector
---@return FRotator
function UKismetMathLibrary.MakeRotFromZY(Z, Y) end

---Builds a matrix with given Z and X axes. Z will remain fixed, X may be changed minimally to enforce orthogonality. Y will be computed. Inputs need not be normalized.
---@param Z FVector
---@param X FVector
---@return FRotator
function UKismetMathLibrary.MakeRotFromZX(Z, X) end

---Builds a rotation matrix given only a ZAxis. X and Y are unspecified but will be orthonormal. ZAxis need not be normalized.
---@param Z FVector
---@return FRotator
function UKismetMathLibrary.MakeRotFromZ(Z) end

---Builds a matrix with given Y and Z axes. Y will remain fixed, Z may be changed minimally to enforce orthogonality. X will be computed. Inputs need not be normalized.
---@param Y FVector
---@param Z FVector
---@return FRotator
function UKismetMathLibrary.MakeRotFromYZ(Y, Z) end

---Builds a matrix with given Y and X axes. Y will remain fixed, X may be changed minimally to enforce orthogonality. Z will be computed. Inputs need not be normalized.
---@param Y FVector
---@param X FVector
---@return FRotator
function UKismetMathLibrary.MakeRotFromYX(Y, X) end

---Builds a rotation matrix given only a YAxis. X and Z are unspecified but will be orthonormal. YAxis need not be normalized.
---@param Y FVector
---@return FRotator
function UKismetMathLibrary.MakeRotFromY(Y) end

---Builds a matrix with given X and Z axes. X will remain fixed, Z may be changed minimally to enforce orthogonality. Y will be computed. Inputs need not be normalized.
---@param X FVector
---@param Z FVector
---@return FRotator
function UKismetMathLibrary.MakeRotFromXZ(X, Z) end

---Builds a matrix with given X and Y axes. X will remain fixed, Y may be changed minimally to enforce orthogonality. Z will be computed. Inputs need not be normalized.
---@param X FVector
---@param Y FVector
---@return FRotator
function UKismetMathLibrary.MakeRotFromXY(X, Y) end

---Builds a rotator given only a XAxis. Y and Z are unspecified but will be orthonormal. XAxis need not be normalized.
---@param X FVector
---@return FRotator
function UKismetMathLibrary.MakeRotFromX(X) end

---Makes a rotator {Roll, Pitch, Yaw} from rotation values supplied in degrees
---@param Roll number
---@param Pitch number
---@param Yaw number
---@return FRotator
function UKismetMathLibrary.MakeRotator(Roll, Pitch, Yaw) end

---Build a reference frame from three axes
---@param Forward FVector
---@param Right FVector
---@param Up FVector
---@return FRotator
function UKismetMathLibrary.MakeRotationFromAxes(Forward, Right, Up) end

---Computes a relative transform of one transform compared to another.
---Example: ChildOffset = MakeRelativeTransform(Child.GetActorTransform(), Parent.GetActorTransform())
---This computes the relative transform of the Child from the Parent.
---@param A FTransform
---@param RelativeTo FTransform
---@return FTransform
function UKismetMathLibrary.MakeRelativeTransform(A, RelativeTo) end

---Makes a random stream that will generate deterministic values, optionally grouping outputs within cells on a grid
---@param Location FVector
---@param DistanceInterval number @[opt] 
---@param bIncludeZ boolean @[opt] 
---@return FRandomStream
function UKismetMathLibrary.MakeRandomStreamFromLocation(Location, DistanceInterval, bIncludeZ) end

---Makes a SRand-based random number generator
---@param InitialSeed integer
---@return FRandomStream
function UKismetMathLibrary.MakeRandomStream(InitialSeed) end

---Makes a quat {X, Y, Z, W}
---@param X number
---@param Y number
---@param Z number
---@param W number
---@return FQuat
function UKismetMathLibrary.MakeQuat(X, Y, Z, W) end

---Creates a FQualifiedFrameTime out of a frame number, frame rate, and optional 0-1 clamped subframe.
---@param Frame FFrameNumber
---@param FrameRate FFrameRate
---@param SubFrame number @[opt] 
---@return FQualifiedFrameTime
function UKismetMathLibrary.MakeQualifiedFrameTime(Frame, FrameRate, SubFrame) end

---Simple function to create a pulsating scalar value
---@param InCurrentTime number
---@param InPulsesPerSecond number @[opt] 
---@param InPhase number @[opt] 
---@return number
function UKismetMathLibrary.MakePulsatingValue(InCurrentTime, InPulsesPerSecond, InPhase) end

---Creates a plane with a facing direction of Normal at the given Point
---@param Point FVector
---@param Normal FVector
---@return FPlane
function UKismetMathLibrary.MakePlaneFromPointAndNormal(Point, Normal) end

---Creates a FFrameRate from a Numerator and a Denominator. Enforces that the Denominator is at least one.
---@param Numerator integer
---@param Denominator integer @[opt] 
---@return FFrameRate
function UKismetMathLibrary.MakeFrameRate(Numerator, Denominator) end

---Makes a DateTime struct
---@param Year integer
---@param Month integer
---@param Day integer
---@param Hour integer @[opt] 
---@param Minute integer @[opt] 
---@param Second integer @[opt] 
---@param Millisecond integer @[opt] 
---@return FDateTime
function UKismetMathLibrary.MakeDateTime(Year, Month, Day, Hour, Minute, Second, Millisecond) end

---Make a color from individual color components (RGB space)
---@param R number
---@param G number
---@param B number
---@param A number @[opt] 
---@return FLinearColor
function UKismetMathLibrary.MakeColor(R, G, B, A) end

---Utility function to build an box from an Origin and Extent
---@param Origin FVector
---@param Extent FVector
---@return FBox
function UKismetMathLibrary.MakeBoxWithOrigin(Origin, Extent) end

---Makes an FBoxSphereBounds given an origin, extent, and radius
---@param Origin FVector
---@param BoxExtent FVector
---@param SphereRadius number
---@return FBoxSphereBounds
function UKismetMathLibrary.MakeBoxSphereBounds(Origin, BoxExtent, SphereRadius) end

---Makes an FBox2D from Min and Max and sets IsValid to true
---@param Min FVector2D
---@param Max FVector2D
---@return FBox2D
function UKismetMathLibrary.MakeBox2D(Min, Max) end

---Makes an FBox from Min and Max and sets IsValid to true
---@param Min FVector
---@param Max FVector
---@return FBox
function UKismetMathLibrary.MakeBox(Min, Max) end

---Returns natural log of A (if e^R == A, returns R)
---@param A number
---@return number
function UKismetMathLibrary.Loge(A) end

---Returns log of A base B (if B^R == A, returns R)
---@param A number
---@param Base number @[opt] 
---@return number
function UKismetMathLibrary.Log(A, Base) end

---Computes the intersection point between a line and a plane.
---@param LineStart FVector
---@param LineEnd FVector
---@param PlaneOrigin FVector
---@param PlaneNormal FVector
---@param T number @[out] 
---@param Intersection FVector @[out] 
---@return boolean
function UKismetMathLibrary.LinePlaneIntersection_OriginNormal(LineStart, LineEnd, PlaneOrigin, PlaneNormal, T, Intersection) end

---Computes the intersection point between a line and a plane.
---@param LineStart FVector
---@param LineEnd FVector
---@param APlane FPlane
---@param T number @[out] 
---@param Intersection FVector @[out] 
---@return boolean
function UKismetMathLibrary.LinePlaneIntersection(LineStart, LineEnd, APlane, T, Intersection) end

---Linearly interpolates between two colors by the specified Alpha amount (100% of A when Alpha=0 and 100% of B when Alpha=1).  The interpolation is performed in HSV color space taking the shortest path to the new color's hue.  This can give better results than a normal lerp, but is much more expensive.  The incoming colors are in RGB space, and the output color will be RGB.  The alpha value will also be interpolated.
---@param A FLinearColor
---@param B FLinearColor
---@param Alpha number
---@return FLinearColor
function UKismetMathLibrary.LinearColorLerpUsingHSV(A, B, Alpha) end

---Linearly interpolates between A and B based on Alpha (100% of A when Alpha=0 and 100% of B when Alpha=1)
---@param A FLinearColor
---@param B FLinearColor
---@param Alpha number
---@return FLinearColor
function UKismetMathLibrary.LinearColorLerp(A, B, Alpha) end

---Yellow linear color
---@return FLinearColor
function UKismetMathLibrary.LinearColor_Yellow() end

---White linear color
---@return FLinearColor
function UKismetMathLibrary.LinearColor_White() end

---Transparent linear color - black with 0 opacity/alpha
---@return FLinearColor
function UKismetMathLibrary.LinearColor_Transparent() end

---Converts from linear to 8-bit RGBE as outlined in Gregory Ward's Real Pixels article, Graphics Gems II, page 80.
---@param InLinearColor FLinearColor
---@return FColor
function UKismetMathLibrary.LinearColor_ToRGBE(InLinearColor) end

---Returns a copy of this color using the specified opacity/alpha.
---@param InColor FLinearColor
---@param InOpacity number
---@return FLinearColor
function UKismetMathLibrary.LinearColor_ToNewOpacity(InColor, InOpacity) end

---Converts temperature in Kelvins of a black body radiator to RGB chromaticity.
---@param InOutColor FLinearColor @[out] 
---@param InTemperature number
function UKismetMathLibrary.LinearColor_SetTemperature(InOutColor, InTemperature) end

---Assign individual linear RGBA components.
---@param InOutColor FLinearColor @[out] 
---@param R number
---@param G number
---@param B number
---@param A number @[opt] 
function UKismetMathLibrary.LinearColor_SetRGBA(InOutColor, R, G, B, A) end

---Sets to a random color. Choses a quite nice color based on a random hue.
---@param InOutColor FLinearColor @[out] 
function UKismetMathLibrary.LinearColor_SetRandomHue(InOutColor) end

---Assigns an FColor coming from an observed sRGB output, into a linear color.
---@param InOutColor FLinearColor @[out] 
---@param InSRGB FColor
function UKismetMathLibrary.LinearColor_SetFromSRGB(InOutColor, InSRGB) end

---Assigns an FColor coming from an observed Pow(1/2.2) output, into a linear color.
---@param InOutColor FLinearColor @[out] 
---@param InColor FColor
function UKismetMathLibrary.LinearColor_SetFromPow22(InOutColor, InColor) end

---Assigns an HSV color to a linear space RGB color
---@param InOutColor FLinearColor @[out] 
---@param H number
---@param S number
---@param V number
---@param A number @[opt] 
function UKismetMathLibrary.LinearColor_SetFromHSV(InOutColor, H, S, V, A) end

---Assign contents of InColor
---@param InOutColor FLinearColor @[out] 
---@param InColor FLinearColor
function UKismetMathLibrary.LinearColor_Set(InOutColor, InColor) end

---Red linear color
---@return FLinearColor
function UKismetMathLibrary.LinearColor_Red() end

---Quantizes the linear color with rounding and returns the result as an 8-bit color.  This bypasses the SRGB conversion.
---@param InColor FLinearColor
---@return FColor
function UKismetMathLibrary.LinearColor_QuantizeRound(InColor) end

---Quantizes the linear color and returns the result as an 8-bit color.  This bypasses the SRGB conversion.
---@param InColor FLinearColor
---@return FColor
function UKismetMathLibrary.LinearColor_Quantize(InColor) end

---Returns true if linear color A is equal to linear color B (A == B) within a specified error tolerance
---@param A FLinearColor
---@param B FLinearColor
---@param Tolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.LinearColor_IsNearEqual(A, B, Tolerance) end

---Green linear color
---@return FLinearColor
function UKismetMathLibrary.LinearColor_Green() end

---Grey linear color
---@return FLinearColor
function UKismetMathLibrary.LinearColor_Gray() end

---Returns the minimum color channel value in this color structure
---@param InColor FLinearColor
---@return number
function UKismetMathLibrary.LinearColor_GetMin(InColor) end

---Returns the maximum color channel value in this color structure
---@param InColor FLinearColor
---@return number
function UKismetMathLibrary.LinearColor_GetMax(InColor) end

---Returns the perceived brightness of a color on a display taking into account the impact on the human eye per color channel: green > red > blue.
---@param InColor FLinearColor
---@return number
function UKismetMathLibrary.LinearColor_GetLuminance(InColor) end

---Euclidean distance between two color points.
---@param C1 FLinearColor
---@param C2 FLinearColor
---@return number
function UKismetMathLibrary.LinearColor_Distance(C1, C2) end

---Returns a desaturated color, with 0 meaning no desaturation and 1 == full desaturation
---@param InColor FLinearColor
---@param InDesaturation number
---@return FLinearColor
function UKismetMathLibrary.LinearColor_Desaturated(InColor, InDesaturation) end

---Blue linear color
---@return FLinearColor
function UKismetMathLibrary.LinearColor_Blue() end

---Black linear color
---@return FLinearColor
function UKismetMathLibrary.LinearColor_Black() end

---Returns result of vector A rotated by the inverse of Rotator B
---@param A FVector
---@param B FRotator
---@return FVector
function UKismetMathLibrary.LessLess_VectorRotator(A, B) end

---Returns true if A is less than or equal to B (A <= B)
---@param A FTimespan
---@param B FTimespan
---@return boolean
function UKismetMathLibrary.LessEqual_TimespanTimespan(A, B) end

---Returns true if A is less than or equal to B (A <= B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.LessEqual_IntInt(A, B) end

---Returns true if A is less than or equal to B (A <= B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.LessEqual_Int64Int64(A, B) end

---Returns true if A is Less than or equal to B (A <= B)
---@param A number
---@param B number
---@return boolean
function UKismetMathLibrary.LessEqual_DoubleDouble(A, B) end

---Returns true if A is less than or equal to B (A <= B)
---@param A FDateTime
---@param B FDateTime
---@return boolean
function UKismetMathLibrary.LessEqual_DateTimeDateTime(A, B) end

---Returns true if A is less than or equal to B (A <= B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.LessEqual_ByteByte(A, B) end

---Returns true if A is less than B (A < B)
---@param A FTimespan
---@param B FTimespan
---@return boolean
function UKismetMathLibrary.Less_TimespanTimespan(A, B) end

---Returns true if A is less than B (A < B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.Less_IntInt(A, B) end

---Returns true if A is less than B (A < B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.Less_Int64Int64(A, B) end

---Returns true if A is Less than B (A < B)
---@param A number
---@param B number
---@return boolean
function UKismetMathLibrary.Less_DoubleDouble(A, B) end

---Returns true if A is less than B (A < B)
---@param A FDateTime
---@param B FDateTime
---@return boolean
function UKismetMathLibrary.Less_DateTimeDateTime(A, B) end

---Returns true if A is less than B (A < B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.Less_ByteByte(A, B) end

---Linearly interpolates between A and B based on Alpha (100% of A when Alpha=0 and 100% of B when Alpha=1)
---@param A number
---@param B number
---@param Alpha number
---@return number
function UKismetMathLibrary.Lerp(A, B, Alpha) end

---Checks whether all components of the vector are exactly zero.
---@param A FVector2D
---@return boolean
function UKismetMathLibrary.IsZero2D(A) end

---Determines whether a given point is in a box with a given transform. Includes points on the box.
---@param Point FVector
---@param BoxWorldTransform FTransform
---@param BoxExtent FBox
---@return boolean
function UKismetMathLibrary.IsPointInBoxWithTransform_Box(Point, BoxWorldTransform, BoxExtent) end

---Determines whether a given point is in a box with a given transform. Includes points on the box.
---@param Point FVector
---@param BoxWorldTransform FTransform
---@param BoxExtent FVector
---@return boolean
function UKismetMathLibrary.IsPointInBoxWithTransform(Point, BoxWorldTransform, BoxExtent) end

---Determines whether the given point is in a box. Includes points on the box.
---@param Point FVector
---@param Box FBox
---@return boolean
function UKismetMathLibrary.IsPointInBox_Box(Point, Box) end

---Determines whether the given point is in a box. Includes points on the box.
---@param Point FVector
---@param BoxOrigin FVector
---@param BoxExtent FVector
---@return boolean
function UKismetMathLibrary.IsPointInBox(Point, BoxOrigin, BoxExtent) end

---Checks whether vector is near to zero within a specified tolerance.
---@param A FVector2D
---@param Tolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.IsNearlyZero2D(A, Tolerance) end

---Returns whether A's time is in the morning
---@param A FDateTime
---@return boolean
function UKismetMathLibrary.IsMorning(A) end

---Returns whether given year is a leap year
---@param Year integer
---@return boolean
function UKismetMathLibrary.IsLeapYear(Year) end

---Returns whether A's time is in the afternoon
---@param A FDateTime
---@return boolean
function UKismetMathLibrary.IsAfternoon(A) end

---Returns the inverse of the given transform T.
---Example: Given a LocalToWorld transform, WorldToLocal will be returned.
---@param T FTransform
---@return FTransform
function UKismetMathLibrary.InvertTransform(T) end

---Transform a rotator by the inverse of the supplied transform.
---For example, if T was an object's transform, this would transform a rotation from world space to local space.
---@param T FTransform
---@param Rotation FRotator
---@return FRotator
function UKismetMathLibrary.InverseTransformRotation(T, Rotation) end

---Transform a position by the inverse of the supplied transform.
---For example, if T was an object's transform, this would transform a position from world space to local space.
---@param T FTransform
---@param Location FVector
---@return FVector
function UKismetMathLibrary.InverseTransformLocation(T, Location) end

---Transform a direction vector by the inverse of the supplied transform - will not change its length.
---For example, if T was an object's transform, this would transform a direction from world space to local space.
---@param T FTransform
---@param Direction FVector
---@return FVector
function UKismetMathLibrary.InverseTransformDirection(T, Direction) end

---Zero Int Point (0, 0)
---@return FIntPoint
function UKismetMathLibrary.IntPoint_Zero() end

---Up Int Point (0, -1)
---@return FIntPoint
function UKismetMathLibrary.IntPoint_Up() end

---Right Int Point (1, 0)
---@return FIntPoint
function UKismetMathLibrary.IntPoint_Right() end

---One Int Point (1, 1)
---@return FIntPoint
function UKismetMathLibrary.IntPoint_One() end

---Left Int Point (-1, 0)
---@return FIntPoint
function UKismetMathLibrary.IntPoint_Left() end

---Down Int Point (0, 1)
---@return FIntPoint
function UKismetMathLibrary.IntPoint_Down() end

---Returns true if value is between Min and Max (V >= Min && V <= Max)
---If InclusiveMin is true, value needs to be equal or larger than Min, else it needs to be larger
---If InclusiveMax is true, value needs to be smaller or equal than Max, else it needs to be smaller
---@param Value integer
---@param Min integer
---@param Max integer
---@param InclusiveMin boolean @[opt] 
---@param InclusiveMax boolean @[opt] 
---@return boolean
function UKismetMathLibrary.InRange_IntInt(Value, Min, Max, InclusiveMin, InclusiveMax) end

---Returns true if value is between Min and Max (V >= Min && V <= Max)
---If InclusiveMin is true, value needs to be equal or larger than Min, else it needs to be larger
---If InclusiveMax is true, value needs to be smaller or equal than Max, else it needs to be smaller
---@param Value integer
---@param Min integer
---@param Max integer
---@param InclusiveMin boolean @[opt] 
---@param InclusiveMax boolean @[opt] 
---@return boolean
function UKismetMathLibrary.InRange_Int64Int64(Value, Min, Max, InclusiveMin, InclusiveMax) end

---Returns true if value is between Min and Max (V >= Min && V <= Max)
---If InclusiveMin is true, value needs to be equal or larger than Min, else it needs to be larger
---If InclusiveMax is true, value needs to be smaller or equal than Max, else it needs to be smaller
---@param Value number
---@param Min number
---@param Max number
---@param InclusiveMin boolean @[opt] 
---@param InclusiveMax boolean @[opt] 
---@return boolean
function UKismetMathLibrary.InRange_FloatFloat(Value, Min, Max, InclusiveMin, InclusiveMax) end

---Returns the hypotenuse of a right-angled triangle given the width and height.
---@param Width number
---@param Height number
---@return number
function UKismetMathLibrary.Hypotenuse(Width, Height) end

---Converts a HSV linear color (where H is in R, S is in G, and V is in B) to linear RGB
---@param HSV FLinearColor
---@return FLinearColor
function UKismetMathLibrary.HSVToRGBLinear(HSV) end

---Converts a HSV linear color (where H is in R (0..360), S is in G (0..1), and V is in B (0..1)) to RGB
---@param HSV FLinearColor
---@param RGB FLinearColor @[out] 
function UKismetMathLibrary.HSVToRGB_Vector(HSV, RGB) end

---Make a color from individual color components (HSV space; Hue is [0..360) while Saturation and Value are 0..1)
---@param H number
---@param S number
---@param V number
---@param A number @[opt] 
---@return FLinearColor
function UKismetMathLibrary.HSVToRGB(H, S, V, A) end

---Snaps a value to the nearest grid multiple. E.g.,
---            Location = 5.1, GridSize = 10.0 : return value = 10.0
---If GridSize is 0 Location is returned
---if GridSize is very small precision issues may occur.
---@param Location number
---@param GridSize number
---@return number
function UKismetMathLibrary.GridSnap_Float(Location, GridSize) end

---Returns result of vector A rotated by Rotator B
---@param A FVector
---@param B FRotator
---@return FVector
function UKismetMathLibrary.GreaterGreater_VectorRotator(A, B) end

---Returns true if A is greater than or equal to B (A >= B)
---@param A FTimespan
---@param B FTimespan
---@return boolean
function UKismetMathLibrary.GreaterEqual_TimespanTimespan(A, B) end

---Returns true if A is greater than or equal to B (A >= B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.GreaterEqual_IntInt(A, B) end

---Returns true if A is greater than or equal to B (A >= B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.GreaterEqual_Int64Int64(A, B) end

---Returns true if A is greater than or equal to B (A >= B)
---@param A number
---@param B number
---@return boolean
function UKismetMathLibrary.GreaterEqual_DoubleDouble(A, B) end

---Returns true if A is greater than or equal to B (A >= B)
---@param A FDateTime
---@param B FDateTime
---@return boolean
function UKismetMathLibrary.GreaterEqual_DateTimeDateTime(A, B) end

---Returns true if A is greater than or equal to B (A >= B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.GreaterEqual_ByteByte(A, B) end

---Returns true if A is greater than B (A > B)
---@param A FTimespan
---@param B FTimespan
---@return boolean
function UKismetMathLibrary.Greater_TimespanTimespan(A, B) end

---Returns true if A is greater than B (A > B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.Greater_IntInt(A, B) end

---Returns true if A is greater than B (A > B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.Greater_Int64Int64(A, B) end

---Returns true if A is greater than B (A > B)
---@param A number
---@param B number
---@return boolean
function UKismetMathLibrary.Greater_DoubleDouble(A, B) end

---Returns true if A is greater than B (A > B)
---@param A FDateTime
---@param B FDateTime
---@return boolean
function UKismetMathLibrary.Greater_DateTimeDateTime(A, B) end

---Returns true if A is greater than B (A > B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.Greater_ByteByte(A, B) end

---Returns the year component of A
---@param A FDateTime
---@return integer
function UKismetMathLibrary.GetYear(A) end

---Breaks a vector apart into Yaw, Pitch rotation values given in degrees. (non-clamped)
---@param InVec FVector
---@param Yaw number @[out] 
---@param Pitch number @[out] 
function UKismetMathLibrary.GetYawPitchFromVector(InVec, Yaw, Pitch) end

---Find the average of an array of vectors
---@param Vectors TArray_FVector_
---@return FVector
function UKismetMathLibrary.GetVectorArrayAverage(Vectors) end

---Rotate the world up vector by the given rotation
---@param InRot FRotator
---@return FVector
function UKismetMathLibrary.GetUpVector(InRot) end

---Returns the total number of seconds in A
---@param A FTimespan
---@return number
function UKismetMathLibrary.GetTotalSeconds(A) end

---Returns the total number of minutes in A
---@param A FTimespan
---@return number
function UKismetMathLibrary.GetTotalMinutes(A) end

---Returns the total number of milliseconds in A
---@param A FTimespan
---@return number
function UKismetMathLibrary.GetTotalMilliseconds(A) end

---Returns the total number of hours in A
---@param A FTimespan
---@return number
function UKismetMathLibrary.GetTotalHours(A) end

---Returns the total number of days in A
---@param A FTimespan
---@return number
function UKismetMathLibrary.GetTotalDays(A) end

---Returns the time elapsed since midnight of A
---@param A FDateTime
---@return FTimespan
function UKismetMathLibrary.GetTimeOfDay(A) end

---Returns the value of TAU (= 2 * PI)
---@return number
function UKismetMathLibrary.GetTAU() end

---Returns Slope Pitch and Roll angles in degrees based on the following information:
---@param MyRightYAxis FVector
---@param FloorNormal FVector
---@param UpVector FVector
---@param OutSlopePitchDegreeAngle number @[out] 
---@param OutSlopeRollDegreeAngle number @[out] 
function UKismetMathLibrary.GetSlopeDegreeAngles(MyRightYAxis, FloorNormal, UpVector, OutSlopePitchDegreeAngle, OutSlopeRollDegreeAngle) end

---Returns the seconds component of A
---@param A FTimespan
---@return integer
function UKismetMathLibrary.GetSeconds(A) end

---Returns the second component of A
---@param A FDateTime
---@return integer
function UKismetMathLibrary.GetSecond(A) end

---Evaluate this runtime float curve at the specified time
---@param Curve FRuntimeFloatCurve
---@param InTime number
---@param InDefaultValue number @[opt] 
---@return number
function UKismetMathLibrary.GetRuntimeFloatCurveValue(Curve, InTime, InDefaultValue) end

---Rotates around axis (0,0,1)
---@param A FVector2D
---@param AngleDeg number
---@return FVector2D
function UKismetMathLibrary.GetRotated2D(A, AngleDeg) end

---Rotate the world right vector by the given rotation
---@param InRot FRotator
---@return FVector
function UKismetMathLibrary.GetRightVector(InRot) end

---Given a direction vector and a surface normal, returns the vector reflected across the surface normal.
---Produces a result like shining a laser at a mirror!
---@param Direction FVector
---@param SurfaceNormal FVector
---@return FVector
function UKismetMathLibrary.GetReflectionVector(Direction, SurfaceNormal) end

---Find the distance from a point to the closest point on a segment.
---@param Point FVector
---@param SegmentStart FVector
---@param SegmentEnd FVector
---@return number
function UKismetMathLibrary.GetPointDistanceToSegment(Point, SegmentStart, SegmentEnd) end

---Find the distance from a point to the closest point on an infinite line.
---@param Point FVector
---@param LineOrigin FVector
---@param LineDirection FVector
---@return number
function UKismetMathLibrary.GetPointDistanceToLine(Point, LineOrigin, LineDirection) end

---Returns the value of PI
---@return number
function UKismetMathLibrary.GetPI() end

---Returns the month component of A
---@param A FDateTime
---@return integer
function UKismetMathLibrary.GetMonth(A) end

---Returns the minutes component of A
---@param A FTimespan
---@return integer
function UKismetMathLibrary.GetMinutes(A) end

---Returns the minute component of A
---@param A FDateTime
---@return integer
function UKismetMathLibrary.GetMinute(A) end

---Find the minimum element (X, Y or Z) of a vector
---@param A FVector
---@return number
function UKismetMathLibrary.GetMinElement(A) end

---Get the minimum value of the vector's components.
---@param A FVector2D
---@return number
function UKismetMathLibrary.GetMin2D(A) end

---Returns the milliseconds component of A
---@param A FTimespan
---@return integer
function UKismetMathLibrary.GetMilliseconds(A) end

---Returns the millisecond component of A
---@param A FDateTime
---@return integer
function UKismetMathLibrary.GetMillisecond(A) end

---Find the maximum element (X, Y or Z) of a vector
---@param A FVector
---@return number
function UKismetMathLibrary.GetMaxElement(A) end

---Get the maximum value of the vector's components.
---@param A FVector2D
---@return number
function UKismetMathLibrary.GetMax2D(A) end

---Returns the hours component of A
---@param A FTimespan
---@return integer
function UKismetMathLibrary.GetHours(A) end

---Returns the hour component of A (12h format)
---@param A FDateTime
---@return integer
function UKismetMathLibrary.GetHour12(A) end

---Returns the hour component of A (24h format)
---@param A FDateTime
---@return integer
function UKismetMathLibrary.GetHour(A) end

---Rotate the world forward vector by the given rotation
---@param InRot FRotator
---@return FVector
function UKismetMathLibrary.GetForwardVector(InRot) end

---Returns the absolute value of A
---@param A FTimespan
---@return FTimespan
function UKismetMathLibrary.GetDuration(A) end

---Find the unit direction vector from one position to another or (0,0,0) if positions are the same.
---@param From FVector
---@param To FVector
---@return FVector
function UKismetMathLibrary.GetDirectionUnitVector(From, To) end

---Returns the days component of A
---@param A FTimespan
---@return integer
function UKismetMathLibrary.GetDays(A) end

---Returns the day of year of A
---@param A FDateTime
---@return integer
function UKismetMathLibrary.GetDayOfYear(A) end

---Returns the day component of A (1 to 31)
---@param A FDateTime
---@return integer
function UKismetMathLibrary.GetDay(A) end

---Returns the date component of A
---@param A FDateTime
---@return FDateTime
function UKismetMathLibrary.GetDate(A) end

---Gets the volume of this box.
---@param InBox FBox
---@return number
function UKismetMathLibrary.GetBoxVolume(InBox) end

---Gets the size of this box.
---@param InBox FBox
---@return FVector
function UKismetMathLibrary.GetBoxSize(InBox) end

---Gets the center point of this box.
---@param InBox FBox
---@return FVector
function UKismetMathLibrary.GetBoxCenter(InBox) end

---Breaks a direction vector apart into Azimuth (Yaw) and Elevation (Pitch) rotation values given in degrees. (non-clamped)
---       Relative to the provided reference frame (an Actor's WorldTransform for example)
---@param InDirection FVector
---@param ReferenceFrame FTransform
---@param Azimuth number @[out] 
---@param Elevation number @[out] 
function UKismetMathLibrary.GetAzimuthAndElevation(InDirection, ReferenceFrame, Azimuth, Elevation) end

---Get the reference frame direction vectors (axes) described by this rotation
---@param A FRotator
---@param X FVector @[out] 
---@param Y FVector @[out] 
---@param Z FVector @[out] 
function UKismetMathLibrary.GetAxes(A, X, Y, Z) end

---Get the maximum absolute value of the vector's components.
---@param A FVector2D
---@return number
function UKismetMathLibrary.GetAbsMax2D(A) end

---Get a copy of this vector with absolute value of each component.
---@param A FVector2D
---@return FVector2D
function UKismetMathLibrary.GetAbs2D(A) end

---Returns Value wrapped from A and B (inclusive)
---@param Value number
---@param Min number
---@param Max number
---@return number
function UKismetMathLibrary.FWrap(Value, Min, Max) end

---Rounds A to an integer with truncation towards zero for each element in a vector2D.  (e.g. -1.7 truncated to -1, 2.8 truncated to 2)
---@param InVector2D FVector2D
---@return FIntVector2
function UKismetMathLibrary.FTruncVector2D(InVector2D) end

---Rounds A to an integer with truncation towards zero for each element in a vector.  (e.g. -1.7 truncated to -1, 2.8 truncated to 2)
---@param InVector FVector
---@return FIntVector
function UKismetMathLibrary.FTruncVector(InVector) end

---Rounds A towards zero, truncating the fractional part (e.g., -1.6 becomes -1 and 1.6 becomes 1)
---@param A number
---@return integer
function UKismetMathLibrary.FTrunc64(A) end

---Rounds A towards zero, truncating the fractional part (e.g., -1.6 becomes -1 and 1.6 becomes 1)
---@param A number
---@return integer
function UKismetMathLibrary.FTrunc(A) end

---Returns the date from Unix time (seconds from midnight 1970-01-01)
---@param UnixTime integer
---@return FDateTime
function UKismetMathLibrary.FromUnixTimestamp(UnixTime) end

---Returns a time span that represents the specified number of seconds
---@param Seconds number
---@return FTimespan
function UKismetMathLibrary.FromSeconds(Seconds) end

---Returns a time span that represents the specified number of minutes
---@param Minutes number
---@return FTimespan
function UKismetMathLibrary.FromMinutes(Minutes) end

---Returns a time span that represents the specified number of milliseconds
---@param Milliseconds number
---@return FTimespan
function UKismetMathLibrary.FromMilliseconds(Milliseconds) end

---Returns a time span that represents the specified number of hours
---@param Hours number
---@return FTimespan
function UKismetMathLibrary.FromHours(Hours) end

---Returns a time span that represents the specified number of days
---@param Days number
---@return FTimespan
function UKismetMathLibrary.FromDays(Days) end

---Returns the fractional part of a float.
---@param A number
---@return number
function UKismetMathLibrary.Fraction(A) end

---Returns the number of times Divisor will go into Dividend (i.e., Dividend divided by Divisor), as well as the remainder
---@param Dividend number
---@param Divisor number
---@param Remainder number @[out] 
---@return integer
function UKismetMathLibrary.FMod64(Dividend, Divisor, Remainder) end

---Returns the number of times Divisor will go into Dividend (i.e., Dividend divided by Divisor), as well as the remainder
---@param Dividend number
---@param Divisor number
---@param Remainder number @[out] 
---@return integer
function UKismetMathLibrary.FMod(Dividend, Divisor, Remainder) end

---Returns the minimum value of A and B
---@param A number
---@param B number
---@return number
function UKismetMathLibrary.FMin(A, B) end

---Returns the maximum value of A and B
---@param A number
---@param B number
---@return number
function UKismetMathLibrary.FMax(A, B) end

---Uses a simple spring model to interpolate a float from Current to Target.
---@param Current number
---@param Target number
---@param SpringState FFloatSpringState @[out] 
---@param Stiffness number
---@param CriticalDampingFactor number
---@param DeltaTime number
---@param Mass number @[opt] 
---@param TargetVelocityAmount number @[opt] 
---@param bClamp boolean @[opt] 
---@param MinValue number @[opt] 
---@param MaxValue number @[opt] 
---@param bInitializeFromTarget boolean @[opt] 
---@return number
function UKismetMathLibrary.FloatSpringInterp(Current, Target, SpringState, Stiffness, CriticalDampingFactor, DeltaTime, Mass, TargetVelocityAmount, bClamp, MinValue, MaxValue, bInitializeFromTarget) end

---Returns a new rotation component value
---@param InCurrent number
---@param InDesired number
---@param InDeltaRate number
---@return number
function UKismetMathLibrary.FixedTurn(InCurrent, InDesired, InDeltaRate) end

---Tries to reach Target at a constant rate.
---@param Current number
---@param Target number
---@param DeltaTime number
---@param InterpSpeed number
---@return number
function UKismetMathLibrary.FInterpTo_Constant(Current, Target, DeltaTime, InterpSpeed) end

---Tries to reach Target based on distance from Current position, giving a nice smooth feeling when tracking a position.
---@param Current number
---@param Target number
---@param DeltaTime number
---@param InterpSpeed number
---@return number
function UKismetMathLibrary.FInterpTo(Current, Target, DeltaTime, InterpSpeed) end

---Interpolate between A and B, applying an ease in/out function.  Exp controls the degree of the curve.
---@param A number
---@param B number
---@param Alpha number
---@param Exponent number
---@return number
function UKismetMathLibrary.FInterpEaseInOut(A, B, Alpha, Exponent) end

---Find a local rotation (range of [-180, 180]) for an object with StartTransform to point at TargetLocation.
---Useful for getting LookAt Azimuth or Pawn Aim Offset.
---@param StartTransform FTransform
---@param TargetLocation FVector
---@return FRotator
function UKismetMathLibrary.FindRelativeLookAtRotation(StartTransform, TargetLocation) end

---Find closest points between 2 segments.
---@param Segment1Start FVector
---@param Segment1End FVector
---@param Segment2Start FVector
---@param Segment2End FVector
---@param Segment1Point FVector @[out] 
---@param Segment2Point FVector @[out] 
function UKismetMathLibrary.FindNearestPointsOnLineSegments(Segment1Start, Segment1End, Segment2Start, Segment2End, Segment1Point, Segment2Point) end

---Find a rotation for an object at Start location to point at Target location.
---@param Start FVector
---@param Target FVector
---@return FRotator
function UKismetMathLibrary.FindLookAtRotation(Start, Target) end

---Find the closest point on a segment to a given point.
---@param Point FVector
---@param SegmentStart FVector
---@param SegmentEnd FVector
---@return FVector
function UKismetMathLibrary.FindClosestPointOnSegment(Point, SegmentStart, SegmentEnd) end

---Find the closest point on an infinite line to a given point.
---@param Point FVector
---@param LineOrigin FVector
---@param LineDirection FVector
---@return FVector
function UKismetMathLibrary.FindClosestPointOnLine(Point, LineOrigin, LineDirection) end

---Rounds A down towards negative infinity / down to the previous integer (e.g., -1.6 becomes -2 and 1.6 becomes 1)
---@param A number
---@return integer
function UKismetMathLibrary.FFloor64(A) end

---Rounds A down towards negative infinity / down to the previous integer (e.g., -1.6 becomes -2 and 1.6 becomes 1)
---@param A number
---@return integer
function UKismetMathLibrary.FFloor(A) end

---Returns Value clamped between A and B (inclusive)
---@param Value number
---@param Min number
---@param Max number
---@return number
function UKismetMathLibrary.FClamp(Value, Min, Max) end

---Rounds A up towards positive infinity / up to the next integer (e.g., -1.6 becomes -1 and 1.6 becomes 2)
---@param A number
---@return integer
function UKismetMathLibrary.FCeil64(A) end

---Rounds A up towards positive infinity / up to the next integer (e.g., -1.6 becomes -1 and 1.6 becomes 2)
---@param A number
---@return integer
function UKismetMathLibrary.FCeil(A) end

---Returns exponential(e) to the power A (e^A)
---@param A number
---@return number
function UKismetMathLibrary.Exp(A) end

---Returns true if vector A is equal to vector B (A == B)
---@param A FVector
---@param B FVector
---@return boolean
function UKismetMathLibrary.EqualExactly_VectorVector(A, B) end

---Returns true if vector A is equal to vector B (A == B)
---@param A FVector4
---@param B FVector4
---@return boolean
function UKismetMathLibrary.EqualExactly_Vector4Vector4(A, B) end

---Returns true if vector A is equal to vector B (A == B)
---@param A FVector2D
---@param B FVector2D
---@return boolean
function UKismetMathLibrary.EqualExactly_Vector2DVector2D(A, B) end

---Returns true if vector A is equal to vector B (A == B) within a specified error tolerance
---@param A FVector
---@param B FVector
---@param ErrorTolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.EqualEqual_VectorVector(A, B, ErrorTolerance) end

---Returns true if vector A is equal to vector B (A == B) within a specified error tolerance
---@param A FVector4
---@param B FVector4
---@param ErrorTolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.EqualEqual_Vector4Vector4(A, B, ErrorTolerance) end

---Returns true if vector2D A is equal to vector2D B (A == B) within a specified error tolerance
---@param A FVector2D
---@param B FVector2D
---@param ErrorTolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.EqualEqual_Vector2DVector2D(A, B, ErrorTolerance) end

---Returns true if transform A is equal to transform B
---@param A FTransform
---@param B FTransform
---@return boolean
function UKismetMathLibrary.EqualEqual_TransformTransform(A, B) end

---Returns true if the values are equal (A == B)
---@param A FTimespan
---@param B FTimespan
---@return boolean
function UKismetMathLibrary.EqualEqual_TimespanTimespan(A, B) end

---Returns true if rotator A is equal to rotator B (A == B) within a specified error tolerance
---@param A FRotator
---@param B FRotator
---@param ErrorTolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.EqualEqual_RotatorRotator(A, B, ErrorTolerance) end

---Returns true if Quaternion A is equal to Quaternion B (A == B) within a specified error tolerance
---@param A FQuat
---@param B FQuat
---@param Tolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.EqualEqual_QuatQuat(A, B, Tolerance) end

---Returns true if A and B are equal (A == B)
---@param A UObject
---@param B UObject
---@return boolean
function UKismetMathLibrary.EqualEqual_ObjectObject(A, B) end

---Returns true if A and B are equal (A == B)
---@param A string
---@param B string
---@return boolean
function UKismetMathLibrary.EqualEqual_NameName(A, B) end

---Checks whether another Matrix is equal to this, within specified tolerance.
---@param A FMatrix
---@param B FMatrix
---@param Tolerance number @[opt] 
---@return boolean
function UKismetMathLibrary.EqualEqual_MatrixMatrix(A, B, Tolerance) end

---Returns true if linear color A is equal to linear color B (A == B) within a specified error tolerance
---@param A FLinearColor
---@param B FLinearColor
---@return boolean
function UKismetMathLibrary.EqualEqual_LinearColorLinearColor(A, B) end

---Returns true if A is equal to B (A == B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.EqualEqual_IntInt(A, B) end

---Returns true if A is equal to B (A == B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.EqualEqual_Int64Int64(A, B) end

---Returns true if A is exactly equal to B (A == B)
---@param A number
---@param B number
---@return boolean
function UKismetMathLibrary.EqualEqual_DoubleDouble(A, B) end

---Returns true if the values are equal (A == B)
---@param A FDateTime
---@param B FDateTime
---@return boolean
function UKismetMathLibrary.EqualEqual_DateTimeDateTime(A, B) end

---Returns true if A and B are equal (A == B)
---@param A TSubclassOf_UObject_
---@param B TSubclassOf_UObject_
---@return boolean
function UKismetMathLibrary.EqualEqual_ClassClass(A, B) end

---Returns true if A is equal to B (A == B)
---@param A integer
---@param B integer
---@return boolean
function UKismetMathLibrary.EqualEqual_ByteByte(A, B) end

---Returns true if the values are equal (A == B)
---@param A boolean
---@param B boolean
---@return boolean
function UKismetMathLibrary.EqualEqual_BoolBool(A, B) end

---Returns true if IntPoint A is equal to IntPoint B (A == B)
---@param A FIntPoint
---@param B FIntPoint
---@return boolean
function UKismetMathLibrary.Equal_IntPointIntPoint(A, B) end

---Easeing  between A and B using a specified easing function
---@param A number
---@param B number
---@param Alpha number
---@param EasingFunc integer
---@param BlendExp number @[opt] 
---@param Steps integer @[opt] 
---@return number
function UKismetMathLibrary.Ease(A, B, Alpha, EasingFunc, BlendExp, Steps) end

---Calculates the new value in a weighted moving average series using the previous value and a weight range.
---The weight range is used to dynamically adjust based upon distance between the samples
---This allows you to smooth a value more aggressively for small noise and let large movements be smoothed less (or vice versa)
---@param CurrentSample FVector
---@param PreviousSample FVector
---@param MaxDistance number
---@param MinWeight number
---@param MaxWeight number
---@return FVector
function UKismetMathLibrary.DynamicWeightedMovingAverage_FVector(CurrentSample, PreviousSample, MaxDistance, MinWeight, MaxWeight) end

---Calculates the new value in a weighted moving average series using the previous value and a weight range.
---The weight range is used to dynamically adjust based upon distance between the samples
---This allows you to smooth a value more aggressively for small noise and let large movements be smoothed less (or vice versa)
---@param CurrentSample FRotator
---@param PreviousSample FRotator
---@param MaxDistance number
---@param MinWeight number
---@param MaxWeight number
---@return FRotator
function UKismetMathLibrary.DynamicWeightedMovingAverage_FRotator(CurrentSample, PreviousSample, MaxDistance, MinWeight, MaxWeight) end

---Calculates the new value in a weighted moving average series using the previous value and a weight range.
---The weight range is used to dynamically adjust based upon distance between the samples
---This allows you to smooth a value more aggressively for small noise and let large movements be smoothed less (or vice versa)
---@param CurrentSample number
---@param PreviousSample number
---@param MaxDistance number
---@param MinWeight number
---@param MaxWeight number
---@return number
function UKismetMathLibrary.DynamicWeightedMovingAverage_Float(CurrentSample, PreviousSample, MaxDistance, MinWeight, MaxWeight) end

---Returns the dot product of two 2d vectors - see http://mathworld.wolfram.com/DotProduct.html
---@param A FVector2D
---@param B FVector2D
---@return number
function UKismetMathLibrary.DotProduct2D(A, B) end

---Returns the dot product of two 3d vectors - see http://mathworld.wolfram.com/DotProduct.html
---@param A FVector
---@param B FVector
---@return number
function UKismetMathLibrary.Dot_VectorVector(A, B) end

---Element-wise Vector division (Result = {A.x/B.x, A.y/B.y, A.z/B.z})
---@param A FVector
---@param B FVector @[opt] 
---@return FVector
function UKismetMathLibrary.Divide_VectorVector(A, B) end

---Vector divide by an integer
---@param A FVector
---@param B integer @[opt] 
---@return FVector
function UKismetMathLibrary.Divide_VectorInt(A, B) end

---Vector divide by a float
---@param A FVector
---@param B number @[opt] 
---@return FVector
function UKismetMathLibrary.Divide_VectorFloat(A, B) end

---Element-wise Vector divide (Result = {A.x/B.x, A.y/B.y, A.z/B.z, A.w/B.w})
---@param A FVector4
---@param B FVector4
---@return FVector4
function UKismetMathLibrary.Divide_Vector4Vector4(A, B) end

---Element-wise Vector divide (Result = {A.x/B.x, A.y/B.y})
---@param A FVector2D
---@param B FVector2D
---@return FVector2D
function UKismetMathLibrary.Divide_Vector2DVector2D(A, B) end

---Returns Vector A divided by B
---@param A FVector2D
---@param B number @[opt] 
---@return FVector2D
function UKismetMathLibrary.Divide_Vector2DFloat(A, B) end

---Scalar division (A / s)
---@param A FTimespan
---@param Scalar number
---@return FTimespan
function UKismetMathLibrary.Divide_TimespanFloat(A, Scalar) end

---Element-wise multiplication of two linear colors (R/R, G/G, B/B, A/A)
---@param A FLinearColor
---@param B FLinearColor
---@return FLinearColor
function UKismetMathLibrary.Divide_LinearColorLinearColor(A, B) end

---Returns IntPoint A divided by B
---@param A FIntPoint
---@param B FIntPoint
---@return FIntPoint
function UKismetMathLibrary.Divide_IntPointIntPoint(A, B) end

---Division (A * B)
---@param A FIntPoint
---@param B integer
---@return FIntPoint
function UKismetMathLibrary.Divide_IntPointInt(A, B) end

---Division (A / B)
---@param A integer
---@param B integer @[opt] 
---@return integer
function UKismetMathLibrary.Divide_IntInt(A, B) end

---Division (A / B)
---@param A integer
---@param B integer @[opt] 
---@return integer
function UKismetMathLibrary.Divide_Int64Int64(A, B) end

---Division (A / B)
---@param A number
---@param B number @[opt] 
---@return number
function UKismetMathLibrary.Divide_DoubleDouble(A, B) end

---Division (A / B)
---@param A integer
---@param B integer @[opt] 
---@return integer
function UKismetMathLibrary.Divide_ByteByte(A, B) end

---Squared distance between two 2D points.
---@param V1 FVector2D
---@param V2 FVector2D
---@return number
function UKismetMathLibrary.DistanceSquared2D(V1, V2) end

---Distance between two 2D points.
---@param V1 FVector2D
---@param V2 FVector2D
---@return number
function UKismetMathLibrary.Distance2D(V1, V2) end

---Returns the tan of A (expects Degrees)
---@param A number
---@return number
function UKismetMathLibrary.DegTan(A) end

---Returns the sin of A (expects Degrees)
---@param A number
---@return number
function UKismetMathLibrary.DegSin(A) end

---Returns radians value based on the input degrees
---@param A number
---@return number
function UKismetMathLibrary.DegreesToRadians(A) end

---Returns the cos of A (expects Degrees)
---@param A number
---@return number
function UKismetMathLibrary.DegCos(A) end

---Returns the inverse tan (atan2) of A/B (result is in Degrees)
---@param Y number
---@param X number
---@return number
function UKismetMathLibrary.DegAtan2(Y, X) end

---Returns the inverse tan (atan) (result is in Degrees)
---@param A number
---@return number
function UKismetMathLibrary.DegAtan(A) end

---Returns the inverse sin (arcsin) of A (result is in Degrees)
---@param A number
---@return number
function UKismetMathLibrary.DegAsin(A) end

---Returns the inverse cos (arccos) of A (result is in Degrees)
---@param A number
---@return number
function UKismetMathLibrary.DegAcos(A) end

---Returns the number of days in the given year
---@param Year integer
---@return integer
function UKismetMathLibrary.DaysInYear(Year) end

---Returns the number of days in the given year and month
---@param Year integer
---@param Month integer
---@return integer
function UKismetMathLibrary.DaysInMonth(Year, Month) end

---Returns the minimum date and time value
---@return FDateTime
function UKismetMathLibrary.DateTimeMinValue() end

---Returns the maximum date and time value
---@return FDateTime
function UKismetMathLibrary.DateTimeMaxValue() end

---Converts a date string to a DateTime object
---@param DateTimeString string
---@param Result FDateTime @[out] 
---@return boolean
function UKismetMathLibrary.DateTimeFromString(DateTimeString, Result) end

---Converts a date string in ISO-8601 format to a DateTime object
---@param IsoString string
---@param Result FDateTime @[out] 
---@return boolean
function UKismetMathLibrary.DateTimeFromIsoString(IsoString, Result) end

---Returns the cross product of two 2d vectors - see  http://mathworld.wolfram.com/CrossProduct.html
---@param A FVector2D
---@param B FVector2D
---@return number
function UKismetMathLibrary.CrossProduct2D(A, B) end

---Returns the cross product of two 3d vectors - see http://mathworld.wolfram.com/CrossProduct.html
---@param A FVector
---@param B FVector
---@return FVector
function UKismetMathLibrary.Cross_VectorVector(A, B) end

---Creates a directional vector from rotation values {Pitch, Yaw} supplied in degrees with specified Length
---@param Yaw number
---@param Pitch number
---@param Length number @[opt] 
---@return FVector
function UKismetMathLibrary.CreateVectorFromYawPitch(Yaw, Pitch, Length) end

---Returns the cosine of A (expects Radians)
---@param A number
---@return number
function UKismetMathLibrary.Cos(A) end

---Maps a 3D array index to a 1D array index.
---@param Index3D FIntVector
---@param XSize integer
---@param YSize integer
---@return integer
function UKismetMathLibrary.Convert3DTo1D(Index3D, XSize, YSize) end

---Maps a 2D array index to a 1D array index.
---@param Index2D FIntPoint
---@param XSize integer
---@return integer
function UKismetMathLibrary.Convert2DTo1D(Index2D, XSize) end

---Maps a 1D array index to a 3D array index.
---@param Index1D integer
---@param XSize integer
---@param YSize integer
---@return FIntVector
function UKismetMathLibrary.Convert1DTo3D(Index1D, XSize, YSize) end

---Maps a 1D array index to a 2D array index.
---@param Index1D integer
---@param XSize integer
---@return FIntPoint
function UKismetMathLibrary.Convert1DTo2D(Index1D, XSize) end

---Converts a Vector to a Vector2D using the Vector's (X, Y) coordinates
---@param InVector FVector
---@return FVector2D
function UKismetMathLibrary.Conv_VectorToVector2D(InVector) end

---Converts a vector to a transform. Uses vector as location
---@param InLocation FVector
---@return FTransform
function UKismetMathLibrary.Conv_VectorToTransform(InLocation) end

---Return the FRotator orientation corresponding to the direction in which the vector points.
---Sets Yaw and Pitch to the proper numbers, and sets Roll to zero because the roll can't be determined from a vector.
---@param InVec FVector
---@return FRotator
function UKismetMathLibrary.Conv_VectorToRotator(InVec) end

---Return the Quaternion orientation corresponding to the direction in which the vector points.
---Similar to the FRotator version, returns a result without roll such that it preserves the up vector.
---'FindBetweenVectors(ForwardVector, YourVector)' or 'FindBetweenNormals(...)' if you know the vector is of unit length.
---@param InVec FVector
---@return FQuat
function UKismetMathLibrary.Conv_VectorToQuaternion(InVec) end

---Converts a vector to LinearColor
---@param InVec FVector
---@return FLinearColor
function UKismetMathLibrary.Conv_VectorToLinearColor(InVec) end

---Converts a Vector4 to a Vector (dropping the W element)
---@param InVector4 FVector4
---@return FVector
function UKismetMathLibrary.Conv_Vector4ToVector(InVector4) end

---Return the FRotator orientation corresponding to the direction in which the vector points.
---Sets Yaw and Pitch to the proper numbers, and sets Roll to zero because the roll can't be determined from a vector.
---@param InVec FVector4
---@return FRotator
function UKismetMathLibrary.Conv_Vector4ToRotator(InVec) end

---Return the Quaternion orientation corresponding to the direction in which the vector points.
---Similar to the FRotator version, returns a result without roll such that it preserves the up vector.
---'FindBetweenVectors(ForwardVector, YourVector)' or 'FindBetweenNormals(...)' if you know the vector is of unit length.
---@param InVec FVector4
---@return FQuat
function UKismetMathLibrary.Conv_Vector4ToQuaternion(InVec) end

---Converts a Vector2D to a Vector
---@param InVector2D FVector2D
---@param Z number @[opt] 
---@return FVector
function UKismetMathLibrary.Conv_Vector2DToVector(InVector2D, Z) end

---Converts a Vector2D to an IntPoint
---@param InVector2D FVector2D
---@return FIntPoint
function UKismetMathLibrary.Conv_Vector2DToIntPoint(InVector2D) end

---Converts a Transform to a Matrix with scale
---@param Transform FTransform
---@return FMatrix
function UKismetMathLibrary.Conv_TransformToMatrix(Transform) end

---Get the X direction vector after this rotation
---@param InRot FRotator
---@return FVector
function UKismetMathLibrary.Conv_RotatorToVector(InRot) end

---Converts Rotator to Transform
---@param InRotator FRotator
---@return FTransform
function UKismetMathLibrary.Conv_RotatorToTransform(InRotator) end

---Converts to Quaternion representation of this Rotator.
---@param InRot FRotator
---@return FQuat
function UKismetMathLibrary.Conv_RotatorToQuaternion(InRot) end

---Converts a Matrix to a Transform
---(Assumes Matrix represents a transform)
---@param InMatrix FMatrix
---@return FTransform
function UKismetMathLibrary.Conv_MatrixToTransform(InMatrix) end

---Converts a Matrix to a Rotator
---(Assumes Matrix represents a transform)
---@param InMatrix FMatrix
---@return FRotator
function UKismetMathLibrary.Conv_MatrixToRotator(InMatrix) end

---Converts a LinearColor to a vector
---@param InLinearColor FLinearColor
---@return FVector
function UKismetMathLibrary.Conv_LinearColorToVector(InLinearColor) end

---Quantizes the linear color and returns the result as a FColor with optional sRGB conversion and quality as goal.
---@param InLinearColor FLinearColor
---@param InUseSRGB boolean @[opt] 
---@return FColor
function UKismetMathLibrary.Conv_LinearColorToColor(InLinearColor, InUseSRGB) end

---Converts an IntVector to a vector
---@param InIntVector FIntVector
---@return FVector
function UKismetMathLibrary.Conv_IntVectorToVector(InIntVector) end

---Converts an IntVector2 to a vector2D
---@param InIntVector2 FIntVector2
---@return FVector2D
function UKismetMathLibrary.Conv_IntVector2ToVector2D(InIntVector2) end

---Converts an integer to a FVector
---@param InInt integer
---@return FVector
function UKismetMathLibrary.Conv_IntToVector(InInt) end

---Converts an integer to an IntVector2
---@param InInt integer
---@return FIntVector2
function UKismetMathLibrary.Conv_IntToIntVector2(InInt) end

---Converts an integer to an IntVector
---@param InInt integer
---@return FIntVector
function UKismetMathLibrary.Conv_IntToIntVector(InInt) end

---Converts an integer to a 64 bit integer
---@param InInt integer
---@return integer
function UKismetMathLibrary.Conv_IntToInt64(InInt) end

---Converts an integer to a float
---@param InInt integer
---@return number
function UKismetMathLibrary.Conv_IntToDouble(InInt) end

---Converts an integer to a byte (if the integer is too large, returns the low 8 bits)
---@param InInt integer
---@return integer
function UKismetMathLibrary.Conv_IntToByte(InInt) end

---Converts a int to a bool
---@param InInt integer
---@return boolean
function UKismetMathLibrary.Conv_IntToBool(InInt) end

---Converts an IntPoint to a Vector2D
---@param InIntPoint FIntPoint
---@return FVector2D
function UKismetMathLibrary.Conv_IntPointToVector2D(InIntPoint) end

---Converts a 64 bit integer to a 32 bit integer (if the integer is too large, returns the low 32 bits)
---@param InInt integer
---@return integer
function UKismetMathLibrary.Conv_Int64ToInt(InInt) end

---Converts a 64 bit integer to a float
---@param InInt integer
---@return number
function UKismetMathLibrary.Conv_Int64ToDouble(InInt) end

---Converts a 64 bit integer to a byte (if the integer is too large, returns the low 8 bits)
---@param InInt integer
---@return integer
function UKismetMathLibrary.Conv_Int64ToByte(InInt) end

---Converts a 32 bit floating point to a 64 bit floating point
---@param InFloat number
---@return number
function UKismetMathLibrary.Conv_FloatToDouble(InFloat) end

---Convert a float into a vector, where each element is that float
---@param InDouble number
---@return FVector2D
function UKismetMathLibrary.Conv_DoubleToVector2D(InDouble) end

---Converts a double into a vector, where each element is that float
---@param InDouble number
---@return FVector
function UKismetMathLibrary.Conv_DoubleToVector(InDouble) end

---Converts a float into a LinearColor, where each RGB element is that float
---@param InDouble number
---@return FLinearColor
function UKismetMathLibrary.Conv_DoubleToLinearColor(InDouble) end

---Converts a float to a 64 bit integer
---@param InDouble number
---@return integer
function UKismetMathLibrary.Conv_DoubleToInt64(InDouble) end

---Converts a 64 bit floating point to a 32 bit floating point (if the float is too large, returns the low 32 bits)
---@param InDouble number
---@return number
function UKismetMathLibrary.Conv_DoubleToFloat(InDouble) end

---Converts a color to LinearColor
---@param InColor FColor
---@return FLinearColor
function UKismetMathLibrary.Conv_ColorToLinearColor(InColor) end

---Converts a byte to an integer
---@param InByte integer
---@return integer
function UKismetMathLibrary.Conv_ByteToInt64(InByte) end

---Converts a byte to an integer
---@param InByte integer
---@return integer
function UKismetMathLibrary.Conv_ByteToInt(InByte) end

---Converts a byte to a float
---@param InByte integer
---@return number
function UKismetMathLibrary.Conv_ByteToDouble(InByte) end

---Converts a bool to an int
---@param InBool boolean
---@return integer
function UKismetMathLibrary.Conv_BoolToInt(InBool) end

---Converts a bool to a float (0.0 or 1.0)
---@param InBool boolean
---@return number
function UKismetMathLibrary.Conv_BoolToDouble(InBool) end

---Converts a bool to a byte
---@param InBool boolean
---@return integer
function UKismetMathLibrary.Conv_BoolToByte(InBool) end

---Compose two transforms in order: A * B.
---Order matters when composing transforms:
---A * B will yield a transform that logically first applies A then B to any subsequent transformation.
---Example: LocalToWorld = ComposeTransforms(DeltaRotation, LocalToWorld) will change rotation in local space by DeltaRotation.
---Example: LocalToWorld = ComposeTransforms(LocalToWorld, DeltaRotation) will change rotation in world space by DeltaRotation.
---@param A FTransform
---@param B FTransform
---@return FTransform
function UKismetMathLibrary.ComposeTransforms(A, B) end

---Combine 2 rotations to give you the resulting rotation of first applying A, then B.
---@param A FRotator
---@param B FRotator
---@return FRotator
function UKismetMathLibrary.ComposeRotators(A, B) end

---Determine if a class is a child of another class.
---                     the value for either parameter is 'None'.
---@param TestClass TSubclassOf_UObject_
---@param ParentClass TSubclassOf_UObject_
---@return boolean
function UKismetMathLibrary.ClassIsChildOf(TestClass, ParentClass) end

---Create a copy of this vector, with its magnitude/size/length clamped between Min and Max.
---@param A FVector
---@param Min number
---@param Max number
---@return FVector
function UKismetMathLibrary.ClampVectorSize(A, Min, Max) end

---Returns Value clamped to be between A and B (inclusive)
---@param Value integer
---@param Min integer
---@param Max integer
---@return integer
function UKismetMathLibrary.ClampInt64(Value, Min, Max) end

---Clamps an angle to the range of [0, 360].
---@param Angle number
---@return number
function UKismetMathLibrary.ClampAxis(Angle) end

---Creates a copy of this vector with both axes clamped to the given range.
---@param A FVector2D
---@param MinAxisVal number
---@param MaxAxisVal number
---@return FVector2D
function UKismetMathLibrary.ClampAxes2D(A, MinAxisVal, MaxAxisVal) end

---Clamps an arbitrary angle to be between the given angles.  Will clamp to nearest boundary.
---@param AngleDegrees number
---@param MinAngleDegrees number
---@param MaxAngleDegrees number
---@return number
function UKismetMathLibrary.ClampAngle(AngleDegrees, MinAngleDegrees, MaxAngleDegrees) end

---Returns Value clamped to be between A and B (inclusive)
---@param Value integer
---@param Min integer
---@param Max integer
---@return integer
function UKismetMathLibrary.Clamp(Value, Min, Max) end

---Interpolate Linear Color from Current to Target. Scaled by distance to Target, so it has a strong start speed and ease out.
---@param Current FLinearColor
---@param Target FLinearColor
---@param DeltaTime number
---@param InterpSpeed number
---@return FLinearColor
function UKismetMathLibrary.CInterpTo(Current, Target, DeltaTime, InterpSpeed) end

---@param InVec FVector_NetQuantizeNormal
---@param X number @[out] 
---@param Y number @[out] 
---@param Z number @[out] 
function UKismetMathLibrary.BreakVector_NetQuantizeNormal(InVec, X, Y, Z) end

---@param InVec FVector_NetQuantize100
---@param X number @[out] 
---@param Y number @[out] 
---@param Z number @[out] 
function UKismetMathLibrary.BreakVector_NetQuantize100(InVec, X, Y, Z) end

---@param InVec FVector_NetQuantize10
---@param X number @[out] 
---@param Y number @[out] 
---@param Z number @[out] 
function UKismetMathLibrary.BreakVector_NetQuantize10(InVec, X, Y, Z) end

---@param InVec FVector_NetQuantize
---@param X number @[out] 
---@param Y number @[out] 
---@param Z number @[out] 
function UKismetMathLibrary.BreakVector_NetQuantize(InVec, X, Y, Z) end

---Breaks a 4D vector apart into X, Y, Z, W.
---@param InVec FVector4
---@param X number @[out] 
---@param Y number @[out] 
---@param Z number @[out] 
---@param W number @[out] 
function UKismetMathLibrary.BreakVector4(InVec, X, Y, Z, W) end

---Breaks a 2D vector apart into X, Y.
---@param InVec FVector2D
---@param X number @[out] 
---@param Y number @[out] 
function UKismetMathLibrary.BreakVector2D(InVec, X, Y) end

---Breaks a vector apart into X, Y, Z
---@param InVec FVector
---@param X number @[out] 
---@param Y number @[out] 
---@param Z number @[out] 
function UKismetMathLibrary.BreakVector(InVec, X, Y, Z) end

---Breaks apart a transform into location, rotation and scale
---@param InTransform FTransform
---@param Location FVector @[out] 
---@param Rotation FRotator @[out] 
---@param Scale FVector @[out] 
function UKismetMathLibrary.BreakTransform(InTransform, Location, Rotation, Scale) end

---Breaks a Timespan into its components
---@param InTimespan FTimespan
---@param Days integer @[out] 
---@param Hours integer @[out] 
---@param Minutes integer @[out] 
---@param Seconds integer @[out] 
---@param FractionNano integer @[out] 
function UKismetMathLibrary.BreakTimespan2(InTimespan, Days, Hours, Minutes, Seconds, FractionNano) end

---Breaks a Timespan into its components
---@param InTimespan FTimespan
---@param Days integer @[out] 
---@param Hours integer @[out] 
---@param Minutes integer @[out] 
---@param Seconds integer @[out] 
---@param Milliseconds integer @[out] 
function UKismetMathLibrary.BreakTimespan(InTimespan, Days, Hours, Minutes, Seconds, Milliseconds) end

---Breaks apart a rotator into its component axes
---@param InRot FRotator
---@param X FVector @[out] 
---@param Y FVector @[out] 
---@param Z FVector @[out] 
function UKismetMathLibrary.BreakRotIntoAxes(InRot, X, Y, Z) end

---Breaks apart a rotator into {Roll, Pitch, Yaw} angles in degrees
---@param InRot FRotator
---@param Roll number @[out] 
---@param Pitch number @[out] 
---@param Yaw number @[out] 
function UKismetMathLibrary.BreakRotator(InRot, Roll, Pitch, Yaw) end

---Breaks apart a random number generator
---@param InRandomStream FRandomStream
---@param InitialSeed integer @[out] 
function UKismetMathLibrary.BreakRandomStream(InRandomStream, InitialSeed) end

---Breaks a quat apart into X, Y, Z, W
---@param InQuat FQuat
---@param X number @[out] 
---@param Y number @[out] 
---@param Z number @[out] 
---@param W number @[out] 
function UKismetMathLibrary.BreakQuat(InQuat, X, Y, Z, W) end

---Breaks a FQualifiedFrameTime into its component parts again.
---@param InFrameTime FQualifiedFrameTime
---@param Frame FFrameNumber @[out] 
---@param FrameRate FFrameRate @[out] 
---@param SubFrame number @[out] 
function UKismetMathLibrary.BreakQualifiedFrameTime(InFrameTime, Frame, FrameRate, SubFrame) end

---Breaks a FFrameRate into a numerator and denominator.
---@param InFrameRate FFrameRate
---@param Numerator integer @[out] 
---@param Denominator integer @[out] 
function UKismetMathLibrary.BreakFrameRate(InFrameRate, Numerator, Denominator) end

---Breaks a DateTime into its components
---@param InDateTime FDateTime
---@param Year integer @[out] 
---@param Month integer @[out] 
---@param Day integer @[out] 
---@param Hour integer @[out] 
---@param Minute integer @[out] 
---@param Second integer @[out] 
---@param Millisecond integer @[out] 
function UKismetMathLibrary.BreakDateTime(InDateTime, Year, Month, Day, Hour, Minute, Second, Millisecond) end

---Breaks apart a color into individual RGB components (as well as alpha)
---@param InColor FLinearColor
---@param R number @[out] 
---@param G number @[out] 
---@param B number @[out] 
---@param A number @[out] 
function UKismetMathLibrary.BreakColor(InColor, R, G, B, A) end

---Breaks an FBoxSphereBounds into origin, extent, and radius
---@param InBoxSphereBounds FBoxSphereBounds
---@param Origin FVector @[out] 
---@param BoxExtent FVector @[out] 
---@param SphereRadius number @[out] 
function UKismetMathLibrary.BreakBoxSphereBounds(InBoxSphereBounds, Origin, BoxExtent, SphereRadius) end

---Returns the overlap TBox<T> of two boxes
---@param A FBox
---@param B FBox
---@return FBox
function UKismetMathLibrary.Box_Overlap(A, B) end

---Checks whether the given location is inside this box.
---       Use IsPointInBox_Box to include borders in the test.
---@param Box FBox
---@param Point FVector
---@return boolean
function UKismetMathLibrary.Box_IsPointInside(Box, Point) end

---Returns true if the InnerTest Box is is completely inside or on OuterTest Box
---@param InnerTest FBox
---@param OuterTest FBox
---@return boolean
function UKismetMathLibrary.Box_IsInsideOrOn(InnerTest, OuterTest) end

---Returns true if the InnerTest Box is is completely inside of the OuterTest Box
---@param InnerTest FBox
---@param OuterTest FBox
---@return boolean
function UKismetMathLibrary.Box_IsInside(InnerTest, OuterTest) end

---Checks whether the given bounding box A intersects this bounding box B.
---       coincident borders on any edge will overlap.
---@param A FBox
---@param B FBox
---@return boolean
function UKismetMathLibrary.Box_Intersects(A, B) end

---Calculates the closest point on or inside the box to a given point in space.
---@param Box FBox
---@param Point FVector
---@return FVector
function UKismetMathLibrary.Box_GetClosestPointTo(Box, Point) end

---Returns a box of increased size.
---@param Box FBox
---@param Negative FVector
---@param Positive FVector
---@return FBox
function UKismetMathLibrary.Box_ExpandBy(Box, Negative, Positive) end

---Returns the logical eXclusive OR of two values (A XOR B)
---@param A boolean
---@param B boolean
---@return boolean
function UKismetMathLibrary.BooleanXOR(A, B) end

---Returns the logical OR of two values (A OR B)
---@param A boolean
---@param B boolean
---@return boolean
function UKismetMathLibrary.BooleanOR(A, B) end

---Returns the logical Not OR of two values (A NOR B)
---@param A boolean
---@param B boolean
---@return boolean
function UKismetMathLibrary.BooleanNOR(A, B) end

---Returns the logical NAND of two values (A AND B)
---@param A boolean
---@param B boolean
---@return boolean
function UKismetMathLibrary.BooleanNAND(A, B) end

---Returns the logical AND of two values (A AND B)
---@param A boolean
---@param B boolean
---@return boolean
function UKismetMathLibrary.BooleanAND(A, B) end

---Returns the minimum value of A and B
---@param A integer
---@param B integer
---@return integer
function UKismetMathLibrary.BMin(A, B) end

---Returns the maximum value of A and B
---@param A integer
---@param B integer
---@return integer
function UKismetMathLibrary.BMax(A, B) end

---Returns average of all array entries. Returns value of 0 if the supplied array is empty.
---@param IntArray TArray_integer_
---@param AverageValue number @[out] 
function UKismetMathLibrary.AverageOfIntArray(IntArray, AverageValue) end

---Returns the inverse tan (atan2) of A/B (result is in Radians)
---@param Y number
---@param X number
---@return number
function UKismetMathLibrary.Atan2(Y, X) end

---Returns the inverse tan (atan) (result is in Radians)
---@param A number
---@return number
function UKismetMathLibrary.Atan(A) end

---Returns the inverse sine (arcsin) of A (result is in Radians)
---@param A number
---@return number
function UKismetMathLibrary.Asin(A) end

---Bitwise AND (A & B)
---@param A integer
---@param B integer
---@return integer
function UKismetMathLibrary.And_IntInt(A, B) end

---Bitwise AND (A & B)
---@param A integer
---@param B integer
---@return integer
function UKismetMathLibrary.And_Int64Int64(A, B) end

---Vector addition
---@param A FVector
---@param B FVector
---@return FVector
function UKismetMathLibrary.Add_VectorVector(A, B) end

---Adds an integer to each component of a vector
---@param A FVector
---@param B integer
---@return FVector
function UKismetMathLibrary.Add_VectorInt(A, B) end

---Adds a float to each component of a vector
---@param A FVector
---@param B number
---@return FVector
function UKismetMathLibrary.Add_VectorFloat(A, B) end

---Returns addition of Vector A and Vector B (A + B)
---@param A FVector4
---@param B FVector4
---@return FVector4
function UKismetMathLibrary.Add_Vector4Vector4(A, B) end

---Returns addition of Vector A and Vector B (A + B)
---@param A FVector2D
---@param B FVector2D
---@return FVector2D
function UKismetMathLibrary.Add_Vector2DVector2D(A, B) end

---Returns Vector A added by B
---@param A FVector2D
---@param B number
---@return FVector2D
function UKismetMathLibrary.Add_Vector2DFloat(A, B) end

---Addition (A + B)
---@param A FTimespan
---@param B FTimespan
---@return FTimespan
function UKismetMathLibrary.Add_TimespanTimespan(A, B) end

---Returns addition of Vector A and Vector B (A + B)
---@param A FQuat
---@param B FQuat
---@return FQuat
function UKismetMathLibrary.Add_QuatQuat(A, B) end

---Gets the result of adding a matrix to this.
---@param A FMatrix
---@param B FMatrix
---@return FMatrix
function UKismetMathLibrary.Add_MatrixMatrix(A, B) end

---Element-wise addition of two linear colors (R+R, G+G, B+B, A+A)
---@param A FLinearColor
---@param B FLinearColor
---@return FLinearColor
function UKismetMathLibrary.Add_LinearColorLinearColor(A, B) end

---Returns IntPoint A added by B
---@param A FIntPoint
---@param B FIntPoint
---@return FIntPoint
function UKismetMathLibrary.Add_IntPointIntPoint(A, B) end

---Addition (A - B)
---@param A FIntPoint
---@param B integer
---@return FIntPoint
function UKismetMathLibrary.Add_IntPointInt(A, B) end

---Addition (A + B)
---@param A integer
---@param B integer @[opt] 
---@return integer
function UKismetMathLibrary.Add_IntInt(A, B) end

---Addition (A + B)
---@param A integer
---@param B integer @[opt] 
---@return integer
function UKismetMathLibrary.Add_Int64Int64(A, B) end

---Addition (A + B)
---@param A number
---@param B number @[opt] 
---@return number
function UKismetMathLibrary.Add_DoubleDouble(A, B) end

---Addition (A + B)
---@param A FDateTime
---@param B FTimespan
---@return FDateTime
function UKismetMathLibrary.Add_DateTimeTimespan(A, B) end

---Addition (A + B)
---@param A FDateTime
---@param B FDateTime
---@return FDateTime
function UKismetMathLibrary.Add_DateTimeDateTime(A, B) end

---Addition (A + B)
---@param A integer
---@param B integer @[opt] 
---@return integer
function UKismetMathLibrary.Add_ByteByte(A, B) end

---Returns the inverse cosine (arccos) of A (result is in Radians)
---@param A number
---@return number
function UKismetMathLibrary.Acos(A) end

---Returns the absolute (positive) value of A
---@param A integer
---@return integer
function UKismetMathLibrary.Abs_Int64(A) end

---Returns the absolute (positive) value of A
---@param A integer
---@return integer
function UKismetMathLibrary.Abs_Int(A) end

---Returns the absolute (positive) value of A
---@param A number
---@return number
function UKismetMathLibrary.Abs(A) end

