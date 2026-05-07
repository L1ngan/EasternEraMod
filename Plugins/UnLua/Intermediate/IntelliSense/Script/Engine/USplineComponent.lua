---A spline component is a spline shape which can be used for other purposes (e.g. animating objects). It contains debug rendering capabilities.
---@class USplineComponent : UPrimitiveComponent
---@field private Spline FSpline
---@field public SplineCurves FSplineCurves
---@field public ReparamStepsPerSegment integer @Number of steps per spline segment to place in the reparameterization table
---@field public Duration number @Specifies the duration of the spline in seconds
---@field public bStationaryEndpoints boolean @Whether the endpoints of the spline are considered stationary when traversing the spline at non-constant velocity.  Essentially this sets the endpoints' tangents to zero vectors.
---@field public bSplineHasBeenEdited boolean @Whether the spline has been edited from its default by the spline component visualizer
---@field public bModifiedByConstructionScript boolean @Whether the UCS has made changes to the spline points
---@field public bInputSplinePointsToConstructionScript boolean @Whether the spline points should be passed to the User Construction Script so they can be further manipulated by it. If false, they will not be visible to it, and it will not be able to influence the per-instance positions set in the editor.
---@field public bDrawDebug boolean @If true, the spline will be rendered if the Splines showflag is set.
---@field private bClosedLoop boolean @Whether the spline is to be considered as a closed loop. Use SetClosedLoop() to set this property, and IsClosedLoop() to read it.
---@field private bLoopPositionOverride boolean
---@field private LoopPosition number
---@field public DefaultUpVector FVector @Default up vector in local space to be used when calculating transforms along the spline
---@field public EditorUnselectedSplineSegmentColor FLinearColor @Color of unselected spline component parts in the editor
---@field public EditorSelectedSplineSegmentColor FLinearColor @Color of selected spline component parts in the editor
---@field public EditorTangentColor FLinearColor @Color of spline point tangents in the editor
---@field public bAllowDiscontinuousSpline boolean @Whether the spline's leave and arrive tangents can be different
---@field public bAdjustTangentsOnSnap boolean @Adjust tangents after snapping.
---@field public bShouldVisualizeScale boolean @Whether scale visualization should be displayed
---@field public ScaleVisualizationWidth number @Width of spline in editor for use with scale visualization
local USplineComponent = {}

---Update the spline tangents and SplineReparamTable
function USplineComponent:UpdateSpline() end

---Move an existing point to a new world location
---@param PointIndex integer
---@param InLocation FVector
function USplineComponent:SetWorldLocationAtSplinePoint(PointIndex, InLocation) end

---Specify the up vector at a given spline point
---@param PointIndex integer
---@param InUpVector FVector
---@param CoordinateSpace integer
---@param bUpdateSpline boolean @[opt] 
function USplineComponent:SetUpVectorAtSplinePoint(PointIndex, InUpVector, CoordinateSpace, bUpdateSpline) end

---Specify unselected spline component segment color in the editor
---@param SegmentColor FLinearColor
function USplineComponent:SetUnselectedSplineSegmentColor(SegmentColor) end

---Specify the tangents at a given spline point
---@param PointIndex integer
---@param InArriveTangent FVector
---@param InLeaveTangent FVector
---@param CoordinateSpace integer
---@param bUpdateSpline boolean @[opt] 
function USplineComponent:SetTangentsAtSplinePoint(PointIndex, InArriveTangent, InLeaveTangent, CoordinateSpace, bUpdateSpline) end

---Specify selected spline component segment color in the editor
---@param TangentColor FLinearColor
function USplineComponent:SetTangentColor(TangentColor) end

---Specify the tangent at a given spline point
---@param PointIndex integer
---@param InTangent FVector
---@param CoordinateSpace integer
---@param bUpdateSpline boolean @[opt] 
function USplineComponent:SetTangentAtSplinePoint(PointIndex, InTangent, CoordinateSpace, bUpdateSpline) end

---Sets the spline to an array of world space points
---@param Points TArray_FVector_
function USplineComponent:SetSplineWorldPoints(Points) end

---Specify the type of a spline point
---@param PointIndex integer
---@param Type integer
---@param bUpdateSpline boolean @[opt] 
function USplineComponent:SetSplinePointType(PointIndex, Type, bUpdateSpline) end

