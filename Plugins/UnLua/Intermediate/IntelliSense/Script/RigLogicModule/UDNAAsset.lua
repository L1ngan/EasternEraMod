---An asset holding the data needed to generate/update/animate a RigLogic character
---It is imported from character's DNA file as a bit stream, and separated out it into runtime (behavior) and design-time chunks;
---Currently, the design-time part still loads the geometry, as it is needed for the skeletal mesh update; once SkeletalMeshDNAReader is
---fully implemented, it will be able to read the geometry directly from the SkeletalMesh and won't load it into this asset
---@class UDNAAsset : UAssetUserData
---@field public AssetImportData UAssetImportData
---@field public DnaFileName string
---@field public bKeepDNAAfterInitialization boolean @In non-editor builds, the DNA source data will be unloaded to save memory after the runtime data has been initialized from it. Set this property to true to keep the DNA in memory, e.g. if you need to modify it at runtime. For most use cases, this shouldn't be needed.
---@field public MetaData TMap<string, string> @Collection of runtime metadata related to a specific character. The value field is a FString and requires casting for a derived types.
---@field public RigLogicConfiguration FRigLogicConfiguration
local UDNAAsset = {}

