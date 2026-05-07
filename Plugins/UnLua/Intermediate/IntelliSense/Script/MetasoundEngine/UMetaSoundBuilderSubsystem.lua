---The subsystem in charge of tracking MetaSound builders
---@class UMetaSoundBuilderSubsystem : UEngineSubsystem
---@field private NamedBuilders TMap<string, UMetaSoundBuilderBase>
local UMetaSoundBuilderSubsystem = {}

---@param BuilderName string
---@return boolean
function UMetaSoundBuilderSubsystem:UnregisterSourceBuilder(BuilderName) end

---@param BuilderName string
---@return boolean
function UMetaSoundBuilderSubsystem:UnregisterPatchBuilder(BuilderName) end

---@param BuilderName string
---@return boolean
function UMetaSoundBuilderSubsystem:UnregisterBuilder(BuilderName) end

---Sets the targeted page for all MetaSound graph & input default to resolve against.
---If target page is not implemented (or cooked in a runtime build) for the active platform,
---uses order of cooked pages(see 'Page Settings' for order) falling back to lower index - ordered page
---implemented in MetaSound asset. If no fallback is found, uses default graph/input default.
---@param PageName string
---@return boolean
function UMetaSoundBuilderSubsystem:SetTargetPage(PageName) end

---Adds builder to subsystem's registry to make it persistent and easily accessible by multiple systems or Blueprints
---@param BuilderName string
---@param Builder UMetaSoundSourceBuilder
function UMetaSoundBuilderSubsystem:RegisterSourceBuilder(BuilderName, Builder) end

---Adds builder to subsystem's registry to make it persistent and easily accessible by multiple systems or Blueprints
---@param BuilderName string
---@param Builder UMetaSoundPatchBuilder
function UMetaSoundBuilderSubsystem:RegisterPatchBuilder(BuilderName, Builder) end

---Adds builder to subsystem's registry to make it persistent and easily accessible by multiple systems or Blueprints
---@param BuilderName string
---@param Builder UMetaSoundBuilderBase
function UMetaSoundBuilderSubsystem:RegisterBuilder(BuilderName, Builder) end

---@param InInterfaceName string
---@return boolean
function UMetaSoundBuilderSubsystem:IsInterfaceRegistered(InInterfaceName) end

---Returns the source builder manually registered with the MetaSound Builder Subsystem with the provided custom name (if previously registered)
---@param BuilderName string
---@return UMetaSoundSourceBuilder
function UMetaSoundBuilderSubsystem:FindSourceBuilder(BuilderName) end

---Returns the patch builder manually registered with the MetaSound Builder Subsystem with the provided custom name (if previously registered)
---@param BuilderName string
---@return UMetaSoundPatchBuilder
function UMetaSoundBuilderSubsystem:FindPatchBuilder(BuilderName) end

---Returns the builder associated with the given MetaSound (if one exists, transient or asset).
---@param InMetaSound TScriptInterface_UMetaSoundDocumentInterface_
---@return UMetaSoundBuilderBase
function UMetaSoundBuilderSubsystem:FindBuilderOfDocument(InMetaSound) end

---Returns the builder manually registered with the MetaSound Builder Subsystem with the provided custom name (if previously registered)
---@param BuilderName string
---@return UMetaSoundBuilderBase
function UMetaSoundBuilderSubsystem:FindBuilder(BuilderName) end

---@param Value string
---@param DataType string @[out] 
---@return FMetasoundFrontendLiteral
function UMetaSoundBuilderSubsystem:CreateStringMetaSoundLiteral(Value, DataType) end

---@param Value TArray_string_
---@param DataType string @[out] 
---@return FMetasoundFrontendLiteral
function UMetaSoundBuilderSubsystem:CreateStringArrayMetaSoundLiteral(Value, DataType) end

---Creates a builder that acts on a generated, transient preset MetaSound UObject. Fails if Referenced MetaSound is not a UMetaSoundSource.
---@param BuilderName string
---@param ReferencedSourceClass TScriptInterface_UMetaSoundDocumentInterface_
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return UMetaSoundSourceBuilder
function UMetaSoundBuilderSubsystem:CreateSourcePresetBuilder(BuilderName, ReferencedSourceClass, OutResult) end

---@param BuilderName string
---@param OnPlayNodeOutput FMetaSoundBuilderNodeOutputHandle @[out] 
---@param OnFinishedNodeInput FMetaSoundBuilderNodeInputHandle @[out] 
---@param AudioOutNodeInputs TArray_FMetaSoundBuilderNodeInputHandle_ @[out] 
---@param OutResult EMetaSoundBuilderResult @[out] 
---@param OutputFormat EMetaSoundOutputAudioFormat @[opt] 
---@param bIsOneShot boolean @[opt] 
---@return UMetaSoundSourceBuilder
function UMetaSoundBuilderSubsystem:CreateSourceBuilder(BuilderName, OnPlayNodeOutput, OnFinishedNodeInput, AudioOutNodeInputs, OutResult, OutputFormat, bIsOneShot) end

---Creates a builder that acts on a generated, transient preset MetaSound UObject. Fails if Referenced MetaSound is not a UMetaSoundPatch.
---@param BuilderName string
---@param ReferencedPatchClass TScriptInterface_UMetaSoundDocumentInterface_
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return UMetaSoundPatchBuilder
function UMetaSoundBuilderSubsystem:CreatePatchPresetBuilder(BuilderName, ReferencedPatchClass, OutResult) end

---@param BuilderName string
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return UMetaSoundPatchBuilder
function UMetaSoundBuilderSubsystem:CreatePatchBuilder(BuilderName, OutResult) end

---@param Value UObject
---@return FMetasoundFrontendLiteral
function UMetaSoundBuilderSubsystem:CreateObjectMetaSoundLiteral(Value) end

---@param Value TArray_UObject_
---@return FMetasoundFrontendLiteral
function UMetaSoundBuilderSubsystem:CreateObjectArrayMetaSoundLiteral(Value) end

---@param Param FAudioParameter
---@return FMetasoundFrontendLiteral
function UMetaSoundBuilderSubsystem:CreateMetaSoundLiteralFromParam(Param) end

---@param Value integer
---@param DataType string @[out] 
---@return FMetasoundFrontendLiteral
function UMetaSoundBuilderSubsystem:CreateIntMetaSoundLiteral(Value, DataType) end

---@param Value TArray_integer_
---@param DataType string @[out] 
---@return FMetasoundFrontendLiteral
function UMetaSoundBuilderSubsystem:CreateIntArrayMetaSoundLiteral(Value, DataType) end

---@param Value number
---@param DataType string @[out] 
---@return FMetasoundFrontendLiteral
function UMetaSoundBuilderSubsystem:CreateFloatMetaSoundLiteral(Value, DataType) end

---@param Value TArray_number_
---@param DataType string @[out] 
---@return FMetasoundFrontendLiteral
function UMetaSoundBuilderSubsystem:CreateFloatArrayMetaSoundLiteral(Value, DataType) end

---@param Value boolean
---@param DataType string @[out] 
---@return FMetasoundFrontendLiteral
function UMetaSoundBuilderSubsystem:CreateBoolMetaSoundLiteral(Value, DataType) end

---@param Value TArray_boolean_
---@param DataType string @[out] 
---@return FMetasoundFrontendLiteral
function UMetaSoundBuilderSubsystem:CreateBoolArrayMetaSoundLiteral(Value, DataType) end

