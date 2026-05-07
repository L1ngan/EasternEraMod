---Tool to create a mesh from a set of selected Spline Components
---@class UBaseMeshFromSplinesTool : UInteractiveTool
---@field protected OutputTypeProperties UCreateMeshObjectTypeProperties @Common spline tool properties
---@field protected MaterialProperties UNewMeshMaterialProperties
---@field protected Preview UMeshOpPreviewWithBackgroundCompute
---@field protected TargetWorld TWeakObjectPtr<UWorld>
---@field protected ActorsWithSplines TArray<TWeakObjectPtr<AActor>> @Note: We track actors instead of the USplineComponents here because the USplineComponents objects are often deleted / swapped for identical but new objects
local UBaseMeshFromSplinesTool = {}

