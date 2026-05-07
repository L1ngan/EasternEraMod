---@class UAnimationImportTestFunctions : UImportTestFunctionsBase
local UAnimationImportTestFunctions = {}

---Check whether the expected number of anim sequences are imported
---@param AnimSequences TArray_UAnimSequence_
---@param ExpectedNumberOfImportedAnimSequences integer
---@return FInterchangeTestFunctionResult
function UAnimationImportTestFunctions.CheckImportedAnimSequenceCount(AnimSequences, ExpectedNumberOfImportedAnimSequences) end

---Check whether the given curve key value for the given curve name has the expected value
---@param AnimSequence UAnimSequence
---@param CurveName string
---@param KeyIndex integer
---@param ExpectedCurveKeyValue number
---@return FInterchangeTestFunctionResult
function UAnimationImportTestFunctions.CheckCurveKeyValue(AnimSequence, CurveName, KeyIndex, ExpectedCurveKeyValue) end

---Check whether the given curve key time(sec) for the given curve name has the expected time(sec)
---@param AnimSequence UAnimSequence
---@param CurveName string
---@param KeyIndex integer
---@param ExpectedCurveKeyTime number
---@return FInterchangeTestFunctionResult
function UAnimationImportTestFunctions.CheckCurveKeyTime(AnimSequence, CurveName, KeyIndex, ExpectedCurveKeyTime) end

---Check whether the given curve key leave tangent weight for the given curve name has the expected leave tangent weight
---@param AnimSequence UAnimSequence
---@param CurveName string
---@param KeyIndex integer
---@param ExpectedCurveKeyLeaveTangentWeight number
---@return FInterchangeTestFunctionResult
function UAnimationImportTestFunctions.CheckCurveKeyLeaveTangentWeight(AnimSequence, CurveName, KeyIndex, ExpectedCurveKeyLeaveTangentWeight) end

---Check whether the given curve key leave tangent for the given curve name has the expected leave tangent
---@param AnimSequence UAnimSequence
---@param CurveName string
---@param KeyIndex integer
---@param ExpectedCurveKeyLeaveTangent number
---@return FInterchangeTestFunctionResult
function UAnimationImportTestFunctions.CheckCurveKeyLeaveTangent(AnimSequence, CurveName, KeyIndex, ExpectedCurveKeyLeaveTangent) end

---Check whether the given curve key arrive tangent weight for the given curve name has the expected arrive tangent weight
---@param AnimSequence UAnimSequence
---@param CurveName string
---@param KeyIndex integer
---@param ExpectedCurveKeyArriveTangentWeight number
---@return FInterchangeTestFunctionResult
function UAnimationImportTestFunctions.CheckCurveKeyArriveTangentWeight(AnimSequence, CurveName, KeyIndex, ExpectedCurveKeyArriveTangentWeight) end

---Check whether the given curve key arrive tangent for the given curve name has the expected arrive tangent
---@param AnimSequence UAnimSequence
---@param CurveName string
---@param KeyIndex integer
---@param ExpectedCurveKeyArriveTangent number
---@return FInterchangeTestFunctionResult
function UAnimationImportTestFunctions.CheckCurveKeyArriveTangent(AnimSequence, CurveName, KeyIndex, ExpectedCurveKeyArriveTangent) end

---Check whether the animation length (second) is as expected
---@param AnimSequence UAnimSequence
---@param ExpectedAnimationLength number
---@return FInterchangeTestFunctionResult
function UAnimationImportTestFunctions.CheckAnimationLength(AnimSequence, ExpectedAnimationLength) end

---Check whether the animation frame number is as expected
---@param AnimSequence UAnimSequence
---@param ExpectedFrameNumber integer
---@return FInterchangeTestFunctionResult
function UAnimationImportTestFunctions.CheckAnimationFrameNumber(AnimSequence, ExpectedFrameNumber) end

