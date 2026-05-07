---A single movie scene section which can contain data for multiple named parameters.
---@class UMovieSceneParameterSection : UMovieSceneSection
---@field protected BoolParameterNamesAndCurves TArray<FBoolParameterNameAndCurve> @The bool parameter names and their associated curves.
---@field protected ScalarParameterNamesAndCurves TArray<FScalarParameterNameAndCurve> @The scalar parameter names and their associated curves.
---@field protected Vector2DParameterNamesAndCurves TArray<FVector2DParameterNameAndCurves> @The vector3D parameter names and their associated curves.
---@field protected VectorParameterNamesAndCurves TArray<FVectorParameterNameAndCurves> @The vector parameter names and their associated curves.
---@field protected ColorParameterNamesAndCurves TArray<FColorParameterNameAndCurves> @The color parameter names and their associated curves.
---@field protected TransformParameterNamesAndCurves TArray<FTransformParameterNameAndCurves> @The transform  parameter names and their associated curves.
local UMovieSceneParameterSection = {}

---Removes a vector parameter from this section.
---@param InParameterName string
---@return boolean
function UMovieSceneParameterSection:RemoveVectorParameter(InParameterName) end

---Removes a vector2D parameter from this section.
---@param InParameterName string
---@return boolean
function UMovieSceneParameterSection:RemoveVector2DParameter(InParameterName) end

---Removes a transform parameter from this section.
---@param InParameterName string
---@return boolean
function UMovieSceneParameterSection:RemoveTransformParameter(InParameterName) end

---Removes a scalar parameter from this section.
---@param InParameterName string
---@return boolean
function UMovieSceneParameterSection:RemoveScalarParameter(InParameterName) end

---Removes a color parameter from this section.
---@param InParameterName string
---@return boolean
function UMovieSceneParameterSection:RemoveColorParameter(InParameterName) end

---Removes a bool parameter from this section.
---@param InParameterName string
---@return boolean
function UMovieSceneParameterSection:RemoveBoolParameter(InParameterName) end

---Gets the set of all parameter names used by this section.
---@param ParameterNames TSet_string_ @[out] 
function UMovieSceneParameterSection:GetParameterNames(ParameterNames) end

---Adds a a key for a specific vector parameter at the specified time with the specified value.
---@param InParameterName string
---@param InTime FFrameNumber
---@param InValue FVector
function UMovieSceneParameterSection:AddVectorParameterKey(InParameterName, InTime, InValue) end

---Adds a a key for a specific vector2D parameter at the specified time with the specified value.
---@param InParameterName string
---@param InTime FFrameNumber
---@param InValue FVector2D
function UMovieSceneParameterSection:AddVector2DParameterKey(InParameterName, InTime, InValue) end

---Adds a a key for a specific color parameter at the specified time with the specified value.
---@param InParameterName string
---@param InTime FFrameNumber
---@param InValue FTransform
function UMovieSceneParameterSection:AddTransformParameterKey(InParameterName, InTime, InValue) end

---Adds a a key for a specific scalar parameter at the specified time with the specified value.
---@param InParameterName string
---@param InTime FFrameNumber
---@param InValue number
function UMovieSceneParameterSection:AddScalarParameterKey(InParameterName, InTime, InValue) end

---Adds a a key for a specific color parameter at the specified time with the specified value.
---@param InParameterName string
---@param InTime FFrameNumber
---@param InValue FLinearColor
function UMovieSceneParameterSection:AddColorParameterKey(InParameterName, InTime, InValue) end

---Adds a a key for a specific bool parameter at the specified time with the specified value.
---@param InParameterName string
---@param InTime FFrameNumber
---@param InValue boolean
function UMovieSceneParameterSection:AddBoolParameterKey(InParameterName, InTime, InValue) end

