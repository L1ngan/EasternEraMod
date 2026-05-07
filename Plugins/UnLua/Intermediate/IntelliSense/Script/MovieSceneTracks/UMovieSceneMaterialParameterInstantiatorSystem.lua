---System responsible for tracking material parameter entities.
---Tracks any BoundMaterial with a MaterialParameterInfo, as well as deprecated ScalarParameterName,
---ColorParameterName or VectorParameterName.
---Manages adding BlendChannelInputs and Outputs where multiple entities animate the same parameter
---on the same bound material.
---BoundMaterials may be a UMaterialInstanceDynamic, or a UMaterialParameterCollectionInstance.
---@class UMovieSceneMaterialParameterInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
---@field public DoubleBlenderSystem UMovieScenePiecewiseDoubleBlenderSystem
local UMovieSceneMaterialParameterInstantiatorSystem = {}

