---@class FNiagaraGeometryCacheReference
---@field public GeometryCache UGeometryCache @Reference to the geometry cache asset to use (if the user parameter binding is not set)
---@field public GeometryCacheUserParamBinding FNiagaraUserParameterBinding @Use the UGeometryCache bound to this user variable if it is set to a valid value. If this is bound to a valid value and GeometryCache is also set, GeometryCacheUserParamBinding wins.
---@field public OverrideMaterials TArray<UMaterialInterface> @The materials to be used instead of the GeometryCache's materials. If the GeometryCache requires more materials than exist in this array or any entry in this array is set to None, we will use the GeometryCache's existing material instead.
---@field public MICOverrideMaterials TArray<FNiagaraGeometryCacheMICOverride>
local FNiagaraGeometryCacheReference = {}