---Sets the spline to an array of points
---@param Points TArray_FVector_
---@param CoordinateSpace integer
---@param bUpdateSpline boolean @[opt] 
function USplineComponent:SetSplinePoints(Points, CoordinateSpace, bUpdateSpline) end

---Sets the spline to an array of local space points
---@param Points TArray_FVector_
function USplineComponent:SetSplineLocalPoints(Points) end

---Specify selected spline component segment color in the editor
---@param SegmentColor FLinearColor
function USplineComponent:SetSelectedSplineSegmentColor(SegmentColor) end

---Set the scale at a given spline point
---@param PointIndex integer
---@param InScaleVector FVector
---@param bUpdateSpline boolean @[opt] 
function USplineComponent:SetScaleAtSplinePoint(PointIndex, InScaleVector, bUpdateSpline) end

---Set the rotation of an existing spline point. This also aligns tangents with the forward vector of the rotation.
---@param PointIndex integer
---@param InRotation FRotator
---@param CoordinateSpace integer
---@param bUpdateSpline boolean @[opt] 
function USplineComponent:SetRotationAtSplinePoint(PointIndex, InRotation, CoordinateSpace, bUpdateSpline) end

---Set the spline to be edited outside of the construction script
---@param InOverride boolean
function USplineComponent:SetOverrideConstructionScript(InOverride) end

---Move an existing point to a new location
---@param PointIndex integer
---@param InLocation FVector
---@param CoordinateSpace integer
---@param bUpdateSpline boolean @[opt] 
function USplineComponent:SetLocationAtSplinePoint(PointIndex, InLocation, CoordinateSpace, bUpdateSpline) end

---Specify whether this spline should be rendered when the Editor/Game spline show flag is set
---@param bShow boolean
function USplineComponent:SetDrawDebug(bShow) end

---Sets the default up vector used by this spline
---@param UpVector FVector
---@param CoordinateSpace integer
function USplineComponent:SetDefaultUpVector(UpVector, CoordinateSpace) end

---Specify whether the spline is a closed loop or not, and if so, the input key corresponding to the loop point
---@param bInClosedLoop boolean
---@param Key number
---@param bUpdateSpline boolean @[opt] 
function USplineComponent:SetClosedLoopAtPosition(bInClosedLoop, Key, bUpdateSpline) end

---Specify whether the spline is a closed loop or not. The loop position will be at 1.0 after the last point's input key
---@param bInClosedLoop boolean
---@param bUpdateSpline boolean @[opt] 
function USplineComponent:SetClosedLoop(bInClosedLoop, bUpdateSpline) end

---Removes point at specified index from the spline
---@param Index integer
---@param bUpdateSpline boolean @[opt] 
function USplineComponent:RemoveSplinePoint(Index, bUpdateSpline) end

---Check whether the spline is a closed loop or not
---@return boolean
function USplineComponent:IsClosedLoop() end

---Given a distance along the length of this spline, return the tangent vector of the spline there, in world space.
---@param Distance number
---@return FVector
function USplineComponent:GetWorldTangentAtDistanceAlongSpline(Distance) end

---Given a time from 0 to the spline duration, return a rotation corresponding to the spline's position and direction there, in world space.
---@param Time number
---@param bUseConstantVelocity boolean @[opt] 
---@return FRotator
function USplineComponent:GetWorldRotationAtTime(Time, bUseConstantVelocity) end

---Given a distance along the length of this spline, return a rotation corresponding to the spline's rotation there, in world space.
---@param Distance number
---@return FRotator
function USplineComponent:GetWorldRotationAtDistanceAlongSpline(Distance) end

---Given a time from 0 to the spline duration, return the point in space where this puts you
---@param Time number
---@param bUseConstantVelocity boolean @[opt] 
---@return FVector
function USplineComponent:GetWorldLocationAtTime(Time, bUseConstantVelocity) end

---Get the world location at spline point
---@param PointIndex integer
---@return FVector
function USplineComponent:GetWorldLocationAtSplinePoint(PointIndex) end

---Given a distance along the length of this spline, return the point in world space where this puts you
---@param Distance number
---@return FVector
function USplineComponent:GetWorldLocationAtDistanceAlongSpline(Distance) end

