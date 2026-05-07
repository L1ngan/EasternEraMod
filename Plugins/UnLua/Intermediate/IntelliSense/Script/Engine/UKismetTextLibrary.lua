---@class UKismetTextLibrary : UBlueprintFunctionLibrary
local UKismetTextLibrary = {}

---Removes trailing whitespace characters.
---@param InText string
---@return string
function UKismetTextLibrary.TextTrimTrailing(InText) end

---Removes whitespace characters from the front and end of the text.
---@param InText string
---@return string
function UKismetTextLibrary.TextTrimPrecedingAndTrailing(InText) end

---Removes whitespace characters from the front of the text.
---@param InText string
---@return string
function UKismetTextLibrary.TextTrimPreceding(InText) end

---Transforms the text to uppercase in a culture correct way.
---@param InText string
---@return string
function UKismetTextLibrary.TextToUpper(InText) end

---Transforms the text to lowercase in a culture correct way.
---@param InText string
---@return string
function UKismetTextLibrary.TextToLower(InText) end

---Returns true if text is transient.
---@param InText string
---@return boolean
function UKismetTextLibrary.TextIsTransient(InText) end

---Returns true if the given text is referencing a string table.
---@param Text string
---@return boolean
function UKismetTextLibrary.TextIsFromStringTable(Text) end

---Returns true if text is empty.
---@param InText string
---@return boolean
function UKismetTextLibrary.TextIsEmpty(InText) end

---Returns true if text is culture invariant.
---@param InText string
---@return boolean
function UKismetTextLibrary.TextIsCultureInvariant(InText) end

---Attempts to create a text instance from a string table ID and key.
---@param TableId string
---@param Key string
---@return string
function UKismetTextLibrary.TextFromStringTable(TableId, Key) end

---Attempts to get the String Table ID and key used by the given text.
---@param Text string
---@param OutTableId string @[out] 
---@param OutKey string @[out] 
---@return boolean
function UKismetTextLibrary.StringTableIdAndKeyFromText(Text, OutTableId, OutKey) end

---Get the text instance created from this polyglot data.
---@param PolyglotData FPolyglotTextData
---@return string
function UKismetTextLibrary.PolyglotDataToText(PolyglotData) end

---Returns true if A and B are linguistically not equal (A != B).
---@param A string
---@param B string
---@return boolean
function UKismetTextLibrary.NotEqual_TextText(A, B) end

---Returns true if A and B are linguistically not equal (A != B), ignoring case.
---@param A string
---@param B string
---@return boolean
function UKismetTextLibrary.NotEqual_IgnoreCase_TextText(A, B) end

---Converts string to culture invariant text. Use 'Make Literal Text' to create localizable text, or 'Format' if concatenating localized text
---@param InString string
---@return string
function UKismetTextLibrary.MakeInvariantText(InString) end

---Check whether the given polyglot data is valid.
---@param PolyglotData FPolyglotTextData
---@param IsValid boolean @[out] 
---@param ErrorMessage string @[out] 
function UKismetTextLibrary.IsPolyglotDataValid(PolyglotData, IsValid, ErrorMessage) end

---Get the (non-localized) source string of the given text.
---@param Text string
---@return string
function UKismetTextLibrary.GetTextSourceString(Text) end

---Attempts to get the ID (namespace and key) used by the given text.
---@param Text string
---@param OutNamespace string @[out] 
---@param OutKey string @[out] 
---@return boolean
function UKismetTextLibrary.GetTextId(Text, OutNamespace, OutKey) end

---Returns an empty piece of text.
---@return string
function UKismetTextLibrary.GetEmptyText() end

---Used for formatting text using the FText::Format function and utilized by the UK2Node_FormatText
---@param InPattern string
---@param InArgs TArray_FFormatArgumentData_
---@return string
function UKismetTextLibrary.Format(InPattern, InArgs) end

---=== !! This is an ADVANCED function. USE WITH CAUTION !! ===
---Attempt to dynamically reference an EXISTING Text via its active display string in the live table.
---Note: This can ONLY find text that is currently localized (gathered, translated, and has an active display string in TextLocalizationManager). If you need to find a localizable but untranslated text, see 'Make Literal Text'.
---Note: Direct dynamic references to Text are EXTREMELY FRAGILE, and you may want to use a string table instead!
---@param Namespace string
---@param Key string
---@param OutText string @[out] 
---@param SourceString string
---@return boolean
function UKismetTextLibrary.FindTextInLocalizationTable(Namespace, Key, OutText, SourceString) end

---Returns true if A and B are linguistically equal (A == B).
---@param A string
---@param B string
---@return boolean
function UKismetTextLibrary.EqualEqual_TextText(A, B) end

---Returns true if A and B are linguistically equal (A == B), ignoring case.
---@param A string
---@param B string
---@return boolean
function UKismetTextLibrary.EqualEqual_IgnoreCase_TextText(A, B) end

