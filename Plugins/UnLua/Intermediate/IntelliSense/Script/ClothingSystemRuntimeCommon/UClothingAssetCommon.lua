---Implementation of non-solver specific, but common Engine related functionality.
---Solver specific implementations may wish to override this class to construct
---their own default instances of child classes, such as \c ClothSimConfig and
---\c CustomData, as well as override the \c AddNewLod() factory to build their
---own implementation of \c UClothLODDataBase.
---@class UClothingAssetCommon : UClothingAssetBase
---@field public PhysicsAsset UPhysicsAsset @The physics asset to extract collisions from when building a simulation.
---@field public ClothConfigs TMap<string, UClothConfigBase> @Simulation specific cloth parameters. Use GetClothConfig() to retrieve the correct parameters/config type for the desired cloth simulation system.
---@field public LodData TArray<FClothLODDataCommon> @The actual asset data, listed by LOD.
---@field public LodMap TArray<integer> @Tracks which clothing LOD each skel mesh LOD corresponds to (LodMap[SkelLod]=ClothingLod).
---@field public UsedBoneNames TArray<string> @List of bones this asset uses inside its parent mesh.
---@field public UsedBoneIndices TArray<integer> @List of the indices for the bones in UsedBoneNames, used for remapping.
---@field public ReferenceBoneIndex integer @Bone to treat as the root of the simulation space.
---@field public CustomData UClothingAssetCustomData
local UClothingAssetCommon = {}

