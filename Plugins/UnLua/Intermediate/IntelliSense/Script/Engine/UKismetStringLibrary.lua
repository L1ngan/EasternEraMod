---@class UKismetStringLibrary : UBlueprintFunctionLibrary
local UKismetStringLibrary = {}

---Removes trailing whitespace characters
---@param SourceString string
---@return string
function UKismetStringLibrary.TrimTrailing(SourceString) end

---Removes whitespace characters from the front of this string.
---@param SourceString string
---@return string
function UKismetStringLibrary.Trim(SourceString) end

---Returns a string converted to Upper case
---@param SourceString string
---@return string
function UKismetStringLibrary.ToUpper(SourceString) end

---Returns a string converted to Lower case
---@param SourceString string
---@return string
function UKismetStringLibrary.ToLower(SourceString) end

---Convert a number of seconds into minutes:seconds.milliseconds format string (including leading zeroes)
---@param InSeconds number
---@return string
function UKismetStringLibrary.TimeSecondsToString(InSeconds) end

---Test whether this string starts with given string.
---@param SourceString string
---@param InPrefix string
---@param SearchCase integer @[opt] 
---@return boolean
function UKismetStringLibrary.StartsWith(SourceString, InPrefix, SearchCase) end

---Splits this string at given string position case sensitive.
---@param SourceString string
---@param InStr string
---@param LeftS string @[out] 
---@param RightS string @[out] 
---@param SearchCase integer @[opt] 
---@param SearchDir integer @[opt] 
---@return boolean
function UKismetStringLibrary.Split(SourceString, InStr, LeftS, RightS, SearchCase, SearchDir) end

---* Pad the right of this string for a specified number of characters
---* @@param       SourceString    The string to pad
---* @@param       ChCount                 Amount of padding required
---* @@return      The padded string
---@param SourceString string
---@param ChCount integer
---@return string
function UKismetStringLibrary.RightPad(SourceString, ChCount) end

---Returns the string to the right of the specified location, counting forward from the left (from the beginning of the word).
---@param SourceString string
---@param Count integer
---@return string
function UKismetStringLibrary.RightChop(SourceString, Count) end

---Returns the string to the right of the specified location, counting back from the right (end of the word).
---@param SourceString string
---@param Count integer
---@return string
function UKismetStringLibrary.Right(SourceString, Count) end

---Returns a copy of this string, with the characters in reverse order
---@param SourceString string
---@return string
function UKismetStringLibrary.Reverse(SourceString) end

---Replace all occurrences of SearchText with ReplacementText in this string.
---@param SourceString string @[out] 
---@param SearchText string
---@param ReplacementText string
---@param SearchCase integer @[opt] 
---@return integer
function UKismetStringLibrary.ReplaceInline(SourceString, SearchText, ReplacementText, SearchCase) end

---Replace all occurrences of a substring in this string
---@param SourceString string
---@param From string
---@param To string
---@param SearchCase integer @[opt] 
---@return string
function UKismetStringLibrary.Replace(SourceString, From, To, SearchCase) end

---Gets an array of strings from a source string divided up by a separator and empty strings can optionally be culled.
---@param SourceString string
---@param Delimiter string @[opt] 
---@param CullEmptyStrings boolean @[opt] 
---@return TArray_string_
function UKismetStringLibrary.ParseIntoArray(SourceString, Delimiter, CullEmptyStrings) end

---Test if the input string are not equal (A != B)
---@param A string
---@param B string
---@return boolean
function UKismetStringLibrary.NotEqual_StrStr(A, B) end

---Test if the input string are not equal (A != B), ignoring case differences
---@param A string
---@param B string
---@return boolean
function UKismetStringLibrary.NotEqual_StriStri(A, B) end

---Returns the substring from Start position for Count characters.
---@param SourceString string
---@param Start integer
---@param Count integer
---@return string
function UKismetStringLibrary.Mid(SourceString, Start, Count) end

---Searches this string for a given wild card
---@param SourceString string
---@param Wildcard string
---@param SearchCase integer @[opt] 
---@return boolean
function UKismetStringLibrary.MatchesWildcard(SourceString, Wildcard, SearchCase) end

---Returns the number of characters in the string
---@param S string
---@return integer
function UKismetStringLibrary.Len(S) end

---* Pad the left of this string for a specified number of characters
---* @@param       SourceString    The string to pad
---* @@param       ChCount                 Amount of padding required
---* @@return      The padded string
---@param SourceString string
---@param ChCount integer
---@return string
function UKismetStringLibrary.LeftPad(SourceString, ChCount) end

