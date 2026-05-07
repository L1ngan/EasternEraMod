---The Enhanced Input User Settings class is a place where you can put all of your Input Related settings
---that you want your user to be able to change. Things like their key mappings, aim sensitivity, accessibility
---settings, etc. This also provides a Registration point for Input Mappings Contexts (IMC) from possibly unloaded
---plugins (i.e. Game Feature Plugins). You can register your IMC from a Game Feature Action plugin here, and then
---have access to all the key mappings available. This is very useful for building settings screens because you can
---now access all the mappings in your game, even if the entire plugin isn't loaded yet.
---The user settings are stored on each UEnhancedPlayerInput object, so each instance of the settings can represent
---a single User or Local Player.
---To customize this for your game, you can create a subclass of it and change the "UserSettingsClass" in the
---Enhanced Input Project Settings.
---@class UEnhancedInputUserSettings : USaveGame
---@field public OnSettingsChanged MulticastDelegate
---@field public OnSettingsApplied MulticastDelegate
---@field protected CurrentProfileIdentifier FGameplayTag
---@field protected CurrentProfileIdentifierString string @The current key profile that is equipped by the user.
---@field protected SavedKeyProfiles TMap<FGameplayTag, UEnhancedPlayerMappableKeyProfile>
---@field protected SavedKeyProfilesMap TMap<string, UEnhancedPlayerMappableKeyProfile> @All of the known Key Profiles for this user, including the currently active profile.
---@field protected OwningLocalPlayer TWeakObjectPtr<ULocalPlayer> @The owning Local Player object of these settings
---@field protected RegisteredMappingContexts TSet<UInputMappingContext> @Set of currently registered input mapping contexts that may not be currently active on the user, but you want to track for creating a menu for key mappings.
local UEnhancedInputUserSettings = {}

---Removes multiple mapping contexts from the registered mapping contexts
---@param MappingContexts TSet_UInputMappingContext_
---@return boolean
function UEnhancedInputUserSettings:UnregisterInputMappingContexts(MappingContexts) end

---Removes this mapping context from the registered mapping contexts
---@param IMC UInputMappingContext
---@return boolean
function UEnhancedInputUserSettings:UnregisterInputMappingContext(IMC) end

---Unmaps a single player mapping that matches the given Mapping name, slot, and hardware device.
---@param InArgs FMapPlayerKeyArgs
---@param FailureReason FGameplayTagContainer @[out] 
function UEnhancedInputUserSettings:UnMapPlayerKey(InArgs, FailureReason) end

---Changes the currently active key profile to the one with the given name. Returns true if the operation was successful.
---@param InProfileId string
---@return boolean
function UEnhancedInputUserSettings:SetActiveKeyProfile(InProfileId) end

---Synchronously save the settings to a hardcoded save game slot. This will work for simple games,
---but if you need to integrate it into an advanced save system you should Serialize this object out with the rest of your save data.
function UEnhancedInputUserSettings:SaveSettings() end

---@param ProfileId FGameplayTag
---@param FailureReason FGameplayTagContainer @[out] 
function UEnhancedInputUserSettings:ResetKeyProfileToDefault(ProfileId, FailureReason) end

---Resets the given key profile to default key mappings
---@param ProfileId string
---@param FailureReason FGameplayTagContainer @[out] 
function UEnhancedInputUserSettings:ResetKeyProfileIdToDefault(ProfileId, FailureReason) end

---Resets each player mapped key to it's default value from the Input Mapping Context that it was registered from.
---If a key did not come from an IMC (i.e. it was added additionally by the player) then it will be reset to EKeys::Invalid.
---@param InArgs FMapPlayerKeyArgs
---@param FailureReason FGameplayTagContainer @[out] 
function UEnhancedInputUserSettings:ResetAllPlayerKeysInRow(InArgs, FailureReason) end

---Registers multiple mapping contexts with the settings
---@param MappingContexts TSet_UInputMappingContext_
---@return boolean
function UEnhancedInputUserSettings:RegisterInputMappingContexts(MappingContexts) end

---Registers this mapping context with the user settings. This will iterate all the key mappings
---in the context and create an initial Player Mappable Key for every mapping that is marked as mappable.
---@param IMC UInputMappingContext
---@return boolean
function UEnhancedInputUserSettings:RegisterInputMappingContext(IMC) end

---Sets the player mapped key on the current key profile.
---@param InArgs FMapPlayerKeyArgs
---@param FailureReason FGameplayTagContainer @[out] 
function UEnhancedInputUserSettings:MapPlayerKey(InArgs, FailureReason) end

---Fired when a new input mapping context is registered. Useful if you need to update your UI
---@param IMC UInputMappingContext
function UEnhancedInputUserSettings:MappingContextRegisteredWithSettings__DelegateSignature(IMC) end

---Fired when you equip a different key profile
---@param NewProfile UEnhancedPlayerMappableKeyProfile
function UEnhancedInputUserSettings:MappableKeyProfileChanged__DelegateSignature(NewProfile) end

---Returns true if this mapping context is currently registered with the settings
---@param IMC UInputMappingContext
---@return boolean
function UEnhancedInputUserSettings:IsMappingContextRegistered(IMC) end

---@param ProfileId string
---@return UEnhancedPlayerMappableKeyProfile
function UEnhancedInputUserSettings:GetKeyProfileWithId(ProfileId) end

---Gets the currently selected key profile
---@return string
function UEnhancedInputUserSettings:GetActiveKeyProfileId() end

---Get the currently active key profile that the user has set
---@return UEnhancedPlayerMappableKeyProfile
function UEnhancedInputUserSettings:GetActiveKeyProfile() end

---Returns a set of all player key mappings for the given mapping name.
---@param MappingName string
---@return TSet_FPlayerKeyMapping_
function UEnhancedInputUserSettings:FindMappingsInRow(MappingName) end

---Fired when the user settings have changed, such as their key mappings.
---@param Settings UEnhancedInputUserSettings
function UEnhancedInputUserSettings:EnhancedInputUserSettingsChanged__DelegateSignature(Settings) end

---Called after the settings have been applied from the ApplySettings call.
function UEnhancedInputUserSettings:EnhancedInputUserSettingsApplied__DelegateSignature() end

---Creates a new profile with this name and type.
---@param InArgs FPlayerMappableKeyProfileCreationArgs
---@return UEnhancedPlayerMappableKeyProfile
function UEnhancedInputUserSettings:CreateNewKeyProfile(InArgs) end

---Asynchronously save the settings to a hardcoded save game slot. This will work for simple games,
---but if you need to integrate it into an advanced save system you should Serialize this object out with the rest of your save data.
---OnAsyncSaveComplete will be called upon save completion.
function UEnhancedInputUserSettings:AsyncSaveSettings() end

---Apply any custom input settings to your user. By default, this will just broadcast the OnSettingsApplied delegate
---which is a useful hook to maybe rebuild some UI or do other user facing updates.
function UEnhancedInputUserSettings:ApplySettings() end