---Given a time from 0 to the spline duration, return a unit direction vector of the spline tangent there.
---@param Time number
---@param bUseConstantVelocity boolean @[opt] 
---@return FVector
function USplineComponent:GetWorldDirectionAtTime(Time, bUseConstantVelocity) end

---Given a distance along the length of this spline, return a unit direction vector of the spline tangent there, in world space.
---@param Distance number
---@return FVector
function USplineComponent:GetWorldDirectionAtDistanceAlongSpline(Distance) end

---Get a metadata property vector value along the spline at spline point
---@param Index integer
---@param PropertyName string
---@return FVector
function USplineComponent:GetVectorPropertyAtSplinePoint(Index, PropertyName) end

---Get a vector attribute value by parameter.
---@param InKey number
---@param PropertyName string
---@return FVector
function USplineComponent:GetVectorPropertyAtSplineInputKey(InKey, PropertyName) end

---Given a time from 0 to the spline duration, return the spline's up vector there.
---@param Time number
---@param CoordinateSpace integer
---@param bUseConstantVelocity boolean @[opt] 
---@return FVector
function USplineComponent:GetUpVectorAtTime(Time, CoordinateSpace, bUseConstantVelocity) end

---Get the up vector at spline point
---@param PointIndex integer
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetUpVectorAtSplinePoint(PointIndex, CoordinateSpace) end

---Get up vector at the provided input key value
---@param InKey number
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetUpVectorAtSplineInputKey(InKey, CoordinateSpace) end

---Given a distance along the length of this spline, return a unit direction vector corresponding to the spline's up vector there.
---@param Distance number
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetUpVectorAtDistanceAlongSpline(Distance, CoordinateSpace) end

---Given a time from 0 to the spline duration, return the spline's transform at the corresponding position.
---@param Time number
---@param CoordinateSpace integer
---@param bUseConstantVelocity boolean @[opt] 
---@param bUseScale boolean @[opt] 
---@return FTransform
function USplineComponent:GetTransformAtTime(Time, CoordinateSpace, bUseConstantVelocity, bUseScale) end

---Get the transform at spline point
---@param PointIndex integer
---@param CoordinateSpace integer
---@param bUseScale boolean @[opt] 
---@return FTransform
function USplineComponent:GetTransformAtSplinePoint(PointIndex, CoordinateSpace, bUseScale) end

---Get transform at the provided input key value
---@param InKey number
---@param CoordinateSpace integer
---@param bUseScale boolean @[opt] 
---@return FTransform
function USplineComponent:GetTransformAtSplineInputKey(InKey, CoordinateSpace, bUseScale) end

---Given a distance along the length of this spline, return an FTransform corresponding to that point on the spline.
---@param Distance number
---@param CoordinateSpace integer
---@param bUseScale boolean @[opt] 
---@return FTransform
function USplineComponent:GetTransformAtDistanceAlongSpline(Distance, CoordinateSpace, bUseScale) end

---Given a distance along the length of this spline, return the corresponding time at that point
---@param Distance number
---@return number
function USplineComponent:GetTimeAtDistanceAlongSpline(Distance) end

---Given a time from 0 to the spline duration, return the spline's tangent there.
---@param Time number
---@param CoordinateSpace integer
---@param bUseConstantVelocity boolean @[opt] 
---@return FVector
function USplineComponent:GetTangentAtTime(Time, CoordinateSpace, bUseConstantVelocity) end

---Get the tangent at spline point. This fetches the Leave tangent of the point.
---@param PointIndex integer
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetTangentAtSplinePoint(PointIndex, CoordinateSpace) end

---Get tangent along spline at the provided input key value
---@param InKey number
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetTangentAtSplineInputKey(InKey, CoordinateSpace) end

---Given a distance along the length of this spline, return the tangent vector of the spline there.
---@param Distance number
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetTangentAtDistanceAlongSpline(Distance, CoordinateSpace) end

---Get the type of a spline point
---@param PointIndex integer
---@return integer
function USplineComponent:GetSplinePointType(PointIndex) end

---Gets the spline point of the spline at the specified index
---@param PointIndex integer
---@param CoordinateSpace integer
---@return FSplinePoint
function USplineComponent:GetSplinePointAt(PointIndex, CoordinateSpace) end