---Returns the left most characters from the string chopping the given number of characters from the end
---@param SourceString string
---@param Count integer
---@return string
function UKismetStringLibrary.LeftChop(SourceString, Count) end

---Returns the left most given number of characters
---@param SourceString string
---@param Count integer
---@return string
function UKismetStringLibrary.Left(SourceString, Count) end

---Concatenates an array of strings into a single string.
---@param SourceArray TArray_string_
---@param Separator string @[opt] 
---@return string
function UKismetStringLibrary.JoinStringArray(SourceArray, Separator) end

---* Checks if a string contains only numeric characters
---* @@param       SourceString    The string to check
---* @@return true if the string only contains numeric characters
---@param SourceString string
---@return boolean
function UKismetStringLibrary.IsNumeric(SourceString) end

---Returns true if the string is empty
---@param InString string
---@return boolean
function UKismetStringLibrary.IsEmpty(InString) end

---Returns a substring from the string starting at the specified position
---@param SourceString string
---@param StartIndex integer @[opt] 
---@param Length integer @[opt] 
---@return string
function UKismetStringLibrary.GetSubstring(SourceString, StartIndex, Length) end

---Gets a single character from the string (as an integer)
---@param SourceString string
---@param Index integer @[opt] 
---@return integer
function UKismetStringLibrary.GetCharacterAsNumber(SourceString, Index) end

---Returns an array that contains one entry for each character in SourceString
---@param SourceString string
---@return TArray_string_
function UKismetStringLibrary.GetCharacterArrayFromString(SourceString) end

---Finds the starting index of a substring in the a specified string
---@param SearchIn string
---@param Substring string
---@param bUseCase boolean @[opt] 
---@param bSearchFromEnd boolean @[opt] 
---@param StartPosition integer @[opt] 
---@return integer
function UKismetStringLibrary.FindSubstring(SearchIn, Substring, bUseCase, bSearchFromEnd, StartPosition) end

---Test if the input strings are equal (A == B)
---@param A string
---@param B string
---@return boolean
function UKismetStringLibrary.EqualEqual_StrStr(A, B) end

---Test if the input strings are equal (A == B), ignoring case
---@param A string
---@param B string
---@return boolean
function UKismetStringLibrary.EqualEqual_StriStri(A, B) end

---Test whether this string ends with given string.
---@param SourceString string
---@param InSuffix string
---@param SearchCase integer @[opt] 
---@return boolean
function UKismetStringLibrary.EndsWith(SourceString, InSuffix, SearchCase) end

---Returns a string describing the LCS difference between two strings, First and Second.
---This function is editor only because it is expensive for large strings. Examples:
---("A", "") -> "- [ 0001 |      ] A"
---("", "") -> ""
---("The quick brown fox", "The quick red fox") -> "~ [ 0001 | 0001 ]
---                  The quick brown fox
---                            ~~~~~
---                  The quick red   fox"
---The numbers between the [], separated by |, are the line numbers in the First and Second string at
---which the difference occurs. Preceding the line number information is a symbol identifying the type
---of difference: A tilde (~) indicates a modification, a minus (-) indicates a removal from First, and
---a plus (+) indicates an addition to second.
---@param First string
---@param Second string
---@return string
function UKismetStringLibrary.DiffString(First, Second) end

---Takes an array of strings and removes any zero length entries.
---@param SourceString string
---@param InArray TArray_string_ @[out] 
---@return integer
function UKismetStringLibrary.CullArray(SourceString, InArray) end

---Converts a vector value to a string, in the form 'X= Y= Z='
---@param InVec FVector
---@return string
function UKismetStringLibrary.Conv_VectorToString(InVec) end

---Converts a float vector value to a string, in the form 'X= Y= Z='
---@param InVec FVector3f
---@return string
function UKismetStringLibrary.Conv_Vector3fToString(InVec) end

---Converts a vector2d value to a string, in the form 'X= Y='
---@param InVec FVector2D
---@return string
function UKismetStringLibrary.Conv_Vector2dToString(InVec) end

---Converts a transform value to a string, in the form 'Translation: X= Y= Z= Rotation: P= Y= R= Scale: X= Y= Z='
---@param InTrans FTransform
---@return string
function UKismetStringLibrary.Conv_TransformToString(InTrans) end

