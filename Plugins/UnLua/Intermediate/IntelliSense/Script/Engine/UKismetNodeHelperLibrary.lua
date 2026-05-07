---@class UKismetNodeHelperLibrary : UBlueprintFunctionLibrary
local UKismetNodeHelperLibrary = {}

---Sets the bit at index "Index" in the data
---@param Data integer @[out] 
---@param Index integer
function UKismetNodeHelperLibrary.MarkBit(Data, Index) end

---Returns whether there exists an unmarked bit in the data
---@param Data integer
---@param NumBits integer
---@return boolean
function UKismetNodeHelperLibrary.HasUnmarkedBit(Data, NumBits) end

---Returns whether there exists a marked bit in the data
---@param Data integer
---@param NumBits integer
---@return boolean
function UKismetNodeHelperLibrary.HasMarkedBit(Data, NumBits) end

---
---@param Enum UEnum
---@param EnumeratorValue integer
---@return integer
function UKismetNodeHelperLibrary.GetValidValue(Enum, EnumeratorValue) end

---Gets an already unmarked bit and returns the bit index selected
---@param Data integer
---@param StartIdx integer
---@param NumBits integer
---@param bRandom boolean
---@return integer
function UKismetNodeHelperLibrary.GetUnmarkedBit(Data, StartIdx, NumBits, bRandom) end

---Gets a random not already marked bit and returns the bit index selected
---@param Data integer
---@param StartIdx integer
---@param NumBits integer
---@return integer
function UKismetNodeHelperLibrary.GetRandomUnmarkedBit(Data, StartIdx, NumBits) end

---Gets the first index not already marked starting from a specific index and returns the bit index selected
---@param Data integer
---@param StartIdx integer
---@param NumBits integer
---@return integer
function UKismetNodeHelperLibrary.GetFirstUnmarkedBit(Data, StartIdx, NumBits) end

---
---@param Enum UEnum
---@param EnumeratorIndex integer
---@return integer
function UKismetNodeHelperLibrary.GetEnumeratorValueFromIndex(Enum, EnumeratorIndex) end

---Gets enumerator name as FString. Use DeisplayName when possible.
---@param Enum UEnum
---@param EnumeratorValue integer
---@return string
function UKismetNodeHelperLibrary.GetEnumeratorUserFriendlyName(Enum, EnumeratorValue) end

---Gets enumerator name.
---@param Enum UEnum
---@param EnumeratorValue integer
---@return string
function UKismetNodeHelperLibrary.GetEnumeratorName(Enum, EnumeratorValue) end

---Clears the bit at index "Index" in the data
---@param Data integer @[out] 
---@param Index integer
function UKismetNodeHelperLibrary.ClearBit(Data, Index) end

---Clears all of the bit in the data
---@param Data integer @[out] 
function UKismetNodeHelperLibrary.ClearAllBits(Data) end

---Returns whether the bit at index "Index" is set or not in the data
---@param Data integer
---@param Index integer
---@return boolean
function UKismetNodeHelperLibrary.BitIsMarked(Data, Index) end

