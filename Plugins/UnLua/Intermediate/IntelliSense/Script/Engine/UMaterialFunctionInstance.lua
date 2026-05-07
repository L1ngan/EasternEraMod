---A material function instance defines parameter overrides for a parent material function.
---@class UMaterialFunctionInstance : UMaterialFunctionInterface
---@field public Parent UMaterialFunctionInterface @Parent function.
---@field public Base UMaterialFunctionInterface @Base function.
---@field public ScalarParameterValues TArray<FScalarParameterValue> @Scalar parameters.
---@field public VectorParameterValues TArray<FVectorParameterValue> @Vector parameters.
---@field public DoubleVectorParameterValues TArray<FDoubleVectorParameterValue> @DoubleVector parameters.
---@field public TextureParameterValues TArray<FTextureParameterValue> @Texture parameters.
---@field public TextureCollectionParameterValues TArray<FTextureCollectionParameterValue> @Texture Collection parameters.
---@field public FontParameterValues TArray<FFontParameterValue> @Font parameters.
---@field public StaticSwitchParameterValues TArray<FStaticSwitchParameter> @Static switch parameters.
---@field public StaticComponentMaskParameterValues TArray<FStaticComponentMaskParameter> @Static component mask parameters.
---@field public RuntimeVirtualTextureParameterValues TArray<FRuntimeVirtualTextureParameterValue> @Runtime virtual texture parameters.
---@field public SparseVolumeTextureParameterValues TArray<FSparseVolumeTextureParameterValue> @Sparse volume texture parameters.
---@field protected PreviewMaterial UMaterialInstanceConstant
local UMaterialFunctionInstance = {}

