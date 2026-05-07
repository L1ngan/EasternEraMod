---Turn static mesh data into Slate's simple vector art format.
---@class USlateVectorArtData : UObject
---@field private MeshAsset UStaticMesh @The mesh data asset from which the vector art is sourced
---@field private SourceMaterial UMaterialInterface @The material which we are using, or the material from with the MIC was constructed.
---@field private VertexData TArray<FSlateMeshVertex> @
---@field private IndexData TArray<integer> @
---@field private Material UMaterialInterface @
---@field private ExtentMin FVector2D
---@field private ExtentMax FVector2D
local USlateVectorArtData = {}

