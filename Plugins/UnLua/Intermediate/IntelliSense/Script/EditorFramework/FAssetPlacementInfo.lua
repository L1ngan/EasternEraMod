---@class FAssetPlacementInfo
---@field public AssetToPlace FAssetData @The asset data which should be placed.
---@field public NameOverride string @If set, will override the name on placed elements instead of factory defined defaults.
---@field public PreferredLevel TWeakObjectPtr<ULevel> @If set, the factory will attempt to place inside the given level. World partitioning may ultimately override this preference.
---@field public FinalizedTransform FTransform @The finalized transform where the factory should be place the asset. This should include any location snapping or other considerations from viewports or editor settings.
---@field public FactoryOverride TScriptInterface<UAssetFactoryInterface> @If set, will use the given factory to place the asset, instead of allowing the placement subsystem to determine which factory to use.
---@field public ItemGuid FGuid @The Guid which corresponds to the item that should be placed. If unset, the asset package's persistent guid will be used. Factories should use this to tie any decomposed assets together. For example, the ItemGuid would correspond to the client in an AISMPartitionActor for tracking all static meshes which make up a decomposed actor.
---@field public SettingsObject UInstancedPlacemenClientSettings
local FAssetPlacementInfo = {}
