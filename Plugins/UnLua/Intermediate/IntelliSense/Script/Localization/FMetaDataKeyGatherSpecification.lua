---@class FMetaDataKeyGatherSpecification
---@field public MetaDataKey FMetaDataKeyName @The metadata key for which values will be gathered as text.
---@field public TextNamespace string @The localization namespace in which the gathered text will be output.
---@field public TextKeyPattern FMetaDataTextKeyPattern @The pattern which will be formatted to form the localization key for the metadata value gathered as text.       Placeholder - Description       {FieldPath} - The fully qualified name of the object upon which the metadata resides.       {MetaDataValue} - The value associated with the metadata key.
local FMetaDataKeyGatherSpecification = {}
