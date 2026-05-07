---Hold setting information of an Action Input or a Action Key Mapping for setting screen and save purposes.
---@class UPlayerMappableKeySettings : UObject
---@field public Metadata UObject @Metadata that can used to store any other related items to this key mapping such as icons, ability assets, etc.
---@field public Name string @A unique name for this player mapping to be saved with.
---@field public DisplayName string @The localized display name of this key mapping. Use this when displaying the mappings to a user.
---@field public DisplayCategory string @The category that this player mapping is in
---@field public SupportedKeyProfiles FGameplayTagContainer
---@field public SupportedKeyProfileIds TArray<string> @If this key mapping should only be added when a specific key profile is equipped, then set those here. If this is empty, then the key mapping will not be filtered out based on the current profile.
local UPlayerMappableKeySettings = {}

---Get the known mapping names that are current in use. This is a helper function if you want to use a "GetOptions" metadata on a UPROPERTY.
---For example, the following will display a little drop down menu to select from all current mapping names:
--- UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(GetOptions="EnhancedInput.PlayerMappableKeySettings.GetKnownMappingNames"))
--- FName MappingName;
---@return TArray_string_
function UPlayerMappableKeySettings.GetKnownMappingNames() end

