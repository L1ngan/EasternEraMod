---@class UMetaSoundSettings : UDeveloperSettings
---@field public bAutoUpdateEnabled boolean @If true, AutoUpdate is enabled, increasing load times.  If false, skips AutoUpdate on load, but can result in MetaSounds failing to load, register, and execute if interface differences are present.
---@field public AutoUpdateDenylist TArray<FMetasoundFrontendClassName> @List of native MetaSound classes whose node references should not be AutoUpdated.
---@field public AutoUpdateAssetDenylist TArray<FDefaultMetaSoundAssetAutoUpdateSettings> @List of MetaSound assets whose node references should not be AutoUpdated.
---@field public bAutoUpdateLogWarningOnDroppedConnection boolean @If true, warnings will be logged if updating a node results in existing connections being discarded.
---@field public DirectoriesToRegister TArray<FDirectoryPath> @Directories to scan & automatically register MetaSound post initial asset scan on engine start-up. May speed up subsequent calls to playback MetaSounds post asset scan but increases application load time. See 'MetaSoundAssetSubsystem::RegisterAssetClassesInDirectories' to dynamically register or 'MetaSoundAssetSubsystem::UnregisterAssetClassesInDirectories' to unregister asset classes.
---@field public DenyListCacheChangeID integer
---@field private TargetPageName string @Page Name to target when attempting to execute MetaSound. If target page is not implemented (or cooked in a runtime build) for the active platform, uses order of cooked pages (see 'Page Settings' for order) falling back to lower index-ordered page implemented in MetaSound asset. If no fallback is found, uses default implementation.
---@field private DefaultPageSettings FMetaSoundPageSettings @Default page settings to be used in editor and if no other page settings are targeted or defined.
---@field private PageSettings TArray<FMetaSoundPageSettings> @Array of possible page settings that can be added to a MetaSound object. Order defines default fallback logic whereby a higher index-ordered page implemented in a MetaSound asset is higher priority (see 'Target Page').
---@field private QualitySettings TArray<FMetaSoundQualitySettings> @Array of possible quality settings for Metasounds to chose from
local UMetaSoundSettings = {}

---Returns an array of quality setting names. Can be used to present to a combobox. Ex:
---       * UPROPERTY(... meta=(GetOptions="MetasoundEngine.MetaSoundSettings.GetQualityNames"))
---       * FName QualitySetting;
---@return TArray_string_
function UMetaSoundSettings.GetQualityNames() end

---Returns an array of page names. Can be used to present to a combobox. Ex:
---       * UPROPERTY(... meta=(GetOptions="MetasoundEngine.MetaSoundSettings.GetPageNames"))
---       * FName Page;
---@return TArray_string_
function UMetaSoundSettings.GetPageNames() end

