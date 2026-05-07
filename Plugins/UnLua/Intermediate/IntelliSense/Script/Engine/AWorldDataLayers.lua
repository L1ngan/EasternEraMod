---Actor containing data layers instances within a world.
---@class AWorldDataLayers : AInfo
---@field private bUseExternalPackageDataLayerInstances boolean
---@field private bAllowRuntimeDataLayerEditing boolean @True when Runtime Data Layer editing is allowed.
---@field private CurrentDataLayers FActorPlacementDataLayers
---@field private RootExternalDataLayerInstance UExternalDataLayerInstance
---@field private DataLayerInstances TSet<UDataLayerInstance>
---@field private ExternalPackageDataLayerInstances TSet<UDataLayerInstance> @Data layer instances stored in their external package (only used when UseExternalPackageDataLayerInstances is True)
---@field private LoadedExternalPackageDataLayerInstances TArray<UDataLayerInstance> @Temporary array containing data layer instances manually loaded from their external packages
---@field private TransientDataLayerInstances TArray<UDataLayerInstance>
---@field private DeprecatedDataLayerNameToDataLayerInstance TMap<string, TWeakObjectPtr<UDataLayerInstance>>
---@field private RepActiveDataLayerNames TArray<string>
---@field private RepLoadedDataLayerNames TArray<string>
---@field private RepEffectiveActiveDataLayerNames TArray<string>
---@field private RepEffectiveLoadedDataLayerNames TArray<string>
local AWorldDataLayers = {}

function AWorldDataLayers:OnRep_LoadedDataLayerNames() end

function AWorldDataLayers:OnRep_EffectiveLoadedDataLayerNames() end

function AWorldDataLayers:OnRep_EffectiveActiveDataLayerNames() end

function AWorldDataLayers:OnRep_ActiveDataLayerNames() end

---@param InDataLayer UDataLayerInstance
---@param InState EDataLayerRuntimeState
function AWorldDataLayers:OnDataLayerRuntimeStateChanged(InDataLayer, InState) end