---Convert String Back To Float Vector. IsValid indicates whether or not the string could be successfully converted.
---@param InString string
---@param OutConvertedVector FVector3f @[out] 
---@param OutIsValid boolean @[out] 
function UKismetStringLibrary.Conv_StringToVector3f(InString, OutConvertedVector, OutIsValid) end

---Convert String Back To Vector2D. IsValid indicates whether or not the string could be successfully converted.
---@param InString string
---@param OutConvertedVector2D FVector2D @[out] 
---@param OutIsValid boolean @[out] 
function UKismetStringLibrary.Conv_StringToVector2D(InString, OutConvertedVector2D, OutIsValid) end

---Convert String Back To Vector. IsValid indicates whether or not the string could be successfully converted.
---@param InString string
---@param OutConvertedVector FVector @[out] 
---@param OutIsValid boolean @[out] 
function UKismetStringLibrary.Conv_StringToVector(InString, OutConvertedVector, OutIsValid) end

---Convert String Back To Rotator. IsValid indicates whether or not the string could be successfully converted.
---@param InString string
---@param OutConvertedRotator FRotator @[out] 
---@param OutIsValid boolean @[out] 
function UKismetStringLibrary.Conv_StringToRotator(InString, OutConvertedRotator, OutIsValid) end

---Converts a string to a name value
---@param InString string
---@return string
function UKismetStringLibrary.Conv_StringToName(InString) end

---Converts a string to a int value
---@param InString string
---@return integer
function UKismetStringLibrary.Conv_StringToInt64(InString) end

---Converts a string to a int value
---@param InString string
---@return integer
function UKismetStringLibrary.Conv_StringToInt(InString) end

---Converts a string to a double value
---@param InString string
---@return number
function UKismetStringLibrary.Conv_StringToDouble(InString) end

---Convert String Back To Color. IsValid indicates whether or not the string could be successfully converted.
---@param InString string
---@param OutConvertedColor FLinearColor @[out] 
---@param OutIsValid boolean @[out] 
function UKismetStringLibrary.Conv_StringToColor(InString, OutConvertedColor, OutIsValid) end

---Converts a rotator value to a string, in the form 'P= Y= R='
---@param InRot FRotator
---@return string
function UKismetStringLibrary.Conv_RotatorToString(InRot) end

---Converts a PlatformUserId value to a string
---@param InPlatformUserId FPlatformUserId
---@return string
function UKismetStringLibrary.Conv_PlatformUserIdToString(InPlatformUserId) end

---Converts a UObject value to a string by calling the object's GetName method
---@param InObj UObject
---@return string
function UKismetStringLibrary.Conv_ObjectToString(InObj) end

---Converts a name value to a string
---@param InName string
---@return string
function UKismetStringLibrary.Conv_NameToString(InName) end

---Converts a name value to a string
---@param InMatrix FMatrix
---@return string
function UKismetStringLibrary.Conv_MatrixToString(InMatrix) end

---Converts an IntVector value to a string, in the form 'X= Y= Z='
---@param InIntVec FIntVector
---@return string
function UKismetStringLibrary.Conv_IntVectorToString(InIntVec) end

---Converts an IntVector2 value to a string, in the form 'X= Y='
---@param InIntVec2 FIntVector2
---@return string
function UKismetStringLibrary.Conv_IntVector2ToString(InIntVec2) end

---Converts an integer value to a string
---@param InInt integer
---@return string
function UKismetStringLibrary.Conv_IntToString(InInt) end

---Converts an IntPoint value to a string, in the form 'X= Y='
---@param InIntPoint FIntPoint
---@return string
function UKismetStringLibrary.Conv_IntPointToString(InIntPoint) end

---Converts an 64-bit integer value to a string
---@param InInt integer
---@return string
function UKismetStringLibrary.Conv_Int64ToString(InInt) end

---Converts a InputDeviceId value to a string
---@param InDeviceId FInputDeviceId
---@return string
function UKismetStringLibrary.Conv_InputDeviceIdToString(InDeviceId) end

---Converts a double value to a string
---@param InDouble number
---@return string
function UKismetStringLibrary.Conv_DoubleToString(InDouble) end

---Converts a linear color value to a string, in the form '(R=,G=,B=,A=)'
---@param InColor FLinearColor
---@return string
function UKismetStringLibrary.Conv_ColorToString(InColor) end

---Converts a byte value to a string
---@param InByte integer
---@return string
function UKismetStringLibrary.Conv_ByteToString(InByte) end