---Returns total length along this spline
---@return number
function USplineComponent:GetSplineLength() end

---Given a time from 0 to the spline duration, return the spline's scale there.
---@param Time number
---@param bUseConstantVelocity boolean @[opt] 
---@return FVector
function USplineComponent:GetScaleAtTime(Time, bUseConstantVelocity) end

---Get the scale at spline point
---@param PointIndex integer
---@return FVector
function USplineComponent:GetScaleAtSplinePoint(PointIndex) end

---Get scale at the provided input key value
---@param InKey number
---@return FVector
function USplineComponent:GetScaleAtSplineInputKey(InKey) end

---Given a distance along the length of this spline, return the spline's scale there.
---@param Distance number
---@return FVector
function USplineComponent:GetScaleAtDistanceAlongSpline(Distance) end

---Given a time from 0 to the spline duration, return a rotation corresponding to the spline's position and direction there.
---@param Time number
---@param CoordinateSpace integer
---@param bUseConstantVelocity boolean @[opt] 
---@return FRotator
function USplineComponent:GetRotationAtTime(Time, CoordinateSpace, bUseConstantVelocity) end

---Get the rotation at spline point as a rotator
---@param PointIndex integer
---@param CoordinateSpace integer
---@return FRotator
function USplineComponent:GetRotationAtSplinePoint(PointIndex, CoordinateSpace) end

---Get rotator corresponding to rotation along spline at the provided input key value
---@param InKey number
---@param CoordinateSpace integer
---@return FRotator
function USplineComponent:GetRotationAtSplineInputKey(InKey, CoordinateSpace) end

---Given a distance along the length of this spline, return a rotation corresponding to the spline's rotation there.
---@param Distance number
---@param CoordinateSpace integer
---@return FRotator
function USplineComponent:GetRotationAtDistanceAlongSpline(Distance, CoordinateSpace) end

---Given a time from 0 to the spline duration, return the spline's roll there, in degrees.
---@param Time number
---@param CoordinateSpace integer
---@param bUseConstantVelocity boolean @[opt] 
---@return number
function USplineComponent:GetRollAtTime(Time, CoordinateSpace, bUseConstantVelocity) end

---Get the amount of roll at spline point, in degrees
---@param PointIndex integer
---@param CoordinateSpace integer
---@return number
function USplineComponent:GetRollAtSplinePoint(PointIndex, CoordinateSpace) end

---Get roll in degrees at the provided input key value
---@param InKey number
---@param CoordinateSpace integer
---@return number
function USplineComponent:GetRollAtSplineInputKey(InKey, CoordinateSpace) end

---Given a distance along the length of this spline, return the spline's roll there, in degrees.
---@param Distance number
---@param CoordinateSpace integer
---@return number
function USplineComponent:GetRollAtDistanceAlongSpline(Distance, CoordinateSpace) end

---Given a time from 0 to the spline duration, return the spline's right vector there.
---@param Time number
---@param CoordinateSpace integer
---@param bUseConstantVelocity boolean @[opt] 
---@return FVector
function USplineComponent:GetRightVectorAtTime(Time, CoordinateSpace, bUseConstantVelocity) end

---Get the right vector at spline point
---@param PointIndex integer
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetRightVectorAtSplinePoint(PointIndex, CoordinateSpace) end

---Get right vector at the provided input key value
---@param InKey number
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetRightVectorAtSplineInputKey(InKey, CoordinateSpace) end

---Given a distance along the length of this spline, return a unit direction vector corresponding to the spline's right vector there.
---@param Distance number
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetRightVectorAtDistanceAlongSpline(Distance, CoordinateSpace) end

---Get the number of segments that make up this spline
---@return integer
function USplineComponent:GetNumberOfSplineSegments() end

---Get the number of points that make up this spline
---@return integer
function USplineComponent:GetNumberOfSplinePoints() end

---Given a time from 0 to the spline duration, return the point in space where this puts you
---@param Time number
---@param CoordinateSpace integer
---@param bUseConstantVelocity boolean @[opt] 
---@return FVector
function USplineComponent:GetLocationAtTime(Time, CoordinateSpace, bUseConstantVelocity) end

