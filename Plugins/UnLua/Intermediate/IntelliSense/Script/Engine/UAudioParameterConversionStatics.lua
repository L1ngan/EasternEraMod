---@class UAudioParameterConversionStatics : UBlueprintFunctionLibrary
local UAudioParameterConversionStatics = {}

---@param Name string
---@param String string
---@return FAudioParameter
function UAudioParameterConversionStatics.StringToAudioParameter(Name, String) end

---@param Name string
---@param Strings TArray_string_
---@return FAudioParameter
function UAudioParameterConversionStatics.StringArrayToAudioParameter(Name, Strings) end

---@param Name string
---@param Object UObject
---@return FAudioParameter
function UAudioParameterConversionStatics.ObjectToAudioParameter(Name, Object) end

---@param Name string
---@param Objects TArray_UObject_
---@return FAudioParameter
function UAudioParameterConversionStatics.ObjectArrayToAudioParameter(Name, Objects) end

---@param Name string
---@param Integer integer
---@return FAudioParameter
function UAudioParameterConversionStatics.IntegerToAudioParameter(Name, Integer) end

---@param Name string
---@param Integers TArray_integer_
---@return FAudioParameter
function UAudioParameterConversionStatics.IntegerArrayToAudioParameter(Name, Integers) end

---@param Name string
---@param Float number
---@return FAudioParameter
function UAudioParameterConversionStatics.FloatToAudioParameter(Name, Float) end

---@param Name string
---@param Floats TArray_number_
---@return FAudioParameter
function UAudioParameterConversionStatics.FloatArrayToAudioParameter(Name, Floats) end

---@param Name string
---@param Bool boolean
---@return FAudioParameter
function UAudioParameterConversionStatics.BooleanToAudioParameter(Name, Bool) end

---@param Name string
---@param Bools TArray_boolean_
---@return FAudioParameter
function UAudioParameterConversionStatics.BooleanArrayToAudioParameter(Name, Bools) end