---Converts a FBox value to a string
---@param Box FBox
---@return string
function UKismetStringLibrary.Conv_BoxToString(Box) end

---Converts a FBox value to a string of its Center and Extents values.
---@param Box FBox
---@return string
function UKismetStringLibrary.Conv_BoxCenterAndExtentsToString(Box) end

---Converts a boolean value to a string, either 'true' or 'false'
---@param InBool boolean
---@return string
function UKismetStringLibrary.Conv_BoolToString(InBool) end

---Returns whether this string contains the specified substring.
---@param SearchIn string
---@param Substring string
---@param bUseCase boolean @[opt] 
---@param bSearchFromEnd boolean @[opt] 
---@return boolean
function UKismetStringLibrary.Contains(SearchIn, Substring, bUseCase, bSearchFromEnd) end

---Concatenates two strings together to make a new string
---@param A string
---@param B string
---@return string
function UKismetStringLibrary.Concat_StrStr(A, B) end

---Converts a vector2d->string, creating a new string in the form AppendTo+Prefix+InVector2d+Suffix
---@param AppendTo string
---@param Prefix string
---@param InVector2d FVector2D
---@param Suffix string
---@return string
function UKismetStringLibrary.BuildString_Vector2d(AppendTo, Prefix, InVector2d, Suffix) end

---Converts a vector->string, creating a new string in the form AppendTo+Prefix+InVector+Suffix
---@param AppendTo string
---@param Prefix string
---@param InVector FVector
---@param Suffix string
---@return string
function UKismetStringLibrary.BuildString_Vector(AppendTo, Prefix, InVector, Suffix) end

---Converts a rotator->string, creating a new string in the form AppendTo+Prefix+InRot+Suffix
---@param AppendTo string
---@param Prefix string
---@param InRot FRotator
---@param Suffix string
---@return string
function UKismetStringLibrary.BuildString_Rotator(AppendTo, Prefix, InRot, Suffix) end

---Converts a object->string, creating a new string in the form AppendTo+Prefix+object name+Suffix
---@param AppendTo string
---@param Prefix string
---@param InObj UObject
---@param Suffix string
---@return string
function UKismetStringLibrary.BuildString_Object(AppendTo, Prefix, InObj, Suffix) end

---Converts a color->string, creating a new string in the form AppendTo+Prefix+InName+Suffix
---@param AppendTo string
---@param Prefix string
---@param InName string
---@param Suffix string
---@return string
function UKismetStringLibrary.BuildString_Name(AppendTo, Prefix, InName, Suffix) end

---Converts an IntVector2->string, creating a new string in the form AppendTo+Prefix+InIntVector+Suffix
---@param AppendTo string
---@param Prefix string
---@param InIntVector FIntVector2
---@param Suffix string
---@return string
function UKismetStringLibrary.BuildString_IntVector2(AppendTo, Prefix, InIntVector, Suffix) end

---Converts an IntVector->string, creating a new string in the form AppendTo+Prefix+InIntVector+Suffix
---@param AppendTo string
---@param Prefix string
---@param InIntVector2 FIntVector
---@param Suffix string
---@return string
function UKismetStringLibrary.BuildString_IntVector(AppendTo, Prefix, InIntVector2, Suffix) end

---Converts a int->string, creating a new string in the form AppendTo+Prefix+InInt+Suffix
---@param AppendTo string
---@param Prefix string
---@param InInt integer
---@param Suffix string
---@return string
function UKismetStringLibrary.BuildString_Int(AppendTo, Prefix, InInt, Suffix) end

---Converts a double->string, create a new string in the form AppendTo+Prefix+InDouble+Suffix
---@param AppendTo string
---@param Prefix string
---@param InDouble number
---@param Suffix string
---@return string
function UKismetStringLibrary.BuildString_Double(AppendTo, Prefix, InDouble, Suffix) end

---Converts a color->string, creating a new string in the form AppendTo+Prefix+InColor+Suffix
---@param AppendTo string
---@param Prefix string
---@param InColor FLinearColor
---@param Suffix string
---@return string
function UKismetStringLibrary.BuildString_Color(AppendTo, Prefix, InColor, Suffix) end

---Converts a boolean->string, creating a new string in the form AppendTo+Prefix+InBool+Suffix
---@param AppendTo string
---@param Prefix string
---@param InBool boolean
---@param Suffix string
---@return string
function UKismetStringLibrary.BuildString_Bool(AppendTo, Prefix, InBool, Suffix) end