---Edit the source string of the given text property, akin to what happens when editing a text property in a details panel.
---This will attempt to preserve the existing ID of the text property being edited, or failing that will attempt to build a deterministic ID based on the object and property info.
---@param TextOwner UObject
---@param Text string @[out] 
---@param SourceString string
---@param bEmitChangeNotify boolean @[opt] 
---@return boolean
function UKismetTextLibrary.EditTextSourceString(TextOwner, Text, SourceString, bEmitChangeNotify) end

---Edit the source string of the given text property, akin to what happens when editing a text property in a details panel.
---This will attempt to preserve the existing ID of the text property being edited, or failing that will attempt to build a deterministic ID based on the object and property info.
---@param TextOwner UObject
---@param PropertyName string
---@param SourceString string
---@param bEmitChangeNotify boolean @[opt] 
---@return boolean
function UKismetTextLibrary.EditTextPropertySourceString(TextOwner, PropertyName, SourceString, bEmitChangeNotify) end

---Converts a vector value to localized formatted text, in the form 'X= Y= Z='
---@param InVec FVector
---@return string
function UKismetTextLibrary.Conv_VectorToText(InVec) end

---Converts a vector2d value to localized formatted text, in the form 'X= Y='
---@param InVec FVector2D
---@return string
function UKismetTextLibrary.Conv_Vector2dToText(InVec) end

---Converts a transform value to localized formatted text, in the form 'Translation: X= Y= Z= Rotation: P= Y= R= Scale: X= Y= Z='
---@param InTrans FTransform
---@return string
function UKismetTextLibrary.Conv_TransformToText(InTrans) end

---Converts localizable text to the string
---@param InText string
---@return string
function UKismetTextLibrary.Conv_TextToString(InText) end

---Converts string to culture invariant text. Use 'Make Literal Text' to create localizable text, or 'Format' if concatenating localized text
---@param InString string
---@return string
function UKismetTextLibrary.Conv_StringToText(InString) end

---Converts a rotator value to localized formatted text, in the form 'P= Y= R='
---@param InRot FRotator
---@return string
function UKismetTextLibrary.Conv_RotatorToText(InRot) end

---Converts a UObject value to culture invariant text by calling the object's GetName method
---@param InObj UObject
---@return string
function UKismetTextLibrary.Conv_ObjectToText(InObj) end

---Converts a generic value to localized formatted text using the user culture.
---@param Value integer
---@return string
function UKismetTextLibrary.Conv_NumericPropertyToText(Value) end

---Converts Name to culture invariant text
---@param InName string
---@return string
function UKismetTextLibrary.Conv_NameToText(InName) end

---Converts a passed in integer to text based on formatting options
---@param Value integer
---@param bAlwaysSign boolean @[opt] 
---@param bUseGrouping boolean @[opt] 
---@param MinimumIntegralDigits integer @[opt] 
---@param MaximumIntegralDigits integer @[opt] 
---@return string
function UKismetTextLibrary.Conv_IntToText(Value, bAlwaysSign, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits) end

---Converts a passed in integer to text based on formatting options
---@param Value integer
---@param bAlwaysSign boolean @[opt] 
---@param bUseGrouping boolean @[opt] 
---@param MinimumIntegralDigits integer @[opt] 
---@param MaximumIntegralDigits integer @[opt] 
---@return string
function UKismetTextLibrary.Conv_Int64ToText(Value, bAlwaysSign, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits) end

---Converts a passed in double to text based on formatting options
---@param Value number
---@param RoundingMode integer
---@param bAlwaysSign boolean @[opt] 
---@param bUseGrouping boolean @[opt] 
---@param MinimumIntegralDigits integer @[opt] 
---@param MaximumIntegralDigits integer @[opt] 
---@param MinimumFractionalDigits integer @[opt] 
---@param MaximumFractionalDigits integer @[opt] 
---@return string
function UKismetTextLibrary.Conv_DoubleToText(Value, RoundingMode, bAlwaysSign, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits, MinimumFractionalDigits, MaximumFractionalDigits) end

---Converts a linear color value to localized formatted text, in the form '(R=,G=,B=,A=)'
---@param InColor FLinearColor
---@return string
function UKismetTextLibrary.Conv_ColorToText(InColor) end

---Converts a byte value to formatted text
---@param Value integer
---@return string
function UKismetTextLibrary.Conv_ByteToText(Value) end

---Converts a boolean value to formatted text, either 'true' or 'false'
---@param InBool boolean
---@return string
function UKismetTextLibrary.Conv_BoolToText(InBool) end

---Converts a passed in date & time to a text, formatted as a time using the given timezone (default is the local timezone). This will convert the given date & time from UTC to the given timezone (taking into account DST).
---@param InDateTime FDateTime
---@param InTimeZone string
---@param InTimeStyle integer @[opt] 
---@return string
function UKismetTextLibrary.AsTimeZoneTime_DateTime(InDateTime, InTimeZone, InTimeStyle) end

---Converts a passed in date & time to a text, formatted as a date & time using the given timezone (default is the local timezone). This will convert the given date & time from UTC to the given timezone (taking into account DST).
---@param InDateTime FDateTime
---@param InTimeZone string
---@param InDateStyle integer @[opt] 
---@param InTimeStyle integer @[opt] 
---@return string
function UKismetTextLibrary.AsTimeZoneDateTime_DateTime(InDateTime, InTimeZone, InDateStyle, InTimeStyle) end

