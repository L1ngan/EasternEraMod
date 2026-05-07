---@class ULevelSequenceImportTestFunctions : UImportTestFunctionsBase
local ULevelSequenceImportTestFunctions = {}

---Check whether the level sequence length (second) is as expected
---@param LevelSequence ULevelSequence
---@param ExpectedLevelSequenceLength number
---@return FInterchangeTestFunctionResult
function ULevelSequenceImportTestFunctions.CheckSequenceLength(LevelSequence, ExpectedLevelSequenceLength) end

---Check whether the imported level sequence has the expected interpolation mode for the given section
---@param LevelSequence ULevelSequence
---@param SectionIndex integer
---@param ExpectedInterpolationMode integer
---@return FInterchangeTestFunctionResult
function ULevelSequenceImportTestFunctions.CheckSectionInterpolationMode(LevelSequence, SectionIndex, ExpectedInterpolationMode) end

---Check whether the imported level sequence has the expected number of sections
---@param LevelSequence ULevelSequence
---@param ExpectedNumberOfSections integer
---@return FInterchangeTestFunctionResult
function ULevelSequenceImportTestFunctions.CheckSectionCount(LevelSequence, ExpectedNumberOfSections) end

---Check whether the expected number of level sequences are imported
---@param LevelSequences TArray_ULevelSequence_
---@param ExpectedNumberOfLevelSequences integer
---@return FInterchangeTestFunctionResult
function ULevelSequenceImportTestFunctions.CheckLevelSequenceCount(LevelSequences, ExpectedNumberOfLevelSequences) end