---Get the location at spline point
---@param PointIndex integer
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetLocationAtSplinePoint(PointIndex, CoordinateSpace) end

---Get location along spline at the provided input key value
---@param InKey number
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetLocationAtSplineInputKey(InKey, CoordinateSpace) end

---Given a distance along the length of this spline, return the point in space where this puts you
---@param Distance number
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetLocationAtDistanceAlongSpline(Distance, CoordinateSpace) end

---Get location and tangent at a spline point
---@param PointIndex integer
---@param Location FVector @[out] 
---@param Tangent FVector @[out] 
---@param CoordinateSpace integer
function USplineComponent:GetLocationAndTangentAtSplinePoint(PointIndex, Location, Tangent, CoordinateSpace) end

---Get local location and tangent at a spline point
---@param PointIndex integer
---@param LocalLocation FVector @[out] 
---@param LocalTangent FVector @[out] 
function USplineComponent:GetLocalLocationAndTangentAtSplinePoint(PointIndex, LocalLocation, LocalTangent) end

---Get the leave tangent at spline point
---@param PointIndex integer
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetLeaveTangentAtSplinePoint(PointIndex, CoordinateSpace) end

---Get the input key (e.g. the time) of the control point of the spline at the specified index.
---@param PointIndex integer
---@return number
function USplineComponent:GetInputKeyValueAtSplinePoint(PointIndex) end

---Given a distance along the length of this spline, return the corresponding input key at that point
---with a fractional component between the current input key and the next as a percentage.
---@param Distance number
---@return number
function USplineComponent:GetInputKeyValueAtDistanceAlongSpline(Distance) end

---This method has been deprecated because it was incorrectly returning the input key at time. To maintain the same behavior,
---replace it with GetTimeAtDistanceAlongSpline. To actually get the input key, instead call GetInputKeyValueAtDistanceAlongSpline.
---@param Distance number
---@return number
function USplineComponent:GetInputKeyAtDistanceAlongSpline(Distance) end

---Get a metadata property float value along the spline at spline point
---@param Index integer
---@param PropertyName string
---@return number
function USplineComponent:GetFloatPropertyAtSplinePoint(Index, PropertyName) end

---Get a float attribute value by parameter.
---@param InKey number
---@param PropertyName string
---@return number
function USplineComponent:GetFloatPropertyAtSplineInputKey(InKey, PropertyName) end

---Get the distance along the spline at the spline point
---@param PointIndex integer
---@return number
function USplineComponent:GetDistanceAlongSplineAtSplinePoint(PointIndex) end

---Get distance along the spline at the provided input key value
---@param InKey number
---@return number
function USplineComponent:GetDistanceAlongSplineAtSplineInputKey(InKey) end

---Get distance along the spline at closest point of the provided input location
---@param InLocation FVector
---@param CoordinateSpace integer
---@return number
function USplineComponent:GetDistanceAlongSplineAtLocation(InLocation, CoordinateSpace) end

---Given a time from 0 to the spline duration, return a unit direction vector of the spline tangent there.
---@param Time number
---@param CoordinateSpace integer
---@param bUseConstantVelocity boolean @[opt] 
---@return FVector
function USplineComponent:GetDirectionAtTime(Time, CoordinateSpace, bUseConstantVelocity) end

---Get the direction at spline point
---@param PointIndex integer
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetDirectionAtSplinePoint(PointIndex, CoordinateSpace) end

---Get unit direction along spline at the provided input key value
---@param InKey number
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetDirectionAtSplineInputKey(InKey, CoordinateSpace) end

---Given a distance along the length of this spline, return a unit direction vector of the spline tangent there.
---@param Distance number
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetDirectionAtDistanceAlongSpline(Distance, CoordinateSpace) end

---Gets the default up vector used by this spline
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetDefaultUpVector(CoordinateSpace) end

---Get the arrive tangent at spline point
---@param PointIndex integer
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:GetArriveTangentAtSplinePoint(PointIndex, CoordinateSpace) end

---Given a location, in world space, return a unit direction vector corresponding to the spline's up vector closest to the location.
---@param WorldLocation FVector
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:FindUpVectorClosestToWorldLocation(WorldLocation, CoordinateSpace) end