---Converts a passed in date & time to a text, formatted as a date using the given timezone (default is the local timezone). This will convert the given date & time from UTC to the given timezone (taking into account DST).
---@param InDateTime FDateTime
---@param InTimeZone string
---@param InDateStyle integer @[opt] 
---@return string
function UKismetTextLibrary.AsTimeZoneDate_DateTime(InDateTime, InTimeZone, InDateStyle) end

---Converts a passed in time span to a text, formatted as a time span
---@param InTimespan FTimespan
---@return string
function UKismetTextLibrary.AsTimespan_Timespan(InTimespan) end

---Converts a passed in date & time to a text, formatted as a time using an invariant timezone. This will use the given date & time as-is, so it's assumed to already be in the correct timezone.
---@param In FDateTime
---@param InTimeStyle integer @[opt] 
---@return string
function UKismetTextLibrary.AsTime_DateTime(In, InTimeStyle) end

---Converts a passed in float to a text, formatted as a percent
---@param Value number
---@param RoundingMode integer
---@param bAlwaysSign boolean @[opt] 
---@param bUseGrouping boolean @[opt] 
---@param MinimumIntegralDigits integer @[opt] 
---@param MaximumIntegralDigits integer @[opt] 
---@param MinimumFractionalDigits integer @[opt] 
---@param MaximumFractionalDigits integer @[opt] 
---@return string
function UKismetTextLibrary.AsPercent_Float(Value, RoundingMode, bAlwaysSign, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits, MinimumFractionalDigits, MaximumFractionalDigits) end

---Generate an FText that represents the passed number as a memory size in the current culture
---@param NumBytes integer
---@param UnitStandard integer @[opt] 
---@param bUseGrouping boolean @[opt] 
---@param MinimumIntegralDigits integer @[opt] 
---@param MaximumIntegralDigits integer @[opt] 
---@param MinimumFractionalDigits integer @[opt] 
---@param MaximumFractionalDigits integer @[opt] 
---@return string
function UKismetTextLibrary.AsMemory(NumBytes, UnitStandard, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits, MinimumFractionalDigits, MaximumFractionalDigits) end

---Converts a passed in date & time to a text, formatted as a date & time using an invariant timezone. This will use the given date & time as-is, so it's assumed to already be in the correct timezone.
---@param In FDateTime
---@param InDateStyle integer @[opt] 
---@param InTimeStyle integer @[opt] 
---@return string
function UKismetTextLibrary.AsDateTime_DateTime(In, InDateStyle, InTimeStyle) end

---Converts a passed in date & time to a text, formatted as a date using an invariant timezone. This will use the given date & time as-is, so it's assumed to already be in the correct timezone.
---@param InDateTime FDateTime
---@param InDateStyle integer @[opt] 
---@return string
function UKismetTextLibrary.AsDate_DateTime(InDateTime, InDateStyle) end

---Generate an FText that represents the passed number as currency in the current culture.
---BaseVal is specified in the smallest fractional value of the currency and will be converted for formatting according to the selected culture.
---Keep in mind the CurrencyCode is completely independent of the culture it's displayed in (and they do not imply one another).
---For example: FText::AsCurrencyBase(650, TEXT("EUR")); would return an FText of "<EUR>6.50" in most English cultures (en_US/en_UK) and "6,50<EUR>" in Spanish (es_ES) (where <EUR> is U+20AC)
---@param BaseValue integer
---@param CurrencyCode string
---@return string
function UKismetTextLibrary.AsCurrencyBase(BaseValue, CurrencyCode) end

---Converts a passed in integer to a text formatted as a currency
---@param Value integer
---@param RoundingMode integer
---@param bAlwaysSign boolean @[opt] 
---@param bUseGrouping boolean @[opt] 
---@param MinimumIntegralDigits integer @[opt] 
---@param MaximumIntegralDigits integer @[opt] 
---@param MinimumFractionalDigits integer @[opt] 
---@param MaximumFractionalDigits integer @[opt] 
---@param CurrencyCode string
---@return string
function UKismetTextLibrary.AsCurrency_Integer(Value, RoundingMode, bAlwaysSign, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits, MinimumFractionalDigits, MaximumFractionalDigits, CurrencyCode) end

---Converts a passed in float to a text formatted as a currency
---@param Value number
---@param RoundingMode integer
---@param bAlwaysSign boolean @[opt] 
---@param bUseGrouping boolean @[opt] 
---@param MinimumIntegralDigits integer @[opt] 
---@param MaximumIntegralDigits integer @[opt] 
---@param MinimumFractionalDigits integer @[opt] 
---@param MaximumFractionalDigits integer @[opt] 
---@param CurrencyCode string
---@return string
function UKismetTextLibrary.AsCurrency_Float(Value, RoundingMode, bAlwaysSign, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits, MinimumFractionalDigits, MaximumFractionalDigits, CurrencyCode) end

