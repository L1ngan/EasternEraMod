---This Metasound type can be played as an audio source.
---@class UMetaSoundSource : USoundWaveProcedural
---@field protected RootMetasoundDocument FMetasoundFrontendDocument
---@field protected ReferencedAssetClassKeys TSet<string>
---@field protected ReferencedAssetClassObjects TSet<UObject>
---@field protected ReferenceAssetClassCache TSet<FSoftObjectPath>
---@field protected Graph UMetasoundEditorGraphBase
---@field protected EditorGraph UMetasoundEditorGraphBase
---@field public OutputFormat EMetaSoundOutputAudioFormat @The output audio format of the metasound source.
---@field public QualitySetting string @The QualitySetting MetaSound will use, as defined in 'MetaSound' Settings.
---@field public QualitySettingGuid FGuid @This a editor only look up for the Quality Setting above. Preventing orphaning of the original name.
---@field public BlockRateOverride FPerPlatformFloat @Override the BlockRate for this Sound (overrides Quality). NOTE: A Zero value will have no effect and use either the Quality setting (if set), or the defaults.
---@field public SampleRateOverride FPerPlatformInt @Override the SampleRate for this Sound (overrides Quality). NOTE: A Zero value will have no effect and use either the Quality setting (if set), or the Device Rate
---@field public AssetClassID FGuid
---@field public RegistryInputTypes string
---@field public RegistryOutputTypes string
---@field public RegistryVersionMajor integer
---@field public RegistryVersionMinor integer
---@field public bIsPreset boolean
local UMetaSoundSource = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMetaSoundSource:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMetaSoundSource:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMetaSoundSource:AddAssetUserDataOfClass(InUserDataClass) end