---Given a location, in world space, return an FTransform closest to that location.
---@param WorldLocation FVector
---@param CoordinateSpace integer
---@param bUseScale boolean @[opt] 
---@return FTransform
function USplineComponent:FindTransformClosestToWorldLocation(WorldLocation, CoordinateSpace, bUseScale) end

---Given a location, in world space, return the tangent vector of the spline closest to the location.
---@param WorldLocation FVector
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:FindTangentClosestToWorldLocation(WorldLocation, CoordinateSpace) end

---Given a location, in world space, return the spline's scale closest to the location.
---@param WorldLocation FVector
---@return FVector
function USplineComponent:FindScaleClosestToWorldLocation(WorldLocation) end

---Given a location, in world space, return rotation corresponding to the spline's rotation closest to the location.
---@param WorldLocation FVector
---@param CoordinateSpace integer
---@return FRotator
function USplineComponent:FindRotationClosestToWorldLocation(WorldLocation, CoordinateSpace) end

---Given a location, in world space, return the spline's roll closest to the location, in degrees.
---@param WorldLocation FVector
---@param CoordinateSpace integer
---@return number
function USplineComponent:FindRollClosestToWorldLocation(WorldLocation, CoordinateSpace) end

---Given a location, in world space, return a unit direction vector corresponding to the spline's right vector closest to the location.
---@param WorldLocation FVector
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:FindRightVectorClosestToWorldLocation(WorldLocation, CoordinateSpace) end

---Given a location, in world space, return the point on the curve that is closest to the location.
---@param WorldLocation FVector
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:FindLocationClosestToWorldLocation(WorldLocation, CoordinateSpace) end

---Given a location, in world space, return the input key closest to that location on the specified segment.
---@param WorldLocation FVector
---@param Index integer
---@return number
function USplineComponent:FindInputKeyOnSegmentClosestToWorldLocation(WorldLocation, Index) end

---Given a location, in world space, return the input key closest to that location.
---@param WorldLocation FVector
---@return number
function USplineComponent:FindInputKeyClosestToWorldLocation(WorldLocation) end

---Given a location, in world space, return a unit direction vector of the spline tangent closest to the location.
---@param WorldLocation FVector
---@param CoordinateSpace integer
---@return FVector
function USplineComponent:FindDirectionClosestToWorldLocation(WorldLocation, CoordinateSpace) end

---Given a threshold, recursively sub-divides the spline section until the list of segments (polyline) matches the spline shape. Note: Prefer ConvertSplineToPolyline_InDistanceRange
---@param StartDistanceAlongSpline number
---@param EndDistanceAlongSpline number
---@param CoordinateSpace integer
---@param MaxSquareDistanceFromSpline number
---@param OutPoints TArray_FVector_ @[out] 
---@param OutDistancesAlongSpline TArray_number_ @[out] 
---@return boolean
function USplineComponent:DivideSplineIntoPolylineRecursiveWithDistances(StartDistanceAlongSpline, EndDistanceAlongSpline, CoordinateSpace, MaxSquareDistanceFromSpline, OutPoints, OutDistancesAlongSpline) end

---Given a threshold, recursively sub-divides the spline section until the list of segments (polyline) matches the spline shape. Note: Prefer ConvertSplineToPolyline_InDistanceRange
---@param StartDistanceAlongSpline number
---@param EndDistanceAlongSpline number
---@param CoordinateSpace integer
---@param MaxSquareDistanceFromSpline number
---@param OutPoints TArray_FVector_ @[out] 
---@return boolean
function USplineComponent:DivideSplineIntoPolylineRecursive(StartDistanceAlongSpline, EndDistanceAlongSpline, CoordinateSpace, MaxSquareDistanceFromSpline, OutPoints) end

---Given a threshold, returns a list of vertices along the spline that, treated as a list of segments (polyline), matches the spline shape. Also fills a list of corresponding distances along the spline for each point.
---@param CoordinateSpace integer
---@param MaxSquareDistanceFromSpline number
---@param OutPoints TArray_FVector_ @[out] 
---@param OutDistancesAlongSpline TArray_number_ @[out] 
---@return boolean
function USplineComponent:ConvertSplineToPolyLineWithDistances(CoordinateSpace, MaxSquareDistanceFromSpline, OutPoints, OutDistancesAlongSpline) end

