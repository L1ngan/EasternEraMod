---Settings Component for network replicated physics actors
---Overrides default settings, CVar settings and project settings.
---@class UNetworkPhysicsSettingsComponent : UActorComponent
---@field public GeneralSettings FNetworkPhysicsSettings
---@field public DefaultReplicationSettings FNetworkPhysicsSettingsDefaultReplication
---@field public PredictiveInterpolationSettings FNetworkPhysicsSettingsPredictiveInterpolation
---@field public ResimulationSettings FNetworkPhysicsSettingsResimulation
---@field public NetworkPhysicsComponentSettings FNetworkPhysicsSettingsNetworkPhysicsComponent
local UNetworkPhysicsSettingsComponent = {}

---@param ChangedComponent UPrimitiveComponent
---@param StateChange EComponentPhysicsStateChange
function UNetworkPhysicsSettingsComponent:OnComponentPhysicsStateChanged(ChangedComponent, StateChange) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UNetworkPhysicsSettingsComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UNetworkPhysicsSettingsComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UNetworkPhysicsSettingsComponent:AddAssetUserDataOfClass(InUserDataClass) end