---Given a threshold and start and end time range, returns a list of vertices along the spline that, treated as a list of segments (polyline), matches the spline shape in that range. Also fills a list of corresponding distances along the spline for each point.
---@param CoordinateSpace integer
---@param MaxSquareDistanceFromSpline number
---@param StartTimeAlongSpline number
---@param EndTimeAlongSpline number
---@param bUseConstantVelocity boolean
---@param OutPoints TArray_FVector_ @[out] 
---@param OutDistancesAlongSpline TArray_number_ @[out] 
---@param bAllowWrappingIfClosed boolean @[opt] 
---@return boolean
function USplineComponent:ConvertSplineToPolyline_InTimeRange(CoordinateSpace, MaxSquareDistanceFromSpline, StartTimeAlongSpline, EndTimeAlongSpline, bUseConstantVelocity, OutPoints, OutDistancesAlongSpline, bAllowWrappingIfClosed) end

---Given a threshold and a start and end distance range, returns a list of vertices along the spline that, treated as a list of segments (polyline), matches the spline shape in that range. Also fills a list of corresponding distances along the spline for each point.
---@param CoordinateSpace integer
---@param MaxSquareDistanceFromSpline number
---@param StartDistAlongSpline number
---@param EndDistAlongSpline number
---@param OutPoints TArray_FVector_ @[out] 
---@param OutDistancesAlongSpline TArray_number_ @[out] 
---@param bAllowWrappingIfClosed boolean @[opt] 
---@return boolean
function USplineComponent:ConvertSplineToPolyline_InDistanceRange(CoordinateSpace, MaxSquareDistanceFromSpline, StartDistAlongSpline, EndDistAlongSpline, OutPoints, OutDistancesAlongSpline, bAllowWrappingIfClosed) end

---Given a threshold, returns a list of vertices along the spline that, treated as a list of segments (polyline), matches the spline shape.
---@param CoordinateSpace integer
---@param MaxSquareDistanceFromSpline number
---@param OutPoints TArray_FVector_ @[out] 
---@return boolean
function USplineComponent:ConvertSplineToPolyLine(CoordinateSpace, MaxSquareDistanceFromSpline, OutPoints) end

---Given a threshold, returns a list of vertices along the spline segment that, treated as a list of segments (polyline), matches the spline shape.
---@param SplinePointStartIndex integer
---@param CoordinateSpace integer
---@param MaxSquareDistanceFromSpline number
---@param OutPoints TArray_FVector_ @[out] 
---@return boolean
function USplineComponent:ConvertSplineSegmentToPolyLine(SplinePointStartIndex, CoordinateSpace, MaxSquareDistanceFromSpline, OutPoints) end

---Clears all the points in the spline
---@param bUpdateSpline boolean @[opt] 
function USplineComponent:ClearSplinePoints(bUpdateSpline) end

---Adds a world space point to the spline
---@param Position FVector
function USplineComponent:AddSplineWorldPoint(Position) end

---Adds a point to the spline at the specified index
---@param Position FVector
---@param Index integer
---@param CoordinateSpace integer
---@param bUpdateSpline boolean @[opt] 
function USplineComponent:AddSplinePointAtIndex(Position, Index, CoordinateSpace, bUpdateSpline) end

---Adds a point to the spline
---@param Position FVector
---@param CoordinateSpace integer
---@param bUpdateSpline boolean @[opt] 
function USplineComponent:AddSplinePoint(Position, CoordinateSpace, bUpdateSpline) end

---Adds a local space point to the spline
---@param Position FVector
function USplineComponent:AddSplineLocalPoint(Position) end

---Adds an array of FSplinePoints to the spline.
---@param Points TArray_FSplinePoint_
---@param bUpdateSpline boolean @[opt] 
function USplineComponent:AddPoints(Points, bUpdateSpline) end

---Adds an FSplinePoint to the spline. This contains its input key, position, tangent, rotation and scale.
---@param Point FSplinePoint
---@param bUpdateSpline boolean @[opt] 
function USplineComponent:AddPoint(Point, bUpdateSpline) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USplineComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USplineComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USplineComponent:AddAssetUserDataOfClass(InUserDataClass) end

